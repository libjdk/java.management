#include <com/sun/jmx/remote/internal/NotificationBufferFilter.h>

#include <java/util/List.h>
#include <javax/management/Notification.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Notification = ::javax::management::Notification;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$MethodInfo _NotificationBufferFilter_MethodInfo_[] = {
	{"apply", "(Ljava/util/List;Ljavax/management/ObjectName;Ljavax/management/Notification;)V", "(Ljava/util/List<Ljavax/management/remote/TargetedNotification;>;Ljavax/management/ObjectName;Ljavax/management/Notification;)V", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NotificationBufferFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.jmx.remote.internal.NotificationBufferFilter",
	nullptr,
	nullptr,
	nullptr,
	_NotificationBufferFilter_MethodInfo_
};

$Object* allocate$NotificationBufferFilter($Class* clazz) {
	return $of($alloc(NotificationBufferFilter));
}

$Class* NotificationBufferFilter::load$($String* name, bool initialize) {
	$loadClass(NotificationBufferFilter, name, initialize, &_NotificationBufferFilter_ClassInfo_, allocate$NotificationBufferFilter);
	return class$;
}

$Class* NotificationBufferFilter::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com