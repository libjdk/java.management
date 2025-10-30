#include <com/sun/jmx/remote/internal/ServerNotifForwarder.h>

#include <com/sun/jmx/remote/internal/NotificationBuffer.h>
#include <com/sun/jmx/remote/internal/NotificationBufferFilter.h>
#include <com/sun/jmx/remote/internal/ServerNotifForwarder$1.h>
#include <com/sun/jmx/remote/internal/ServerNotifForwarder$2.h>
#include <com/sun/jmx/remote/internal/ServerNotifForwarder$IdAndFilter.h>
#include <com/sun/jmx/remote/internal/ServerNotifForwarder$NotifForwarderBufferFilter.h>
#include <com/sun/jmx/remote/security/NotificationAccessController.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/JMException.h>
#include <javax/management/ListenerNotFoundException.h>
#include <javax/management/MBeanPermission.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerDelegate.h>
#include <javax/management/MBeanServerNotification.h>
#include <javax/management/MalformedObjectNameException.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationBroadcaster.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <javax/management/OperationsException.h>
#include <javax/management/remote/NotificationResult.h>
#include <javax/management/remote/TargetedNotification.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

#undef DELEGATE_NAME
#undef UNREGISTRATION_NOTIFICATION

using $IntegerArray = $Array<::java::lang::Integer>;
using $TargetedNotificationArray = $Array<::javax::management::remote::TargetedNotification>;
using $NotificationBuffer = ::com::sun::jmx::remote::internal::NotificationBuffer;
using $NotificationBufferFilter = ::com::sun::jmx::remote::internal::NotificationBufferFilter;
using $ServerNotifForwarder$1 = ::com::sun::jmx::remote::internal::ServerNotifForwarder$1;
using $ServerNotifForwarder$2 = ::com::sun::jmx::remote::internal::ServerNotifForwarder$2;
using $ServerNotifForwarder$IdAndFilter = ::com::sun::jmx::remote::internal::ServerNotifForwarder$IdAndFilter;
using $ServerNotifForwarder$NotifForwarderBufferFilter = ::com::sun::jmx::remote::internal::ServerNotifForwarder$NotifForwarderBufferFilter;
using $NotificationAccessController = ::com::sun::jmx::remote::security::NotificationAccessController;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $InstanceNotFoundException = ::javax::management::InstanceNotFoundException;
using $JMException = ::javax::management::JMException;
using $ListenerNotFoundException = ::javax::management::ListenerNotFoundException;
using $MBeanPermission = ::javax::management::MBeanPermission;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerDelegate = ::javax::management::MBeanServerDelegate;
using $MBeanServerNotification = ::javax::management::MBeanServerNotification;
using $MalformedObjectNameException = ::javax::management::MalformedObjectNameException;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcaster = ::javax::management::NotificationBroadcaster;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $ObjectInstance = ::javax::management::ObjectInstance;
using $ObjectName = ::javax::management::ObjectName;
using $OperationsException = ::javax::management::OperationsException;
using $NotificationResult = ::javax::management::remote::NotificationResult;
using $TargetedNotification = ::javax::management::remote::TargetedNotification;
using $Subject = ::javax::security::auth::Subject;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ServerNotifForwarder_FieldInfo_[] = {
	{"bufferFilter", "Lcom/sun/jmx/remote/internal/ServerNotifForwarder$NotifForwarderBufferFilter;", nullptr, $PRIVATE | $FINAL, $field(ServerNotifForwarder, bufferFilter)},
	{"mbeanServer", "Ljavax/management/MBeanServer;", nullptr, $PRIVATE, $field(ServerNotifForwarder, mbeanServer)},
	{"connectionId", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ServerNotifForwarder, connectionId)},
	{"connectionTimeout", "J", nullptr, $PRIVATE | $FINAL, $field(ServerNotifForwarder, connectionTimeout)},
	{"listenerCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(ServerNotifForwarder, listenerCounter)},
	{"listenerCounterLock", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ServerNotifForwarder, listenerCounterLock)},
	{"notifBuffer", "Lcom/sun/jmx/remote/internal/NotificationBuffer;", nullptr, $PRIVATE, $field(ServerNotifForwarder, notifBuffer)},
	{"listenerMap", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/management/ObjectName;Ljava/util/Set<Lcom/sun/jmx/remote/internal/ServerNotifForwarder$IdAndFilter;>;>;", $PRIVATE | $FINAL, $field(ServerNotifForwarder, listenerMap)},
	{"terminated", "Z", nullptr, $PRIVATE, $field(ServerNotifForwarder, terminated)},
	{"terminationLock", "[I", nullptr, $PRIVATE | $FINAL, $field(ServerNotifForwarder, terminationLock)},
	{"broadcasterClass", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ServerNotifForwarder, broadcasterClass)},
	{"checkNotificationEmission", "Z", nullptr, $PRIVATE | $FINAL, $field(ServerNotifForwarder, checkNotificationEmission)},
	{"notificationAccessController", "Lcom/sun/jmx/remote/security/NotificationAccessController;", nullptr, $PRIVATE | $FINAL, $field(ServerNotifForwarder, notificationAccessController)},
	{"logger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ServerNotifForwarder, logger)},
	{}
};

$MethodInfo _ServerNotifForwarder_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/MBeanServer;Ljava/util/Map;Lcom/sun/jmx/remote/internal/NotificationBuffer;Ljava/lang/String;)V", "(Ljavax/management/MBeanServer;Ljava/util/Map<Ljava/lang/String;*>;Lcom/sun/jmx/remote/internal/NotificationBuffer;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(ServerNotifForwarder::*)($MBeanServer*,$Map*,$NotificationBuffer*,$String*)>(&ServerNotifForwarder::init$))},
	{"addNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationFilter;)Ljava/lang/Integer;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,java.io.IOException"},
	{"allowNotificationEmission", "(Ljavax/management/ObjectName;Ljavax/management/remote/TargetedNotification;)Z", nullptr, $PRIVATE, $method(static_cast<bool(ServerNotifForwarder::*)($ObjectName*,$TargetedNotification*)>(&ServerNotifForwarder::allowNotificationEmission))},
	{"checkMBeanPermission", "(Ljavax/management/ObjectName;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(ServerNotifForwarder::*)($ObjectName*,$String*)>(&ServerNotifForwarder::checkMBeanPermission)), "javax.management.InstanceNotFoundException,java.lang.SecurityException"},
	{"checkMBeanPermission", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($MBeanServer*,$ObjectName*,$String*)>(&ServerNotifForwarder::checkMBeanPermission)), "javax.management.InstanceNotFoundException,java.lang.SecurityException"},
	{"checkState", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerNotifForwarder::*)()>(&ServerNotifForwarder::checkState)), "java.io.IOException"},
	{"extractException", "(Ljava/lang/Exception;)Ljava/lang/Exception;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Exception*(*)($Exception*)>(&ServerNotifForwarder::extractException))},
	{"fetchNotifs", "(JJI)Ljavax/management/remote/NotificationResult;", nullptr, $PUBLIC},
	{"getListenerID", "()Ljava/lang/Integer;", nullptr, $PRIVATE, $method(static_cast<$Integer*(ServerNotifForwarder::*)()>(&ServerNotifForwarder::getListenerID))},
	{"getSubject", "()Ljavax/security/auth/Subject;", nullptr, $PRIVATE, $method(static_cast<$Subject*(ServerNotifForwarder::*)()>(&ServerNotifForwarder::getSubject))},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;[Ljava/lang/Integer;)V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljava/lang/Integer;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException,java.io.IOException"},
	{"snoopOnUnregister", "(Ljavax/management/remote/NotificationResult;)V", nullptr, $PRIVATE, $method(static_cast<void(ServerNotifForwarder::*)($NotificationResult*)>(&ServerNotifForwarder::snoopOnUnregister))},
	{"terminate", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServerNotifForwarder_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ServerNotifForwarder$IdAndFilter", "com.sun.jmx.remote.internal.ServerNotifForwarder", "IdAndFilter", $PRIVATE | $STATIC},
	{"com.sun.jmx.remote.internal.ServerNotifForwarder$NotifForwarderBufferFilter", "com.sun.jmx.remote.internal.ServerNotifForwarder", "NotifForwarderBufferFilter", $FINAL},
	{"com.sun.jmx.remote.internal.ServerNotifForwarder$2", nullptr, nullptr, 0},
	{"com.sun.jmx.remote.internal.ServerNotifForwarder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServerNotifForwarder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.remote.internal.ServerNotifForwarder",
	"java.lang.Object",
	nullptr,
	_ServerNotifForwarder_FieldInfo_,
	_ServerNotifForwarder_MethodInfo_,
	nullptr,
	nullptr,
	_ServerNotifForwarder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ServerNotifForwarder$IdAndFilter,com.sun.jmx.remote.internal.ServerNotifForwarder$NotifForwarderBufferFilter,com.sun.jmx.remote.internal.ServerNotifForwarder$2,com.sun.jmx.remote.internal.ServerNotifForwarder$1"
};

$Object* allocate$ServerNotifForwarder($Class* clazz) {
	return $of($alloc(ServerNotifForwarder));
}

int32_t ServerNotifForwarder::listenerCounter = 0;
$ints* ServerNotifForwarder::listenerCounterLock = nullptr;
$String* ServerNotifForwarder::broadcasterClass = nullptr;
$ClassLogger* ServerNotifForwarder::logger = nullptr;

void ServerNotifForwarder::init$($MBeanServer* mbeanServer, $Map* env, $NotificationBuffer* notifBuffer, $String* connectionId) {
	$set(this, bufferFilter, $new($ServerNotifForwarder$NotifForwarderBufferFilter, this));
	$set(this, listenerMap, $new($HashMap));
	this->terminated = false;
	$set(this, terminationLock, $new($ints, 0));
	$set(this, mbeanServer, mbeanServer);
	$set(this, notifBuffer, notifBuffer);
	$set(this, connectionId, connectionId);
	this->connectionTimeout = $EnvHelp::getServerConnectionTimeout(env);
	$var($String, stringBoolean, $cast($String, $nc(env)->get("jmx.remote.x.check.notification.emission"_s)));
	this->checkNotificationEmission = $EnvHelp::computeBooleanFromString(stringBoolean);
	$set(this, notificationAccessController, $EnvHelp::getNotificationAccessController(env));
}

$Integer* ServerNotifForwarder::addNotificationListener($ObjectName* name, $NotificationFilter* filter) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($nc(ServerNotifForwarder::logger)->traceOn()) {
		$nc(ServerNotifForwarder::logger)->trace("addNotificationListener"_s, $$str({"Add a listener at "_s, name}));
	}
	checkState();
	checkMBeanPermission(name, "addNotificationListener"_s);
	if (this->notificationAccessController != nullptr) {
		$nc(this->notificationAccessController)->addNotificationListener(this->connectionId, name, $(getSubject()));
	}
	try {
		bool instanceOf = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($ServerNotifForwarder$1, this, name)))))))->booleanValue();
		if (!instanceOf) {
			$throwNew($IllegalArgumentException, $$str({"The specified MBean ["_s, name, "] is not a NotificationBroadcaster object."_s}));
		}
	} catch ($PrivilegedActionException& e) {
		$throw($cast($InstanceNotFoundException, $(extractException(e))));
	}
	$var($Integer, id, getListenerID());
	$var($ObjectName, nn, name);
	bool var$0 = $nc(name)->getDomain() == nullptr;
	if (var$0 || $nc($($nc(name)->getDomain()))->isEmpty()) {
		try {
			$var($String, var$1, $nc(this->mbeanServer)->getDefaultDomain());
			$assign(nn, $ObjectName::getInstance(var$1, $(name->getKeyPropertyList())));
		} catch ($MalformedObjectNameException& mfoe) {
			$var($IOException, ioe, $new($IOException, $(mfoe->getMessage())));
			ioe->initCause(mfoe);
			$throw(ioe);
		}
	}
	$synchronized(this->listenerMap) {
		$var($ServerNotifForwarder$IdAndFilter, idaf, $new($ServerNotifForwarder$IdAndFilter, id, filter));
		$var($Set, set, $cast($Set, $nc(this->listenerMap)->get(nn)));
		if (set == nullptr) {
			$assign(set, $Collections::singleton(idaf));
		} else {
			if ($nc(set)->size() == 1) {
				$assign(set, $new($HashSet, static_cast<$Collection*>(set)));
			}
			$nc(set)->add(idaf);
		}
		$nc(this->listenerMap)->put(nn, set);
	}
	return id;
}

void ServerNotifForwarder::removeNotificationListener($ObjectName* name, $IntegerArray* listenerIDs) {
	$useLocalCurrentObjectStackCache();
	if ($nc(ServerNotifForwarder::logger)->traceOn()) {
		$nc(ServerNotifForwarder::logger)->trace("removeNotificationListener"_s, $$str({"Remove some listeners from "_s, name}));
	}
	checkState();
	checkMBeanPermission(name, "removeNotificationListener"_s);
	if (this->notificationAccessController != nullptr) {
		$nc(this->notificationAccessController)->removeNotificationListener(this->connectionId, name, $(getSubject()));
	}
	$var($Exception, re, nullptr);
	for (int32_t i = 0; i < $nc(listenerIDs)->length; ++i) {
		try {
			removeNotificationListener(name, listenerIDs->get(i));
		} catch ($Exception& e) {
			if (re != nullptr) {
				$assign(re, e);
			}
		}
	}
	if (re != nullptr) {
		$throw(re);
	}
}

void ServerNotifForwarder::removeNotificationListener($ObjectName* name, $Integer* listenerID) {
	$useLocalCurrentObjectStackCache();
	if ($nc(ServerNotifForwarder::logger)->traceOn()) {
		$nc(ServerNotifForwarder::logger)->trace("removeNotificationListener"_s, $$str({"Remove the listener "_s, listenerID, " from "_s, name}));
	}
	checkState();
	if (name != nullptr && !name->isPattern()) {
		if (!$nc(this->mbeanServer)->isRegistered(name)) {
			$throwNew($InstanceNotFoundException, $$str({"The MBean "_s, name, " is not registered."_s}));
		}
	}
	$synchronized(this->listenerMap) {
		$var($Set, set, $cast($Set, $nc(this->listenerMap)->get(name)));
		$var($ServerNotifForwarder$IdAndFilter, idaf, $new($ServerNotifForwarder$IdAndFilter, listenerID, nullptr));
		if (set == nullptr || !$nc(set)->contains(idaf)) {
			$throwNew($ListenerNotFoundException, "Listener not found"_s);
		}
		if ($nc(set)->size() == 1) {
			$nc(this->listenerMap)->remove(name);
		} else {
			set->remove(idaf);
		}
	}
}

$NotificationResult* ServerNotifForwarder::fetchNotifs(int64_t startSequenceNumber, int64_t timeout, int32_t maxNotifications) {
	$useLocalCurrentObjectStackCache();
	if ($nc(ServerNotifForwarder::logger)->traceOn()) {
		$nc(ServerNotifForwarder::logger)->trace("fetchNotifs"_s, $$str({"Fetching notifications, the startSequenceNumber is "_s, $$str(startSequenceNumber), ", the timeout is "_s, $$str(timeout), ", the maxNotifications is "_s, $$str(maxNotifications)}));
	}
	$var($NotificationResult, nr, nullptr);
	int64_t t = $Math::min(this->connectionTimeout, timeout);
	try {
		$assign(nr, $nc(this->notifBuffer)->fetchNotifications(this->bufferFilter, startSequenceNumber, t, maxNotifications));
		snoopOnUnregister(nr);
	} catch ($InterruptedException& ire) {
		$assign(nr, $new($NotificationResult, 0, 0, $$new($TargetedNotificationArray, 0)));
	}
	if ($nc(ServerNotifForwarder::logger)->traceOn()) {
		$nc(ServerNotifForwarder::logger)->trace("fetchNotifs"_s, $$str({"Forwarding the notifs: "_s, nr}));
	}
	return nr;
}

void ServerNotifForwarder::snoopOnUnregister($NotificationResult* nr) {
	$useLocalCurrentObjectStackCache();
	$var($List, copy, nullptr);
	$synchronized(this->listenerMap) {
		$init($MBeanServerDelegate);
		$var($Set, delegateSet, $cast($Set, $nc(this->listenerMap)->get($MBeanServerDelegate::DELEGATE_NAME)));
		if (delegateSet == nullptr || $nc(delegateSet)->isEmpty()) {
			return;
		}
		$assign(copy, $new($ArrayList, static_cast<$Collection*>(delegateSet)));
	}
	{
		$var($TargetedNotificationArray, arr$, $nc(nr)->getTargetedNotifications());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($TargetedNotification, tn, arr$->get(i$));
			{
				$var($Integer, id, $nc(tn)->getListenerID());
				{
					$var($Iterator, i$, $nc(copy)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($ServerNotifForwarder$IdAndFilter, idaf, $cast($ServerNotifForwarder$IdAndFilter, i$->next()));
						{
							if ($nc(idaf)->id == id) {
								$var($Notification, n, tn->getNotification());
								$init($MBeanServerNotification);
								if ($instanceOf($MBeanServerNotification, n) && $nc($($nc(n)->getType()))->equals($MBeanServerNotification::UNREGISTRATION_NOTIFICATION)) {
									$var($MBeanServerNotification, mbsn, $cast($MBeanServerNotification, n));
									$var($ObjectName, gone, mbsn->getMBeanName());
									$synchronized(this->listenerMap) {
										$nc(this->listenerMap)->remove(gone);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void ServerNotifForwarder::terminate() {
	if ($nc(ServerNotifForwarder::logger)->traceOn()) {
		$nc(ServerNotifForwarder::logger)->trace("terminate"_s, "Be called."_s);
	}
	$synchronized(this->terminationLock) {
		if (this->terminated) {
			return;
		}
		this->terminated = true;
		$synchronized(this->listenerMap) {
			$nc(this->listenerMap)->clear();
		}
	}
	if ($nc(ServerNotifForwarder::logger)->traceOn()) {
		$nc(ServerNotifForwarder::logger)->trace("terminate"_s, "Terminated."_s);
	}
}

$Subject* ServerNotifForwarder::getSubject() {
	return $Subject::getSubject($($AccessController::getContext()));
}

void ServerNotifForwarder::checkState() {
	$synchronized(this->terminationLock) {
		if (this->terminated) {
			$throwNew($IOException, "The connection has been terminated."_s);
		}
	}
}

$Integer* ServerNotifForwarder::getListenerID() {
	$synchronized(ServerNotifForwarder::listenerCounterLock) {
		return $Integer::valueOf(ServerNotifForwarder::listenerCounter++);
	}
}

void ServerNotifForwarder::checkMBeanPermission($ObjectName* name, $String* actions) {
	checkMBeanPermission(this->mbeanServer, name, actions);
}

void ServerNotifForwarder::checkMBeanPermission($MBeanServer* mbs, $ObjectName* name, $String* actions) {
	$init(ServerNotifForwarder);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($AccessControlContext, acc, $AccessController::getContext());
		$var($ObjectInstance, oi, nullptr);
		try {
			$assign(oi, $cast($ObjectInstance, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($ServerNotifForwarder$2, mbs, name)))));
		} catch ($PrivilegedActionException& e) {
			$throw($cast($InstanceNotFoundException, $(extractException(e))));
		}
		$var($String, classname, $nc(oi)->getClassName());
		$var($MBeanPermission, perm, $new($MBeanPermission, classname, nullptr, name, actions));
		sm->checkPermission(perm, acc);
	}
}

bool ServerNotifForwarder::allowNotificationEmission($ObjectName* name, $TargetedNotification* tn) {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->checkNotificationEmission) {
			checkMBeanPermission(name, "addNotificationListener"_s);
		}
		if (this->notificationAccessController != nullptr) {
			$var($String, var$0, this->connectionId);
			$var($ObjectName, var$1, name);
			$var($Notification, var$2, $nc(tn)->getNotification());
			$nc(this->notificationAccessController)->fetchNotification(var$0, var$1, var$2, $(getSubject()));
		}
		return true;
	} catch ($SecurityException& e) {
		if ($nc(ServerNotifForwarder::logger)->debugOn()) {
			$nc(ServerNotifForwarder::logger)->debug("fetchNotifs"_s, $$str({"Notification "_s, $($nc(tn)->getNotification()), " not forwarded: the caller didn\'t have the required access rights"_s}));
		}
		return false;
	} catch ($Exception& e) {
		if ($nc(ServerNotifForwarder::logger)->debugOn()) {
			$nc(ServerNotifForwarder::logger)->debug("fetchNotifs"_s, $$str({"Notification "_s, $($nc(tn)->getNotification()), " not forwarded: got an unexpected exception: "_s, e}));
		}
		return false;
	}
	$shouldNotReachHere();
}

$Exception* ServerNotifForwarder::extractException($Exception* e$renamed) {
	$init(ServerNotifForwarder);
	$var($Exception, e, e$renamed);
	while ($instanceOf($PrivilegedActionException, e)) {
		$assign(e, $nc(($cast($PrivilegedActionException, e)))->getException());
	}
	return e;
}

void clinit$ServerNotifForwarder($Class* class$) {
	ServerNotifForwarder::listenerCounter = 0;
	$assignStatic(ServerNotifForwarder::listenerCounterLock, $new($ints, 0));
	$load($NotificationBroadcaster);
	$assignStatic(ServerNotifForwarder::broadcasterClass, $NotificationBroadcaster::class$->getName());
	$assignStatic(ServerNotifForwarder::logger, $new($ClassLogger, "javax.management.remote.misc"_s, "ServerNotifForwarder"_s));
}

ServerNotifForwarder::ServerNotifForwarder() {
}

$Class* ServerNotifForwarder::load$($String* name, bool initialize) {
	$loadClass(ServerNotifForwarder, name, initialize, &_ServerNotifForwarder_ClassInfo_, clinit$ServerNotifForwarder, allocate$ServerNotifForwarder);
	return class$;
}

$Class* ServerNotifForwarder::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com