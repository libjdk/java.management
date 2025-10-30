#include <javax/management/monitor/Monitor.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Comparable.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runnable.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/CodeSource.h>
#include <java/security/PermissionCollection.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/ProtectionDomain.h>
#include <java/util/AbstractMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/ScheduledExecutorService.h>
#include <java/util/concurrent/ScheduledFuture.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/function/Supplier.h>
#include <javax/management/AttributeNotFoundException.h>
#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/IntrospectionException.h>
#include <javax/management/JMException.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanException.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerConnection.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/ObjectName.h>
#include <javax/management/OperationsException.h>
#include <javax/management/ReflectionException.h>
#include <javax/management/monitor/Monitor$1.h>
#include <javax/management/monitor/Monitor$DaemonThreadFactory.h>
#include <javax/management/monitor/Monitor$MonitorTask.h>
#include <javax/management/monitor/Monitor$NumericalType.h>
#include <javax/management/monitor/Monitor$ObservedObject.h>
#include <javax/management/monitor/Monitor$SchedulerTask.h>
#include <javax/management/monitor/MonitorNotification.h>
#include <jcpp.h>

#undef INTEGER_ZERO
#undef MILLISECONDS
#undef MONITOR_LOGGER
#undef OBSERVED_ATTRIBUTE_ERROR_NOTIFIED
#undef OBSERVED_ATTRIBUTE_TYPE_ERROR_NOTIFIED
#undef OBSERVED_OBJECT_ERROR_NOTIFIED
#undef RESET_FLAGS_ALREADY_NOTIFIED
#undef RUNTIME_ERROR_NOTIFIED
#undef THRESHOLD_ERROR_NOTIFIED
#undef TRACE

using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $ObjectNameArray = $Array<::javax::management::ObjectName>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $CodeSource = ::java::security::CodeSource;
using $PermissionCollection = ::java::security::PermissionCollection;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $AbstractMap = ::java::util::AbstractMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $Executors = ::java::util::concurrent::Executors;
using $Future = ::java::util::concurrent::Future;
using $ScheduledExecutorService = ::java::util::concurrent::ScheduledExecutorService;
using $ScheduledFuture = ::java::util::concurrent::ScheduledFuture;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $Supplier = ::java::util::function::Supplier;
using $AttributeNotFoundException = ::javax::management::AttributeNotFoundException;
using $InstanceNotFoundException = ::javax::management::InstanceNotFoundException;
using $IntrospectionException = ::javax::management::IntrospectionException;
using $JMException = ::javax::management::JMException;
using $MBeanAttributeInfo = ::javax::management::MBeanAttributeInfo;
using $MBeanException = ::javax::management::MBeanException;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanRegistration = ::javax::management::MBeanRegistration;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerConnection = ::javax::management::MBeanServerConnection;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcasterSupport = ::javax::management::NotificationBroadcasterSupport;
using $ObjectName = ::javax::management::ObjectName;
using $OperationsException = ::javax::management::OperationsException;
using $ReflectionException = ::javax::management::ReflectionException;
using $Monitor$1 = ::javax::management::monitor::Monitor$1;
using $Monitor$DaemonThreadFactory = ::javax::management::monitor::Monitor$DaemonThreadFactory;
using $Monitor$MonitorTask = ::javax::management::monitor::Monitor$MonitorTask;
using $Monitor$NumericalType = ::javax::management::monitor::Monitor$NumericalType;
using $Monitor$ObservedObject = ::javax::management::monitor::Monitor$ObservedObject;
using $Monitor$SchedulerTask = ::javax::management::monitor::Monitor$SchedulerTask;
using $MonitorMBean = ::javax::management::monitor::MonitorMBean;
using $MonitorNotification = ::javax::management::monitor::MonitorNotification;

namespace javax {
	namespace management {
		namespace monitor {

class Monitor$$Lambda$toString : public $Supplier {
	$class(Monitor$$Lambda$toString, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Throwable* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Monitor$$Lambda$toString>());
	}
	$Throwable* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Monitor$$Lambda$toString::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Monitor$$Lambda$toString, inst$)},
	{}
};
$MethodInfo Monitor$$Lambda$toString::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(Monitor$$Lambda$toString::*)($Throwable*)>(&Monitor$$Lambda$toString::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Monitor$$Lambda$toString::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.management.monitor.Monitor$$Lambda$toString",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* Monitor$$Lambda$toString::load$($String* name, bool initialize) {
	$loadClass(Monitor$$Lambda$toString, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Monitor$$Lambda$toString::class$ = nullptr;

$CompoundAttribute _Monitor_FieldAnnotations_alreadyNotified[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Monitor_FieldAnnotations_dbgTag[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Monitor_MethodAnnotations_getObservedObject20[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Monitor_MethodAnnotations_setObservedObject41[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Monitor_FieldInfo_[] = {
	{"observedAttribute", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Monitor, observedAttribute)},
	{"granularityPeriod", "J", nullptr, $PRIVATE, $field(Monitor, granularityPeriod)},
	{"isActive", "Z", nullptr, $PRIVATE, $field(Monitor, isActive$)},
	{"sequenceNumber", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $FINAL, $field(Monitor, sequenceNumber)},
	{"isComplexTypeAttribute", "Z", nullptr, $PRIVATE, $field(Monitor, isComplexTypeAttribute)},
	{"firstAttribute", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Monitor, firstAttribute)},
	{"remainingAttributes", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(Monitor, remainingAttributes)},
	{"noPermissionsACC", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Monitor, noPermissionsACC)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $VOLATILE, $field(Monitor, acc)},
	{"scheduler", "Ljava/util/concurrent/ScheduledExecutorService;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Monitor, scheduler)},
	{"executors", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/concurrent/ThreadPoolExecutor;Ljava/lang/Void;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Monitor, executors)},
	{"executorsLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Monitor, executorsLock)},
	{"maximumPoolSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Monitor, maximumPoolSize)},
	{"monitorFuture", "Ljava/util/concurrent/Future;", "Ljava/util/concurrent/Future<*>;", $PRIVATE, $field(Monitor, monitorFuture)},
	{"schedulerTask", "Ljavax/management/monitor/Monitor$SchedulerTask;", nullptr, $PRIVATE | $FINAL, $field(Monitor, schedulerTask)},
	{"schedulerFuture", "Ljava/util/concurrent/ScheduledFuture;", "Ljava/util/concurrent/ScheduledFuture<*>;", $PRIVATE, $field(Monitor, schedulerFuture)},
	{"capacityIncrement", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Monitor, capacityIncrement)},
	{"elementCount", "I", nullptr, $PROTECTED, $field(Monitor, elementCount)},
	{"alreadyNotified", "I", nullptr, $PROTECTED | $DEPRECATED, $field(Monitor, alreadyNotified), _Monitor_FieldAnnotations_alreadyNotified},
	{"alreadyNotifieds", "[I", nullptr, $PROTECTED, $field(Monitor, alreadyNotifieds)},
	{"server", "Ljavax/management/MBeanServer;", nullptr, $PROTECTED, $field(Monitor, server)},
	{"RESET_FLAGS_ALREADY_NOTIFIED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Monitor, RESET_FLAGS_ALREADY_NOTIFIED)},
	{"OBSERVED_OBJECT_ERROR_NOTIFIED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Monitor, OBSERVED_OBJECT_ERROR_NOTIFIED)},
	{"OBSERVED_ATTRIBUTE_ERROR_NOTIFIED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Monitor, OBSERVED_ATTRIBUTE_ERROR_NOTIFIED)},
	{"OBSERVED_ATTRIBUTE_TYPE_ERROR_NOTIFIED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Monitor, OBSERVED_ATTRIBUTE_TYPE_ERROR_NOTIFIED)},
	{"RUNTIME_ERROR_NOTIFIED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Monitor, RUNTIME_ERROR_NOTIFIED)},
	{"dbgTag", "Ljava/lang/String;", nullptr, $PROTECTED | $DEPRECATED, $field(Monitor, dbgTag), _Monitor_FieldAnnotations_dbgTag},
	{"observedObjects", "Ljava/util/List;", "Ljava/util/List<Ljavax/management/monitor/Monitor$ObservedObject;>;", $FINAL, $field(Monitor, observedObjects)},
	{"THRESHOLD_ERROR_NOTIFIED", "I", nullptr, $STATIC | $FINAL, $constField(Monitor, THRESHOLD_ERROR_NOTIFIED)},
	{"INTEGER_ZERO", "Ljava/lang/Integer;", nullptr, $STATIC | $FINAL, $staticField(Monitor, INTEGER_ZERO)},
	{}
};

$MethodInfo _Monitor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Monitor::*)()>(&Monitor::init$))},
	{"addObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"buildAlarmNotification", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable;)Ljavax/management/monitor/MonitorNotification;", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable<*>;)Ljavax/management/monitor/MonitorNotification;", 0},
	{"buildErrorNotification", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable;)Ljava/lang/String;", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable<*>;)Ljava/lang/String;", 0},
	{"classForType", "(Ljavax/management/monitor/Monitor$NumericalType;)Ljava/lang/Class;", "(Ljavax/management/monitor/Monitor$NumericalType;)Ljava/lang/Class<+Ljava/lang/Number;>;", $STATIC, $method(static_cast<$Class*(*)($Monitor$NumericalType*)>(&Monitor::classForType))},
	{"cleanupFutures", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(Monitor::*)()>(&Monitor::cleanupFutures))},
	{"cleanupIsComplexTypeAttribute", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(Monitor::*)()>(&Monitor::cleanupIsComplexTypeAttribute))},
	{"computeAlreadyNotifiedIndex", "(Ljavax/management/monitor/Monitor$ObservedObject;I[I)I", nullptr, $SYNCHRONIZED},
	{"containsObservedObject", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"createAlreadyNotified", "()V", nullptr, $SYNCHRONIZED},
	{"createObservedObject", "(Ljavax/management/ObjectName;)Ljavax/management/monitor/Monitor$ObservedObject;", nullptr, 0},
	{"doStart", "()V", nullptr, 0},
	{"doStop", "()V", nullptr, 0},
	{"getAttribute", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, nullptr, "javax.management.AttributeNotFoundException,javax.management.InstanceNotFoundException,javax.management.MBeanException,javax.management.ReflectionException,java.io.IOException"},
	{"getComparableFromAttribute", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Comparable;", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Comparable<*>;", 0, nullptr, "javax.management.AttributeNotFoundException"},
	{"getDerivedGauge", "(Ljavax/management/ObjectName;)Ljava/lang/Object;", nullptr, $SYNCHRONIZED},
	{"getDerivedGaugeFromComparable", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable;)Ljava/lang/Comparable;", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable<*>;)Ljava/lang/Comparable<*>;", 0},
	{"getDerivedGaugeTimeStamp", "(Ljavax/management/ObjectName;)J", nullptr, $SYNCHRONIZED},
	{"getGranularityPeriod", "()J", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getObservedAttribute", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getObservedObject", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _Monitor_MethodAnnotations_getObservedObject20},
	{"getObservedObject", "(Ljavax/management/ObjectName;)Ljavax/management/monitor/Monitor$ObservedObject;", nullptr, $SYNCHRONIZED},
	{"getObservedObjects", "()[Ljavax/management/ObjectName;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isActive", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isAlreadyNotified", "(Ljavax/management/monitor/Monitor$ObservedObject;I)Z", nullptr, $SYNCHRONIZED},
	{"isComparableTypeValid", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable;)Z", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable<*>;)Z", 0},
	{"isThresholdTypeValid", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable;)Z", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable<*>;)Z", 0},
	{"isValidForType", "(Ljava/lang/Object;Ljava/lang/Class;)Z", "(Ljava/lang/Object;Ljava/lang/Class<+Ljava/lang/Number;>;)Z", $STATIC, $method(static_cast<bool(*)(Object$*,$Class*)>(&Monitor::isValidForType))},
	{"monitor", "(Ljavax/management/monitor/Monitor$ObservedObject;I[I)V", nullptr, $PRIVATE, $method(static_cast<void(Monitor::*)($Monitor$ObservedObject*,int32_t,$ints*)>(&Monitor::monitor))},
	{"onErrorNotification", "(Ljavax/management/monitor/MonitorNotification;)V", nullptr, 0},
	{"postDeregister", "()V", nullptr, $PUBLIC},
	{"postRegister", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC},
	{"preDeregister", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"preRegister", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"removeObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"resetAllAlreadyNotified", "(Ljavax/management/monitor/Monitor$ObservedObject;I[I)V", nullptr, $SYNCHRONIZED},
	{"resetAlreadyNotified", "(Ljavax/management/monitor/Monitor$ObservedObject;II)V", nullptr, $SYNCHRONIZED},
	{"sendNotification", "(Ljava/lang/String;JLjava/lang/String;Ljava/lang/Object;Ljava/lang/Object;Ljavax/management/ObjectName;Z)V", nullptr, $PRIVATE, $method(static_cast<void(Monitor::*)($String*,int64_t,$String*,Object$*,Object$*,$ObjectName*,bool)>(&Monitor::sendNotification))},
	{"setAlreadyNotified", "(Ljavax/management/monitor/Monitor$ObservedObject;II[I)V", nullptr, $SYNCHRONIZED},
	{"setGranularityPeriod", "(J)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"setObservedAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"setObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, "java.lang.IllegalArgumentException", nullptr, _Monitor_MethodAnnotations_setObservedObject41},
	{"start", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateAlreadyNotified", "(Ljavax/management/monitor/Monitor$ObservedObject;I)V", nullptr, $SYNCHRONIZED},
	{"updateDeprecatedAlreadyNotified", "()V", nullptr, $SYNCHRONIZED},
	{}
};

$InnerClassInfo _Monitor_InnerClassesInfo_[] = {
	{"javax.management.monitor.Monitor$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.management.monitor.Monitor$DaemonThreadFactory", "javax.management.monitor.Monitor", "DaemonThreadFactory", $PRIVATE | $STATIC},
	{"javax.management.monitor.Monitor$MonitorTask", "javax.management.monitor.Monitor", "MonitorTask", $PRIVATE},
	{"javax.management.monitor.Monitor$SchedulerTask", "javax.management.monitor.Monitor", "SchedulerTask", $PRIVATE},
	{"javax.management.monitor.Monitor$NumericalType", "javax.management.monitor.Monitor", "NumericalType", $STATIC | $FINAL | $ENUM},
	{"javax.management.monitor.Monitor$ObservedObject", "javax.management.monitor.Monitor", "ObservedObject", $STATIC},
	{}
};

$ClassInfo _Monitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.management.monitor.Monitor",
	"javax.management.NotificationBroadcasterSupport",
	"javax.management.monitor.MonitorMBean,javax.management.MBeanRegistration",
	_Monitor_FieldInfo_,
	_Monitor_MethodInfo_,
	nullptr,
	nullptr,
	_Monitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.management.monitor.Monitor$1,javax.management.monitor.Monitor$DaemonThreadFactory,javax.management.monitor.Monitor$MonitorTask,javax.management.monitor.Monitor$MonitorTask$1,javax.management.monitor.Monitor$SchedulerTask,javax.management.monitor.Monitor$NumericalType,javax.management.monitor.Monitor$ObservedObject"
};

$Object* allocate$Monitor($Class* clazz) {
	return $of($alloc(Monitor));
}

int32_t Monitor::hashCode() {
	 return this->$NotificationBroadcasterSupport::hashCode();
}

bool Monitor::equals(Object$* arg0) {
	 return this->$NotificationBroadcasterSupport::equals(arg0);
}

$Object* Monitor::clone() {
	 return this->$NotificationBroadcasterSupport::clone();
}

$String* Monitor::toString() {
	 return this->$NotificationBroadcasterSupport::toString();
}

void Monitor::finalize() {
	this->$NotificationBroadcasterSupport::finalize();
}

$AccessControlContext* Monitor::noPermissionsACC = nullptr;
$ScheduledExecutorService* Monitor::scheduler = nullptr;
$Map* Monitor::executors = nullptr;
$Object* Monitor::executorsLock = nullptr;
int32_t Monitor::maximumPoolSize = 0;
$Integer* Monitor::INTEGER_ZERO = nullptr;

void Monitor::init$() {
	$NotificationBroadcasterSupport::init$();
	this->granularityPeriod = 10000;
	this->isActive$ = false;
	$set(this, sequenceNumber, $new($AtomicLong));
	this->isComplexTypeAttribute = false;
	$set(this, remainingAttributes, $new($CopyOnWriteArrayList));
	$set(this, acc, Monitor::noPermissionsACC);
	$set(this, schedulerTask, $new($Monitor$SchedulerTask, this));
	this->elementCount = 0;
	this->alreadyNotified = 0;
	$set(this, alreadyNotifieds, $new($ints, Monitor::capacityIncrement));
	$set(this, dbgTag, Monitor::class$->getName());
	$set(this, observedObjects, $new($CopyOnWriteArrayList));
}

$ObjectName* Monitor::preRegister($MBeanServer* server, $ObjectName* name) {
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, "initialize the reference on the MBean server"_s);
	$set(this, server, server);
	return name;
}

void Monitor::postRegister($Boolean* registrationDone) {
}

void Monitor::preDeregister() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, "stop the monitor"_s);
	stop();
}

void Monitor::postDeregister() {
}

$ObjectName* Monitor::getObservedObject() {
	$synchronized(this) {
		if ($nc(this->observedObjects)->isEmpty()) {
			return nullptr;
		} else {
			return $nc(($cast($Monitor$ObservedObject, $($nc(this->observedObjects)->get(0)))))->getObservedObject();
		}
	}
}

void Monitor::setObservedObject($ObjectName* object) {
	$synchronized(this) {
		if (object == nullptr) {
			$throwNew($IllegalArgumentException, "Null observed object"_s);
		}
		bool var$0 = $nc(this->observedObjects)->size() == 1;
		if (var$0 && containsObservedObject(object)) {
			return;
		}
		$nc(this->observedObjects)->clear();
		addObservedObject(object);
	}
}

void Monitor::addObservedObject($ObjectName* object) {
	$synchronized(this) {
		if (object == nullptr) {
			$throwNew($IllegalArgumentException, "Null observed object"_s);
		}
		if (containsObservedObject(object)) {
			return;
		}
		$var($Monitor$ObservedObject, o, createObservedObject(object));
		$nc(o)->setAlreadyNotified(Monitor::RESET_FLAGS_ALREADY_NOTIFIED);
		o->setDerivedGauge(Monitor::INTEGER_ZERO);
		o->setDerivedGaugeTimeStamp($System::currentTimeMillis());
		$nc(this->observedObjects)->add(o);
		createAlreadyNotified();
	}
}

void Monitor::removeObservedObject($ObjectName* object) {
	$synchronized(this) {
		if (object == nullptr) {
			return;
		}
		$var($Monitor$ObservedObject, o, getObservedObject(object));
		if (o != nullptr) {
			$nc(this->observedObjects)->remove($of(o));
			createAlreadyNotified();
		}
	}
}

bool Monitor::containsObservedObject($ObjectName* object) {
	$synchronized(this) {
		return getObservedObject(object) != nullptr;
	}
}

$ObjectNameArray* Monitor::getObservedObjects() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($ObjectNameArray, names, $new($ObjectNameArray, $nc(this->observedObjects)->size()));
		for (int32_t i = 0; i < names->length; ++i) {
			names->set(i, $($nc(($cast($Monitor$ObservedObject, $($nc(this->observedObjects)->get(i)))))->getObservedObject()));
		}
		return names;
	}
}

$String* Monitor::getObservedAttribute() {
	$synchronized(this) {
		return this->observedAttribute;
	}
}

void Monitor::setObservedAttribute($String* attribute) {
	$useLocalCurrentObjectStackCache();
	if (attribute == nullptr) {
		$throwNew($IllegalArgumentException, "Null observed attribute"_s);
	}
	$synchronized(this) {
		if (this->observedAttribute != nullptr && $nc(this->observedAttribute)->equals(attribute)) {
			return;
		}
		$set(this, observedAttribute, attribute);
		cleanupIsComplexTypeAttribute();
		int32_t index = 0;
		{
			$var($Iterator, i$, $nc(this->observedObjects)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Monitor$ObservedObject, o, $cast($Monitor$ObservedObject, i$->next()));
				{
					resetAlreadyNotified(o, index++, Monitor::OBSERVED_ATTRIBUTE_ERROR_NOTIFIED | Monitor::OBSERVED_ATTRIBUTE_TYPE_ERROR_NOTIFIED);
				}
			}
		}
	}
}

int64_t Monitor::getGranularityPeriod() {
	$synchronized(this) {
		return this->granularityPeriod;
	}
}

void Monitor::setGranularityPeriod(int64_t period) {
	$synchronized(this) {
		if (period <= 0) {
			$throwNew($IllegalArgumentException, "Nonpositive granularity period"_s);
		}
		if (this->granularityPeriod == period) {
			return;
		}
		this->granularityPeriod = period;
		if (isActive()) {
			cleanupFutures();
			$init($TimeUnit);
			$set(this, schedulerFuture, $nc(Monitor::scheduler)->schedule(static_cast<$Runnable*>(this->schedulerTask), period, $TimeUnit::MILLISECONDS));
		}
	}
}

bool Monitor::isActive() {
	$synchronized(this) {
		return this->isActive$;
	}
}

void Monitor::doStart() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, "start the monitor"_s);
	$synchronized(this) {
		if (isActive()) {
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, "the monitor is already active"_s);
			return;
		}
		this->isActive$ = true;
		cleanupIsComplexTypeAttribute();
		$set(this, acc, $AccessController::getContext());
		cleanupFutures();
		$nc(this->schedulerTask)->setMonitorTask($$new($Monitor$MonitorTask, this));
		$init($TimeUnit);
		$set(this, schedulerFuture, $nc(Monitor::scheduler)->schedule(static_cast<$Runnable*>(this->schedulerTask), getGranularityPeriod(), $TimeUnit::MILLISECONDS));
	}
}

void Monitor::doStop() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, "stop the monitor"_s);
	$synchronized(this) {
		if (!isActive()) {
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, "the monitor is not active"_s);
			return;
		}
		this->isActive$ = false;
		cleanupFutures();
		$set(this, acc, Monitor::noPermissionsACC);
		cleanupIsComplexTypeAttribute();
	}
}

$Object* Monitor::getDerivedGauge($ObjectName* object) {
	$synchronized(this) {
		$var($Monitor$ObservedObject, o, getObservedObject(object));
		return $of(o == nullptr ? ($Object*)nullptr : $nc(o)->getDerivedGauge());
	}
}

int64_t Monitor::getDerivedGaugeTimeStamp($ObjectName* object) {
	$synchronized(this) {
		$var($Monitor$ObservedObject, o, getObservedObject(object));
		return o == nullptr ? (int64_t)0 : $nc(o)->getDerivedGaugeTimeStamp();
	}
}

$Object* Monitor::getAttribute($MBeanServerConnection* mbsc, $ObjectName* object, $String* attribute) {
	$useLocalCurrentObjectStackCache();
	bool lookupMBeanInfo = false;
	$synchronized(this) {
		if (!isActive()) {
			$throwNew($IllegalArgumentException, "The monitor has been stopped"_s);
		}
		if (!$nc(attribute)->equals($(getObservedAttribute()))) {
			$throwNew($IllegalArgumentException, "The observed attribute has been changed"_s);
		}
		lookupMBeanInfo = (this->firstAttribute == nullptr && $nc(attribute)->indexOf((int32_t)u'.') != -1);
	}
	$var($MBeanInfo, mbi, nullptr);
	if (lookupMBeanInfo) {
		try {
			$assign(mbi, $nc(mbsc)->getMBeanInfo(object));
		} catch ($IntrospectionException& e) {
			$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
		}
	} else {
		$assign(mbi, nullptr);
	}
	$var($String, fa, nullptr);
	$synchronized(this) {
		if (!isActive()) {
			$throwNew($IllegalArgumentException, "The monitor has been stopped"_s);
		}
		if (!$nc(attribute)->equals($(getObservedAttribute()))) {
			$throwNew($IllegalArgumentException, "The observed attribute has been changed"_s);
		}
		if (this->firstAttribute == nullptr) {
			if ($nc(attribute)->indexOf((int32_t)u'.') != -1) {
				$var($MBeanAttributeInfoArray, mbaiArray, $nc(mbi)->getAttributes());
				{
					$var($MBeanAttributeInfoArray, arr$, mbaiArray);
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($MBeanAttributeInfo, mbai, arr$->get(i$));
						{
							if (attribute->equals($($nc(mbai)->getName()))) {
								$set(this, firstAttribute, attribute);
								break;
							}
						}
					}
				}
				if (this->firstAttribute == nullptr) {
					$var($StringArray, tokens, attribute->split("\\."_s, -1));
					$set(this, firstAttribute, tokens->get(0));
					for (int32_t i = 1; i < tokens->length; ++i) {
						$nc(this->remainingAttributes)->add(tokens->get(i));
					}
					this->isComplexTypeAttribute = true;
				}
			} else {
				$set(this, firstAttribute, attribute);
			}
		}
		$assign(fa, this->firstAttribute);
	}
	return $of($nc(mbsc)->getAttribute(object, fa));
}

$Comparable* Monitor::getComparableFromAttribute($ObjectName* object, $String* attribute, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if (this->isComplexTypeAttribute) {
		$var($Object, v, value);
		{
			$var($Iterator, i$, $nc(this->remainingAttributes)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, attr, $cast($String, i$->next()));
				$assign(v, $Introspector::elementFromComplex(v, attr));
			}
		}
		return $cast($Comparable, v);
	} else {
		return $cast($Comparable, value);
	}
}

bool Monitor::isComparableTypeValid($ObjectName* object, $String* attribute, $Comparable* value) {
	return true;
}

$String* Monitor::buildErrorNotification($ObjectName* object, $String* attribute, $Comparable* value) {
	return nullptr;
}

void Monitor::onErrorNotification($MonitorNotification* notification) {
}

$Comparable* Monitor::getDerivedGaugeFromComparable($ObjectName* object, $String* attribute, $Comparable* value) {
	return value;
}

$MonitorNotification* Monitor::buildAlarmNotification($ObjectName* object, $String* attribute, $Comparable* value) {
	return nullptr;
}

bool Monitor::isThresholdTypeValid($ObjectName* object, $String* attribute, $Comparable* value) {
	return true;
}

$Class* Monitor::classForType($Monitor$NumericalType* type) {
	$init(Monitor);
	$init($Monitor$1);
	switch ($nc($Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->get($nc((type))->ordinal())) {
	case 1:
		{
			$load($Byte);
			return $Byte::class$;
		}
	case 2:
		{
			$load($Short);
			return $Short::class$;
		}
	case 3:
		{
			$load($Integer);
			return $Integer::class$;
		}
	case 4:
		{
			$load($Long);
			return $Long::class$;
		}
	case 5:
		{
			$load($Float);
			return $Float::class$;
		}
	case 6:
		{
			$load($Double);
			return $Double::class$;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "Unsupported numerical type"_s);
		}
	}
}

bool Monitor::isValidForType(Object$* value, $Class* c) {
	$init(Monitor);
	return (($equals(value, Monitor::INTEGER_ZERO)) || $nc(c)->isInstance(value));
}

$Monitor$ObservedObject* Monitor::getObservedObject($ObjectName* object) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		{
			$var($Iterator, i$, $nc(this->observedObjects)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Monitor$ObservedObject, o, $cast($Monitor$ObservedObject, i$->next()));
				if ($nc($($nc(o)->getObservedObject()))->equals(object)) {
					return o;
				}
			}
		}
		return nullptr;
	}
}

$Monitor$ObservedObject* Monitor::createObservedObject($ObjectName* object) {
	return $new($Monitor$ObservedObject, object);
}

void Monitor::createAlreadyNotified() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		this->elementCount = $nc(this->observedObjects)->size();
		$set(this, alreadyNotifieds, $new($ints, this->elementCount));
		for (int32_t i = 0; i < this->elementCount; ++i) {
			$nc(this->alreadyNotifieds)->set(i, $nc(($cast($Monitor$ObservedObject, $($nc(this->observedObjects)->get(i)))))->getAlreadyNotified());
		}
		updateDeprecatedAlreadyNotified();
	}
}

void Monitor::updateDeprecatedAlreadyNotified() {
	$synchronized(this) {
		if (this->elementCount > 0) {
			this->alreadyNotified = $nc(this->alreadyNotifieds)->get(0);
		} else {
			this->alreadyNotified = 0;
		}
	}
}

void Monitor::updateAlreadyNotified($Monitor$ObservedObject* o, int32_t index) {
	$synchronized(this) {
		$nc(this->alreadyNotifieds)->set(index, $nc(o)->getAlreadyNotified());
		if (index == 0) {
			updateDeprecatedAlreadyNotified();
		}
	}
}

bool Monitor::isAlreadyNotified($Monitor$ObservedObject* o, int32_t mask) {
	$synchronized(this) {
		return (((int32_t)($nc(o)->getAlreadyNotified() & (uint32_t)mask)) != 0);
	}
}

void Monitor::setAlreadyNotified($Monitor$ObservedObject* o, int32_t index, int32_t mask, $ints* an) {
	$synchronized(this) {
		int32_t i = computeAlreadyNotifiedIndex(o, index, an);
		if (i == -1) {
			return;
		}
		$nc(o)->setAlreadyNotified(o->getAlreadyNotified() | mask);
		updateAlreadyNotified(o, i);
	}
}

void Monitor::resetAlreadyNotified($Monitor$ObservedObject* o, int32_t index, int32_t mask) {
	$synchronized(this) {
		$nc(o)->setAlreadyNotified((int32_t)(o->getAlreadyNotified() & (uint32_t)~mask));
		updateAlreadyNotified(o, index);
	}
}

void Monitor::resetAllAlreadyNotified($Monitor$ObservedObject* o, int32_t index, $ints* an) {
	$synchronized(this) {
		int32_t i = computeAlreadyNotifiedIndex(o, index, an);
		if (i == -1) {
			return;
		}
		$nc(o)->setAlreadyNotified(Monitor::RESET_FLAGS_ALREADY_NOTIFIED);
		updateAlreadyNotified(o, index);
	}
}

int32_t Monitor::computeAlreadyNotifiedIndex($Monitor$ObservedObject* o, int32_t index, $ints* an) {
	$synchronized(this) {
		if (an == this->alreadyNotifieds) {
			return index;
		} else {
			return $nc(this->observedObjects)->indexOf(o);
		}
	}
}

void Monitor::sendNotification($String* type, int64_t timeStamp, $String* msg, Object$* derGauge, Object$* trigger, $ObjectName* object, bool onError) {
	$useLocalCurrentObjectStackCache();
	if (!isActive()) {
		return;
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MONITOR_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, $$str({"send notification: \n\tNotification observed object = "_s, object, "\n\tNotification observed attribute = "_s, this->observedAttribute, "\n\tNotification derived gauge = "_s, derGauge}));
	}
	int64_t seqno = $nc(this->sequenceNumber)->getAndIncrement();
	$var($MonitorNotification, mn, $new($MonitorNotification, type, this, seqno, timeStamp, msg, object, this->observedAttribute, derGauge, trigger));
	if (onError) {
		onErrorNotification(mn);
	}
	sendNotification(mn);
}

void Monitor::monitor($Monitor$ObservedObject* o, int32_t index, $ints* an) {
	$useLocalCurrentObjectStackCache();
	$var($String, attribute, nullptr);
	$var($String, notifType, nullptr);
	$var($String, msg, nullptr);
	$var($Object, derGauge, nullptr);
	$var($Object, trigger, nullptr);
	$var($ObjectName, object, nullptr);
	$var($Comparable, value, nullptr);
	$var($MonitorNotification, alarm, nullptr);
	if (!isActive()) {
		return;
	}
	$synchronized(this) {
		$assign(object, $nc(o)->getObservedObject());
		$assign(attribute, getObservedAttribute());
		if (object == nullptr || attribute == nullptr) {
			return;
		}
	}
	$var($Object, attributeValue, nullptr);
	try {
		$assign(attributeValue, getAttribute(this->server, object, attribute));
		if (attributeValue == nullptr) {
			if (isAlreadyNotified(o, Monitor::OBSERVED_ATTRIBUTE_TYPE_ERROR_NOTIFIED)) {
				return;
			} else {
				$assign(notifType, "jmx.monitor.error.type"_s);
				setAlreadyNotified(o, index, Monitor::OBSERVED_ATTRIBUTE_TYPE_ERROR_NOTIFIED, an);
				$assign(msg, "The observed attribute value is null."_s);
				$init($JmxProperties);
				$init($System$Logger$Level);
				$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, msg);
			}
		}
	} catch ($NullPointerException& np_ex) {
		if (isAlreadyNotified(o, Monitor::RUNTIME_ERROR_NOTIFIED)) {
			return;
		} else {
			$assign(notifType, "jmx.monitor.error.runtime"_s);
			setAlreadyNotified(o, index, Monitor::RUNTIME_ERROR_NOTIFIED, an);
			$assign(msg, "The monitor must be registered in the MBean server or an MBeanServerConnection must be explicitly supplied."_s);
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, msg);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(Monitor$$Lambda$toString, static_cast<$NullPointerException*>(np_ex))));
		}
	} catch ($InstanceNotFoundException& inf_ex) {
		if (isAlreadyNotified(o, Monitor::OBSERVED_OBJECT_ERROR_NOTIFIED)) {
			return;
		} else {
			$assign(notifType, "jmx.monitor.error.mbean"_s);
			setAlreadyNotified(o, index, Monitor::OBSERVED_OBJECT_ERROR_NOTIFIED, an);
			$assign(msg, "The observed object must be accessible in the MBeanServerConnection."_s);
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, msg);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(Monitor$$Lambda$toString, static_cast<$InstanceNotFoundException*>(inf_ex))));
		}
	} catch ($AttributeNotFoundException& anf_ex) {
		if (isAlreadyNotified(o, Monitor::OBSERVED_ATTRIBUTE_ERROR_NOTIFIED)) {
			return;
		} else {
			$assign(notifType, "jmx.monitor.error.attribute"_s);
			setAlreadyNotified(o, index, Monitor::OBSERVED_ATTRIBUTE_ERROR_NOTIFIED, an);
			$assign(msg, "The observed attribute must be accessible in the observed object."_s);
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, msg);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(Monitor$$Lambda$toString, static_cast<$AttributeNotFoundException*>(anf_ex))));
		}
	} catch ($MBeanException& mb_ex) {
		if (isAlreadyNotified(o, Monitor::RUNTIME_ERROR_NOTIFIED)) {
			return;
		} else {
			$assign(notifType, "jmx.monitor.error.runtime"_s);
			setAlreadyNotified(o, index, Monitor::RUNTIME_ERROR_NOTIFIED, an);
			$assign(msg, mb_ex->getMessage() == nullptr ? ""_s : mb_ex->getMessage());
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, msg);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(Monitor$$Lambda$toString, static_cast<$MBeanException*>(mb_ex))));
		}
	} catch ($ReflectionException& ref_ex) {
		if (isAlreadyNotified(o, Monitor::RUNTIME_ERROR_NOTIFIED)) {
			return;
		} else {
			$assign(notifType, "jmx.monitor.error.runtime"_s);
			setAlreadyNotified(o, index, Monitor::RUNTIME_ERROR_NOTIFIED, an);
			$assign(msg, ref_ex->getMessage() == nullptr ? ""_s : ref_ex->getMessage());
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, msg);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(Monitor$$Lambda$toString, static_cast<$ReflectionException*>(ref_ex))));
		}
	} catch ($IOException& io_ex) {
		if (isAlreadyNotified(o, Monitor::RUNTIME_ERROR_NOTIFIED)) {
			return;
		} else {
			$assign(notifType, "jmx.monitor.error.runtime"_s);
			setAlreadyNotified(o, index, Monitor::RUNTIME_ERROR_NOTIFIED, an);
			$assign(msg, io_ex->getMessage() == nullptr ? ""_s : io_ex->getMessage());
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, msg);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(Monitor$$Lambda$toString, static_cast<$IOException*>(io_ex))));
		}
	} catch ($RuntimeException& rt_ex) {
		if (isAlreadyNotified(o, Monitor::RUNTIME_ERROR_NOTIFIED)) {
			return;
		} else {
			$assign(notifType, "jmx.monitor.error.runtime"_s);
			setAlreadyNotified(o, index, Monitor::RUNTIME_ERROR_NOTIFIED, an);
			$assign(msg, rt_ex->getMessage() == nullptr ? ""_s : rt_ex->getMessage());
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, msg);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(Monitor$$Lambda$toString, static_cast<$RuntimeException*>(rt_ex))));
		}
	}
	$synchronized(this) {
		if (!isActive()) {
			return;
		}
		if (!$nc(attribute)->equals($(getObservedAttribute()))) {
			return;
		}
		if (msg == nullptr) {
			try {
				$assign(value, getComparableFromAttribute(object, attribute, attributeValue));
			} catch ($ClassCastException& e) {
				if (isAlreadyNotified(o, Monitor::OBSERVED_ATTRIBUTE_TYPE_ERROR_NOTIFIED)) {
					return;
				} else {
					$assign(notifType, "jmx.monitor.error.type"_s);
					setAlreadyNotified(o, index, Monitor::OBSERVED_ATTRIBUTE_TYPE_ERROR_NOTIFIED, an);
					$assign(msg, "The observed attribute value does not implement the Comparable interface."_s);
					$init($JmxProperties);
					$init($System$Logger$Level);
					$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, msg);
					$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(Monitor$$Lambda$toString, static_cast<$ClassCastException*>(e))));
				}
			} catch ($AttributeNotFoundException& e) {
				if (isAlreadyNotified(o, Monitor::OBSERVED_ATTRIBUTE_ERROR_NOTIFIED)) {
					return;
				} else {
					$assign(notifType, "jmx.monitor.error.attribute"_s);
					setAlreadyNotified(o, index, Monitor::OBSERVED_ATTRIBUTE_ERROR_NOTIFIED, an);
					$assign(msg, "The observed attribute must be accessible in the observed object."_s);
					$init($JmxProperties);
					$init($System$Logger$Level);
					$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, msg);
					$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(Monitor$$Lambda$toString, static_cast<$AttributeNotFoundException*>(e))));
				}
			} catch ($RuntimeException& e) {
				if (isAlreadyNotified(o, Monitor::RUNTIME_ERROR_NOTIFIED)) {
					return;
				} else {
					$assign(notifType, "jmx.monitor.error.runtime"_s);
					setAlreadyNotified(o, index, Monitor::RUNTIME_ERROR_NOTIFIED, an);
					$assign(msg, e->getMessage() == nullptr ? ""_s : e->getMessage());
					$init($JmxProperties);
					$init($System$Logger$Level);
					$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, msg);
					$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(Monitor$$Lambda$toString, static_cast<$RuntimeException*>(e))));
				}
			}
		}
		if (msg == nullptr) {
			if (!isComparableTypeValid(object, attribute, value)) {
				if (isAlreadyNotified(o, Monitor::OBSERVED_ATTRIBUTE_TYPE_ERROR_NOTIFIED)) {
					return;
				} else {
					$assign(notifType, "jmx.monitor.error.type"_s);
					setAlreadyNotified(o, index, Monitor::OBSERVED_ATTRIBUTE_TYPE_ERROR_NOTIFIED, an);
					$assign(msg, "The observed attribute type is not valid."_s);
					$init($JmxProperties);
					$init($System$Logger$Level);
					$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, msg);
				}
			}
		}
		if (msg == nullptr) {
			if (!isThresholdTypeValid(object, attribute, value)) {
				if (isAlreadyNotified(o, Monitor::THRESHOLD_ERROR_NOTIFIED)) {
					return;
				} else {
					$assign(notifType, "jmx.monitor.error.threshold"_s);
					setAlreadyNotified(o, index, Monitor::THRESHOLD_ERROR_NOTIFIED, an);
					$assign(msg, "The threshold type is not valid."_s);
					$init($JmxProperties);
					$init($System$Logger$Level);
					$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, msg);
				}
			}
		}
		if (msg == nullptr) {
			$assign(msg, buildErrorNotification(object, attribute, value));
			if (msg != nullptr) {
				if (isAlreadyNotified(o, Monitor::RUNTIME_ERROR_NOTIFIED)) {
					return;
				} else {
					$assign(notifType, "jmx.monitor.error.runtime"_s);
					setAlreadyNotified(o, index, Monitor::RUNTIME_ERROR_NOTIFIED, an);
					$init($JmxProperties);
					$init($System$Logger$Level);
					$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, msg);
				}
			}
		}
		if (msg == nullptr) {
			resetAllAlreadyNotified(o, index, an);
			$assign(derGauge, getDerivedGaugeFromComparable(object, attribute, value));
			$nc(o)->setDerivedGauge(derGauge);
			o->setDerivedGaugeTimeStamp($System::currentTimeMillis());
			$assign(alarm, buildAlarmNotification(object, attribute, $cast($Comparable, derGauge)));
		}
	}
	if (msg != nullptr) {
		sendNotification(notifType, $System::currentTimeMillis(), msg, derGauge, trigger, object, true);
	}
	if (alarm != nullptr && alarm->getType() != nullptr) {
		$var($String, var$0, alarm->getType());
		int64_t var$1 = $System::currentTimeMillis();
		$var($String, var$2, alarm->getMessage());
		$var($Object, var$3, derGauge);
		sendNotification(var$0, var$1, var$2, var$3, $(alarm->getTrigger()), object, false);
	}
}

void Monitor::cleanupFutures() {
	$synchronized(this) {
		if (this->schedulerFuture != nullptr) {
			$nc(this->schedulerFuture)->cancel(false);
			$set(this, schedulerFuture, nullptr);
		}
		if (this->monitorFuture != nullptr) {
			$nc(this->monitorFuture)->cancel(false);
			$set(this, monitorFuture, nullptr);
		}
	}
}

void Monitor::cleanupIsComplexTypeAttribute() {
	$synchronized(this) {
		$set(this, firstAttribute, nullptr);
		$nc(this->remainingAttributes)->clear();
		this->isComplexTypeAttribute = false;
	}
}

void clinit$Monitor($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, maximumPoolSizeSysProp, "jmx.x.monitor.maximum.pool.size"_s);
	$assignStatic(Monitor::noPermissionsACC, $new($AccessControlContext, $$new($ProtectionDomainArray, {$$new($ProtectionDomain, nullptr, nullptr)})));
	$assignStatic(Monitor::scheduler, $Executors::newSingleThreadScheduledExecutor($$new($Monitor$DaemonThreadFactory, "Scheduler"_s)));
	$assignStatic(Monitor::executors, $new($WeakHashMap));
	$assignStatic(Monitor::executorsLock, $new($Object));
	{
		$var($String, maximumPoolSizeSysProp, "jmx.x.monitor.maximum.pool.size"_s);
		$var($String, maximumPoolSizeStr, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, maximumPoolSizeSysProp)))));
		if (maximumPoolSizeStr == nullptr || $($nc(maximumPoolSizeStr)->trim())->length() == 0) {
			Monitor::maximumPoolSize = 10;
		} else {
			int32_t maximumPoolSizeTmp = 10;
			try {
				maximumPoolSizeTmp = $Integer::parseInt(maximumPoolSizeStr);
			} catch ($NumberFormatException& e) {
				$init($JmxProperties);
				$init($System$Logger$Level);
				if ($nc($JmxProperties::MONITOR_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
					$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Wrong value for "_s, maximumPoolSizeSysProp, " system property"_s}), static_cast<$Throwable*>(e));
					$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, $$str({maximumPoolSizeSysProp, " defaults to 10"_s}));
				}
				maximumPoolSizeTmp = 10;
			}
			if (maximumPoolSizeTmp < 1) {
				Monitor::maximumPoolSize = 1;
			} else {
				Monitor::maximumPoolSize = maximumPoolSizeTmp;
			}
		}
	}
	$assignStatic(Monitor::INTEGER_ZERO, $Integer::valueOf(0));
}

Monitor::Monitor() {
}

$Class* Monitor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Monitor$$Lambda$toString::classInfo$.name)) {
			return Monitor$$Lambda$toString::load$(name, initialize);
		}
	}
	$loadClass(Monitor, name, initialize, &_Monitor_ClassInfo_, clinit$Monitor, allocate$Monitor);
	return class$;
}

$Class* Monitor::class$ = nullptr;

		} // monitor
	} // management
} // javax