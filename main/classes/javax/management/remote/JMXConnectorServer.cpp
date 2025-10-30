#include <javax/management/remote/JMXConnectorServer.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/ObjectName.h>
#include <javax/management/remote/JMXConnectionNotification.h>
#include <javax/management/remote/JMXConnector.h>
#include <javax/management/remote/JMXConnectorFactory.h>
#include <javax/management/remote/JMXServiceURL.h>
#include <javax/management/remote/MBeanServerForwarder.h>
#include <jcpp.h>

#undef AUTHENTICATOR
#undef CLOSED
#undef FAILED
#undef OPENED

using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $MBeanRegistration = ::javax::management::MBeanRegistration;
using $MBeanServer = ::javax::management::MBeanServer;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcasterSupport = ::javax::management::NotificationBroadcasterSupport;
using $ObjectName = ::javax::management::ObjectName;
using $JMXAddressable = ::javax::management::remote::JMXAddressable;
using $JMXConnectionNotification = ::javax::management::remote::JMXConnectionNotification;
using $JMXConnector = ::javax::management::remote::JMXConnector;
using $JMXConnectorFactory = ::javax::management::remote::JMXConnectorFactory;
using $JMXConnectorServerMBean = ::javax::management::remote::JMXConnectorServerMBean;
using $JMXServiceURL = ::javax::management::remote::JMXServiceURL;
using $MBeanServerForwarder = ::javax::management::remote::MBeanServerForwarder;

namespace javax {
	namespace management {
		namespace remote {

$FieldInfo _JMXConnectorServer_FieldInfo_[] = {
	{"AUTHENTICATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMXConnectorServer, AUTHENTICATOR)},
	{"mbeanServer", "Ljavax/management/MBeanServer;", nullptr, $PRIVATE, $field(JMXConnectorServer, mbeanServer)},
	{"myName", "Ljavax/management/ObjectName;", nullptr, $PRIVATE, $field(JMXConnectorServer, myName)},
	{"connectionIds", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(JMXConnectorServer, connectionIds)},
	{"sequenceNumberLock", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMXConnectorServer, sequenceNumberLock)},
	{"sequenceNumber", "J", nullptr, $PRIVATE | $STATIC, $staticField(JMXConnectorServer, sequenceNumber)},
	{}
};

$MethodInfo _JMXConnectorServer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAddress", "()Ljavax/management/remote/JMXServiceURL;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMXConnectorServer::*)()>(&JMXConnectorServer::init$))},
	{"<init>", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC, $method(static_cast<void(JMXConnectorServer::*)($MBeanServer*)>(&JMXConnectorServer::init$))},
	{"connectionClosed", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"connectionFailed", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"connectionOpened", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getConnectionIds", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMBeanServer", "()Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC},
	{"getNotificationSource", "()Ljava/lang/Object;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$Object*(JMXConnectorServer::*)()>(&JMXConnectorServer::getNotificationSource))},
	{"nextSequenceNumber", "()J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)()>(&JMXConnectorServer::nextSequenceNumber))},
	{"postDeregister", "()V", nullptr, $PUBLIC},
	{"postRegister", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC},
	{"preDeregister", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.Exception"},
	{"preRegister", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"sendNotification", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(JMXConnectorServer::*)($String*,$String*,$String*,Object$*)>(&JMXConnectorServer::sendNotification))},
	{"setMBeanServerForwarder", "(Ljavax/management/remote/MBeanServerForwarder;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"toJMXConnector", "(Ljava/util/Map;)Ljavax/management/remote/JMXConnector;", "(Ljava/util/Map<Ljava/lang/String;*>;)Ljavax/management/remote/JMXConnector;", $PUBLIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JMXConnectorServer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.management.remote.JMXConnectorServer",
	"javax.management.NotificationBroadcasterSupport",
	"javax.management.remote.JMXConnectorServerMBean,javax.management.MBeanRegistration,javax.management.remote.JMXAddressable",
	_JMXConnectorServer_FieldInfo_,
	_JMXConnectorServer_MethodInfo_
};

$Object* allocate$JMXConnectorServer($Class* clazz) {
	return $of($alloc(JMXConnectorServer));
}

int32_t JMXConnectorServer::hashCode() {
	 return this->$NotificationBroadcasterSupport::hashCode();
}

bool JMXConnectorServer::equals(Object$* arg0) {
	 return this->$NotificationBroadcasterSupport::equals(arg0);
}

$Object* JMXConnectorServer::clone() {
	 return this->$NotificationBroadcasterSupport::clone();
}

$String* JMXConnectorServer::toString() {
	 return this->$NotificationBroadcasterSupport::toString();
}

void JMXConnectorServer::finalize() {
	this->$NotificationBroadcasterSupport::finalize();
}

$String* JMXConnectorServer::AUTHENTICATOR = nullptr;
$ints* JMXConnectorServer::sequenceNumberLock = nullptr;
int64_t JMXConnectorServer::sequenceNumber = 0;

void JMXConnectorServer::init$() {
	JMXConnectorServer::init$(nullptr);
}

void JMXConnectorServer::init$($MBeanServer* mbeanServer) {
	$NotificationBroadcasterSupport::init$();
	$set(this, mbeanServer, nullptr);
	$set(this, connectionIds, $new($ArrayList));
	$set(this, mbeanServer, mbeanServer);
}

$MBeanServer* JMXConnectorServer::getMBeanServer() {
	$synchronized(this) {
		return this->mbeanServer;
	}
}

void JMXConnectorServer::setMBeanServerForwarder($MBeanServerForwarder* mbsf) {
	$synchronized(this) {
		if (mbsf == nullptr) {
			$throwNew($IllegalArgumentException, "Invalid null argument: mbsf"_s);
		}
		if (this->mbeanServer != nullptr) {
			$nc(mbsf)->setMBeanServer(this->mbeanServer);
		}
		$set(this, mbeanServer, mbsf);
	}
}

$StringArray* JMXConnectorServer::getConnectionIds() {
	$synchronized(this->connectionIds) {
		return $fcast($StringArray, $nc(this->connectionIds)->toArray($$new($StringArray, $nc(this->connectionIds)->size())));
	}
}

$JMXConnector* JMXConnectorServer::toJMXConnector($Map* env) {
	if (!isActive()) {
		$throwNew($IllegalStateException, "Connector is not active"_s);
	}
	$var($JMXServiceURL, addr, getAddress());
	return $JMXConnectorFactory::newJMXConnector(addr, env);
}

$MBeanNotificationInfoArray* JMXConnectorServer::getNotificationInfo() {
	$useLocalCurrentObjectStackCache();
	$init($JMXConnectionNotification);
	$var($StringArray, types, $new($StringArray, {
		$JMXConnectionNotification::OPENED,
		$JMXConnectionNotification::CLOSED,
		$JMXConnectionNotification::FAILED
	}));
	$var($String, className, $JMXConnectionNotification::class$->getName());
	$var($String, description, "A client connection has been opened or closed"_s);
	return $new($MBeanNotificationInfoArray, {$$new($MBeanNotificationInfo, types, className, description)});
}

void JMXConnectorServer::connectionOpened($String* connectionId, $String* message, Object$* userData) {
	if (connectionId == nullptr) {
		$throwNew($NullPointerException, "Illegal null argument"_s);
	}
	$synchronized(this->connectionIds) {
		$nc(this->connectionIds)->add(connectionId);
	}
	$init($JMXConnectionNotification);
	sendNotification($JMXConnectionNotification::OPENED, connectionId, message, userData);
}

void JMXConnectorServer::connectionClosed($String* connectionId, $String* message, Object$* userData) {
	if (connectionId == nullptr) {
		$throwNew($NullPointerException, "Illegal null argument"_s);
	}
	$synchronized(this->connectionIds) {
		$nc(this->connectionIds)->remove($of(connectionId));
	}
	$init($JMXConnectionNotification);
	sendNotification($JMXConnectionNotification::CLOSED, connectionId, message, userData);
}

void JMXConnectorServer::connectionFailed($String* connectionId, $String* message, Object$* userData) {
	if (connectionId == nullptr) {
		$throwNew($NullPointerException, "Illegal null argument"_s);
	}
	$synchronized(this->connectionIds) {
		$nc(this->connectionIds)->remove($of(connectionId));
	}
	$init($JMXConnectionNotification);
	sendNotification($JMXConnectionNotification::FAILED, connectionId, message, userData);
}

void JMXConnectorServer::sendNotification($String* type, $String* connectionId, $String* message, Object$* userData) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, type);
	$var($Object, var$1, getNotificationSource());
	$var($String, var$2, connectionId);
	$var($Notification, notif, $new($JMXConnectionNotification, var$0, var$1, var$2, nextSequenceNumber(), message, userData));
	sendNotification(notif);
}

$Object* JMXConnectorServer::getNotificationSource() {
	$synchronized(this) {
		if (this->myName != nullptr) {
			return $of(this->myName);
		} else {
			return $of(this);
		}
	}
}

int64_t JMXConnectorServer::nextSequenceNumber() {
	$init(JMXConnectorServer);
	$synchronized(JMXConnectorServer::sequenceNumberLock) {
		return JMXConnectorServer::sequenceNumber++;
	}
}

$ObjectName* JMXConnectorServer::preRegister($MBeanServer* mbs, $ObjectName* name) {
	$synchronized(this) {
		if (mbs == nullptr || name == nullptr) {
			$throwNew($NullPointerException, "Null MBeanServer or ObjectName"_s);
		}
		if (this->mbeanServer == nullptr) {
			$set(this, mbeanServer, mbs);
			$set(this, myName, name);
		}
		return name;
	}
}

void JMXConnectorServer::postRegister($Boolean* registrationDone) {
}

void JMXConnectorServer::preDeregister() {
	$synchronized(this) {
		if (this->myName != nullptr && isActive()) {
			stop();
			$set(this, myName, nullptr);
		}
	}
}

void JMXConnectorServer::postDeregister() {
	$set(this, myName, nullptr);
}

void clinit$JMXConnectorServer($Class* class$) {
	$assignStatic(JMXConnectorServer::AUTHENTICATOR, "jmx.remote.authenticator"_s);
	$assignStatic(JMXConnectorServer::sequenceNumberLock, $new($ints, 0));
}

JMXConnectorServer::JMXConnectorServer() {
}

$Class* JMXConnectorServer::load$($String* name, bool initialize) {
	$loadClass(JMXConnectorServer, name, initialize, &_JMXConnectorServer_ClassInfo_, clinit$JMXConnectorServer, allocate$JMXConnectorServer);
	return class$;
}

$Class* JMXConnectorServer::class$ = nullptr;

		} // remote
	} // management
} // javax