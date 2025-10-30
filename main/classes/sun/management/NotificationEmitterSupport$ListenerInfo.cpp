#include <sun/management/NotificationEmitterSupport$ListenerInfo.h>

#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <sun/management/NotificationEmitterSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $NotificationEmitterSupport = ::sun::management::NotificationEmitterSupport;

namespace sun {
	namespace management {

$FieldInfo _NotificationEmitterSupport$ListenerInfo_FieldInfo_[] = {
	{"this$0", "Lsun/management/NotificationEmitterSupport;", nullptr, $FINAL | $SYNTHETIC, $field(NotificationEmitterSupport$ListenerInfo, this$0)},
	{"listener", "Ljavax/management/NotificationListener;", nullptr, $PUBLIC, $field(NotificationEmitterSupport$ListenerInfo, listener)},
	{"filter", "Ljavax/management/NotificationFilter;", nullptr, 0, $field(NotificationEmitterSupport$ListenerInfo, filter)},
	{"handback", "Ljava/lang/Object;", nullptr, 0, $field(NotificationEmitterSupport$ListenerInfo, handback)},
	{}
};

$MethodInfo _NotificationEmitterSupport$ListenerInfo_MethodInfo_[] = {
	{"<init>", "(Lsun/management/NotificationEmitterSupport;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(NotificationEmitterSupport$ListenerInfo::*)($NotificationEmitterSupport*,$NotificationListener*,$NotificationFilter*,Object$*)>(&NotificationEmitterSupport$ListenerInfo::init$))},
	{}
};

$InnerClassInfo _NotificationEmitterSupport$ListenerInfo_InnerClassesInfo_[] = {
	{"sun.management.NotificationEmitterSupport$ListenerInfo", "sun.management.NotificationEmitterSupport", "ListenerInfo", $PRIVATE},
	{}
};

$ClassInfo _NotificationEmitterSupport$ListenerInfo_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.NotificationEmitterSupport$ListenerInfo",
	"java.lang.Object",
	nullptr,
	_NotificationEmitterSupport$ListenerInfo_FieldInfo_,
	_NotificationEmitterSupport$ListenerInfo_MethodInfo_,
	nullptr,
	nullptr,
	_NotificationEmitterSupport$ListenerInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.NotificationEmitterSupport"
};

$Object* allocate$NotificationEmitterSupport$ListenerInfo($Class* clazz) {
	return $of($alloc(NotificationEmitterSupport$ListenerInfo));
}

void NotificationEmitterSupport$ListenerInfo::init$($NotificationEmitterSupport* this$0, $NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$set(this, this$0, this$0);
	$set(this, listener, listener);
	$set(this, filter, filter);
	$set(this, handback, handback);
}

NotificationEmitterSupport$ListenerInfo::NotificationEmitterSupport$ListenerInfo() {
}

$Class* NotificationEmitterSupport$ListenerInfo::load$($String* name, bool initialize) {
	$loadClass(NotificationEmitterSupport$ListenerInfo, name, initialize, &_NotificationEmitterSupport$ListenerInfo_ClassInfo_, allocate$NotificationEmitterSupport$ListenerInfo);
	return class$;
}

$Class* NotificationEmitterSupport$ListenerInfo::class$ = nullptr;

	} // management
} // sun