#include <javax/management/NotificationBroadcasterSupport$SendNotifJob.h>

#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationBroadcasterSupport$ListenerInfo.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/NotificationListener.h>
#include <jcpp.h>

using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcasterSupport = ::javax::management::NotificationBroadcasterSupport;
using $NotificationBroadcasterSupport$ListenerInfo = ::javax::management::NotificationBroadcasterSupport$ListenerInfo;
using $NotificationListener = ::javax::management::NotificationListener;

namespace javax {
	namespace management {

$FieldInfo _NotificationBroadcasterSupport$SendNotifJob_FieldInfo_[] = {
	{"this$0", "Ljavax/management/NotificationBroadcasterSupport;", nullptr, $FINAL | $SYNTHETIC, $field(NotificationBroadcasterSupport$SendNotifJob, this$0)},
	{"notif", "Ljavax/management/Notification;", nullptr, $PRIVATE | $FINAL, $field(NotificationBroadcasterSupport$SendNotifJob, notif)},
	{"listenerInfo", "Ljavax/management/NotificationBroadcasterSupport$ListenerInfo;", nullptr, $PRIVATE | $FINAL, $field(NotificationBroadcasterSupport$SendNotifJob, listenerInfo)},
	{}
};

$MethodInfo _NotificationBroadcasterSupport$SendNotifJob_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/NotificationBroadcasterSupport;Ljavax/management/Notification;Ljavax/management/NotificationBroadcasterSupport$ListenerInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(NotificationBroadcasterSupport$SendNotifJob::*)($NotificationBroadcasterSupport*,$Notification*,$NotificationBroadcasterSupport$ListenerInfo*)>(&NotificationBroadcasterSupport$SendNotifJob::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NotificationBroadcasterSupport$SendNotifJob_InnerClassesInfo_[] = {
	{"javax.management.NotificationBroadcasterSupport$SendNotifJob", "javax.management.NotificationBroadcasterSupport", "SendNotifJob", $PRIVATE},
	{}
};

$ClassInfo _NotificationBroadcasterSupport$SendNotifJob_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.NotificationBroadcasterSupport$SendNotifJob",
	"java.lang.Object",
	"java.lang.Runnable",
	_NotificationBroadcasterSupport$SendNotifJob_FieldInfo_,
	_NotificationBroadcasterSupport$SendNotifJob_MethodInfo_,
	nullptr,
	nullptr,
	_NotificationBroadcasterSupport$SendNotifJob_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.NotificationBroadcasterSupport"
};

$Object* allocate$NotificationBroadcasterSupport$SendNotifJob($Class* clazz) {
	return $of($alloc(NotificationBroadcasterSupport$SendNotifJob));
}

void NotificationBroadcasterSupport$SendNotifJob::init$($NotificationBroadcasterSupport* this$0, $Notification* notif, $NotificationBroadcasterSupport$ListenerInfo* listenerInfo) {
	$set(this, this$0, this$0);
	$set(this, notif, notif);
	$set(this, listenerInfo, listenerInfo);
}

void NotificationBroadcasterSupport$SendNotifJob::run() {
	try {
		this->this$0->handleNotification($nc(this->listenerInfo)->listener, this->notif, $nc(this->listenerInfo)->handback);
	} catch ($Exception& e) {
		$init($NotificationBroadcasterSupport);
		if ($nc($NotificationBroadcasterSupport::logger)->debugOn()) {
			$nc($NotificationBroadcasterSupport::logger)->debug("SendNotifJob-run"_s, static_cast<$Throwable*>(e));
		}
	}
}

NotificationBroadcasterSupport$SendNotifJob::NotificationBroadcasterSupport$SendNotifJob() {
}

$Class* NotificationBroadcasterSupport$SendNotifJob::load$($String* name, bool initialize) {
	$loadClass(NotificationBroadcasterSupport$SendNotifJob, name, initialize, &_NotificationBroadcasterSupport$SendNotifJob_ClassInfo_, allocate$NotificationBroadcasterSupport$SendNotifJob);
	return class$;
}

$Class* NotificationBroadcasterSupport$SendNotifJob::class$ = nullptr;

	} // management
} // javax