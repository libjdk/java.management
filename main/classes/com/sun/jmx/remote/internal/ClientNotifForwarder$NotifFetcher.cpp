#include <com/sun/jmx/remote/internal/ClientNotifForwarder$NotifFetcher.h>

#include <com/sun/jmx/remote/internal/ClientListenerInfo.h>
#include <com/sun/jmx/remote/internal/ClientNotifForwarder$LinearExecutor.h>
#include <com/sun/jmx/remote/internal/ClientNotifForwarder$NotifFetcher$1.h>
#include <com/sun/jmx/remote/internal/ClientNotifForwarder.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <java/io/IOException.h>
#include <java/io/NotSerializableException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityException.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/RejectedExecutionException.h>
#include <javax/management/MBeanServerNotification.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectName.h>
#include <javax/management/remote/NotificationResult.h>
#include <javax/management/remote/TargetedNotification.h>
#include <jcpp.h>

#undef UNREGISTRATION_NOTIFICATION

using $IntegerArray = $Array<::java::lang::Integer>;
using $TargetedNotificationArray = $Array<::javax::management::remote::TargetedNotification>;
using $ClientListenerInfo = ::com::sun::jmx::remote::internal::ClientListenerInfo;
using $ClientNotifForwarder = ::com::sun::jmx::remote::internal::ClientNotifForwarder;
using $ClientNotifForwarder$LinearExecutor = ::com::sun::jmx::remote::internal::ClientNotifForwarder$LinearExecutor;
using $ClientNotifForwarder$NotifFetcher$1 = ::com::sun::jmx::remote::internal::ClientNotifForwarder$NotifFetcher$1;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $IOException = ::java::io::IOException;
using $NotSerializableException = ::java::io::NotSerializableException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Executor = ::java::util::concurrent::Executor;
using $RejectedExecutionException = ::java::util::concurrent::RejectedExecutionException;
using $MBeanServerNotification = ::javax::management::MBeanServerNotification;
using $Notification = ::javax::management::Notification;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectName = ::javax::management::ObjectName;
using $NotificationResult = ::javax::management::remote::NotificationResult;
using $TargetedNotification = ::javax::management::remote::TargetedNotification;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ClientNotifForwarder$NotifFetcher_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/remote/internal/ClientNotifForwarder;", nullptr, $FINAL | $SYNTHETIC, $field(ClientNotifForwarder$NotifFetcher, this$0)},
	{"alreadyLogged", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ClientNotifForwarder$NotifFetcher, alreadyLogged)},
	{}
};

$MethodInfo _ClientNotifForwarder$NotifFetcher_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/remote/internal/ClientNotifForwarder;)V", nullptr, $PRIVATE, $method(static_cast<void(ClientNotifForwarder$NotifFetcher::*)($ClientNotifForwarder*)>(&ClientNotifForwarder$NotifFetcher::init$))},
	{"dispatchNotification", "(Ljavax/management/remote/TargetedNotification;Ljava/lang/Integer;Ljava/util/Map;)V", "(Ljavax/management/remote/TargetedNotification;Ljava/lang/Integer;Ljava/util/Map<Ljava/lang/Integer;Lcom/sun/jmx/remote/internal/ClientListenerInfo;>;)V", 0},
	{"doRun", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClientNotifForwarder$NotifFetcher::*)()>(&ClientNotifForwarder$NotifFetcher::doRun))},
	{"fetchNotifs", "()Ljavax/management/remote/NotificationResult;", nullptr, $PRIVATE, $method(static_cast<$NotificationResult*(ClientNotifForwarder$NotifFetcher::*)()>(&ClientNotifForwarder$NotifFetcher::fetchNotifs))},
	{"fetchOneNotif", "()Ljavax/management/remote/NotificationResult;", nullptr, $PRIVATE, $method(static_cast<$NotificationResult*(ClientNotifForwarder$NotifFetcher::*)()>(&ClientNotifForwarder$NotifFetcher::fetchOneNotif))},
	{"isRejectedExecutionException", "(Ljava/lang/Exception;)Z", nullptr, $PRIVATE, $method(static_cast<bool(ClientNotifForwarder$NotifFetcher::*)($Exception*)>(&ClientNotifForwarder$NotifFetcher::isRejectedExecutionException))},
	{"logOnce", "(Ljava/lang/String;Ljava/lang/SecurityException;)V", nullptr, $PRIVATE, $method(static_cast<void(ClientNotifForwarder$NotifFetcher::*)($String*,$SecurityException*)>(&ClientNotifForwarder$NotifFetcher::logOnce))},
	{"run", "()V", nullptr, $PUBLIC},
	{"setContextClassLoader", "(Ljava/lang/ClassLoader;)Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$ClassLoader*(ClientNotifForwarder$NotifFetcher::*)($ClassLoader*)>(&ClientNotifForwarder$NotifFetcher::setContextClassLoader))},
	{"shouldStop", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ClientNotifForwarder$NotifFetcher::*)()>(&ClientNotifForwarder$NotifFetcher::shouldStop))},
	{}
};

$InnerClassInfo _ClientNotifForwarder$NotifFetcher_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ClientNotifForwarder$NotifFetcher", "com.sun.jmx.remote.internal.ClientNotifForwarder", "NotifFetcher", $PRIVATE},
	{"com.sun.jmx.remote.internal.ClientNotifForwarder$NotifFetcher$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClientNotifForwarder$NotifFetcher_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.internal.ClientNotifForwarder$NotifFetcher",
	"java.lang.Object",
	"java.lang.Runnable",
	_ClientNotifForwarder$NotifFetcher_FieldInfo_,
	_ClientNotifForwarder$NotifFetcher_MethodInfo_,
	nullptr,
	nullptr,
	_ClientNotifForwarder$NotifFetcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ClientNotifForwarder"
};

$Object* allocate$ClientNotifForwarder$NotifFetcher($Class* clazz) {
	return $of($alloc(ClientNotifForwarder$NotifFetcher));
}

void ClientNotifForwarder$NotifFetcher::init$($ClientNotifForwarder* this$0) {
	$set(this, this$0, this$0);
	this->alreadyLogged = false;
}

void ClientNotifForwarder$NotifFetcher::logOnce($String* msg, $SecurityException* x) {
	if (this->alreadyLogged) {
		return;
	}
	$init($ClientNotifForwarder);
	$nc($ClientNotifForwarder::logger)->config("setContextClassLoader"_s, msg);
	if (x != nullptr) {
		$nc($ClientNotifForwarder::logger)->fine("setContextClassLoader"_s, static_cast<$Throwable*>(x));
	}
	this->alreadyLogged = true;
}

$ClassLoader* ClientNotifForwarder$NotifFetcher::setContextClassLoader($ClassLoader* loader) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($AccessControlContext, ctxt, this->this$0->acc);
	if (ctxt == nullptr) {
		logOnce("AccessControlContext must not be null."_s, nullptr);
		$throwNew($SecurityException, "AccessControlContext must not be null"_s);
	}
	return $cast($ClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ClientNotifForwarder$NotifFetcher$1, this, loader)), ctxt));
}

void ClientNotifForwarder$NotifFetcher::run() {
	$useLocalCurrentObjectStackCache();
	$var($ClassLoader, previous, nullptr);
	if (this->this$0->defaultClassLoader != nullptr) {
		$assign(previous, setContextClassLoader(this->this$0->defaultClassLoader));
	} else {
		$assign(previous, nullptr);
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			doRun();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (this->this$0->defaultClassLoader != nullptr) {
				setContextClassLoader(previous);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ClientNotifForwarder$NotifFetcher::doRun() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->this$0) {
		$set(this->this$0, currentFetchThread, $Thread::currentThread());
		if (this->this$0->state == 0) {
			this->this$0->setState(1);
		}
	}
	$var($NotificationResult, nr, nullptr);
	bool var$0 = !shouldStop();
	if (var$0 && ($assign(nr, fetchNotifs())) != nullptr) {
		$var($TargetedNotificationArray, notifs, $nc(nr)->getTargetedNotifications());
		int32_t len = $nc(notifs)->length;
		$var($Map, listeners, nullptr);
		$var($Integer, myListenerID, nullptr);
		int64_t missed = 0;
		$synchronized(this->this$0) {
			if (this->this$0->clientSequenceNumber >= 0) {
				missed = nr->getEarliestSequenceNumber() - this->this$0->clientSequenceNumber;
			}
			this->this$0->clientSequenceNumber = nr->getNextSequenceNumber();
			$assign(listeners, $new($HashMap));
			for (int32_t i = 0; i < len; ++i) {
				$var($TargetedNotification, tn, notifs->get(i));
				$var($Integer, listenerID, $nc(tn)->getListenerID());
				if (!$nc(listenerID)->equals(this->this$0->mbeanRemovedNotifID)) {
					$var($ClientListenerInfo, li, $cast($ClientListenerInfo, $nc(this->this$0->infoList)->get(listenerID)));
					if (li != nullptr) {
						listeners->put(listenerID, li);
					}
					continue;
				}
				$var($Notification, notif, tn->getNotification());
				$init($MBeanServerNotification);
				$var($String, unreg, $MBeanServerNotification::UNREGISTRATION_NOTIFICATION);
				if ($instanceOf($MBeanServerNotification, notif) && $nc($($nc(notif)->getType()))->equals(unreg)) {
					$var($MBeanServerNotification, mbsn, $cast($MBeanServerNotification, notif));
					$var($ObjectName, name, mbsn->getMBeanName());
					this->this$0->removeNotificationListener(name);
				}
			}
			$assign(myListenerID, this->this$0->mbeanRemovedNotifID);
		}
		if (missed > 0) {
			$var($String, msg, $str({"May have lost up to "_s, $$str(missed), " notification"_s, (missed == 1 ? ""_s : "s"_s)}));
			this->this$0->lostNotifs(msg, missed);
			$nc($ClientNotifForwarder::logger)->trace("NotifFetcher.run"_s, msg);
		}
		for (int32_t i = 0; i < len; ++i) {
			$var($TargetedNotification, tn, notifs->get(i));
			dispatchNotification(tn, myListenerID, listeners);
		}
	}
	$synchronized(this->this$0) {
		$set(this->this$0, currentFetchThread, nullptr);
	}
	if (nr == nullptr) {
		$init($ClientNotifForwarder);
		if ($nc($ClientNotifForwarder::logger)->traceOn()) {
			$nc($ClientNotifForwarder::logger)->trace("NotifFetcher-run"_s, "Recieved null object as notifs, stops fetching because the notification server is terminated."_s);
		}
	}
	if (nr == nullptr || shouldStop()) {
		this->this$0->setState(3);
		try {
			this->this$0->removeListenerForMBeanRemovedNotif(this->this$0->mbeanRemovedNotifID);
		} catch ($Exception& e) {
			if ($nc($ClientNotifForwarder::logger)->traceOn()) {
				$nc($ClientNotifForwarder::logger)->trace("NotifFetcher-run"_s, "removeListenerForMBeanRemovedNotif"_s, e);
			}
		}
	} else {
		try {
			$nc(this->this$0->executor)->execute(this);
		} catch ($Exception& e) {
			if (isRejectedExecutionException(e)) {
				if (!($instanceOf($ClientNotifForwarder$LinearExecutor, this->this$0->executor))) {
					$set(this->this$0, executor, $new($ClientNotifForwarder$LinearExecutor));
					$nc(this->this$0->executor)->execute(this);
				}
			} else {
				$throw(e);
			}
		}
	}
}

bool ClientNotifForwarder$NotifFetcher::isRejectedExecutionException($Exception* e) {
	$var($Throwable, cause, e);
	while (cause != nullptr) {
		if ($instanceOf($RejectedExecutionException, cause)) {
			return true;
		}
		$assign(cause, cause->getCause());
	}
	return false;
}

void ClientNotifForwarder$NotifFetcher::dispatchNotification($TargetedNotification* tn, $Integer* myListenerID, $Map* listeners) {
	$useLocalCurrentObjectStackCache();
	$var($Notification, notif, $nc(tn)->getNotification());
	$var($Integer, listenerID, tn->getListenerID());
	if ($nc(listenerID)->equals(myListenerID)) {
		return;
	}
	$var($ClientListenerInfo, li, $cast($ClientListenerInfo, $nc(listeners)->get(listenerID)));
	if (li == nullptr) {
		$init($ClientNotifForwarder);
		$nc($ClientNotifForwarder::logger)->trace("NotifFetcher.dispatch"_s, "Listener ID not in map"_s);
		return;
	}
	$var($NotificationListener, l, $nc(li)->getListener());
	$var($Object, h, li->getHandback());
	try {
		$nc(l)->handleNotification(notif, h);
	} catch ($RuntimeException& e) {
		$var($String, msg, "Failed to forward a notification to a listener"_s);
		$init($ClientNotifForwarder);
		$nc($ClientNotifForwarder::logger)->trace("NotifFetcher-run"_s, msg, e);
	}
}

$NotificationResult* ClientNotifForwarder$NotifFetcher::fetchNotifs() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($NotificationResult, nr, this->this$0->fetchNotifs(this->this$0->clientSequenceNumber, this->this$0->maxNotifications, this->this$0->timeout));
		if ($nc($ClientNotifForwarder::logger)->traceOn()) {
			$nc($ClientNotifForwarder::logger)->trace("NotifFetcher-run"_s, $$str({"Got notifications from the server: "_s, nr}));
		}
		return nr;
	} catch ($ClassNotFoundException& e) {
		$init($ClientNotifForwarder);
		$nc($ClientNotifForwarder::logger)->trace("NotifFetcher.fetchNotifs"_s, static_cast<$Throwable*>(e));
		return fetchOneNotif();
	} catch ($NotSerializableException& e) {
		$init($ClientNotifForwarder);
		$nc($ClientNotifForwarder::logger)->trace("NotifFetcher.fetchNotifs"_s, static_cast<$Throwable*>(e));
		return fetchOneNotif();
	} catch ($IOException& ioe) {
		if (!shouldStop()) {
			$init($ClientNotifForwarder);
			$nc($ClientNotifForwarder::logger)->error("NotifFetcher-run"_s, $$str({"Failed to fetch notification, stopping thread. Error is: "_s, ioe}), ioe);
			$nc($ClientNotifForwarder::logger)->debug("NotifFetcher-run"_s, static_cast<$Throwable*>(ioe));
		}
		return nullptr;
	}
	$shouldNotReachHere();
}

$NotificationResult* ClientNotifForwarder$NotifFetcher::fetchOneNotif() {
	$useLocalCurrentObjectStackCache();
	$var($ClientNotifForwarder, cnf, this->this$0);
	int64_t startSequenceNumber = this->this$0->clientSequenceNumber;
	int32_t notFoundCount = 0;
	$var($NotificationResult, result, nullptr);
	int64_t firstEarliest = -1;
	while (result == nullptr && !shouldStop()) {
		$var($NotificationResult, nr, nullptr);
		try {
			$assign(nr, $nc(cnf)->fetchNotifs(startSequenceNumber, 0, 0));
		} catch ($ClassNotFoundException& e) {
			$init($ClientNotifForwarder);
			$nc($ClientNotifForwarder::logger)->warning("NotifFetcher.fetchOneNotif"_s, $$str({"Impossible exception: "_s, e}));
			$nc($ClientNotifForwarder::logger)->debug("NotifFetcher.fetchOneNotif"_s, static_cast<$Throwable*>(e));
			return nullptr;
		} catch ($IOException& e) {
			if (!shouldStop()) {
				$init($ClientNotifForwarder);
				$nc($ClientNotifForwarder::logger)->trace("NotifFetcher.fetchOneNotif"_s, static_cast<$Throwable*>(e));
			}
			return nullptr;
		}
		if (shouldStop() || nr == nullptr) {
			return nullptr;
		}
		startSequenceNumber = $nc(nr)->getNextSequenceNumber();
		if (firstEarliest < 0) {
			firstEarliest = nr->getEarliestSequenceNumber();
		}
		try {
			$assign(result, $nc(cnf)->fetchNotifs(startSequenceNumber, 1, 0));
		} catch ($ClassNotFoundException& e) {
			$init($ClientNotifForwarder);
			$nc($ClientNotifForwarder::logger)->warning("NotifFetcher.fetchOneNotif"_s, $$str({"Failed to deserialize a notification: "_s, $(e->toString())}));
			if ($nc($ClientNotifForwarder::logger)->traceOn()) {
				$nc($ClientNotifForwarder::logger)->trace("NotifFetcher.fetchOneNotif"_s, "Failed to deserialize a notification."_s, e);
			}
			++notFoundCount;
			++startSequenceNumber;
		} catch ($NotSerializableException& e) {
			$init($ClientNotifForwarder);
			$nc($ClientNotifForwarder::logger)->warning("NotifFetcher.fetchOneNotif"_s, $$str({"Failed to deserialize a notification: "_s, $(e->toString())}));
			if ($nc($ClientNotifForwarder::logger)->traceOn()) {
				$nc($ClientNotifForwarder::logger)->trace("NotifFetcher.fetchOneNotif"_s, "Failed to deserialize a notification."_s, e);
			}
			++notFoundCount;
			++startSequenceNumber;
		} catch ($Exception& e) {
			if (!shouldStop()) {
				$init($ClientNotifForwarder);
				$nc($ClientNotifForwarder::logger)->trace("NotifFetcher.fetchOneNotif"_s, static_cast<$Throwable*>(e));
			}
			return nullptr;
		}
	}
	if (notFoundCount > 0) {
		$var($String, msg, $str({"Dropped "_s, $$str(notFoundCount), " notification"_s, (notFoundCount == 1 ? ""_s : "s"_s), " because classes were missing locally or incompatible"_s}));
		this->this$0->lostNotifs(msg, notFoundCount);
		if (result != nullptr) {
			int64_t var$0 = firstEarliest;
			int64_t var$1 = result->getNextSequenceNumber();
			$assign(result, $new($NotificationResult, var$0, var$1, $(result->getTargetedNotifications())));
		}
	}
	return result;
}

bool ClientNotifForwarder$NotifFetcher::shouldStop() {
	$synchronized(this->this$0) {
		if (this->this$0->state != 1) {
			return true;
		} else if ($nc(this->this$0->infoList)->size() == 0) {
			this->this$0->setState(2);
			return true;
		}
		return false;
	}
}

ClientNotifForwarder$NotifFetcher::ClientNotifForwarder$NotifFetcher() {
}

$Class* ClientNotifForwarder$NotifFetcher::load$($String* name, bool initialize) {
	$loadClass(ClientNotifForwarder$NotifFetcher, name, initialize, &_ClientNotifForwarder$NotifFetcher_ClassInfo_, allocate$ClientNotifForwarder$NotifFetcher);
	return class$;
}

$Class* ClientNotifForwarder$NotifFetcher::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com