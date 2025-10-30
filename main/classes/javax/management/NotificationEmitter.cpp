#include <javax/management/NotificationEmitter.h>

#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationBroadcaster = ::javax::management::NotificationBroadcaster;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;

namespace javax {
	namespace management {

$MethodInfo _NotificationEmitter_MethodInfo_[] = {
	{"removeNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.ListenerNotFoundException"},
	{}
};

$ClassInfo _NotificationEmitter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.NotificationEmitter",
	nullptr,
	"javax.management.NotificationBroadcaster",
	nullptr,
	_NotificationEmitter_MethodInfo_
};

$Object* allocate$NotificationEmitter($Class* clazz) {
	return $of($alloc(NotificationEmitter));
}

$Class* NotificationEmitter::load$($String* name, bool initialize) {
	$loadClass(NotificationEmitter, name, initialize, &_NotificationEmitter_ClassInfo_, allocate$NotificationEmitter);
	return class$;
}

$Class* NotificationEmitter::class$ = nullptr;

	} // management
} // javax