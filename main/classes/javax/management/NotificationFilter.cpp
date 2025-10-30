#include <javax/management/NotificationFilter.h>

#include <javax/management/Notification.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;

namespace javax {
	namespace management {

$MethodInfo _NotificationFilter_MethodInfo_[] = {
	{"isNotificationEnabled", "(Ljavax/management/Notification;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NotificationFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.NotificationFilter",
	nullptr,
	"java.io.Serializable",
	nullptr,
	_NotificationFilter_MethodInfo_
};

$Object* allocate$NotificationFilter($Class* clazz) {
	return $of($alloc(NotificationFilter));
}

$Class* NotificationFilter::load$($String* name, bool initialize) {
	$loadClass(NotificationFilter, name, initialize, &_NotificationFilter_ClassInfo_, allocate$NotificationFilter);
	return class$;
}

$Class* NotificationFilter::class$ = nullptr;

	} // management
} // javax