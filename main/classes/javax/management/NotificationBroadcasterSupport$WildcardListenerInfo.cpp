#include <javax/management/NotificationBroadcasterSupport$WildcardListenerInfo.h>

#include <java/lang/AssertionError.h>
#include <javax/management/NotificationBroadcasterSupport$ListenerInfo.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationBroadcasterSupport = ::javax::management::NotificationBroadcasterSupport;
using $NotificationBroadcasterSupport$ListenerInfo = ::javax::management::NotificationBroadcasterSupport$ListenerInfo;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;

namespace javax {
	namespace management {

$FieldInfo _NotificationBroadcasterSupport$WildcardListenerInfo_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NotificationBroadcasterSupport$WildcardListenerInfo, $assertionsDisabled)},
	{}
};

$MethodInfo _NotificationBroadcasterSupport$WildcardListenerInfo_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/NotificationListener;)V", nullptr, 0, $method(static_cast<void(NotificationBroadcasterSupport$WildcardListenerInfo::*)($NotificationListener*)>(&NotificationBroadcasterSupport$WildcardListenerInfo::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NotificationBroadcasterSupport$WildcardListenerInfo_InnerClassesInfo_[] = {
	{"javax.management.NotificationBroadcasterSupport$WildcardListenerInfo", "javax.management.NotificationBroadcasterSupport", "WildcardListenerInfo", $PRIVATE | $STATIC},
	{"javax.management.NotificationBroadcasterSupport$ListenerInfo", "javax.management.NotificationBroadcasterSupport", "ListenerInfo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _NotificationBroadcasterSupport$WildcardListenerInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.NotificationBroadcasterSupport$WildcardListenerInfo",
	"javax.management.NotificationBroadcasterSupport$ListenerInfo",
	nullptr,
	_NotificationBroadcasterSupport$WildcardListenerInfo_FieldInfo_,
	_NotificationBroadcasterSupport$WildcardListenerInfo_MethodInfo_,
	nullptr,
	nullptr,
	_NotificationBroadcasterSupport$WildcardListenerInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.NotificationBroadcasterSupport"
};

$Object* allocate$NotificationBroadcasterSupport$WildcardListenerInfo($Class* clazz) {
	return $of($alloc(NotificationBroadcasterSupport$WildcardListenerInfo));
}

bool NotificationBroadcasterSupport$WildcardListenerInfo::$assertionsDisabled = false;

void NotificationBroadcasterSupport$WildcardListenerInfo::init$($NotificationListener* listener) {
	$NotificationBroadcasterSupport$ListenerInfo::init$(listener, nullptr, nullptr);
}

bool NotificationBroadcasterSupport$WildcardListenerInfo::equals(Object$* o) {
	if (!NotificationBroadcasterSupport$WildcardListenerInfo::$assertionsDisabled && !(!($instanceOf(NotificationBroadcasterSupport$WildcardListenerInfo, o)))) {
		$throwNew($AssertionError);
	}
	return $nc($of(o))->equals(this);
}

int32_t NotificationBroadcasterSupport$WildcardListenerInfo::hashCode() {
	return $NotificationBroadcasterSupport$ListenerInfo::hashCode();
}

void clinit$NotificationBroadcasterSupport$WildcardListenerInfo($Class* class$) {
	$load($NotificationBroadcasterSupport);
	NotificationBroadcasterSupport$WildcardListenerInfo::$assertionsDisabled = !$NotificationBroadcasterSupport::class$->desiredAssertionStatus();
}

NotificationBroadcasterSupport$WildcardListenerInfo::NotificationBroadcasterSupport$WildcardListenerInfo() {
}

$Class* NotificationBroadcasterSupport$WildcardListenerInfo::load$($String* name, bool initialize) {
	$loadClass(NotificationBroadcasterSupport$WildcardListenerInfo, name, initialize, &_NotificationBroadcasterSupport$WildcardListenerInfo_ClassInfo_, clinit$NotificationBroadcasterSupport$WildcardListenerInfo, allocate$NotificationBroadcasterSupport$WildcardListenerInfo);
	return class$;
}

$Class* NotificationBroadcasterSupport$WildcardListenerInfo::class$ = nullptr;

	} // management
} // javax