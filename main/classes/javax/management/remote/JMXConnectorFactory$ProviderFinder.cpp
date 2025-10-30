#include <javax/management/remote/JMXConnectorFactory$ProviderFinder.h>

#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/net/MalformedURLException.h>
#include <java/util/ServiceLoader$Provider.h>
#include <javax/management/remote/JMXConnectorFactory$ConnectorFactory.h>
#include <javax/management/remote/JMXConnectorFactory.h>
#include <javax/management/remote/JMXProviderException.h>
#include <javax/management/remote/JMXServiceURL.h>
#include <jcpp.h>

using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;
using $Predicate = ::java::util::function::Predicate;
using $JMXConnectorFactory = ::javax::management::remote::JMXConnectorFactory;
using $JMXConnectorFactory$ConnectorFactory = ::javax::management::remote::JMXConnectorFactory$ConnectorFactory;
using $JMXProviderException = ::javax::management::remote::JMXProviderException;
using $JMXServiceURL = ::javax::management::remote::JMXServiceURL;

namespace javax {
	namespace management {
		namespace remote {

$FieldInfo _JMXConnectorFactory$ProviderFinder_FieldInfo_[] = {
	{"factory", "Ljavax/management/remote/JMXConnectorFactory$ConnectorFactory;", "Ljavax/management/remote/JMXConnectorFactory$ConnectorFactory<TP;TC;>;", $FINAL, $field(JMXConnectorFactory$ProviderFinder, factory)},
	{"url", "Ljavax/management/remote/JMXServiceURL;", nullptr, $FINAL, $field(JMXConnectorFactory$ProviderFinder, url)},
	{"exception", "Ljava/io/IOException;", nullptr, $PRIVATE, $field(JMXConnectorFactory$ProviderFinder, exception)},
	{"connection", "Ljava/lang/Object;", "TC;", $PRIVATE, $field(JMXConnectorFactory$ProviderFinder, connection)},
	{}
};

$MethodInfo _JMXConnectorFactory$ProviderFinder_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/remote/JMXConnectorFactory$ConnectorFactory;Ljavax/management/remote/JMXServiceURL;)V", "(Ljavax/management/remote/JMXConnectorFactory$ConnectorFactory<TP;TC;>;Ljavax/management/remote/JMXServiceURL;)V", 0, $method(static_cast<void(JMXConnectorFactory$ProviderFinder::*)($JMXConnectorFactory$ConnectorFactory*,$JMXServiceURL*)>(&JMXConnectorFactory$ProviderFinder::init$))},
	{"get", "()Ljava/lang/Object;", "()TC;", 0, $method(static_cast<$Object*(JMXConnectorFactory$ProviderFinder::*)()>(&JMXConnectorFactory$ProviderFinder::get)), "java.io.IOException"},
	{"test", "(Ljava/util/ServiceLoader$Provider;)Z", "(Ljava/util/ServiceLoader$Provider<TP;>;)Z", $PUBLIC, $method(static_cast<bool(JMXConnectorFactory$ProviderFinder::*)($ServiceLoader$Provider*)>(&JMXConnectorFactory$ProviderFinder::test))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JMXConnectorFactory$ProviderFinder_InnerClassesInfo_[] = {
	{"javax.management.remote.JMXConnectorFactory$ProviderFinder", "javax.management.remote.JMXConnectorFactory", "ProviderFinder", $PRIVATE | $STATIC | $FINAL},
	{"java.util.ServiceLoader$Provider", "java.util.ServiceLoader", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JMXConnectorFactory$ProviderFinder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.management.remote.JMXConnectorFactory$ProviderFinder",
	"java.lang.Object",
	"java.util.function.Predicate",
	_JMXConnectorFactory$ProviderFinder_FieldInfo_,
	_JMXConnectorFactory$ProviderFinder_MethodInfo_,
	"<P:Ljava/lang/Object;C:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/function/Predicate<Ljava/util/ServiceLoader$Provider<TP;>;>;",
	nullptr,
	_JMXConnectorFactory$ProviderFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.remote.JMXConnectorFactory"
};

$Object* allocate$JMXConnectorFactory$ProviderFinder($Class* clazz) {
	return $of($alloc(JMXConnectorFactory$ProviderFinder));
}

void JMXConnectorFactory$ProviderFinder::init$($JMXConnectorFactory$ConnectorFactory* factory, $JMXServiceURL* url) {
	$set(this, exception, nullptr);
	$set(this, connection, nullptr);
	$set(this, factory, factory);
	$set(this, url, url);
}

bool JMXConnectorFactory$ProviderFinder::test($ServiceLoader$Provider* sp) {
	$useLocalCurrentObjectStackCache();
	if (this->connection == nullptr) {
		$var($Object, provider, $nc(sp)->get());
		try {
			$set(this, connection, $nc(this->factory)->apply(provider));
			return this->connection != nullptr;
		} catch ($JMXProviderException& e) {
			$throwNew($UncheckedIOException, e);
		} catch ($Exception& e) {
			$init($JMXConnectorFactory);
			if ($nc($JMXConnectorFactory::logger)->traceOn()) {
				$nc($JMXConnectorFactory::logger)->trace("getConnectorAsService"_s, $$str({"URL["_s, this->url, "] Service provider exception: "_s, e}));
			}
			if (!($instanceOf($MalformedURLException, e))) {
				if (this->exception == nullptr) {
					if ($instanceOf($IOException, e)) {
						$set(this, exception, $cast($IOException, e));
					} else {
						$set(this, exception, $cast($IOException, $EnvHelp::initCause($$new($IOException, $(e->getMessage())), e)));
					}
				}
			}
		}
	}
	return false;
}

$Object* JMXConnectorFactory$ProviderFinder::get() {
	if (this->connection != nullptr) {
		return $of(this->connection);
	} else if (this->exception != nullptr) {
		$throw(this->exception);
	} else {
		return $of(nullptr);
	}
}

bool JMXConnectorFactory$ProviderFinder::test(Object$* sp) {
	return this->test($cast($ServiceLoader$Provider, sp));
}

JMXConnectorFactory$ProviderFinder::JMXConnectorFactory$ProviderFinder() {
}

$Class* JMXConnectorFactory$ProviderFinder::load$($String* name, bool initialize) {
	$loadClass(JMXConnectorFactory$ProviderFinder, name, initialize, &_JMXConnectorFactory$ProviderFinder_ClassInfo_, allocate$JMXConnectorFactory$ProviderFinder);
	return class$;
}

$Class* JMXConnectorFactory$ProviderFinder::class$ = nullptr;

		} // remote
	} // management
} // javax