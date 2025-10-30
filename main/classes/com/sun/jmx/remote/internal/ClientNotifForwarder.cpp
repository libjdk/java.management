#include <com/sun/jmx/remote/internal/ClientNotifForwarder.h>

#include <com/sun/jmx/remote/internal/ClientListenerInfo.h>
#include <com/sun/jmx/remote/internal/ClientNotifForwarder$LinearExecutor.h>
#include <com/sun/jmx/remote/internal/ClientNotifForwarder$NotifFetcher.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/io/IOException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/concurrent/Executor.h>
#include <javax/management/ListenerNotFoundException.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectName.h>
#include <javax/management/remote/NotificationResult.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

#undef STARTED
#undef STARTING
#undef STOPPED
#undef STOPPING
#undef TERMINATED

using $ClientListenerInfoArray = $Array<::com::sun::jmx::remote::internal::ClientListenerInfo>;
using $IntegerArray = $Array<::java::lang::Integer>;
using $ClientListenerInfo = ::com::sun::jmx::remote::internal::ClientListenerInfo;
using $ClientNotifForwarder$LinearExecutor = ::com::sun::jmx::remote::internal::ClientNotifForwarder$LinearExecutor;
using $ClientNotifForwarder$NotifFetcher = ::com::sun::jmx::remote::internal::ClientNotifForwarder$NotifFetcher;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Executor = ::java::util::concurrent::Executor;
using $ListenerNotFoundException = ::javax::management::ListenerNotFoundException;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectName = ::javax::management::ObjectName;
using $NotificationResult = ::javax::management::remote::NotificationResult;
using $Subject = ::javax::security::auth::Subject;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ClientNotifForwarder_FieldInfo_[] = {
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(ClientNotifForwarder, acc)},
	{"threadId", "I", nullptr, $PRIVATE | $STATIC, $staticField(ClientNotifForwarder, threadId)},
	{"defaultClassLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $field(ClientNotifForwarder, defaultClassLoader)},
	{"executor", "Ljava/util/concurrent/Executor;", nullptr, $PRIVATE, $field(ClientNotifForwarder, executor)},
	{"infoList", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Lcom/sun/jmx/remote/internal/ClientListenerInfo;>;", $PRIVATE | $FINAL, $field(ClientNotifForwarder, infoList)},
	{"clientSequenceNumber", "J", nullptr, $PRIVATE, $field(ClientNotifForwarder, clientSequenceNumber)},
	{"maxNotifications", "I", nullptr, $PRIVATE | $FINAL, $field(ClientNotifForwarder, maxNotifications)},
	{"timeout", "J", nullptr, $PRIVATE | $FINAL, $field(ClientNotifForwarder, timeout)},
	{"mbeanRemovedNotifID", "Ljava/lang/Integer;", nullptr, $PRIVATE, $field(ClientNotifForwarder, mbeanRemovedNotifID)},
	{"currentFetchThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(ClientNotifForwarder, currentFetchThread)},
	{"STARTING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClientNotifForwarder, STARTING)},
	{"STARTED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClientNotifForwarder, STARTED)},
	{"STOPPING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClientNotifForwarder, STOPPING)},
	{"STOPPED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClientNotifForwarder, STOPPED)},
	{"TERMINATED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClientNotifForwarder, TERMINATED)},
	{"state", "I", nullptr, $PRIVATE, $field(ClientNotifForwarder, state)},
	{"beingReconnected", "Z", nullptr, $PRIVATE, $field(ClientNotifForwarder, beingReconnected)},
	{"logger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClientNotifForwarder, logger)},
	{}
};

$MethodInfo _ClientNotifForwarder_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;*>;)V", $PUBLIC, $method(static_cast<void(ClientNotifForwarder::*)($Map*)>(&ClientNotifForwarder::init$))},
	{"<init>", "(Ljava/lang/ClassLoader;Ljava/util/Map;)V", "(Ljava/lang/ClassLoader;Ljava/util/Map<Ljava/lang/String;*>;)V", $PUBLIC, $method(static_cast<void(ClientNotifForwarder::*)($ClassLoader*,$Map*)>(&ClientNotifForwarder::init$))},
	{"addListenerForMBeanRemovedNotif", "()Ljava/lang/Integer;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException,javax.management.InstanceNotFoundException"},
	{"addNotificationListener", "(Ljava/lang/Integer;Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;Ljavax/security/auth/Subject;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException,javax.management.InstanceNotFoundException"},
	{"beforeRemove", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(ClientNotifForwarder::*)()>(&ClientNotifForwarder::beforeRemove)), "java.io.IOException"},
	{"fetchNotifs", "(JIJ)Ljavax/management/remote/NotificationResult;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{"getListenerId", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)Ljava/lang/Integer;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.management.ListenerNotFoundException,java.io.IOException"},
	{"getListenerIds", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;)[Ljava/lang/Integer;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.management.ListenerNotFoundException,java.io.IOException"},
	{"init", "(Z)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(ClientNotifForwarder::*)(bool)>(&ClientNotifForwarder::init)), "java.io.IOException"},
	{"lostNotifs", "(Ljava/lang/String;J)V", nullptr, $PROTECTED | $ABSTRACT},
	{"postReconnection", "([Lcom/sun/jmx/remote/internal/ClientListenerInfo;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"preReconnection", "()[Lcom/sun/jmx/remote/internal/ClientListenerInfo;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"removeListenerForMBeanRemovedNotif", "(Ljava/lang/Integer;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException,javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;)[Ljava/lang/Integer;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.management.ListenerNotFoundException,java.io.IOException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)Ljava/lang/Integer;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.management.ListenerNotFoundException,java.io.IOException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;)[Ljava/lang/Integer;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setState", "(I)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(ClientNotifForwarder::*)(int32_t)>(&ClientNotifForwarder::setState))},
	{"terminate", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _ClientNotifForwarder_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ClientNotifForwarder$NotifFetcher", "com.sun.jmx.remote.internal.ClientNotifForwarder", "NotifFetcher", $PRIVATE},
	{"com.sun.jmx.remote.internal.ClientNotifForwarder$LinearExecutor", "com.sun.jmx.remote.internal.ClientNotifForwarder", "LinearExecutor", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ClientNotifForwarder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jmx.remote.internal.ClientNotifForwarder",
	"java.lang.Object",
	nullptr,
	_ClientNotifForwarder_FieldInfo_,
	_ClientNotifForwarder_MethodInfo_,
	nullptr,
	nullptr,
	_ClientNotifForwarder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ClientNotifForwarder$NotifFetcher,com.sun.jmx.remote.internal.ClientNotifForwarder$NotifFetcher$1,com.sun.jmx.remote.internal.ClientNotifForwarder$LinearExecutor"
};

$Object* allocate$ClientNotifForwarder($Class* clazz) {
	return $of($alloc(ClientNotifForwarder));
}

int32_t ClientNotifForwarder::threadId = 0;
$ClassLogger* ClientNotifForwarder::logger = nullptr;

void ClientNotifForwarder::init$($Map* env) {
	ClientNotifForwarder::init$(nullptr, env);
}

void ClientNotifForwarder::init$($ClassLoader* defaultClassLoader, $Map* env) {
	$useLocalCurrentObjectStackCache();
	$set(this, infoList, $new($HashMap));
	this->clientSequenceNumber = -1;
	$set(this, mbeanRemovedNotifID, nullptr);
	this->state = ClientNotifForwarder::STOPPED;
	this->beingReconnected = false;
	this->maxNotifications = $EnvHelp::getMaxFetchNotifNumber(env);
	this->timeout = $EnvHelp::getFetchTimeout(env);
	$var($Executor, ex, $cast($Executor, $nc(env)->get("jmx.remote.x.fetch.notifications.executor"_s)));
	if (ex == nullptr) {
		$assign(ex, $new($ClientNotifForwarder$LinearExecutor));
	} else if ($nc(ClientNotifForwarder::logger)->traceOn()) {
		$nc(ClientNotifForwarder::logger)->trace("ClientNotifForwarder"_s, $$str({"executor is "_s, ex}));
	}
	$set(this, defaultClassLoader, defaultClassLoader);
	$set(this, executor, ex);
	$set(this, acc, $AccessController::getContext());
}

void ClientNotifForwarder::addNotificationListener($Integer* listenerID, $ObjectName* name, $NotificationListener* listener, $NotificationFilter* filter, Object$* handback, $Subject* delegationSubject) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($nc(ClientNotifForwarder::logger)->traceOn()) {
			$nc(ClientNotifForwarder::logger)->trace("addNotificationListener"_s, $$str({"Add the listener "_s, listener, " at "_s, name}));
		}
		$nc(this->infoList)->put(listenerID, $$new($ClientListenerInfo, listenerID, name, listener, filter, handback, delegationSubject));
		init(false);
	}
}

$IntegerArray* ClientNotifForwarder::getListenerIds($ObjectName* name, $NotificationListener* listener) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($List, ids, $new($ArrayList));
		$var($List, values, $new($ArrayList, $($nc(this->infoList)->values())));
		for (int32_t i = values->size() - 1; i >= 0; --i) {
			$var($ClientListenerInfo, li, $cast($ClientListenerInfo, values->get(i)));
			if ($nc(li)->sameAs(name, listener)) {
				ids->add($(li->getListenerID()));
			}
		}
		if (ids->isEmpty()) {
			$throwNew($ListenerNotFoundException, "Listener not found"_s);
		}
		return $fcast($IntegerArray, ids->toArray($$new($IntegerArray, 0)));
	}
}

$Integer* ClientNotifForwarder::getListenerId($ObjectName* name, $NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Integer, id, nullptr);
		$var($List, values, $new($ArrayList, $($nc(this->infoList)->values())));
		for (int32_t i = values->size() - 1; i >= 0; --i) {
			$var($ClientListenerInfo, li, $cast($ClientListenerInfo, values->get(i)));
			if ($nc(li)->sameAs(name, listener, filter, handback)) {
				$assign(id, li->getListenerID());
				break;
			}
		}
		if (id == nullptr) {
			$throwNew($ListenerNotFoundException, "Listener not found"_s);
		}
		return id;
	}
}

$IntegerArray* ClientNotifForwarder::removeNotificationListener($ObjectName* name, $NotificationListener* listener) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		beforeRemove();
		if ($nc(ClientNotifForwarder::logger)->traceOn()) {
			$nc(ClientNotifForwarder::logger)->trace("removeNotificationListener"_s, $$str({"Remove the listener "_s, listener, " from "_s, name}));
		}
		$var($IntegerArray, liIds, getListenerIds(name, listener));
		for (int32_t i = 0; i < $nc(liIds)->length; ++i) {
			$nc(this->infoList)->remove(liIds->get(i));
		}
		return liIds;
	}
}

$Integer* ClientNotifForwarder::removeNotificationListener($ObjectName* name, $NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($nc(ClientNotifForwarder::logger)->traceOn()) {
			$nc(ClientNotifForwarder::logger)->trace("removeNotificationListener"_s, $$str({"Remove the listener "_s, listener, " from "_s, name}));
		}
		beforeRemove();
		$var($Integer, liId, getListenerId(name, listener, filter, handback));
		$nc(this->infoList)->remove(liId);
		return liId;
	}
}

$IntegerArray* ClientNotifForwarder::removeNotificationListener($ObjectName* name) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($nc(ClientNotifForwarder::logger)->traceOn()) {
			$nc(ClientNotifForwarder::logger)->trace("removeNotificationListener"_s, $$str({"Remove all listeners registered at "_s, name}));
		}
		$var($List, ids, $new($ArrayList));
		$var($List, values, $new($ArrayList, $($nc(this->infoList)->values())));
		for (int32_t i = values->size() - 1; i >= 0; --i) {
			$var($ClientListenerInfo, li, $cast($ClientListenerInfo, values->get(i)));
			if ($nc(li)->sameAs(name)) {
				ids->add($(li->getListenerID()));
				$nc(this->infoList)->remove($(li->getListenerID()));
			}
		}
		return $fcast($IntegerArray, ids->toArray($$new($IntegerArray, 0)));
	}
}

$ClientListenerInfoArray* ClientNotifForwarder::preReconnection() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->state == ClientNotifForwarder::TERMINATED || this->beingReconnected) {
			$throwNew($IOException, "Illegal state."_s);
		}
		$var($ClientListenerInfoArray, tmp, $fcast($ClientListenerInfoArray, $nc($($nc(this->infoList)->values()))->toArray($$new($ClientListenerInfoArray, 0))));
		this->beingReconnected = true;
		$nc(this->infoList)->clear();
		return tmp;
	}
}

void ClientNotifForwarder::postReconnection($ClientListenerInfoArray* listenerInfos) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->state == ClientNotifForwarder::TERMINATED) {
			return;
		}
		while (this->state == ClientNotifForwarder::STOPPING) {
			try {
				$of(this)->wait();
			} catch ($InterruptedException& ire) {
				$var($IOException, ioe, $new($IOException, $(ire->toString())));
				$EnvHelp::initCause(ioe, ire);
				$throw(ioe);
			}
		}
		bool trace = $nc(ClientNotifForwarder::logger)->traceOn();
		int32_t len = $nc(listenerInfos)->length;
		for (int32_t i = 0; i < len; ++i) {
			if (trace) {
				$nc(ClientNotifForwarder::logger)->trace("addNotificationListeners"_s, $$str({"Add a listener at "_s, $($nc(listenerInfos->get(i))->getListenerID())}));
			}
			$nc(this->infoList)->put($($nc(listenerInfos->get(i))->getListenerID()), listenerInfos->get(i));
		}
		this->beingReconnected = false;
		$of(this)->notifyAll();
		if (this->currentFetchThread == $Thread::currentThread() || this->state == ClientNotifForwarder::STARTING || this->state == ClientNotifForwarder::STARTED) {
			try {
				$set(this, mbeanRemovedNotifID, addListenerForMBeanRemovedNotif());
			} catch ($Exception& e) {
				$var($String, msg, "Failed to register a listener to the mbean server: the client will not do clean when an MBean is unregistered"_s);
				if ($nc(ClientNotifForwarder::logger)->traceOn()) {
					$nc(ClientNotifForwarder::logger)->trace("init"_s, msg, e);
				}
			}
		} else {
			while (this->state == ClientNotifForwarder::STOPPING) {
				try {
					$of(this)->wait();
				} catch ($InterruptedException& ire) {
					$var($IOException, ioe, $new($IOException, $(ire->toString())));
					$EnvHelp::initCause(ioe, ire);
					$throw(ioe);
				}
			}
			if (listenerInfos->length > 0) {
				init(true);
			} else if ($nc(this->infoList)->size() > 0) {
				init(false);
			}
		}
	}
}

void ClientNotifForwarder::terminate() {
	$synchronized(this) {
		if (this->state == ClientNotifForwarder::TERMINATED) {
			return;
		}
		if ($nc(ClientNotifForwarder::logger)->traceOn()) {
			$nc(ClientNotifForwarder::logger)->trace("terminate"_s, "Terminating..."_s);
		}
		if (this->state == ClientNotifForwarder::STARTED) {
			$nc(this->infoList)->clear();
		}
		setState(ClientNotifForwarder::TERMINATED);
	}
}

void ClientNotifForwarder::setState(int32_t newState) {
	$synchronized(this) {
		if (this->state == ClientNotifForwarder::TERMINATED) {
			return;
		}
		this->state = newState;
		$of(this)->notifyAll();
	}
}

void ClientNotifForwarder::init(bool reconnected) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		switch (this->state) {
		case ClientNotifForwarder::STARTED:
			{
				return;
			}
		case ClientNotifForwarder::STARTING:
			{
				return;
			}
		case ClientNotifForwarder::TERMINATED:
			{
				$throwNew($IOException, "The ClientNotifForwarder has been terminated."_s);
			}
		case ClientNotifForwarder::STOPPING:
			{
				if (this->beingReconnected == true) {
					return;
				}
				while (this->state == ClientNotifForwarder::STOPPING) {
					try {
						$of(this)->wait();
					} catch ($InterruptedException& ire) {
						$var($IOException, ioe, $new($IOException, $(ire->toString())));
						$EnvHelp::initCause(ioe, ire);
						$throw(ioe);
					}
				}
				init(reconnected);
				return;
			}
		case ClientNotifForwarder::STOPPED:
			{
				if (this->beingReconnected == true) {
					return;
				}
				if ($nc(ClientNotifForwarder::logger)->traceOn()) {
					$nc(ClientNotifForwarder::logger)->trace("init"_s, "Initializing..."_s);
				}
				if (!reconnected) {
					try {
						$var($NotificationResult, nr, fetchNotifs(-1, 0, 0));
						if (this->state != ClientNotifForwarder::STOPPED) {
							return;
						}
						this->clientSequenceNumber = $nc(nr)->getNextSequenceNumber();
					} catch ($ClassNotFoundException& e) {
						$nc(ClientNotifForwarder::logger)->warning("init"_s, $$str({"Impossible exception: "_s, e}));
						$nc(ClientNotifForwarder::logger)->debug("init"_s, static_cast<$Throwable*>(e));
					}
				}
				try {
					$set(this, mbeanRemovedNotifID, addListenerForMBeanRemovedNotif());
				} catch ($Exception& e) {
					$var($String, msg, "Failed to register a listener to the mbean server: the client will not do clean when an MBean is unregistered"_s);
					if ($nc(ClientNotifForwarder::logger)->traceOn()) {
						$nc(ClientNotifForwarder::logger)->trace("init"_s, msg, e);
					}
				}
				setState(ClientNotifForwarder::STARTING);
				$nc(this->executor)->execute($$new($ClientNotifForwarder$NotifFetcher, this));
				return;
			}
		default:
			{
				$throwNew($IOException, "Unknown state."_s);
			}
		}
	}
}

void ClientNotifForwarder::beforeRemove() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		while (this->beingReconnected) {
			if (this->state == ClientNotifForwarder::TERMINATED) {
				$throwNew($IOException, "Terminated."_s);
			}
			try {
				$of(this)->wait();
			} catch ($InterruptedException& ire) {
				$var($IOException, ioe, $new($IOException, $(ire->toString())));
				$EnvHelp::initCause(ioe, ire);
				$throw(ioe);
			}
		}
		if (this->state == ClientNotifForwarder::TERMINATED) {
			$throwNew($IOException, "Terminated."_s);
		}
	}
}

void clinit$ClientNotifForwarder($Class* class$) {
	$assignStatic(ClientNotifForwarder::logger, $new($ClassLogger, "javax.management.remote.misc"_s, "ClientNotifForwarder"_s));
}

ClientNotifForwarder::ClientNotifForwarder() {
}

$Class* ClientNotifForwarder::load$($String* name, bool initialize) {
	$loadClass(ClientNotifForwarder, name, initialize, &_ClientNotifForwarder_ClassInfo_, clinit$ClientNotifForwarder, allocate$ClientNotifForwarder);
	return class$;
}

$Class* ClientNotifForwarder::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com