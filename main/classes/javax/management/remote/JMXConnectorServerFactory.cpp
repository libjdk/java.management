#include <javax/management/remote/JMXConnectorServerFactory.h>

#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/MalformedURLException.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/ServiceLoader$Provider.h>
#include <java/util/function/Predicate.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/remote/JMXConnectorFactory$ConnectorFactory.h>
#include <javax/management/remote/JMXConnectorFactory.h>
#include <javax/management/remote/JMXConnectorServer.h>
#include <javax/management/remote/JMXConnectorServerProvider.h>
#include <javax/management/remote/JMXProviderException.h>
#include <javax/management/remote/JMXServiceURL.h>
#include <jcpp.h>

#undef DEFAULT_CLASS_LOADER
#undef DEFAULT_CLASS_LOADER_NAME
#undef PROTOCOL_PROVIDER_CLASS_LOADER
#undef PROTOCOL_PROVIDER_DEFAULT_PACKAGE
#undef PROTOCOL_PROVIDER_PACKAGES

using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $MalformedURLException = ::java::net::MalformedURLException;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;
using $Predicate = ::java::util::function::Predicate;
using $MBeanServer = ::javax::management::MBeanServer;
using $JMXConnectorFactory = ::javax::management::remote::JMXConnectorFactory;
using $JMXConnectorFactory$ConnectorFactory = ::javax::management::remote::JMXConnectorFactory$ConnectorFactory;
using $JMXConnectorServer = ::javax::management::remote::JMXConnectorServer;
using $JMXConnectorServerProvider = ::javax::management::remote::JMXConnectorServerProvider;
using $JMXProviderException = ::javax::management::remote::JMXProviderException;
using $JMXServiceURL = ::javax::management::remote::JMXServiceURL;

namespace javax {
	namespace management {
		namespace remote {

class JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0 : public $JMXConnectorFactory$ConnectorFactory {
	$class(JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0, $NO_CLASS_INIT, $JMXConnectorFactory$ConnectorFactory)
public:
	void init$($JMXServiceURL* url, $Map* map, $MBeanServer* mbs) {
		$set(this, url, url);
		$set(this, map, map);
		$set(this, mbs, mbs);
	}
	virtual $Object* apply(Object$* p) override {
		 return $of(JMXConnectorServerFactory::lambda$getConnectorServerAsService$0(url, map, mbs, $cast($JMXConnectorServerProvider, p)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0>());
	}
	$JMXServiceURL* url = nullptr;
	$Map* map = nullptr;
	$MBeanServer* mbs = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0::fieldInfos[4] = {
	{"url", "Ljavax/management/remote/JMXServiceURL;", nullptr, $PUBLIC, $field(JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0, url)},
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0, map)},
	{"mbs", "Ljavax/management/MBeanServer;", nullptr, $PUBLIC, $field(JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0, mbs)},
	{}
};
$MethodInfo JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0::methodInfos[3] = {
	{"<init>", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC, $method(static_cast<void(JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0::*)($JMXServiceURL*,$Map*,$MBeanServer*)>(&JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.management.remote.JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0",
	"java.lang.Object",
	"javax.management.remote.JMXConnectorFactory$ConnectorFactory",
	fieldInfos,
	methodInfos
};
$Class* JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0::load$($String* name, bool initialize) {
	$loadClass(JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0::class$ = nullptr;

class JMXConnectorServerFactory$$Lambda$isSystemProvider$1 : public $Predicate {
	$class(JMXConnectorServerFactory$$Lambda$isSystemProvider$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* provider) override {
		 return $JMXConnectorFactory::isSystemProvider($cast($ServiceLoader$Provider, provider));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JMXConnectorServerFactory$$Lambda$isSystemProvider$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JMXConnectorServerFactory$$Lambda$isSystemProvider$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMXConnectorServerFactory$$Lambda$isSystemProvider$1::*)()>(&JMXConnectorServerFactory$$Lambda$isSystemProvider$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo JMXConnectorServerFactory$$Lambda$isSystemProvider$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.management.remote.JMXConnectorServerFactory$$Lambda$isSystemProvider$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* JMXConnectorServerFactory$$Lambda$isSystemProvider$1::load$($String* name, bool initialize) {
	$loadClass(JMXConnectorServerFactory$$Lambda$isSystemProvider$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JMXConnectorServerFactory$$Lambda$isSystemProvider$1::class$ = nullptr;

$FieldInfo _JMXConnectorServerFactory_FieldInfo_[] = {
	{"DEFAULT_CLASS_LOADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMXConnectorServerFactory, DEFAULT_CLASS_LOADER)},
	{"DEFAULT_CLASS_LOADER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMXConnectorServerFactory, DEFAULT_CLASS_LOADER_NAME)},
	{"PROTOCOL_PROVIDER_PACKAGES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMXConnectorServerFactory, PROTOCOL_PROVIDER_PACKAGES)},
	{"PROTOCOL_PROVIDER_CLASS_LOADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMXConnectorServerFactory, PROTOCOL_PROVIDER_CLASS_LOADER)},
	{"PROTOCOL_PROVIDER_DEFAULT_PACKAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXConnectorServerFactory, PROTOCOL_PROVIDER_DEFAULT_PACKAGE)},
	{"logger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXConnectorServerFactory, logger)},
	{}
};

$MethodInfo _JMXConnectorServerFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JMXConnectorServerFactory::*)()>(&JMXConnectorServerFactory::init$))},
	{"getConnectorServerAsService", "(Ljava/lang/ClassLoader;Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;Ljavax/management/MBeanServer;Ljava/util/function/Predicate;)Ljavax/management/remote/JMXConnectorServer;", "(Ljava/lang/ClassLoader;Ljavax/management/remote/JMXServiceURL;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/management/MBeanServer;Ljava/util/function/Predicate<Ljava/util/ServiceLoader$Provider<*>;>;)Ljavax/management/remote/JMXConnectorServer;", $PRIVATE | $STATIC, $method(static_cast<$JMXConnectorServer*(*)($ClassLoader*,$JMXServiceURL*,$Map*,$MBeanServer*,$Predicate*)>(&JMXConnectorServerFactory::getConnectorServerAsService)), "java.io.IOException"},
	{"lambda$getConnectorServerAsService$0", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;Ljavax/management/MBeanServer;Ljavax/management/remote/JMXConnectorServerProvider;)Ljavax/management/remote/JMXConnectorServer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JMXConnectorServer*(*)($JMXServiceURL*,$Map*,$MBeanServer*,$JMXConnectorServerProvider*)>(&JMXConnectorServerFactory::lambda$getConnectorServerAsService$0)), "java.lang.Exception"},
	{"newJMXConnectorServer", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;Ljavax/management/MBeanServer;)Ljavax/management/remote/JMXConnectorServer;", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/management/MBeanServer;)Ljavax/management/remote/JMXConnectorServer;", $PUBLIC | $STATIC, $method(static_cast<$JMXConnectorServer*(*)($JMXServiceURL*,$Map*,$MBeanServer*)>(&JMXConnectorServerFactory::newJMXConnectorServer)), "java.io.IOException"},
	{}
};

$ClassInfo _JMXConnectorServerFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.remote.JMXConnectorServerFactory",
	"java.lang.Object",
	nullptr,
	_JMXConnectorServerFactory_FieldInfo_,
	_JMXConnectorServerFactory_MethodInfo_
};

$Object* allocate$JMXConnectorServerFactory($Class* clazz) {
	return $of($alloc(JMXConnectorServerFactory));
}

$String* JMXConnectorServerFactory::DEFAULT_CLASS_LOADER = nullptr;
$String* JMXConnectorServerFactory::DEFAULT_CLASS_LOADER_NAME = nullptr;
$String* JMXConnectorServerFactory::PROTOCOL_PROVIDER_PACKAGES = nullptr;
$String* JMXConnectorServerFactory::PROTOCOL_PROVIDER_CLASS_LOADER = nullptr;
$String* JMXConnectorServerFactory::PROTOCOL_PROVIDER_DEFAULT_PACKAGE = nullptr;
$ClassLogger* JMXConnectorServerFactory::logger = nullptr;

void JMXConnectorServerFactory::init$() {
}

$JMXConnectorServer* JMXConnectorServerFactory::getConnectorServerAsService($ClassLoader* loader, $JMXServiceURL* url, $Map* map, $MBeanServer* mbs, $Predicate* filter) {
	$init(JMXConnectorServerFactory);
	$var($JMXConnectorFactory$ConnectorFactory, factory, static_cast<$JMXConnectorFactory$ConnectorFactory*>($new(JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0, url, map, mbs)));
	$load($JMXConnectorServerProvider);
	return $cast($JMXConnectorServer, $JMXConnectorFactory::getConnectorAsService($JMXConnectorServerProvider::class$, loader, url, filter, factory));
}

$JMXConnectorServer* JMXConnectorServerFactory::newJMXConnectorServer($JMXServiceURL* serviceURL, $Map* environment, $MBeanServer* mbeanServer) {
	$init(JMXConnectorServerFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Map, envcopy, nullptr);
	if (environment == nullptr) {
		$assign(envcopy, $new($HashMap));
	} else {
		$EnvHelp::checkAttributes(environment);
		$assign(envcopy, $new($HashMap, environment));
	}
	$load($JMXConnectorServerProvider);
	$Class* targetInterface = $JMXConnectorServerProvider::class$;
	$var($ClassLoader, loader, $JMXConnectorFactory::resolveClassLoader(envcopy));
	$var($String, protocol, $nc(serviceURL)->getProtocol());
	$var($String, providerClassName, "ServerProvider"_s);
	$var($JMXConnectorServerProvider, provider, $cast($JMXConnectorServerProvider, $JMXConnectorFactory::getProvider(serviceURL, envcopy, providerClassName, targetInterface, loader)));
	$var($IOException, exception, nullptr);
	$var($JMXConnectorServer, connection, nullptr);
	if (provider == nullptr) {
		$var($Predicate, systemProvider, static_cast<$Predicate*>($new(JMXConnectorServerFactory$$Lambda$isSystemProvider$1)));
		if (loader != nullptr) {
			try {
				$assign(connection, getConnectorServerAsService(loader, serviceURL, envcopy, mbeanServer, $($nc(systemProvider)->negate())));
				if (connection != nullptr) {
					return connection;
				}
			} catch ($JMXProviderException& e) {
				$throw(e);
			} catch ($IOException& e) {
				$assign(exception, e);
			}
		}
		$var($ClassLoader, var$0, $JMXConnectorFactory::class$->getClassLoader());
		$var($JMXServiceURL, var$1, serviceURL);
		$assign(connection, getConnectorServerAsService(var$0, var$1, $($Collections::unmodifiableMap(envcopy)), mbeanServer, systemProvider));
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
	$assign(envcopy, $Collections::unmodifiableMap(envcopy));
	return $nc(provider)->newJMXConnectorServer(serviceURL, envcopy, mbeanServer);
}

$JMXConnectorServer* JMXConnectorServerFactory::lambda$getConnectorServerAsService$0($JMXServiceURL* url, $Map* map, $MBeanServer* mbs, $JMXConnectorServerProvider* p) {
	$init(JMXConnectorServerFactory);
	return $nc(p)->newJMXConnectorServer(url, map, mbs);
}

void clinit$JMXConnectorServerFactory($Class* class$) {
	$init($JMXConnectorFactory);
	$assignStatic(JMXConnectorServerFactory::DEFAULT_CLASS_LOADER, $JMXConnectorFactory::DEFAULT_CLASS_LOADER);
	$assignStatic(JMXConnectorServerFactory::DEFAULT_CLASS_LOADER_NAME, "jmx.remote.default.class.loader.name"_s);
	$assignStatic(JMXConnectorServerFactory::PROTOCOL_PROVIDER_PACKAGES, "jmx.remote.protocol.provider.pkgs"_s);
	$assignStatic(JMXConnectorServerFactory::PROTOCOL_PROVIDER_CLASS_LOADER, "jmx.remote.protocol.provider.class.loader"_s);
	$assignStatic(JMXConnectorServerFactory::PROTOCOL_PROVIDER_DEFAULT_PACKAGE, "com.sun.jmx.remote.protocol"_s);
	$assignStatic(JMXConnectorServerFactory::logger, $new($ClassLogger, "javax.management.remote.misc"_s, "JMXConnectorServerFactory"_s));
}

JMXConnectorServerFactory::JMXConnectorServerFactory() {
}

$Class* JMXConnectorServerFactory::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0::classInfo$.name)) {
			return JMXConnectorServerFactory$$Lambda$lambda$getConnectorServerAsService$0::load$(name, initialize);
		}
		if (name->equals(JMXConnectorServerFactory$$Lambda$isSystemProvider$1::classInfo$.name)) {
			return JMXConnectorServerFactory$$Lambda$isSystemProvider$1::load$(name, initialize);
		}
	}
	$loadClass(JMXConnectorServerFactory, name, initialize, &_JMXConnectorServerFactory_ClassInfo_, clinit$JMXConnectorServerFactory, allocate$JMXConnectorServerFactory);
	return class$;
}

$Class* JMXConnectorServerFactory::class$ = nullptr;

		} // remote
	} // management
} // javax