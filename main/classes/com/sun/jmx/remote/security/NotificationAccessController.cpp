#include <com/sun/jmx/remote/security/NotificationAccessController.h>

#include <javax/management/Notification.h>
#include <javax/management/ObjectName.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;
using $ObjectName = ::javax::management::ObjectName;
using $Subject = ::javax::security::auth::Subject;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$MethodInfo _NotificationAccessController_MethodInfo_[] = {
	{"addNotificationListener", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/security/auth/Subject;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.SecurityException"},
	{"fetchNotification", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/management/Notification;Ljavax/security/auth/Subject;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.SecurityException"},
	{"removeNotificationListener", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/security/auth/Subject;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.SecurityException"},
	{}
};

$ClassInfo _NotificationAccessController_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.jmx.remote.security.NotificationAccessController",
	nullptr,
	nullptr,
	nullptr,
	_NotificationAccessController_MethodInfo_
};

$Object* allocate$NotificationAccessController($Class* clazz) {
	return $of($alloc(NotificationAccessController));
}

$Class* NotificationAccessController::load$($String* name, bool initialize) {
	$loadClass(NotificationAccessController, name, initialize, &_NotificationAccessController_ClassInfo_, allocate$NotificationAccessController);
	return class$;
}

$Class* NotificationAccessController::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com