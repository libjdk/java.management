#include <javax/management/monitor/CounterMonitor.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <java/io/Serializable.h>
#include <java/lang/Comparable.h>
#include <java/lang/Number.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/function/Supplier.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/ObjectName.h>
#include <javax/management/monitor/CounterMonitor$1.h>
#include <javax/management/monitor/CounterMonitor$CounterMonitorObservedObject.h>
#include <javax/management/monitor/CounterMonitorMBean.h>
#include <javax/management/monitor/Monitor$NumericalType.h>
#include <javax/management/monitor/Monitor$ObservedObject.h>
#include <javax/management/monitor/Monitor.h>
#include <javax/management/monitor/MonitorNotification.h>
#include <jcpp.h>

#undef BYTE
#undef INTEGER
#undef INTEGER_ZERO
#undef LONG
#undef MONITOR_LOGGER
#undef SHORT
#undef THRESHOLD_ERROR_NOTIFIED
#undef TRACE

using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $ObjectNameArray = $Array<::javax::management::ObjectName>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $Serializable = ::java::io::Serializable;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Short = ::java::lang::Short;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Supplier = ::java::util::function::Supplier;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $ObjectName = ::javax::management::ObjectName;
using $CounterMonitor$1 = ::javax::management::monitor::CounterMonitor$1;
using $CounterMonitor$CounterMonitorObservedObject = ::javax::management::monitor::CounterMonitor$CounterMonitorObservedObject;
using $CounterMonitorMBean = ::javax::management::monitor::CounterMonitorMBean;
using $Monitor = ::javax::management::monitor::Monitor;
using $Monitor$NumericalType = ::javax::management::monitor::Monitor$NumericalType;
using $Monitor$ObservedObject = ::javax::management::monitor::Monitor$ObservedObject;
using $MonitorNotification = ::javax::management::monitor::MonitorNotification;

namespace javax {
	namespace management {
		namespace monitor {

class CounterMonitor$$Lambda$toString : public $Supplier {
	$class(CounterMonitor$$Lambda$toString, $NO_CLASS_INIT, $Supplier)
public:
	void init$($StringBuilder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CounterMonitor$$Lambda$toString>());
	}
	$StringBuilder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CounterMonitor$$Lambda$toString::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CounterMonitor$$Lambda$toString, inst$)},
	{}
};
$MethodInfo CounterMonitor$$Lambda$toString::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(CounterMonitor$$Lambda$toString::*)($StringBuilder*)>(&CounterMonitor$$Lambda$toString::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CounterMonitor$$Lambda$toString::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.management.monitor.CounterMonitor$$Lambda$toString",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* CounterMonitor$$Lambda$toString::load$($String* name, bool initialize) {
	$loadClass(CounterMonitor$$Lambda$toString, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CounterMonitor$$Lambda$toString::class$ = nullptr;

$CompoundAttribute _CounterMonitor_MethodAnnotations_getDerivedGauge4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CounterMonitor_MethodAnnotations_getDerivedGaugeTimeStamp7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CounterMonitor_MethodAnnotations_getThreshold15[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CounterMonitor_MethodAnnotations_setThreshold25[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _CounterMonitor_FieldInfo_[] = {
	{"modulus", "Ljava/lang/Number;", nullptr, $PRIVATE, $field(CounterMonitor, modulus)},
	{"offset", "Ljava/lang/Number;", nullptr, $PRIVATE, $field(CounterMonitor, offset)},
	{"notify", "Z", nullptr, $PRIVATE, $field(CounterMonitor, notify$)},
	{"differenceMode", "Z", nullptr, $PRIVATE, $field(CounterMonitor, differenceMode)},
	{"initThreshold", "Ljava/lang/Number;", nullptr, $PRIVATE, $field(CounterMonitor, initThreshold)},
	{"types", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CounterMonitor, types)},
	{"notifsInfo", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CounterMonitor, notifsInfo)},
	{}
};

$MethodInfo _CounterMonitor_MethodInfo_[] = {
	{"*addObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsObservedObject", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getGranularityPeriod", "()J", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*getObservedAttribute", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*getObservedObject", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED},
	{"*getObservedObjects", "()[Ljavax/management/ObjectName;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CounterMonitor::*)()>(&CounterMonitor::init$))},
	{"buildAlarmNotification", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable;)Ljavax/management/monitor/MonitorNotification;", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable<*>;)Ljavax/management/monitor/MonitorNotification;", $SYNCHRONIZED},
	{"createObservedObject", "(Ljavax/management/ObjectName;)Ljavax/management/monitor/Monitor$ObservedObject;", nullptr, 0},
	{"getDerivedGauge", "(Ljavax/management/ObjectName;)Ljava/lang/Number;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDerivedGauge", "()Ljava/lang/Number;", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _CounterMonitor_MethodAnnotations_getDerivedGauge4},
	{"getDerivedGaugeFromComparable", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable;)Ljava/lang/Comparable;", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable<*>;)Ljava/lang/Comparable<*>;", $SYNCHRONIZED},
	{"getDerivedGaugeTimeStamp", "(Ljavax/management/ObjectName;)J", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDerivedGaugeTimeStamp", "()J", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _CounterMonitor_MethodAnnotations_getDerivedGaugeTimeStamp7},
	{"getDifferenceMode", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getInitThreshold", "()Ljava/lang/Number;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getModulus", "()Ljava/lang/Number;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC},
	{"getNotify", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getOffset", "()Ljava/lang/Number;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getThreshold", "(Ljavax/management/ObjectName;)Ljava/lang/Number;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getThreshold", "()Ljava/lang/Number;", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _CounterMonitor_MethodAnnotations_getThreshold15},
	{"*isActive", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isComparableTypeValid", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable;)Z", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable<*>;)Z", $SYNCHRONIZED},
	{"isThresholdTypeValid", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable;)Z", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable<*>;)Z", $SYNCHRONIZED},
	{"onErrorNotification", "(Ljavax/management/monitor/MonitorNotification;)V", nullptr, $SYNCHRONIZED},
	{"*removeObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setDerivedGaugeWithDifference", "(Ljava/lang/Number;Ljava/lang/Number;Ljavax/management/monitor/CounterMonitor$CounterMonitorObservedObject;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(CounterMonitor::*)($Number*,$Number*,$CounterMonitor$CounterMonitorObservedObject*)>(&CounterMonitor::setDerivedGaugeWithDifference))},
	{"setDifferenceMode", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setGranularityPeriod", "(J)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setInitThreshold", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"setModulus", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"setNotify", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setObservedAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED},
	{"setOffset", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"setThreshold", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, "java.lang.IllegalArgumentException", nullptr, _CounterMonitor_MethodAnnotations_setThreshold25},
	{"start", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"stop", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateDerivedGauge", "(Ljava/lang/Object;Ljavax/management/monitor/CounterMonitor$CounterMonitorObservedObject;)Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<bool(CounterMonitor::*)(Object$*,$CounterMonitor$CounterMonitorObservedObject*)>(&CounterMonitor::updateDerivedGauge))},
	{"updateNotifications", "(Ljavax/management/monitor/CounterMonitor$CounterMonitorObservedObject;)Ljavax/management/monitor/MonitorNotification;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$MonitorNotification*(CounterMonitor::*)($CounterMonitor$CounterMonitorObservedObject*)>(&CounterMonitor::updateNotifications))},
	{"updateThreshold", "(Ljavax/management/monitor/CounterMonitor$CounterMonitorObservedObject;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(CounterMonitor::*)($CounterMonitor$CounterMonitorObservedObject*)>(&CounterMonitor::updateThreshold))},
	{}
};

$InnerClassInfo _CounterMonitor_InnerClassesInfo_[] = {
	{"javax.management.monitor.CounterMonitor$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.management.monitor.CounterMonitor$CounterMonitorObservedObject", "javax.management.monitor.CounterMonitor", "CounterMonitorObservedObject", $STATIC},
	{}
};

$ClassInfo _CounterMonitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.monitor.CounterMonitor",
	"javax.management.monitor.Monitor",
	"javax.management.monitor.CounterMonitorMBean",
	_CounterMonitor_FieldInfo_,
	_CounterMonitor_MethodInfo_,
	nullptr,
	nullptr,
	_CounterMonitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.management.monitor.CounterMonitor$1,javax.management.monitor.CounterMonitor$CounterMonitorObservedObject"
};

$Object* allocate$CounterMonitor($Class* clazz) {
	return $of($alloc(CounterMonitor));
}

$ObjectName* CounterMonitor::getObservedObject() {
	 return this->$Monitor::getObservedObject();
}

void CounterMonitor::setObservedObject($ObjectName* object) {
	this->$Monitor::setObservedObject(object);
}

void CounterMonitor::addObservedObject($ObjectName* object) {
	this->$Monitor::addObservedObject(object);
}

void CounterMonitor::removeObservedObject($ObjectName* object) {
	this->$Monitor::removeObservedObject(object);
}

bool CounterMonitor::containsObservedObject($ObjectName* object) {
	 return this->$Monitor::containsObservedObject(object);
}

$ObjectNameArray* CounterMonitor::getObservedObjects() {
	 return this->$Monitor::getObservedObjects();
}

$String* CounterMonitor::getObservedAttribute() {
	 return this->$Monitor::getObservedAttribute();
}

void CounterMonitor::setObservedAttribute($String* attribute) {
	this->$Monitor::setObservedAttribute(attribute);
}

int64_t CounterMonitor::getGranularityPeriod() {
	 return this->$Monitor::getGranularityPeriod();
}

void CounterMonitor::setGranularityPeriod(int64_t period) {
	this->$Monitor::setGranularityPeriod(period);
}

bool CounterMonitor::isActive() {
	 return this->$Monitor::isActive();
}

int32_t CounterMonitor::hashCode() {
	 return this->$Monitor::hashCode();
}

bool CounterMonitor::equals(Object$* arg0) {
	 return this->$Monitor::equals(arg0);
}

$Object* CounterMonitor::clone() {
	 return this->$Monitor::clone();
}

$String* CounterMonitor::toString() {
	 return this->$Monitor::toString();
}

void CounterMonitor::finalize() {
	this->$Monitor::finalize();
}

CounterMonitor::MemberClass0$::MemberClass0$() {
	$patchMemberClass(CounterMonitor, $CounterMonitorMBean, memberClass0$);
}

$Number* CounterMonitor::MemberClass0$::getDerivedGauge() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->getDerivedGauge();
}

int64_t CounterMonitor::MemberClass0$::getDerivedGaugeTimeStamp() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->getDerivedGaugeTimeStamp();
}

$Number* CounterMonitor::MemberClass0$::getThreshold() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->getThreshold();
}

void CounterMonitor::MemberClass0$::setThreshold($Number* value) {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->setThreshold(value);
}

$Number* CounterMonitor::MemberClass0$::getDerivedGauge($ObjectName* object) {
	return $cast($Number, ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->getDerivedGauge(object));
}

int64_t CounterMonitor::MemberClass0$::getDerivedGaugeTimeStamp($ObjectName* object) {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->getDerivedGaugeTimeStamp(object);
}

$Number* CounterMonitor::MemberClass0$::getThreshold($ObjectName* object) {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->getThreshold(object);
}

$Number* CounterMonitor::MemberClass0$::getInitThreshold() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->getInitThreshold();
}

void CounterMonitor::MemberClass0$::setInitThreshold($Number* value) {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->setInitThreshold(value);
}

$Number* CounterMonitor::MemberClass0$::getOffset() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->getOffset();
}

void CounterMonitor::MemberClass0$::setOffset($Number* value) {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->setOffset(value);
}

$Number* CounterMonitor::MemberClass0$::getModulus() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->getModulus();
}

void CounterMonitor::MemberClass0$::setModulus($Number* value) {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->setModulus(value);
}

bool CounterMonitor::MemberClass0$::getNotify() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->getNotify();
}

void CounterMonitor::MemberClass0$::setNotify(bool value) {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->setNotify(value);
}

bool CounterMonitor::MemberClass0$::getDifferenceMode() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->getDifferenceMode();
}

void CounterMonitor::MemberClass0$::setDifferenceMode(bool value) {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->setDifferenceMode(value);
}

void CounterMonitor::MemberClass0$::start() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->start();
}

void CounterMonitor::MemberClass0$::stop() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->stop();
}

void CounterMonitor::MemberClass0$::addObservedObject($ObjectName* object) {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->addObservedObject(object);
}

void CounterMonitor::MemberClass0$::removeObservedObject($ObjectName* object) {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->removeObservedObject(object);
}

bool CounterMonitor::MemberClass0$::containsObservedObject($ObjectName* object) {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->containsObservedObject(object);
}

$ObjectNameArray* CounterMonitor::MemberClass0$::getObservedObjects() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->getObservedObjects();
}

$ObjectName* CounterMonitor::MemberClass0$::getObservedObject() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->getObservedObject();
}

void CounterMonitor::MemberClass0$::setObservedObject($ObjectName* object) {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->setObservedObject(object);
}

$String* CounterMonitor::MemberClass0$::getObservedAttribute() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->getObservedAttribute();
}

void CounterMonitor::MemberClass0$::setObservedAttribute($String* attribute) {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->setObservedAttribute(attribute);
}

int64_t CounterMonitor::MemberClass0$::getGranularityPeriod() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->getGranularityPeriod();
}

void CounterMonitor::MemberClass0$::setGranularityPeriod(int64_t period) {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->setGranularityPeriod(period);
}

bool CounterMonitor::MemberClass0$::isActive() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->isActive();
}

int32_t CounterMonitor::MemberClass0$::hashCode() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->hashCode();
}

bool CounterMonitor::MemberClass0$::equals(Object$* arg0) {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->equals(arg0);
}

$Object* CounterMonitor::MemberClass0$::clone() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->clone();
}

$String* CounterMonitor::MemberClass0$::toString() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->toString();
}

void CounterMonitor::MemberClass0$::finalize() {
	return ((CounterMonitor*)(void*)((int8_t*)(void*)this - $offsetof(CounterMonitor, memberClass0$)))->finalize();
}

$StringArray* CounterMonitor::types = nullptr;
$MBeanNotificationInfoArray* CounterMonitor::notifsInfo = nullptr;

void CounterMonitor::init$() {
	$Monitor::init$();
	$init($Monitor);
	$set(this, modulus, $Monitor::INTEGER_ZERO);
	$set(this, offset, $Monitor::INTEGER_ZERO);
	this->notify$ = false;
	this->differenceMode = false;
	$set(this, initThreshold, $Monitor::INTEGER_ZERO);
}

void CounterMonitor::start() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (isActive()) {
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, "the monitor is already active"_s);
			return;
		}
		{
			$var($Iterator, i$, $nc(this->observedObjects)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Monitor$ObservedObject, o, $cast($Monitor$ObservedObject, i$->next()));
				{
					$var($CounterMonitor$CounterMonitorObservedObject, cmo, $cast($CounterMonitor$CounterMonitorObservedObject, o));
					$nc(cmo)->setThreshold(this->initThreshold);
					cmo->setModulusExceeded(false);
					cmo->setEventAlreadyNotified(false);
					cmo->setPreviousScanCounter(nullptr);
				}
			}
		}
		doStart();
	}
}

void CounterMonitor::stop() {
	$synchronized(this) {
		doStop();
	}
}

$Object* CounterMonitor::getDerivedGauge($ObjectName* object) {
	$synchronized(this) {
		return $of($cast($Number, $Monitor::getDerivedGauge(object)));
	}
}

int64_t CounterMonitor::getDerivedGaugeTimeStamp($ObjectName* object) {
	$synchronized(this) {
		return $Monitor::getDerivedGaugeTimeStamp(object);
	}
}

$Number* CounterMonitor::getThreshold($ObjectName* object) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($CounterMonitor$CounterMonitorObservedObject, o, $cast($CounterMonitor$CounterMonitorObservedObject, getObservedObject(object)));
		if (o == nullptr) {
			return nullptr;
		}
		bool var$1 = $nc(this->offset)->longValue() > (int64_t)0;
		bool var$0 = var$1 && $nc(this->modulus)->longValue() > (int64_t)0;
		if (var$0) {
			int64_t var$2 = $nc($($nc(o)->getThreshold()))->longValue();
			var$0 = var$2 > $nc(this->modulus)->longValue();
		}
		if (var$0) {
			return this->initThreshold;
		} else {
			return o->getThreshold();
		}
	}
}

$Number* CounterMonitor::getInitThreshold() {
	$synchronized(this) {
		return this->initThreshold;
	}
}

void CounterMonitor::setInitThreshold($Number* value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (value == nullptr) {
			$throwNew($IllegalArgumentException, "Null threshold"_s);
		}
		if ($nc(value)->longValue() < (int64_t)0) {
			$throwNew($IllegalArgumentException, "Negative threshold"_s);
		}
		if ($nc($of(this->initThreshold))->equals(value)) {
			return;
		}
		$set(this, initThreshold, value);
		int32_t index = 0;
		{
			$var($Iterator, i$, $nc(this->observedObjects)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Monitor$ObservedObject, o, $cast($Monitor$ObservedObject, i$->next()));
				{
					resetAlreadyNotified(o, index++, $Monitor::THRESHOLD_ERROR_NOTIFIED);
					$var($CounterMonitor$CounterMonitorObservedObject, cmo, $cast($CounterMonitor$CounterMonitorObservedObject, o));
					$nc(cmo)->setThreshold(value);
					cmo->setModulusExceeded(false);
					cmo->setEventAlreadyNotified(false);
				}
			}
		}
	}
}

$Number* CounterMonitor::getDerivedGauge() {
	$synchronized(this) {
		if ($nc(this->observedObjects)->isEmpty()) {
			return nullptr;
		} else {
			return $cast($Number, $nc(($cast($Monitor$ObservedObject, $($nc(this->observedObjects)->get(0)))))->getDerivedGauge());
		}
	}
}

int64_t CounterMonitor::getDerivedGaugeTimeStamp() {
	$synchronized(this) {
		if ($nc(this->observedObjects)->isEmpty()) {
			return 0;
		} else {
			return $nc(($cast($Monitor$ObservedObject, $($nc(this->observedObjects)->get(0)))))->getDerivedGaugeTimeStamp();
		}
	}
}

$Number* CounterMonitor::getThreshold() {
	$synchronized(this) {
		return getThreshold($(getObservedObject()));
	}
}

void CounterMonitor::setThreshold($Number* value) {
	$synchronized(this) {
		setInitThreshold(value);
	}
}

$Number* CounterMonitor::getOffset() {
	$synchronized(this) {
		return this->offset;
	}
}

void CounterMonitor::setOffset($Number* value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (value == nullptr) {
			$throwNew($IllegalArgumentException, "Null offset"_s);
		}
		if ($nc(value)->longValue() < (int64_t)0) {
			$throwNew($IllegalArgumentException, "Negative offset"_s);
		}
		if ($nc($of(this->offset))->equals(value)) {
			return;
		}
		$set(this, offset, value);
		int32_t index = 0;
		{
			$var($Iterator, i$, $nc(this->observedObjects)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Monitor$ObservedObject, o, $cast($Monitor$ObservedObject, i$->next()));
				{
					resetAlreadyNotified(o, index++, $Monitor::THRESHOLD_ERROR_NOTIFIED);
				}
			}
		}
	}
}

$Number* CounterMonitor::getModulus() {
	$synchronized(this) {
		return this->modulus;
	}
}

void CounterMonitor::setModulus($Number* value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (value == nullptr) {
			$throwNew($IllegalArgumentException, "Null modulus"_s);
		}
		if ($nc(value)->longValue() < (int64_t)0) {
			$throwNew($IllegalArgumentException, "Negative modulus"_s);
		}
		if ($nc($of(this->modulus))->equals(value)) {
			return;
		}
		$set(this, modulus, value);
		int32_t index = 0;
		{
			$var($Iterator, i$, $nc(this->observedObjects)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Monitor$ObservedObject, o, $cast($Monitor$ObservedObject, i$->next()));
				{
					resetAlreadyNotified(o, index++, $Monitor::THRESHOLD_ERROR_NOTIFIED);
					$var($CounterMonitor$CounterMonitorObservedObject, cmo, $cast($CounterMonitor$CounterMonitorObservedObject, o));
					$nc(cmo)->setModulusExceeded(false);
				}
			}
		}
	}
}

bool CounterMonitor::getNotify() {
	$synchronized(this) {
		return this->notify$;
	}
}

void CounterMonitor::setNotify(bool value) {
	$synchronized(this) {
		if (this->notify$ == value) {
			return;
		}
		this->notify$ = value;
	}
}

bool CounterMonitor::getDifferenceMode() {
	$synchronized(this) {
		return this->differenceMode;
	}
}

void CounterMonitor::setDifferenceMode(bool value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->differenceMode == value) {
			return;
		}
		this->differenceMode = value;
		{
			$var($Iterator, i$, $nc(this->observedObjects)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Monitor$ObservedObject, o, $cast($Monitor$ObservedObject, i$->next()));
				{
					$var($CounterMonitor$CounterMonitorObservedObject, cmo, $cast($CounterMonitor$CounterMonitorObservedObject, o));
					$nc(cmo)->setThreshold(this->initThreshold);
					cmo->setModulusExceeded(false);
					cmo->setEventAlreadyNotified(false);
					cmo->setPreviousScanCounter(nullptr);
				}
			}
		}
	}
}

$MBeanNotificationInfoArray* CounterMonitor::getNotificationInfo() {
	return $cast($MBeanNotificationInfoArray, $nc(CounterMonitor::notifsInfo)->clone());
}

bool CounterMonitor::updateDerivedGauge(Object$* scanCounter, $CounterMonitor$CounterMonitorObservedObject* o) {
	$synchronized(this) {
		bool is_derived_gauge_valid = false;
		if (this->differenceMode) {
			if ($nc(o)->getPreviousScanCounter() != nullptr) {
				setDerivedGaugeWithDifference($cast($Number, scanCounter), nullptr, o);
				if ($nc(($cast($Number, $(o->getDerivedGauge()))))->longValue() < (int64_t)0) {
					if ($nc(this->modulus)->longValue() > (int64_t)0) {
						setDerivedGaugeWithDifference($cast($Number, scanCounter), this->modulus, o);
					}
					o->setThreshold(this->initThreshold);
					o->setEventAlreadyNotified(false);
				}
				is_derived_gauge_valid = true;
			} else {
				is_derived_gauge_valid = false;
			}
			$nc(o)->setPreviousScanCounter($cast($Number, scanCounter));
		} else {
			$nc(o)->setDerivedGauge($cast($Number, scanCounter));
			is_derived_gauge_valid = true;
		}
		return is_derived_gauge_valid;
	}
}

$MonitorNotification* CounterMonitor::updateNotifications($CounterMonitor$CounterMonitorObservedObject* o) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($MonitorNotification, n, nullptr);
		if (!$nc(o)->getEventAlreadyNotified()) {
			int64_t var$0 = $nc(($cast($Number, $(o->getDerivedGauge()))))->longValue();
			if (var$0 >= $nc($(o->getThreshold()))->longValue()) {
				if (this->notify$) {
					$assign(n, $new($MonitorNotification, "jmx.monitor.counter.threshold"_s, this, 0, 0, ""_s, nullptr, nullptr, nullptr, $(o->getThreshold())));
				}
				if (!this->differenceMode) {
					o->setEventAlreadyNotified(true);
				}
			}
		} else {
			$init($JmxProperties);
			$init($System$Logger$Level);
			if ($nc($JmxProperties::MONITOR_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$var($StringBuilder, strb, $$new($StringBuilder)->append("The notification:"_s)->append("\n\tNotification observed object = "_s)->append($($of(o->getObservedObject())))->append("\n\tNotification observed attribute = "_s)->append($(getObservedAttribute()))->append("\n\tNotification threshold level = "_s)->append($($of(o->getThreshold())))->append("\n\tNotification derived gauge = "_s)->append($(o->getDerivedGauge()))->append("\nhas already been sent"_s));
				$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(CounterMonitor$$Lambda$toString, static_cast<$StringBuilder*>(strb))));
			}
		}
		return n;
	}
}

void CounterMonitor::updateThreshold($CounterMonitor$CounterMonitorObservedObject* o) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		int64_t var$0 = $nc(($cast($Number, $($nc(o)->getDerivedGauge()))))->longValue();
		if (var$0 >= $nc($(o->getThreshold()))->longValue()) {
			if ($nc(this->offset)->longValue() > (int64_t)0) {
				int64_t threshold_value = $nc($(o->getThreshold()))->longValue();
				while ($nc(($cast($Number, $(o->getDerivedGauge()))))->longValue() >= threshold_value) {
					threshold_value += $nc(this->offset)->longValue();
				}
				$init($CounterMonitor$1);
				switch ($nc($CounterMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->get($nc(($(o->getType())))->ordinal())) {
				case 1:
					{
						o->setThreshold($($Integer::valueOf((int32_t)threshold_value)));
						break;
					}
				case 2:
					{
						o->setThreshold($($Byte::valueOf((int8_t)threshold_value)));
						break;
					}
				case 3:
					{
						o->setThreshold($($Short::valueOf((int16_t)threshold_value)));
						break;
					}
				case 4:
					{
						o->setThreshold($($Long::valueOf(threshold_value)));
						break;
					}
				default:
					{
						$init($JmxProperties);
						$init($System$Logger$Level);
						$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, "the threshold type is invalid"_s);
						break;
					}
				}
				if (!this->differenceMode) {
					if ($nc(this->modulus)->longValue() > (int64_t)0) {
						int64_t var$1 = $nc($(o->getThreshold()))->longValue();
						if (var$1 > $nc(this->modulus)->longValue()) {
							o->setModulusExceeded(true);
							o->setDerivedGaugeExceeded($cast($Number, $(o->getDerivedGauge())));
						}
					}
				}
				o->setEventAlreadyNotified(false);
			} else {
				o->setModulusExceeded(true);
				o->setDerivedGaugeExceeded($cast($Number, $(o->getDerivedGauge())));
			}
		}
	}
}

void CounterMonitor::setDerivedGaugeWithDifference($Number* scanCounter, $Number* mod, $CounterMonitor$CounterMonitorObservedObject* o) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		int64_t var$0 = $nc(scanCounter)->longValue();
		int64_t derived = var$0 - $nc($($nc(o)->getPreviousScanCounter()))->longValue();
		if (mod != nullptr) {
			derived += $nc(this->modulus)->longValue();
		}
		$init($CounterMonitor$1);
		switch ($nc($CounterMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->get($nc(($(o->getType())))->ordinal())) {
		case 1:
			{
				o->setDerivedGauge($($Integer::valueOf((int32_t)derived)));
				break;
			}
		case 2:
			{
				o->setDerivedGauge($($Byte::valueOf((int8_t)derived)));
				break;
			}
		case 3:
			{
				o->setDerivedGauge($($Short::valueOf((int16_t)derived)));
				break;
			}
		case 4:
			{
				o->setDerivedGauge($($Long::valueOf(derived)));
				break;
			}
		default:
			{
				$init($JmxProperties);
				$init($System$Logger$Level);
				$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, "the threshold type is invalid"_s);
				break;
			}
		}
	}
}

$Monitor$ObservedObject* CounterMonitor::createObservedObject($ObjectName* object) {
	$var($CounterMonitor$CounterMonitorObservedObject, cmo, $new($CounterMonitor$CounterMonitorObservedObject, object));
	cmo->setThreshold(this->initThreshold);
	cmo->setModulusExceeded(false);
	cmo->setEventAlreadyNotified(false);
	cmo->setPreviousScanCounter(nullptr);
	return cmo;
}

bool CounterMonitor::isComparableTypeValid($ObjectName* object, $String* attribute, $Comparable* value) {
	$synchronized(this) {
		$var($CounterMonitor$CounterMonitorObservedObject, o, $cast($CounterMonitor$CounterMonitorObservedObject, getObservedObject(object)));
		if (o == nullptr) {
			return false;
		}
		if ($instanceOf($Integer, value)) {
			$init($Monitor$NumericalType);
			$nc(o)->setType($Monitor$NumericalType::INTEGER);
		} else if ($instanceOf($Byte, value)) {
			$init($Monitor$NumericalType);
			$nc(o)->setType($Monitor$NumericalType::BYTE);
		} else if ($instanceOf($Short, value)) {
			$init($Monitor$NumericalType);
			$nc(o)->setType($Monitor$NumericalType::SHORT);
		} else if ($instanceOf($Long, value)) {
			$init($Monitor$NumericalType);
			$nc(o)->setType($Monitor$NumericalType::LONG);
		} else {
			return false;
		}
		return true;
	}
}

$Comparable* CounterMonitor::getDerivedGaugeFromComparable($ObjectName* object, $String* attribute, $Comparable* value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($CounterMonitor$CounterMonitorObservedObject, o, $cast($CounterMonitor$CounterMonitorObservedObject, getObservedObject(object)));
		if (o == nullptr) {
			return nullptr;
		}
		if ($nc(o)->getModulusExceeded()) {
			int64_t var$0 = $nc(($cast($Number, $(o->getDerivedGauge()))))->longValue();
			if (var$0 < $nc($(o->getDerivedGaugeExceeded()))->longValue()) {
				o->setThreshold(this->initThreshold);
				o->setModulusExceeded(false);
				o->setEventAlreadyNotified(false);
			}
		}
		$nc(o)->setDerivedGaugeValid(updateDerivedGauge(value, o));
		return $cast($Comparable, o->getDerivedGauge());
	}
}

void CounterMonitor::onErrorNotification($MonitorNotification* notification) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($CounterMonitor$CounterMonitorObservedObject, o, $cast($CounterMonitor$CounterMonitorObservedObject, getObservedObject($($nc(notification)->getObservedObject()))));
		if (o == nullptr) {
			return;
		}
		$nc(o)->setModulusExceeded(false);
		o->setEventAlreadyNotified(false);
		o->setPreviousScanCounter(nullptr);
	}
}

$MonitorNotification* CounterMonitor::buildAlarmNotification($ObjectName* object, $String* attribute, $Comparable* value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($CounterMonitor$CounterMonitorObservedObject, o, $cast($CounterMonitor$CounterMonitorObservedObject, getObservedObject(object)));
		if (o == nullptr) {
			return nullptr;
		}
		$var($MonitorNotification, alarm, nullptr);
		if ($nc(o)->getDerivedGaugeValid()) {
			$assign(alarm, updateNotifications(o));
			updateThreshold(o);
		} else {
			$assign(alarm, nullptr);
		}
		return alarm;
	}
}

bool CounterMonitor::isThresholdTypeValid($ObjectName* object, $String* attribute, $Comparable* value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($CounterMonitor$CounterMonitorObservedObject, o, $cast($CounterMonitor$CounterMonitorObservedObject, getObservedObject(object)));
		if (o == nullptr) {
			return false;
		}
		$Class* c = classForType($($nc(o)->getType()));
		bool var$1 = $nc(c)->isInstance($($nc(o)->getThreshold()));
		bool var$0 = var$1 && isValidForType(this->offset, c);
		return (var$0 && isValidForType(this->modulus, c));
	}
}

void clinit$CounterMonitor($Class* class$) {
	$assignStatic(CounterMonitor::types, $new($StringArray, {
		"jmx.monitor.error.runtime"_s,
		"jmx.monitor.error.mbean"_s,
		"jmx.monitor.error.attribute"_s,
		"jmx.monitor.error.type"_s,
		"jmx.monitor.error.threshold"_s,
		"jmx.monitor.counter.threshold"_s
	}));
	$assignStatic(CounterMonitor::notifsInfo, $new($MBeanNotificationInfoArray, {$$new($MBeanNotificationInfo, CounterMonitor::types, "javax.management.monitor.MonitorNotification"_s, "Notifications sent by the CounterMonitor MBean"_s)}));
}

CounterMonitor::CounterMonitor() {
}

$Class* CounterMonitor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CounterMonitor$$Lambda$toString::classInfo$.name)) {
			return CounterMonitor$$Lambda$toString::load$(name, initialize);
		}
	}
	$loadClass(CounterMonitor, name, initialize, &_CounterMonitor_ClassInfo_, clinit$CounterMonitor, allocate$CounterMonitor);
	return class$;
}

$Class* CounterMonitor::class$ = nullptr;

		} // monitor
	} // management
} // javax