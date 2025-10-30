#include <javax/management/NotificationBroadcasterSupport$1.h>

#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Executor = ::java::util::concurrent::Executor;

namespace javax {
	namespace management {

$MethodInfo _NotificationBroadcasterSupport$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NotificationBroadcasterSupport$1::*)()>(&NotificationBroadcasterSupport$1::init$))},
	{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NotificationBroadcasterSupport$1_EnclosingMethodInfo_ = {
	"javax.management.NotificationBroadcasterSupport",
	nullptr,
	nullptr
};

$InnerClassInfo _NotificationBroadcasterSupport$1_InnerClassesInfo_[] = {
	{"javax.management.NotificationBroadcasterSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NotificationBroadcasterSupport$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.NotificationBroadcasterSupport$1",
	"java.lang.Object",
	"java.util.concurrent.Executor",
	nullptr,
	_NotificationBroadcasterSupport$1_MethodInfo_,
	nullptr,
	&_NotificationBroadcasterSupport$1_EnclosingMethodInfo_,
	_NotificationBroadcasterSupport$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.NotificationBroadcasterSupport"
};

$Object* allocate$NotificationBroadcasterSupport$1($Class* clazz) {
	return $of($alloc(NotificationBroadcasterSupport$1));
}

void NotificationBroadcasterSupport$1::init$() {
}

void NotificationBroadcasterSupport$1::execute($Runnable* r) {
	$nc(r)->run();
}

NotificationBroadcasterSupport$1::NotificationBroadcasterSupport$1() {
}

$Class* NotificationBroadcasterSupport$1::load$($String* name, bool initialize) {
	$loadClass(NotificationBroadcasterSupport$1, name, initialize, &_NotificationBroadcasterSupport$1_ClassInfo_, allocate$NotificationBroadcasterSupport$1);
	return class$;
}

$Class* NotificationBroadcasterSupport$1::class$ = nullptr;

	} // management
} // javax