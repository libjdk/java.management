#include <javax/management/MBeanServerDelegate.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/defaults/ServiceName.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/SecurityException.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanServerDelegateMBean.h>
#include <javax/management/MBeanServerNotification.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

#undef DELEGATE_NAME
#undef JMX_IMPL_NAME
#undef JMX_IMPL_VENDOR
#undef JMX_SPEC_NAME
#undef JMX_SPEC_VENDOR
#undef JMX_SPEC_VERSION
#undef MISC_LOGGER
#undef REGISTRATION_NOTIFICATION
#undef TRACE
#undef UNREGISTRATION_NOTIFICATION

using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $ServiceName = ::com::sun::jmx::defaults::ServiceName;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $MBeanServerDelegateMBean = ::javax::management::MBeanServerDelegateMBean;
using $MBeanServerNotification = ::javax::management::MBeanServerNotification;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcasterSupport = ::javax::management::NotificationBroadcasterSupport;
using $NotificationEmitter = ::javax::management::NotificationEmitter;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {

$FieldInfo _MBeanServerDelegate_FieldInfo_[] = {
	{"mbeanServerId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MBeanServerDelegate, mbeanServerId)},
	{"broadcaster", "Ljavax/management/NotificationBroadcasterSupport;", nullptr, $PRIVATE | $FINAL, $field(MBeanServerDelegate, broadcaster)},
	{"oldStamp", "J", nullptr, $PRIVATE | $STATIC, $staticField(MBeanServerDelegate, oldStamp)},
	{"stamp", "J", nullptr, $PRIVATE | $FINAL, $field(MBeanServerDelegate, stamp)},
	{"sequenceNumber", "J", nullptr, $PRIVATE, $field(MBeanServerDelegate, sequenceNumber)},
	{"notifsInfo", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MBeanServerDelegate, notifsInfo)},
	{"DELEGATE_NAME", "Ljavax/management/ObjectName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MBeanServerDelegate, DELEGATE_NAME)},
	{}
};

$MethodInfo _MBeanServerDelegate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MBeanServerDelegate::*)()>(&MBeanServerDelegate::init$))},
	{"addNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"getImplementationName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getImplementationVendor", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getImplementationVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMBeanServerId", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC},
	{"getSpecificationName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSpecificationVendor", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSpecificationVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStamp", "()J", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<int64_t(*)()>(&MBeanServerDelegate::getStamp))},
	{"removeNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/NotificationListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.management.ListenerNotFoundException"},
	{"sendNotification", "(Ljavax/management/Notification;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MBeanServerDelegate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MBeanServerDelegate",
	"java.lang.Object",
	"javax.management.MBeanServerDelegateMBean,javax.management.NotificationEmitter",
	_MBeanServerDelegate_FieldInfo_,
	_MBeanServerDelegate_MethodInfo_
};

$Object* allocate$MBeanServerDelegate($Class* clazz) {
	return $of($alloc(MBeanServerDelegate));
}

int32_t MBeanServerDelegate::hashCode() {
	 return this->$MBeanServerDelegateMBean::hashCode();
}

bool MBeanServerDelegate::equals(Object$* arg0) {
	 return this->$MBeanServerDelegateMBean::equals(arg0);
}

$Object* MBeanServerDelegate::clone() {
	 return this->$MBeanServerDelegateMBean::clone();
}

$String* MBeanServerDelegate::toString() {
	 return this->$MBeanServerDelegateMBean::toString();
}

void MBeanServerDelegate::finalize() {
	this->$MBeanServerDelegateMBean::finalize();
}

int64_t MBeanServerDelegate::oldStamp = 0;
$MBeanNotificationInfoArray* MBeanServerDelegate::notifsInfo = nullptr;
$ObjectName* MBeanServerDelegate::DELEGATE_NAME = nullptr;

void MBeanServerDelegate::init$() {
	this->sequenceNumber = 1;
	this->stamp = getStamp();
	$set(this, broadcaster, $new($NotificationBroadcasterSupport));
}

$String* MBeanServerDelegate::getMBeanServerId() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->mbeanServerId == nullptr) {
			$var($String, localHost, nullptr);
			try {
				$assign(localHost, $nc($($InetAddress::getLocalHost()))->getHostName());
			} catch ($UnknownHostException& e) {
				$init($JmxProperties);
				$init($System$Logger$Level);
				$nc($JmxProperties::MISC_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Can\'t get local host name, using \"localhost\" instead. Cause is: "_s, e}));
				$assign(localHost, "localhost"_s);
			}
			$set(this, mbeanServerId, $str({localHost, "_"_s, $$str(this->stamp)}));
		}
		return this->mbeanServerId;
	}
}

$String* MBeanServerDelegate::getSpecificationName() {
	$init($ServiceName);
	return $ServiceName::JMX_SPEC_NAME;
}

$String* MBeanServerDelegate::getSpecificationVersion() {
	$init($ServiceName);
	return $ServiceName::JMX_SPEC_VERSION;
}

$String* MBeanServerDelegate::getSpecificationVendor() {
	$init($ServiceName);
	return $ServiceName::JMX_SPEC_VENDOR;
}

$String* MBeanServerDelegate::getImplementationName() {
	$init($ServiceName);
	return $ServiceName::JMX_IMPL_NAME;
}

$String* MBeanServerDelegate::getImplementationVersion() {
	try {
		return $System::getProperty("java.runtime.version"_s);
	} catch ($SecurityException& e) {
		return ""_s;
	}
	$shouldNotReachHere();
}

$String* MBeanServerDelegate::getImplementationVendor() {
	$init($ServiceName);
	return $ServiceName::JMX_IMPL_VENDOR;
}

$MBeanNotificationInfoArray* MBeanServerDelegate::getNotificationInfo() {
	int32_t len = $nc(MBeanServerDelegate::notifsInfo)->length;
	$var($MBeanNotificationInfoArray, infos, $new($MBeanNotificationInfoArray, len));
	$System::arraycopy(MBeanServerDelegate::notifsInfo, 0, infos, 0, len);
	return infos;
}

void MBeanServerDelegate::addNotificationListener($NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$synchronized(this) {
		$nc(this->broadcaster)->addNotificationListener(listener, filter, handback);
	}
}

void MBeanServerDelegate::removeNotificationListener($NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$synchronized(this) {
		$nc(this->broadcaster)->removeNotificationListener(listener, filter, handback);
	}
}

void MBeanServerDelegate::removeNotificationListener($NotificationListener* listener) {
	$synchronized(this) {
		$nc(this->broadcaster)->removeNotificationListener(listener);
	}
}

void MBeanServerDelegate::sendNotification($Notification* notification) {
	if ($nc(notification)->getSequenceNumber() < 1) {
		$synchronized(this) {
			notification->setSequenceNumber(this->sequenceNumber++);
		}
	}
	$nc(this->broadcaster)->sendNotification(notification);
}

int64_t MBeanServerDelegate::getStamp() {
	$load(MBeanServerDelegate);
	$synchronized(class$) {
		$init(MBeanServerDelegate);
		int64_t s = $System::currentTimeMillis();
		if (MBeanServerDelegate::oldStamp >= s) {
			s = MBeanServerDelegate::oldStamp + 1;
		}
		MBeanServerDelegate::oldStamp = s;
		return s;
	}
}

void clinit$MBeanServerDelegate($Class* class$) {
	$useLocalCurrentObjectStackCache();
	MBeanServerDelegate::oldStamp = 0;
	{
		$init($MBeanServerNotification);
		$var($StringArray, types, $new($StringArray, {
			$MBeanServerNotification::UNREGISTRATION_NOTIFICATION,
			$MBeanServerNotification::REGISTRATION_NOTIFICATION
		}));
		$assignStatic(MBeanServerDelegate::notifsInfo, $new($MBeanNotificationInfoArray, 1));
		$nc(MBeanServerDelegate::notifsInfo)->set(0, $$new($MBeanNotificationInfo, types, "javax.management.MBeanServerNotification"_s, "Notifications sent by the MBeanServerDelegate MBean"_s));
	}
	$assignStatic(MBeanServerDelegate::DELEGATE_NAME, $Util::newObjectName("JMImplementation:type=MBeanServerDelegate"_s));
}

MBeanServerDelegate::MBeanServerDelegate() {
}

$Class* MBeanServerDelegate::load$($String* name, bool initialize) {
	$loadClass(MBeanServerDelegate, name, initialize, &_MBeanServerDelegate_ClassInfo_, clinit$MBeanServerDelegate, allocate$MBeanServerDelegate);
	return class$;
}

$Class* MBeanServerDelegate::class$ = nullptr;

	} // management
} // javax