#include <javax/management/NotificationListener.h>

#include <javax/management/Notification.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $Notification = ::javax::management::Notification;

namespace javax {
	namespace management {

$MethodInfo _NotificationListener_MethodInfo_[] = {
	{"handleNotification", "(Ljavax/management/Notification;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NotificationListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.NotificationListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_NotificationListener_MethodInfo_
};

$Object* allocate$NotificationListener($Class* clazz) {
	return $of($alloc(NotificationListener));
}

$Class* NotificationListener::load$($String* name, bool initialize) {
	$loadClass(NotificationListener, name, initialize, &_NotificationListener_ClassInfo_, allocate$NotificationListener);
	return class$;
}

$Class* NotificationListener::class$ = nullptr;

	} // management
} // javax