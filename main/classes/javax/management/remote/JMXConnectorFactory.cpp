#include <javax/management/remote/JMXConnectorFactory.h>

#include <com/sun/jmx/mbeanserver/Util.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/InternalError.h>
#include <java/lang/Module.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/MalformedURLException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/ServiceLoader$Provider.h>
#include <java/util/ServiceLoader.h>
#include <java/util/StringTokenizer.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/management/remote/JMXConnector.h>
#include <javax/management/remote/JMXConnectorFactory$1.h>
#include <javax/management/remote/JMXConnectorFactory$2.h>
#include <javax/management/remote/JMXConnectorFactory$ConnectorFactory.h>
#include <javax/management/remote/JMXConnectorFactory$ProviderFinder.h>
#include <javax/management/remote/JMXConnectorProvider.h>
#include <javax/management/remote/JMXConnectorServerProvider.h>
#include <javax/management/remote/JMXProviderException.h>
#include <javax/management/remote/JMXServiceURL.h>
#include <jcpp.h>

#undef DEFAULT_CLASS_LOADER
#undef PROTOCOL_PROVIDER_CLASS_LOADER
#undef PROTOCOL_PROVIDER_DEFAULT_PACKAGE
#undef PROTOCOL_PROVIDER_PACKAGES

using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $MalformedURLException = ::java::net::MalformedURLException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $JMXConnector = ::javax::management::remote::JMXConnector;
using $JMXConnectorFactory$1 = ::javax::management::remote::JMXConnectorFactory$1;
using $JMXConnectorFactory$2 = ::javax::management::remote::JMXConnectorFactory$2;
using $JMXConnectorFactory$ConnectorFactory = ::javax::management::remote::JMXConnectorFactory$ConnectorFactory;
using $JMXConnectorFactory$ProviderFinder = ::javax::management::remote::JMXConnectorFactory$ProviderFinder;
using $JMXConnectorProvider = ::javax::management::remote::JMXConnectorProvider;
using $JMXConnectorServerProvider = ::javax::management::remote::JMXConnectorServerProvider;
using $JMXProviderException = ::javax::management::remote::JMXProviderException;
using $JMXServiceURL = ::javax::management::remote::JMXServiceURL;

namespace javax {
	namespace management {
		namespace remote {

class JMXConnectorFactory$$Lambda$isSystemProvider : public $Predicate {
	$class(JMXConnectorFactory$$Lambda$isSystemProvider, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* provider) override {
		 return JMXConnectorFactory::isSystemProvider($cast($ServiceLoader$Provider, provider));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JMXConnectorFactory$$Lambda$isSystemProvider>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JMXConnectorFactory$$Lambda$isSystemProvider::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMXConnectorFactory$$Lambda$isSystemProvider::*)()>(&JMXConnectorFactory$$Lambda$isSystemProvider::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo JMXConnectorFactory$$Lambda$isSystemProvider::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.management.remote.JMXConnectorFactory$$Lambda$isSystemProvider",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* JMXConnectorFactory$$Lambda$isSystemProvider::load$($String* name, bool initialize) {
	$loadClass(JMXConnectorFactory$$Lambda$isSystemProvider, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JMXConnectorFactory$$Lambda$isSystemProvider::class$ = nullptr;

class JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1 : public $JMXConnectorFactory$ConnectorFactory {
	$class(JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1, $NO_CLASS_INIT, $JMXConnectorFactory$ConnectorFactory)
public:
	void init$($JMXServiceURL* url, $Map* map) {
		$set(this, url, url);
		$set(this, map, map);
	}
	virtual $Object* apply(Object$* p) override {
		 return $of(JMXConnectorFactory::lambda$getConnectorAsService$0(url, map, $cast($JMXConnectorProvider, p)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1>());
	}
	$JMXServiceURL* url = nullptr;
	$Map* map = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1::fieldInfos[3] = {
	{"url", "Ljavax/management/remote/JMXServiceURL;", nullptr, $PUBLIC, $field(JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1, url)},
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1, map)},
	{}
};
$MethodInfo JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1::methodInfos[3] = {
	{"<init>", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(static_cast<void(JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1::*)($JMXServiceURL*,$Map*)>(&JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.management.remote.JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1",
	"java.lang.Object",
	"javax.management.remote.JMXConnectorFactory$ConnectorFactory",
	fieldInfos,
	methodInfos
};
$Class* JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1::load$($String* name, bool initialize) {
	$loadClass(JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1::class$ = nullptr;

$FieldInfo _JMXConnectorFactory_FieldInfo_[] = {
	{"DEFAULT_CLASS_LOADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMXConnectorFactory, DEFAULT_CLASS_LOADER)},
	{"PROTOCOL_PROVIDER_PACKAGES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMXConnectorFactory, PROTOCOL_PROVIDER_PACKAGES)},
	{"PROTOCOL_PROVIDER_CLASS_LOADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMXConnectorFactory, PROTOCOL_PROVIDER_CLASS_LOADER)},
	{"PROTOCOL_PROVIDER_DEFAULT_PACKAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXConnectorFactory, PROTOCOL_PROVIDER_DEFAULT_PACKAGE)},
	{"logger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXConnectorFactory, logger)},
	{}
};

$MethodInfo _JMXConnectorFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JMXConnectorFactory::*)()>(&JMXConnectorFactory::init$))},
	{"connect", "(Ljavax/management/remote/JMXServiceURL;)Ljavax/management/remote/JMXConnector;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JMXConnector*(*)($JMXServiceURL*)>(&JMXConnectorFactory::connect)), "java.io.IOException"},
	{"connect", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;)Ljavax/management/remote/JMXConnector;", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map<Ljava/lang/String;*>;)Ljavax/management/remote/JMXConnector;", $PUBLIC | $STATIC, $method(static_cast<$JMXConnector*(*)($JMXServiceURL*,$Map*)>(&JMXConnectorFactory::connect)), "java.io.IOException"},
	{"getConnectorAsService", "(Ljava/lang/ClassLoader;Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;Ljava/util/function/Predicate;)Ljavax/management/remote/JMXConnector;", "(Ljava/lang/ClassLoader;Ljavax/management/remote/JMXServiceURL;Ljava/util/Map<Ljava/lang/String;*>;Ljava/util/function/Predicate<Ljava/util/ServiceLoader$Provider<*>;>;)Ljavax/management/remote/JMXConnector;", $PRIVATE | $STATIC, $method(static_cast<$JMXConnector*(*)($ClassLoader*,$JMXServiceURL*,$Map*,$Predicate*)>(&JMXConnectorFactory::getConnectorAsService)), "java.io.IOException"},
	{"getConnectorAsService", "(Ljava/lang/Class;Ljava/lang/ClassLoader;Ljavax/management/remote/JMXServiceURL;Ljava/util/function/Predicate;Ljavax/management/remote/JMXConnectorFactory$ConnectorFactory;)Ljava/lang/Object;", "<P:Ljava/lang/Object;C:Ljava/lang/Object;>(Ljava/lang/Class<TP;>;Ljava/lang/ClassLoader;Ljavax/management/remote/JMXServiceURL;Ljava/util/function/Predicate<Ljava/util/ServiceLoader$Provider<*>;>;Ljavax/management/remote/JMXConnectorFactory$ConnectorFactory<TP;TC;>;)TC;", $STATIC, $method(static_cast<$Object*(*)($Class*,$ClassLoader*,$JMXServiceURL*,$Predicate*,$JMXConnectorFactory$ConnectorFactory*)>(&JMXConnectorFactory::getConnectorAsService)), "java.io.IOException"},
	{"getProvider", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;Ljava/lang/String;Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;Ljava/lang/String;Ljava/lang/Class<TT;>;Ljava/lang/ClassLoader;)TT;", $STATIC, $method(static_cast<$Object*(*)($JMXServiceURL*,$Map*,$String*,$Class*,$ClassLoader*)>(&JMXConnectorFactory::getProvider)), "java.io.IOException"},
	{"getProvider", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/Class<TT;>;)TT;", $STATIC, $method(static_cast<$Object*(*)($String*,$String*,$ClassLoader*,$String*,$Class*)>(&JMXConnectorFactory::getProvider)), "java.io.IOException"},
	{"isSystemProvider", "(Ljava/util/ServiceLoader$Provider;)Z", "(Ljava/util/ServiceLoader$Provider<*>;)Z", $STATIC, $method(static_cast<bool(*)($ServiceLoader$Provider*)>(&JMXConnectorFactory::isSystemProvider))},
	{"lambda$getConnectorAsService$0", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;Ljavax/management/remote/JMXConnectorProvider;)Ljavax/management/remote/JMXConnector;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JMXConnector*(*)($JMXServiceURL*,$Map*,$JMXConnectorProvider*)>(&JMXConnectorFactory::lambda$getConnectorAsService$0)), "java.lang.Exception"},
	{"newHashMap", "()Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>()Ljava/util/Map<TK;TV;>;", $PRIVATE | $STATIC, $method(static_cast<$Map*(*)()>(&JMXConnectorFactory::newHashMap))},
	{"newHashMap", "(Ljava/util/Map;)Ljava/util/Map;", "<K:Ljava/lang/Object;>(Ljava/util/Map<TK;*>;)Ljava/util/Map<TK;Ljava/lang/Object;>;", $PRIVATE | $STATIC, $method(static_cast<$Map*(*)($Map*)>(&JMXConnectorFactory::newHashMap))},
	{"newJMXConnector", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;)Ljavax/management/remote/JMXConnector;", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map<Ljava/lang/String;*>;)Ljavax/management/remote/JMXConnector;", $PUBLIC | $STATIC, $method(static_cast<$JMXConnector*(*)($JMXServiceURL*,$Map*)>(&JMXConnectorFactory::newJMXConnector)), "java.io.IOException"},
	{"protocol2package", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&JMXConnectorFactory::protocol2package))},
	{"resolveClassLoader", "(Ljava/util/Map;)Ljava/lang/ClassLoader;", "(Ljava/util/Map<Ljava/lang/String;*>;)Ljava/lang/ClassLoader;", $STATIC, $method(static_cast<$ClassLoader*(*)($Map*)>(&JMXConnectorFactory::resolveClassLoader))},
	{"resolvePkgs", "(Ljava/util/Map;)Ljava/lang/String;", "(Ljava/util/Map<Ljava/lang/String;*>;)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Map*)>(&JMXConnectorFactory::resolvePkgs)), "javax.management.remote.JMXProviderException"},
	{"wrap", "(Ljava/lang/ClassLoader;)Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ClassLoader*(*)($ClassLoader*)>(&JMXConnectorFactory::wrap))},
	{}
};

$InnerClassInfo _JMXConnectorFactory_InnerClassesInfo_[] = {
	{"javax.management.remote.JMXConnectorFactory$ProviderFinder", "javax.management.remote.JMXConnectorFactory", "ProviderFinder", $PRIVATE | $STATIC | $FINAL},
	{"javax.management.remote.JMXConnectorFactory$ConnectorFactory", "javax.management.remote.JMXConnectorFactory", "ConnectorFactory", $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.management.remote.JMXConnectorFactory$2", nullptr, nullptr, 0},
	{"javax.management.remote.JMXConnectorFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JMXConnectorFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.remote.JMXConnectorFactory",
	"java.lang.Object",
	nullptr,
	_JMXConnectorFactory_FieldInfo_,
	_JMXConnectorFactory_MethodInfo_,
	nullptr,
	nullptr,
	_JMXConnectorFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.management.remote.JMXConnectorFactory$ProviderFinder,javax.management.remote.JMXConnectorFactory$ConnectorFactory,javax.management.remote.JMXConnectorFactory$2,javax.management.remote.JMXConnectorFactory$2$1,javax.management.remote.JMXConnectorFactory$1"
};

$Object* allocate$JMXConnectorFactory($Class* clazz) {
	return $of($alloc(JMXConnectorFactory));
}

$String* JMXConnectorFactory::DEFAULT_CLASS_LOADER = nullptr;
$String* JMXConnectorFactory::PROTOCOL_PROVIDER_PACKAGES = nullptr;
$String* JMXConnectorFactory::PROTOCOL_PROVIDER_CLASS_LOADER = nullptr;
$String* JMXConnectorFactory::PROTOCOL_PROVIDER_DEFAULT_PACKAGE = nullptr;
$ClassLogger* JMXConnectorFactory::logger = nullptr;

void JMXConnectorFactory::init$() {
}

$JMXConnector* JMXConnectorFactory::connect($JMXServiceURL* serviceURL) {
	$init(JMXConnectorFactory);
	return connect(serviceURL, nullptr);
}

$JMXConnector* JMXConnectorFactory::connect($JMXServiceURL* serviceURL, $Map* environment) {
	$init(JMXConnectorFactory);
	if (serviceURL == nullptr) {
		$throwNew($NullPointerException, "Null JMXServiceURL"_s);
	}
	$var($JMXConnector, conn, newJMXConnector(serviceURL, environment));
	$nc(conn)->connect(environment);
	return conn;
}

$Map* JMXConnectorFactory::newHashMap() {
	$init(JMXConnectorFactory);
	return $new($HashMap);
}

$Map* JMXConnectorFactory::newHashMap($Map* map) {
	$init(JMXConnectorFactory);
	return $new($HashMap, map);
}

$JMXConnector* JMXConnectorFactory::newJMXConnector($JMXServiceURL* serviceURL, $Map* environment) {
	$init(JMXConnectorFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Map, envcopy, nullptr);
	if (environment == nullptr) {
		$assign(envcopy, newHashMap());
	} else {
		$EnvHelp::checkAttributes(environment);
		$assign(envcopy, newHashMap(environment));
	}
	$var($ClassLoader, loader, resolveClassLoader(envcopy));
	$load($JMXConnectorProvider);
	$Class* targetInterface = $JMXConnectorProvider::class$;
	$var($String, protocol, $nc(serviceURL)->getProtocol());
	$var($String, providerClassName, "ClientProvider"_s);
	$var($JMXServiceURL, providerURL, serviceURL);
	$var($JMXConnectorProvider, provider, $cast($JMXConnectorProvider, getProvider(providerURL, envcopy, providerClassName, targetInterface, loader)));
	$var($IOException, exception, nullptr);
	if (provider == nullptr) {
		$var($Predicate, systemProvider, static_cast<$Predicate*>($new(JMXConnectorFactory$$Lambda$isSystemProvider)));
		$var($JMXConnector, connection, nullptr);
		if (loader != nullptr) {
			try {
				$assign(connection, getConnectorAsService(loader, providerURL, envcopy, $($nc(systemProvider)->negate())));
				if (connection != nullptr) {
					return connection;
				}
			} catch ($JMXProviderException& e) {
				$throw(e);
			} catch ($IOException& e) {
				$assign(exception, e);
			}
		}
		$var($ClassLoader, var$0, JMXConnectorFactory::class$->getClassLoader());
		$var($JMXServiceURL, var$1, providerURL);
		$assign(connection, getConnectorAsService(var$0, var$1, $($Collections::unmodifiableMap(envcopy)), systemProvider));
		if (connection != nullptr) {
			return connection;
		}
	}
	if (provider == nullptr) {
		$var($MalformedURLException, e, $new($MalformedURLException, $$str({"Unsupported protocol: "_s, protocol})));
		if (exception == nullptr) {
			$throw(e);
		} else {
			$throw($cast($MalformedURLException, $($EnvHelp::initCause(e, exception))));
		}
	}
	$var($Map, fixedenv, $Collections::unmodifiableMap(envcopy));
	return $nc(provider)->newJMXConnector(serviceURL, fixedenv);
}

$String* JMXConnectorFactory::resolvePkgs($Map* env) {
	$init(JMXConnectorFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Object, pkgsObject, nullptr);
	if (env != nullptr) {
		$assign(pkgsObject, env->get(JMXConnectorFactory::PROTOCOL_PROVIDER_PACKAGES));
	}
	if (pkgsObject == nullptr) {
		$assign(pkgsObject, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($JMXConnectorFactory$1))));
	}
	if (pkgsObject == nullptr) {
		return nullptr;
	}
	if (!($instanceOf($String, pkgsObject))) {
		$var($String, msg, $str({"Value of "_s, JMXConnectorFactory::PROTOCOL_PROVIDER_PACKAGES, " parameter is not a String: "_s, $($nc($of(pkgsObject))->getClass()->getName())}));
		$throwNew($JMXProviderException, msg);
	}
	$var($String, pkgs, $cast($String, pkgsObject));
	if ($($nc(pkgs)->trim())->isEmpty()) {
		return nullptr;
	}
	bool var$1 = $nc(pkgs)->startsWith("|"_s);
	bool var$0 = var$1 || $nc(pkgs)->endsWith("|"_s);
	if (var$0 || $nc(pkgs)->indexOf("||"_s) >= 0) {
		$var($String, msg, $str({"Value of "_s, JMXConnectorFactory::PROTOCOL_PROVIDER_PACKAGES, " contains an empty element: "_s, pkgs}));
		$throwNew($JMXProviderException, msg);
	}
	return pkgs;
}

$Object* JMXConnectorFactory::getProvider($JMXServiceURL* serviceURL, $Map* environment, $String* providerClassName, $Class* targetInterface, $ClassLoader* loader) {
	$init(JMXConnectorFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, protocol, $nc(serviceURL)->getProtocol());
	$var($String, pkgs, resolvePkgs(environment));
	$var($Object, instance, nullptr);
	if (pkgs != nullptr) {
		$assign(instance, getProvider(protocol, pkgs, loader, providerClassName, targetInterface));
		if (instance != nullptr) {
			bool needsWrap = (loader != $of(instance)->getClass()->getClassLoader());
			$nc(environment)->put(JMXConnectorFactory::PROTOCOL_PROVIDER_CLASS_LOADER, needsWrap ? $($of(wrap(loader))) : $of(loader));
		}
	}
	return $of(instance);
}

$ClassLoader* JMXConnectorFactory::wrap($ClassLoader* parent) {
	$init(JMXConnectorFactory);
	$beforeCallerSensitive();
	return parent != nullptr ? $cast($ClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($JMXConnectorFactory$2, parent)))) : ($ClassLoader*)nullptr;
}

bool JMXConnectorFactory::isSystemProvider($ServiceLoader$Provider* provider) {
	$init(JMXConnectorFactory);
	$useLocalCurrentObjectStackCache();
	$var($Module, providerModule, $nc($nc(provider)->type())->getModule());
	bool var$0 = $nc(providerModule)->isNamed();
	return var$0 && $nc($(providerModule->getName()))->equals("java.management.rmi"_s);
}

$JMXConnector* JMXConnectorFactory::getConnectorAsService($ClassLoader* loader, $JMXServiceURL* url, $Map* map, $Predicate* filter) {
	$init(JMXConnectorFactory);
	$var($JMXConnectorFactory$ConnectorFactory, factory, static_cast<$JMXConnectorFactory$ConnectorFactory*>($new(JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1, url, map)));
	$load($JMXConnectorProvider);
	return $cast($JMXConnector, getConnectorAsService($JMXConnectorProvider::class$, loader, url, filter, factory));
}

$Object* JMXConnectorFactory::getConnectorAsService($Class* providerClass, $ClassLoader* loader, $JMXServiceURL* url, $Predicate* filter, $JMXConnectorFactory$ConnectorFactory* factory) {
	$init(JMXConnectorFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($JMXConnectorProvider);
	$load($JMXConnectorServerProvider);
	if ($JMXConnectorProvider::class$ != providerClass && $JMXConnectorServerProvider::class$ != providerClass) {
		$throwNew($InternalError, $$str({"Unsupported service interface: "_s, $($nc(providerClass)->getName())}));
	}
	$var($ServiceLoader, serviceLoader, loader == nullptr ? $ServiceLoader::loadInstalled(providerClass) : $ServiceLoader::load(providerClass, loader));
	$var($Stream, stream, $nc($($nc(serviceLoader)->stream()))->filter(filter));
	$var($JMXConnectorFactory$ProviderFinder, finder, $new($JMXConnectorFactory$ProviderFinder, factory, url));
	try {
		$nc($($nc(stream)->filter(finder)))->findFirst();
		return $of(finder->get());
	} catch ($UncheckedIOException& e) {
		if ($instanceOf($JMXProviderException, $($cast($IOException, e->getCause())))) {
			$throw($cast($JMXProviderException, $($cast($IOException, e->getCause()))));
		} else {
			$throw(e);
		}
	}
	$shouldNotReachHere();
}

$Object* JMXConnectorFactory::getProvider($String* protocol, $String* pkgs, $ClassLoader* loader, $String* providerClassName, $Class* targetInterface) {
	$init(JMXConnectorFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($StringTokenizer, tokenizer, $new($StringTokenizer, pkgs, "|"_s));
	while (tokenizer->hasMoreTokens()) {
		$var($String, pkg, tokenizer->nextToken());
		$var($String, className, $str({pkg, "."_s, $(protocol2package(protocol)), "."_s, providerClassName}));
		$Class* providerClass = nullptr;
		try {
			providerClass = $Class::forName(className, true, loader);
		} catch ($ClassNotFoundException& e) {
			continue;
		}
		if (!$nc(targetInterface)->isAssignableFrom(providerClass)) {
			$var($String, var$0, $$str({"Provider class does not implement "_s, $(targetInterface->getName()), ": "_s}));
			$var($String, msg, $concat(var$0, $($nc(providerClass)->getName())));
			$throwNew($JMXProviderException, msg);
		}
		$Class* providerClassT = $cast($Class, $Util::cast(providerClass));
		try {
			$var($Object, result, $nc(providerClassT)->newInstance());
			return $of(result);
		} catch ($Exception& e) {
			$var($String, msg, $str({"Exception when instantiating provider ["_s, className, "]"_s}));
			$throwNew($JMXProviderException, msg, e);
		}
	}
	return $of(nullptr);
}

$ClassLoader* JMXConnectorFactory::resolveClassLoader($Map* environment) {
	$init(JMXConnectorFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, loader, nullptr);
	if (environment != nullptr) {
		try {
			$assign(loader, $cast($ClassLoader, environment->get(JMXConnectorFactory::PROTOCOL_PROVIDER_CLASS_LOADER)));
		} catch ($ClassCastException& e) {
			$var($String, msg, $str({"The ClassLoader supplied in the environment map using the "_s, JMXConnectorFactory::PROTOCOL_PROVIDER_CLASS_LOADER, " attribute is not an instance of java.lang.ClassLoader"_s}));
			$throwNew($IllegalArgumentException, msg);
		}
	}
	if (loader == nullptr) {
		$assign(loader, $($Thread::currentThread())->getContextClassLoader());
	}
	return loader;
}

$String* JMXConnectorFactory::protocol2package($String* protocol) {
	$init(JMXConnectorFactory);
	return $($nc(protocol)->replace(u'+', u'.'))->replace(u'-', u'_');
}

$JMXConnector* JMXConnectorFactory::lambda$getConnectorAsService$0($JMXServiceURL* url, $Map* map, $JMXConnectorProvider* p) {
	$init(JMXConnectorFactory);
	return $nc(p)->newJMXConnector(url, map);
}

void clinit$JMXConnectorFactory($Class* class$) {
	$assignStatic(JMXConnectorFactory::DEFAULT_CLASS_LOADER, "jmx.remote.default.class.loader"_s);
	$assignStatic(JMXConnectorFactory::PROTOCOL_PROVIDER_PACKAGES, "jmx.remote.protocol.provider.pkgs"_s);
	$assignStatic(JMXConnectorFactory::PROTOCOL_PROVIDER_CLASS_LOADER, "jmx.remote.protocol.provider.class.loader"_s);
	$assignStatic(JMXConnectorFactory::PROTOCOL_PROVIDER_DEFAULT_PACKAGE, "com.sun.jmx.remote.protocol"_s);
	$assignStatic(JMXConnectorFactory::logger, $new($ClassLogger, "javax.management.remote.misc"_s, "JMXConnectorFactory"_s));
}

JMXConnectorFactory::JMXConnectorFactory() {
}

$Class* JMXConnectorFactory::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JMXConnectorFactory$$Lambda$isSystemProvider::classInfo$.name)) {
			return JMXConnectorFactory$$Lambda$isSystemProvider::load$(name, initialize);
		}
		if (name->equals(JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1::classInfo$.name)) {
			return JMXConnectorFactory$$Lambda$lambda$getConnectorAsService$0$1::load$(name, initialize);
		}
	}
	$loadClass(JMXConnectorFactory, name, initialize, &_JMXConnectorFactory_ClassInfo_, clinit$JMXConnectorFactory, allocate$JMXConnectorFactory);
	return class$;
}

$Class* JMXConnectorFactory::class$ = nullptr;

		} // remote
	} // management
} // javax