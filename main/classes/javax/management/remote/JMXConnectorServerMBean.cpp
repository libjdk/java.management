#include <javax/management/remote/JMXConnectorServerMBean.h>

#include <java/util/Map.h>
#include <javax/management/remote/JMXConnector.h>
#include <javax/management/remote/JMXServiceURL.h>
#include <javax/management/remote/MBeanServerForwarder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $JMXConnector = ::javax::management::remote::JMXConnector;
using $JMXServiceURL = ::javax::management::remote::JMXServiceURL;
using $MBeanServerForwarder = ::javax::management::remote::MBeanServerForwarder;

namespace javax {
	namespace management {
		namespace remote {

$MethodInfo _JMXConnectorServerMBean_MethodInfo_[] = {
	{"getAddress", "()Ljavax/management/remote/JMXServiceURL;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;*>;", $PUBLIC | $ABSTRACT},
	{"getConnectionIds", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isActive", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setMBeanServerForwarder", "(Ljavax/management/remote/MBeanServerForwarder;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"start", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"toJMXConnector", "(Ljava/util/Map;)Ljavax/management/remote/JMXConnector;", "(Ljava/util/Map<Ljava/lang/String;*>;)Ljavax/management/remote/JMXConnector;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _JMXConnectorServerMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.remote.JMXConnectorServerMBean",
	nullptr,
	nullptr,
	nullptr,
	_JMXConnectorServerMBean_MethodInfo_
};

$Object* allocate$JMXConnectorServerMBean($Class* clazz) {
	return $of($alloc(JMXConnectorServerMBean));
}

$Class* JMXConnectorServerMBean::load$($String* name, bool initialize) {
	$loadClass(JMXConnectorServerMBean, name, initialize, &_JMXConnectorServerMBean_ClassInfo_, allocate$JMXConnectorServerMBean);
	return class$;
}

$Class* JMXConnectorServerMBean::class$ = nullptr;

		} // remote
	} // management
} // javax