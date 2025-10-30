#include <javax/management/NotificationBroadcasterSupport.h>

#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <java/lang/Runnable.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <java/util/concurrent/Executor.h>
#include <javax/management/ListenerNotFoundException.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationBroadcasterSupport$1.h>
#include <javax/management/NotificationBroadcasterSupport$ListenerInfo.h>
#include <javax/management/NotificationBroadcasterSupport$SendNotifJob.h>
#include <javax/management/NotificationBroadcasterSupport$WildcardListenerInfo.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <jcpp.h>

#undef NO_NOTIFICATION_INFO

using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $Executor = ::java::util::concurrent::Executor;
using $ListenerNotFoundException = ::javax::management::ListenerNotFoundException;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcasterSupport$1 = ::javax::management::NotificationBroadcasterSupport$1;
using $NotificationBroadcasterSupport$ListenerInfo = ::javax::management::NotificationBroadcasterSupport$ListenerInfo;
using $NotificationBroadcasterSupport$SendNotifJob = ::javax::management::NotificationBroadcasterSupport$SendNotifJob;
using $NotificationBroadcasterSupport$WildcardListenerInfo = ::javax::management::NotificationBroadcasterSupport$WildcardListenerInfo;
using $NotificationEmitter = ::javax::management::NotificationEmitter;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;

namespace javax {
	namespace management {

$FieldInfo _NotificationBroadcasterSupport_FieldInfo_[] = {
	{"listenerList", "Ljava/util/List;", "Ljava/util/List<Ljavax/management/NotificationBroadcasterSupport$ListenerInfo;>;", $PRIVATE, $field(NotificationBroadcasterSupport, listenerList)},
	{"executor", "Ljava/util/concurrent/Executor;", nullptr, $PRIVATE | $FINAL, $field(NotificationBroadcasterSupport, executor)},
	{"notifInfo", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE | $FINAL, $field(NotificationBroadcasterSupport, notifInfo)},
	{"defaultExecutor", "Ljava/util/concurrent/Executor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NotificationBroadcasterSupport, defaultExecutor)},
	{"NO_NOTIFICATION_INFO", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NotificationBroadcasterSupport, NO_NOTIFICATION_INFO)},
	{"logger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NotificationBroadcasterSupport, logger)},
	{}
};

$MethodInfo _NotificationBroadcasterSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NotificationBroadcasterSupport::*)()>(&NotificationBroadcasterSupport::init$))},
	{"<init>", "(Ljava/util/concurrent/Executor;)V", nullptr, $PUBLIC, $method(static_cast<void(NotificationBroadcasterSupport::*)($Executor*)>(&NotificationBroadcasterSupport::init$))},
	{"<init>", "([Ljavax/management/MBeanNotificationInfo;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(NotificationBroadcasterSupport::*)($MBeanNotificationInfoArray*)>(&NotificationBroadcasterSupport::init$))},
	{"<init>", "(Ljava/util/concurrent/Executor;[Ljavax/management/MBeanNotificationInfo;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(NotificationBroadcasterSupport::*)($Executor*,$MBeanNotificationInfoArray*)>(&NotificationBroadcasterSupport::init$))},
	{"addNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC},
	{"handleNotification", "(Ljavax/management/NotificationListener;Ljavax/management/Notification;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"removeNotificationListener", "(Ljavax/management/NotificationListener;)V", nullptr, $PUBLIC, nullptr, "javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.ListenerNotFoundException"},
	{"sendNotification", "(Ljavax/management/Notification;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NotificationBroadcasterSupport_InnerClassesInfo_[] = {
	{"javax.management.NotificationBroadcasterSupport$SendNotifJob", "javax.management.NotificationBroadcasterSupport", "SendNotifJob", $PRIVATE},
	{"javax.management.NotificationBroadcasterSupport$WildcardListenerInfo", "javax.management.NotificationBroadcasterSupport", "WildcardListenerInfo", $PRIVATE | $STATIC},
	{"javax.management.NotificationBroadcasterSupport$ListenerInfo", "javax.management.NotificationBroadcasterSupport", "ListenerInfo", $PRIVATE | $STATIC},
	{"javax.management.NotificationBroadcasterSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NotificationBroadcasterSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.NotificationBroadcasterSupport",
	"java.lang.Object",
	"javax.management.NotificationEmitter",
	_NotificationBroadcasterSupport_FieldInfo_,
	_NotificationBroadcasterSupport_MethodInfo_,
	nullptr,
	nullptr,
	_NotificationBroadcasterSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.management.NotificationBroadcasterSupport$SendNotifJob,javax.management.NotificationBroadcasterSupport$WildcardListenerInfo,javax.management.NotificationBroadcasterSupport$ListenerInfo,javax.management.NotificationBroadcasterSupport$1"
};

$Object* allocate$NotificationBroadcasterSupport($Class* clazz) {
	return $of($alloc(NotificationBroadcasterSupport));
}

$Executor* NotificationBroadcasterSupport::defaultExecutor = nullptr;
$MBeanNotificationInfoArray* NotificationBroadcasterSupport::NO_NOTIFICATION_INFO = nullptr;
$ClassLogger* NotificationBroadcasterSupport::logger = nullptr;

void NotificationBroadcasterSupport::init$() {
	NotificationBroadcasterSupport::init$(nullptr, ($MBeanNotificationInfoArray*)nullptr);
}

void NotificationBroadcasterSupport::init$($Executor* executor) {
	NotificationBroadcasterSupport::init$(executor, ($MBeanNotificationInfoArray*)nullptr);
}

void NotificationBroadcasterSupport::init$($MBeanNotificationInfoArray* info) {
	NotificationBroadcasterSupport::init$(nullptr, info);
}

void NotificationBroadcasterSupport::init$($Executor* executor, $MBeanNotificationInfoArray* info) {
	$set(this, listenerList, $new($CopyOnWriteArrayList));
	$set(this, executor, (executor != nullptr) ? executor : NotificationBroadcasterSupport::defaultExecutor);
	$set(this, notifInfo, info == nullptr ? NotificationBroadcasterSupport::NO_NOTIFICATION_INFO : $cast($MBeanNotificationInfoArray, $nc(info)->clone()));
}

void NotificationBroadcasterSupport::addNotificationListener($NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	if (listener == nullptr) {
		$throwNew($IllegalArgumentException, "Listener can\'t be null"_s);
	}
	$nc(this->listenerList)->add($$new($NotificationBroadcasterSupport$ListenerInfo, listener, filter, handback));
}

void NotificationBroadcasterSupport::removeNotificationListener($NotificationListener* listener) {
	$useLocalCurrentObjectStackCache();
	$var($NotificationBroadcasterSupport$ListenerInfo, wildcard, $new($NotificationBroadcasterSupport$WildcardListenerInfo, listener));
	bool removed = $nc(this->listenerList)->removeAll($($Collections::singleton(wildcard)));
	if (!removed) {
		$throwNew($ListenerNotFoundException, "Listener not registered"_s);
	}
}

void NotificationBroadcasterSupport::removeNotificationListener($NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$var($NotificationBroadcasterSupport$ListenerInfo, li, $new($NotificationBroadcasterSupport$ListenerInfo, listener, filter, handback));
	bool removed = $nc(this->listenerList)->remove($of(li));
	if (!removed) {
		$throwNew($ListenerNotFoundException, "Listener not registered (with this filter and handback)"_s);
	}
}

$MBeanNotificationInfoArray* NotificationBroadcasterSupport::getNotificationInfo() {
	if ($nc(this->notifInfo)->length == 0) {
		return this->notifInfo;
	} else {
		return $cast($MBeanNotificationInfoArray, $nc(this->notifInfo)->clone());
	}
}

void NotificationBroadcasterSupport::sendNotification($Notification* notification) {
	$useLocalCurrentObjectStackCache();
	if (notification == nullptr) {
		return;
	}
	bool enabled = false;
	{
		$var($Iterator, i$, $nc(this->listenerList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($NotificationBroadcasterSupport$ListenerInfo, li, $cast($NotificationBroadcasterSupport$ListenerInfo, i$->next()));
			{
				try {
					enabled = $nc(li)->filter == nullptr || $nc($nc(li)->filter)->isNotificationEnabled(notification);
				} catch ($Exception& e) {
					if ($nc(NotificationBroadcasterSupport::logger)->debugOn()) {
						$nc(NotificationBroadcasterSupport::logger)->debug("sendNotification"_s, static_cast<$Throwable*>(e));
					}
					continue;
				}
				if (enabled) {
					$nc(this->executor)->execute($$new($NotificationBroadcasterSupport$SendNotifJob, this, notification, li));
				}
			}
		}
	}
}

void NotificationBroadcasterSupport::handleNotification($NotificationListener* listener, $Notification* notif, Object$* handback) {
	$nc(listener)->handleNotification(notif, handback);
}

void clinit$NotificationBroadcasterSupport($Class* class$) {
	$assignStatic(NotificationBroadcasterSupport::defaultExecutor, $new($NotificationBroadcasterSupport$1));
	$assignStatic(NotificationBroadcasterSupport::NO_NOTIFICATION_INFO, $new($MBeanNotificationInfoArray, 0));
	$assignStatic(NotificationBroadcasterSupport::logger, $new($ClassLogger, "javax.management"_s, "NotificationBroadcasterSupport"_s));
}

NotificationBroadcasterSupport::NotificationBroadcasterSupport() {
}

$Class* NotificationBroadcasterSupport::load$($String* name, bool initialize) {
	$loadClass(NotificationBroadcasterSupport, name, initialize, &_NotificationBroadcasterSupport_ClassInfo_, clinit$NotificationBroadcasterSupport, allocate$NotificationBroadcasterSupport);
	return class$;
}

$Class* NotificationBroadcasterSupport::class$ = nullptr;

	} // management
} // javax