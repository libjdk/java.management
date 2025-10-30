#include <javax/management/NotificationBroadcaster.h>

#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <jcpp.h>

using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;

namespace javax {
	namespace management {

$MethodInfo _NotificationBroadcaster_MethodInfo_[] = {
	{"addNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"removeNotificationListener", "(Ljavax/management/NotificationListener;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.ListenerNotFoundException"},
	{}
};

$ClassInfo _NotificationBroadcaster_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.NotificationBroadcaster",
	nullptr,
	nullptr,
	nullptr,
	_NotificationBroadcaster_MethodInfo_
};

$Object* allocate$NotificationBroadcaster($Class* clazz) {
	return $of($alloc(NotificationBroadcaster));
}

$Class* NotificationBroadcaster::load$($String* name, bool initialize) {
	$loadClass(NotificationBroadcaster, name, initialize, &_NotificationBroadcaster_ClassInfo_, allocate$NotificationBroadcaster);
	return class$;
}

$Class* NotificationBroadcaster::class$ = nullptr;

	} // management
} // javax