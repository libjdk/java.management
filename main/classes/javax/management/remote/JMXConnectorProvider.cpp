#include <javax/management/remote/JMXConnectorProvider.h>

#include <java/util/Map.h>
#include <javax/management/remote/JMXConnector.h>
#include <javax/management/remote/JMXServiceURL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $JMXConnector = ::javax::management::remote::JMXConnector;
using $JMXServiceURL = ::javax::management::remote::JMXServiceURL;

namespace javax {
	namespace management {
		namespace remote {

$MethodInfo _JMXConnectorProvider_MethodInfo_[] = {
	{"newJMXConnector", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;)Ljavax/management/remote/JMXConnector;", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map<Ljava/lang/String;*>;)Ljavax/management/remote/JMXConnector;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _JMXConnectorProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.remote.JMXConnectorProvider",
	nullptr,
	nullptr,
	nullptr,
	_JMXConnectorProvider_MethodInfo_
};

$Object* allocate$JMXConnectorProvider($Class* clazz) {
	return $of($alloc(JMXConnectorProvider));
}

$Class* JMXConnectorProvider::load$($String* name, bool initialize) {
	$loadClass(JMXConnectorProvider, name, initialize, &_JMXConnectorProvider_ClassInfo_, allocate$JMXConnectorProvider);
	return class$;
}

$Class* JMXConnectorProvider::class$ = nullptr;

		} // remote
	} // management
} // javax