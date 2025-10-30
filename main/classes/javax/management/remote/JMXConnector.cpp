#include <javax/management/remote/JMXConnector.h>

#include <java/util/Map.h>
#include <javax/management/MBeanServerConnection.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

#undef CREDENTIALS

using $Closeable = ::java::io::Closeable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $MBeanServerConnection = ::javax::management::MBeanServerConnection;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $Subject = ::javax::security::auth::Subject;

namespace javax {
	namespace management {
		namespace remote {

$FieldInfo _JMXConnector_FieldInfo_[] = {
	{"CREDENTIALS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMXConnector, CREDENTIALS)},
	{}
};

$MethodInfo _JMXConnector_MethodInfo_[] = {
	{"addConnectionNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"connect", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"connect", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;*>;)V", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getConnectionId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getMBeanServerConnection", "()Ljavax/management/MBeanServerConnection;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getMBeanServerConnection", "(Ljavax/security/auth/Subject;)Ljavax/management/MBeanServerConnection;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"removeConnectionNotificationListener", "(Ljavax/management/NotificationListener;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.ListenerNotFoundException"},
	{"removeConnectionNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.ListenerNotFoundException"},
	{}
};

$ClassInfo _JMXConnector_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.remote.JMXConnector",
	nullptr,
	"java.io.Closeable",
	_JMXConnector_FieldInfo_,
	_JMXConnector_MethodInfo_
};

$Object* allocate$JMXConnector($Class* clazz) {
	return $of($alloc(JMXConnector));
}

$String* JMXConnector::CREDENTIALS = nullptr;

void clinit$JMXConnector($Class* class$) {
	$assignStatic(JMXConnector::CREDENTIALS, "jmx.remote.credentials"_s);
}

$Class* JMXConnector::load$($String* name, bool initialize) {
	$loadClass(JMXConnector, name, initialize, &_JMXConnector_ClassInfo_, clinit$JMXConnector, allocate$JMXConnector);
	return class$;
}

$Class* JMXConnector::class$ = nullptr;

		} // remote
	} // management
} // javax