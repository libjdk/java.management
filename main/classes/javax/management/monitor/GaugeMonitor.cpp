#include <javax/management/monitor/GaugeMonitor.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <java/lang/Comparable.h>
#include <java/lang/Number.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/ObjectName.h>
#include <javax/management/monitor/GaugeMonitor$1.h>
#include <javax/management/monitor/GaugeMonitor$GaugeMonitorObservedObject.h>
#include <javax/management/monitor/GaugeMonitorMBean.h>
#include <javax/management/monitor/Monitor$NumericalType.h>
#include <javax/management/monitor/Monitor$ObservedObject.h>
#include <javax/management/monitor/Monitor.h>
#include <javax/management/monitor/MonitorNotification.h>
#include <jcpp.h>

#undef BYTE
#undef DOUBLE
#undef FALLING
#undef FLOAT
#undef INTEGER
#undef INTEGER_ZERO
#undef LONG
#undef MONITOR_LOGGER
#undef RISING
#undef RISING_OR_FALLING
#undef SHORT
#undef THRESHOLD_ERROR_NOTIFIED
#undef TRACE

using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $ObjectNameArray = $Array<::javax::management::ObjectName>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Short = ::java::lang::Short;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $ObjectName = ::javax::management::ObjectName;
using $GaugeMonitor$1 = ::javax::management::monitor::GaugeMonitor$1;
using $GaugeMonitor$GaugeMonitorObservedObject = ::javax::management::monitor::GaugeMonitor$GaugeMonitorObservedObject;
using $GaugeMonitorMBean = ::javax::management::monitor::GaugeMonitorMBean;
using $Monitor = ::javax::management::monitor::Monitor;
using $Monitor$NumericalType = ::javax::management::monitor::Monitor$NumericalType;
using $Monitor$ObservedObject = ::javax::management::monitor::Monitor$ObservedObject;
using $MonitorNotification = ::javax::management::monitor::MonitorNotification;

namespace javax {
	namespace management {
		namespace monitor {

$CompoundAttribute _GaugeMonitor_MethodAnnotations_getDerivedGauge4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _GaugeMonitor_MethodAnnotations_getDerivedGaugeTimeStamp7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _GaugeMonitor_FieldInfo_[] = {
	{"highThreshold", "Ljava/lang/Number;", nullptr, $PRIVATE, $field(GaugeMonitor, highThreshold)},
	{"lowThreshold", "Ljava/lang/Number;", nullptr, $PRIVATE, $field(GaugeMonitor, lowThreshold)},
	{"notifyHigh", "Z", nullptr, $PRIVATE, $field(GaugeMonitor, notifyHigh)},
	{"notifyLow", "Z", nullptr, $PRIVATE, $field(GaugeMonitor, notifyLow)},
	{"differenceMode", "Z", nullptr, $PRIVATE, $field(GaugeMonitor, differenceMode)},
	{"types", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GaugeMonitor, types)},
	{"notifsInfo", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GaugeMonitor, notifsInfo)},
	{"RISING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GaugeMonitor, RISING)},
	{"FALLING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GaugeMonitor, FALLING)},
	{"RISING_OR_FALLING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GaugeMonitor, RISING_OR_FALLING)},
	{}
};

$MethodInfo _GaugeMonitor_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GaugeMonitor::*)()>(&GaugeMonitor::init$))},
	{"buildAlarmNotification", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable;)Ljavax/management/monitor/MonitorNotification;", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable<*>;)Ljavax/management/monitor/MonitorNotification;", $SYNCHRONIZED},
	{"createObservedObject", "(Ljavax/management/ObjectName;)Ljavax/management/monitor/Monitor$ObservedObject;", nullptr, 0},
	{"getDerivedGauge", "(Ljavax/management/ObjectName;)Ljava/lang/Number;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDerivedGauge", "()Ljava/lang/Number;", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _GaugeMonitor_MethodAnnotations_getDerivedGauge4},
	{"getDerivedGaugeFromComparable", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable;)Ljava/lang/Comparable;", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable<*>;)Ljava/lang/Comparable<*>;", $SYNCHRONIZED},
	{"getDerivedGaugeTimeStamp", "(Ljavax/management/ObjectName;)J", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDerivedGaugeTimeStamp", "()J", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _GaugeMonitor_MethodAnnotations_getDerivedGaugeTimeStamp7},
	{"getDifferenceMode", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getHighThreshold", "()Ljava/lang/Number;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getLowThreshold", "()Ljava/lang/Number;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC},
	{"getNotifyHigh", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getNotifyLow", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*isActive", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isComparableTypeValid", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable;)Z", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable<*>;)Z", $SYNCHRONIZED},
	{"isFirstGreaterThanLast", "(Ljava/lang/Number;Ljava/lang/Number;Ljavax/management/monitor/Monitor$NumericalType;)Z", nullptr, $PRIVATE, $method(static_cast<bool(GaugeMonitor::*)($Number*,$Number*,$Monitor$NumericalType*)>(&GaugeMonitor::isFirstGreaterThanLast))},
	{"isFirstStrictlyGreaterThanLast", "(Ljava/lang/Number;Ljava/lang/Number;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(GaugeMonitor::*)($Number*,$Number*,$String*)>(&GaugeMonitor::isFirstStrictlyGreaterThanLast))},
	{"isThresholdTypeValid", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable;)Z", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable<*>;)Z", $SYNCHRONIZED},
	{"onErrorNotification", "(Ljavax/management/monitor/MonitorNotification;)V", nullptr, $SYNCHRONIZED},
	{"*removeObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setDerivedGaugeWithDifference", "(Ljava/lang/Number;Ljavax/management/monitor/GaugeMonitor$GaugeMonitorObservedObject;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(GaugeMonitor::*)($Number*,$GaugeMonitor$GaugeMonitorObservedObject*)>(&GaugeMonitor::setDerivedGaugeWithDifference))},
	{"setDifferenceMode", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setGranularityPeriod", "(J)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setNotifyHigh", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setNotifyLow", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setObservedAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED},
	{"setThresholds", "(Ljava/lang/Number;Ljava/lang/Number;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"start", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"stop", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateDerivedGauge", "(Ljava/lang/Object;Ljavax/management/monitor/GaugeMonitor$GaugeMonitorObservedObject;)Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<bool(GaugeMonitor::*)(Object$*,$GaugeMonitor$GaugeMonitorObservedObject*)>(&GaugeMonitor::updateDerivedGauge))},
	{"updateNotifications", "(Ljavax/management/monitor/GaugeMonitor$GaugeMonitorObservedObject;)Ljavax/management/monitor/MonitorNotification;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$MonitorNotification*(GaugeMonitor::*)($GaugeMonitor$GaugeMonitorObservedObject*)>(&GaugeMonitor::updateNotifications))},
	{}
};

$InnerClassInfo _GaugeMonitor_InnerClassesInfo_[] = {
	{"javax.management.monitor.GaugeMonitor$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.management.monitor.GaugeMonitor$GaugeMonitorObservedObject", "javax.management.monitor.GaugeMonitor", "GaugeMonitorObservedObject", $STATIC},
	{}
};

$ClassInfo _GaugeMonitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.monitor.GaugeMonitor",
	"javax.management.monitor.Monitor",
	"javax.management.monitor.GaugeMonitorMBean",
	_GaugeMonitor_FieldInfo_,
	_GaugeMonitor_MethodInfo_,
	nullptr,
	nullptr,
	_GaugeMonitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.management.monitor.GaugeMonitor$1,javax.management.monitor.GaugeMonitor$GaugeMonitorObservedObject"
};

$Object* allocate$GaugeMonitor($Class* clazz) {
	return $of($alloc(GaugeMonitor));
}

$ObjectName* GaugeMonitor::getObservedObject() {
	 return this->$Monitor::getObservedObject();
}

void GaugeMonitor::setObservedObject($ObjectName* object) {
	this->$Monitor::setObservedObject(object);
}

void GaugeMonitor::addObservedObject($ObjectName* object) {
	this->$Monitor::addObservedObject(object);
}

void GaugeMonitor::removeObservedObject($ObjectName* object) {
	this->$Monitor::removeObservedObject(object);
}

bool GaugeMonitor::containsObservedObject($ObjectName* object) {
	 return this->$Monitor::containsObservedObject(object);
}

$ObjectNameArray* GaugeMonitor::getObservedObjects() {
	 return this->$Monitor::getObservedObjects();
}

$String* GaugeMonitor::getObservedAttribute() {
	 return this->$Monitor::getObservedAttribute();
}

void GaugeMonitor::setObservedAttribute($String* attribute) {
	this->$Monitor::setObservedAttribute(attribute);
}

int64_t GaugeMonitor::getGranularityPeriod() {
	 return this->$Monitor::getGranularityPeriod();
}

void GaugeMonitor::setGranularityPeriod(int64_t period) {
	this->$Monitor::setGranularityPeriod(period);
}

bool GaugeMonitor::isActive() {
	 return this->$Monitor::isActive();
}

int32_t GaugeMonitor::hashCode() {
	 return this->$Monitor::hashCode();
}

bool GaugeMonitor::equals(Object$* arg0) {
	 return this->$Monitor::equals(arg0);
}

$Object* GaugeMonitor::clone() {
	 return this->$Monitor::clone();
}

$String* GaugeMonitor::toString() {
	 return this->$Monitor::toString();
}

void GaugeMonitor::finalize() {
	this->$Monitor::finalize();
}

GaugeMonitor::MemberClass0$::MemberClass0$() {
	$patchMemberClass(GaugeMonitor, $GaugeMonitorMBean, memberClass0$);
}

$Number* GaugeMonitor::MemberClass0$::getDerivedGauge() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->getDerivedGauge();
}

int64_t GaugeMonitor::MemberClass0$::getDerivedGaugeTimeStamp() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->getDerivedGaugeTimeStamp();
}

$Number* GaugeMonitor::MemberClass0$::getDerivedGauge($ObjectName* object) {
	return $cast($Number, ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->getDerivedGauge(object));
}

int64_t GaugeMonitor::MemberClass0$::getDerivedGaugeTimeStamp($ObjectName* object) {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->getDerivedGaugeTimeStamp(object);
}

$Number* GaugeMonitor::MemberClass0$::getHighThreshold() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->getHighThreshold();
}

$Number* GaugeMonitor::MemberClass0$::getLowThreshold() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->getLowThreshold();
}

void GaugeMonitor::MemberClass0$::setThresholds($Number* highValue, $Number* lowValue) {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->setThresholds(highValue, lowValue);
}

bool GaugeMonitor::MemberClass0$::getNotifyHigh() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->getNotifyHigh();
}

void GaugeMonitor::MemberClass0$::setNotifyHigh(bool value) {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->setNotifyHigh(value);
}

bool GaugeMonitor::MemberClass0$::getNotifyLow() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->getNotifyLow();
}

void GaugeMonitor::MemberClass0$::setNotifyLow(bool value) {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->setNotifyLow(value);
}

bool GaugeMonitor::MemberClass0$::getDifferenceMode() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->getDifferenceMode();
}

void GaugeMonitor::MemberClass0$::setDifferenceMode(bool value) {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->setDifferenceMode(value);
}

void GaugeMonitor::MemberClass0$::start() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->start();
}

void GaugeMonitor::MemberClass0$::stop() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->stop();
}

void GaugeMonitor::MemberClass0$::addObservedObject($ObjectName* object) {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->addObservedObject(object);
}

void GaugeMonitor::MemberClass0$::removeObservedObject($ObjectName* object) {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->removeObservedObject(object);
}

bool GaugeMonitor::MemberClass0$::containsObservedObject($ObjectName* object) {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->containsObservedObject(object);
}

$ObjectNameArray* GaugeMonitor::MemberClass0$::getObservedObjects() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->getObservedObjects();
}

$ObjectName* GaugeMonitor::MemberClass0$::getObservedObject() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->getObservedObject();
}

void GaugeMonitor::MemberClass0$::setObservedObject($ObjectName* object) {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->setObservedObject(object);
}

$String* GaugeMonitor::MemberClass0$::getObservedAttribute() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->getObservedAttribute();
}

void GaugeMonitor::MemberClass0$::setObservedAttribute($String* attribute) {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->setObservedAttribute(attribute);
}

int64_t GaugeMonitor::MemberClass0$::getGranularityPeriod() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->getGranularityPeriod();
}

void GaugeMonitor::MemberClass0$::setGranularityPeriod(int64_t period) {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->setGranularityPeriod(period);
}

bool GaugeMonitor::MemberClass0$::isActive() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->isActive();
}

int32_t GaugeMonitor::MemberClass0$::hashCode() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->hashCode();
}

bool GaugeMonitor::MemberClass0$::equals(Object$* arg0) {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->equals(arg0);
}

$Object* GaugeMonitor::MemberClass0$::clone() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->clone();
}

$String* GaugeMonitor::MemberClass0$::toString() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->toString();
}

void GaugeMonitor::MemberClass0$::finalize() {
	return ((GaugeMonitor*)(void*)((int8_t*)(void*)this - $offsetof(GaugeMonitor, memberClass0$)))->finalize();
}

$StringArray* GaugeMonitor::types = nullptr;
$MBeanNotificationInfoArray* GaugeMonitor::notifsInfo = nullptr;

void GaugeMonitor::init$() {
	$Monitor::init$();
	$init($Monitor);
	$set(this, highThreshold, $Monitor::INTEGER_ZERO);
	$set(this, lowThreshold, $Monitor::INTEGER_ZERO);
	this->notifyHigh = false;
	this->notifyLow = false;
	this->differenceMode = false;
}

void GaugeMonitor::start() {
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
					$var($GaugeMonitor$GaugeMonitorObservedObject, gmo, $cast($GaugeMonitor$GaugeMonitorObservedObject, o));
					$nc(gmo)->setStatus(GaugeMonitor::RISING_OR_FALLING);
					gmo->setPreviousScanGauge(nullptr);
				}
			}
		}
		doStart();
	}
}

void GaugeMonitor::stop() {
	$synchronized(this) {
		doStop();
	}
}

$Object* GaugeMonitor::getDerivedGauge($ObjectName* object) {
	$synchronized(this) {
		return $of($cast($Number, $Monitor::getDerivedGauge(object)));
	}
}

int64_t GaugeMonitor::getDerivedGaugeTimeStamp($ObjectName* object) {
	$synchronized(this) {
		return $Monitor::getDerivedGaugeTimeStamp(object);
	}
}

$Number* GaugeMonitor::getDerivedGauge() {
	$synchronized(this) {
		if ($nc(this->observedObjects)->isEmpty()) {
			return nullptr;
		} else {
			return $cast($Number, $nc(($cast($Monitor$ObservedObject, $($nc(this->observedObjects)->get(0)))))->getDerivedGauge());
		}
	}
}

int64_t GaugeMonitor::getDerivedGaugeTimeStamp() {
	$synchronized(this) {
		if ($nc(this->observedObjects)->isEmpty()) {
			return 0;
		} else {
			return $nc(($cast($Monitor$ObservedObject, $($nc(this->observedObjects)->get(0)))))->getDerivedGaugeTimeStamp();
		}
	}
}

$Number* GaugeMonitor::getHighThreshold() {
	$synchronized(this) {
		return this->highThreshold;
	}
}

$Number* GaugeMonitor::getLowThreshold() {
	$synchronized(this) {
		return this->lowThreshold;
	}
}

void GaugeMonitor::setThresholds($Number* highValue, $Number* lowValue) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ((highValue == nullptr) || (lowValue == nullptr)) {
			$throwNew($IllegalArgumentException, "Null threshold value"_s);
		}
		if ($nc($of(highValue))->getClass() != $nc($of(lowValue))->getClass()) {
			$throwNew($IllegalArgumentException, "Different type threshold values"_s);
		}
		if (isFirstStrictlyGreaterThanLast(lowValue, highValue, $($nc($of(highValue))->getClass()->getName()))) {
			$throwNew($IllegalArgumentException, "High threshold less than low threshold"_s);
		}
		bool var$0 = $nc($of(this->highThreshold))->equals(highValue);
		if (var$0 && $nc($of(this->lowThreshold))->equals(lowValue)) {
			return;
		}
		$set(this, highThreshold, highValue);
		$set(this, lowThreshold, lowValue);
		int32_t index = 0;
		{
			$var($Iterator, i$, $nc(this->observedObjects)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Monitor$ObservedObject, o, $cast($Monitor$ObservedObject, i$->next()));
				{
					resetAlreadyNotified(o, index++, $Monitor::THRESHOLD_ERROR_NOTIFIED);
					$var($GaugeMonitor$GaugeMonitorObservedObject, gmo, $cast($GaugeMonitor$GaugeMonitorObservedObject, o));
					$nc(gmo)->setStatus(GaugeMonitor::RISING_OR_FALLING);
				}
			}
		}
	}
}

bool GaugeMonitor::getNotifyHigh() {
	$synchronized(this) {
		return this->notifyHigh;
	}
}

void GaugeMonitor::setNotifyHigh(bool value) {
	$synchronized(this) {
		if (this->notifyHigh == value) {
			return;
		}
		this->notifyHigh = value;
	}
}

bool GaugeMonitor::getNotifyLow() {
	$synchronized(this) {
		return this->notifyLow;
	}
}

void GaugeMonitor::setNotifyLow(bool value) {
	$synchronized(this) {
		if (this->notifyLow == value) {
			return;
		}
		this->notifyLow = value;
	}
}

bool GaugeMonitor::getDifferenceMode() {
	$synchronized(this) {
		return this->differenceMode;
	}
}

void GaugeMonitor::setDifferenceMode(bool value) {
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
					$var($GaugeMonitor$GaugeMonitorObservedObject, gmo, $cast($GaugeMonitor$GaugeMonitorObservedObject, o));
					$nc(gmo)->setStatus(GaugeMonitor::RISING_OR_FALLING);
					gmo->setPreviousScanGauge(nullptr);
				}
			}
		}
	}
}

$MBeanNotificationInfoArray* GaugeMonitor::getNotificationInfo() {
	return $cast($MBeanNotificationInfoArray, $nc(GaugeMonitor::notifsInfo)->clone());
}

bool GaugeMonitor::updateDerivedGauge(Object$* scanGauge, $GaugeMonitor$GaugeMonitorObservedObject* o) {
	$synchronized(this) {
		bool is_derived_gauge_valid = false;
		if (this->differenceMode) {
			if ($nc(o)->getPreviousScanGauge() != nullptr) {
				setDerivedGaugeWithDifference($cast($Number, scanGauge), o);
				is_derived_gauge_valid = true;
			} else {
				is_derived_gauge_valid = false;
			}
			$nc(o)->setPreviousScanGauge($cast($Number, scanGauge));
		} else {
			$nc(o)->setDerivedGauge($cast($Number, scanGauge));
			is_derived_gauge_valid = true;
		}
		return is_derived_gauge_valid;
	}
}

$MonitorNotification* GaugeMonitor::updateNotifications($GaugeMonitor$GaugeMonitorObservedObject* o) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($MonitorNotification, n, nullptr);
		if ($nc(o)->getStatus() == GaugeMonitor::RISING_OR_FALLING) {
			$var($Number, var$0, $cast($Number, o->getDerivedGauge()));
			$var($Number, var$1, this->highThreshold);
			if (isFirstGreaterThanLast(var$0, var$1, $(o->getType()))) {
				if (this->notifyHigh) {
					$assign(n, $new($MonitorNotification, "jmx.monitor.gauge.high"_s, this, 0, 0, ""_s, nullptr, nullptr, nullptr, this->highThreshold));
				}
				o->setStatus(GaugeMonitor::FALLING);
			} else {
				$var($Number, var$4, this->lowThreshold);
				$var($Number, var$5, $cast($Number, o->getDerivedGauge()));
				if (isFirstGreaterThanLast(var$4, var$5, $(o->getType()))) {
					if (this->notifyLow) {
						$assign(n, $new($MonitorNotification, "jmx.monitor.gauge.low"_s, this, 0, 0, ""_s, nullptr, nullptr, nullptr, this->lowThreshold));
					}
					o->setStatus(GaugeMonitor::RISING);
				}
			}
		} else if (o->getStatus() == GaugeMonitor::RISING) {
			$var($Number, var$6, $cast($Number, o->getDerivedGauge()));
			$var($Number, var$7, this->highThreshold);
			if (isFirstGreaterThanLast(var$6, var$7, $(o->getType()))) {
				if (this->notifyHigh) {
					$assign(n, $new($MonitorNotification, "jmx.monitor.gauge.high"_s, this, 0, 0, ""_s, nullptr, nullptr, nullptr, this->highThreshold));
				}
				o->setStatus(GaugeMonitor::FALLING);
			}
		} else if (o->getStatus() == GaugeMonitor::FALLING) {
			$var($Number, var$8, this->lowThreshold);
			$var($Number, var$9, $cast($Number, o->getDerivedGauge()));
			if (isFirstGreaterThanLast(var$8, var$9, $(o->getType()))) {
				if (this->notifyLow) {
					$assign(n, $new($MonitorNotification, "jmx.monitor.gauge.low"_s, this, 0, 0, ""_s, nullptr, nullptr, nullptr, this->lowThreshold));
				}
				o->setStatus(GaugeMonitor::RISING);
			}
		}
		return n;
	}
}

void GaugeMonitor::setDerivedGaugeWithDifference($Number* scanGauge, $GaugeMonitor$GaugeMonitorObservedObject* o) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Number, prev, $nc(o)->getPreviousScanGauge());
		$var($Number, der, nullptr);
		$init($GaugeMonitor$1);
		switch ($nc($GaugeMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->get($nc(($(o->getType())))->ordinal())) {
		case 1:
			{
				int32_t var$0 = $nc(($cast($Integer, scanGauge)))->intValue();
				$assign(der, $Integer::valueOf(var$0 - $nc(($cast($Integer, prev)))->intValue()));
				break;
			}
		case 2:
			{
				int8_t var$1 = $nc(($cast($Byte, scanGauge)))->byteValue();
				$assign(der, $Byte::valueOf((int8_t)(var$1 - $nc(($cast($Byte, prev)))->byteValue())));
				break;
			}
		case 3:
			{
				int16_t var$2 = $nc(($cast($Short, scanGauge)))->shortValue();
				$assign(der, $Short::valueOf((int16_t)(var$2 - $nc(($cast($Short, prev)))->shortValue())));
				break;
			}
		case 4:
			{
				int64_t var$3 = $nc(($cast($Long, scanGauge)))->longValue();
				$assign(der, $Long::valueOf(var$3 - $nc(($cast($Long, prev)))->longValue()));
				break;
			}
		case 5:
			{
				float var$4 = $nc(($cast($Float, scanGauge)))->floatValue();
				$assign(der, $Float::valueOf(var$4 - $nc(($cast($Float, prev)))->floatValue()));
				break;
			}
		case 6:
			{
				double var$5 = $nc(($cast($Double, scanGauge)))->doubleValue();
				$assign(der, $Double::valueOf(var$5 - $nc(($cast($Double, prev)))->doubleValue()));
				break;
			}
		default:
			{
				$init($JmxProperties);
				$init($System$Logger$Level);
				$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, "the threshold type is invalid"_s);
				return;
			}
		}
		o->setDerivedGauge(der);
	}
}

bool GaugeMonitor::isFirstGreaterThanLast($Number* greater, $Number* less, $Monitor$NumericalType* type) {
	$init($GaugeMonitor$1);
	switch ($nc($GaugeMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->get($nc((type))->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{
			int64_t var$0 = $nc(greater)->longValue();
			return (var$0 >= $nc(less)->longValue());
		}
	case 5:
		{}
	case 6:
		{
			double var$1 = $nc(greater)->doubleValue();
			return (var$1 >= $nc(less)->doubleValue());
		}
	default:
		{
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, "the threshold type is invalid"_s);
			return false;
		}
	}
}

bool GaugeMonitor::isFirstStrictlyGreaterThanLast($Number* greater, $Number* less, $String* className) {
	bool var$2 = $nc(className)->equals("java.lang.Integer"_s);
	bool var$1 = var$2 || $nc(className)->equals("java.lang.Byte"_s);
	bool var$0 = var$1 || $nc(className)->equals("java.lang.Short"_s);
	if (var$0 || $nc(className)->equals("java.lang.Long"_s)) {
		int64_t var$3 = $nc(greater)->longValue();
		return (var$3 > $nc(less)->longValue());
	} else {
		bool var$5 = className->equals("java.lang.Float"_s);
		if (var$5 || className->equals("java.lang.Double"_s)) {
			double var$6 = $nc(greater)->doubleValue();
			return (var$6 > $nc(less)->doubleValue());
		} else {
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MONITOR_LOGGER)->log($System$Logger$Level::TRACE, "the threshold type is invalid"_s);
			return false;
		}
	}
}

$Monitor$ObservedObject* GaugeMonitor::createObservedObject($ObjectName* object) {
	$var($GaugeMonitor$GaugeMonitorObservedObject, gmo, $new($GaugeMonitor$GaugeMonitorObservedObject, object));
	gmo->setStatus(GaugeMonitor::RISING_OR_FALLING);
	gmo->setPreviousScanGauge(nullptr);
	return gmo;
}

bool GaugeMonitor::isComparableTypeValid($ObjectName* object, $String* attribute, $Comparable* value) {
	$synchronized(this) {
		$var($GaugeMonitor$GaugeMonitorObservedObject, o, $cast($GaugeMonitor$GaugeMonitorObservedObject, getObservedObject(object)));
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
		} else if ($instanceOf($Float, value)) {
			$init($Monitor$NumericalType);
			$nc(o)->setType($Monitor$NumericalType::FLOAT);
		} else if ($instanceOf($Double, value)) {
			$init($Monitor$NumericalType);
			$nc(o)->setType($Monitor$NumericalType::DOUBLE);
		} else {
			return false;
		}
		return true;
	}
}

$Comparable* GaugeMonitor::getDerivedGaugeFromComparable($ObjectName* object, $String* attribute, $Comparable* value) {
	$synchronized(this) {
		$var($GaugeMonitor$GaugeMonitorObservedObject, o, $cast($GaugeMonitor$GaugeMonitorObservedObject, getObservedObject(object)));
		if (o == nullptr) {
			return nullptr;
		}
		$nc(o)->setDerivedGaugeValid(updateDerivedGauge(value, o));
		return $cast($Comparable, o->getDerivedGauge());
	}
}

void GaugeMonitor::onErrorNotification($MonitorNotification* notification) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($GaugeMonitor$GaugeMonitorObservedObject, o, $cast($GaugeMonitor$GaugeMonitorObservedObject, getObservedObject($($nc(notification)->getObservedObject()))));
		if (o == nullptr) {
			return;
		}
		$nc(o)->setStatus(GaugeMonitor::RISING_OR_FALLING);
		o->setPreviousScanGauge(nullptr);
	}
}

$MonitorNotification* GaugeMonitor::buildAlarmNotification($ObjectName* object, $String* attribute, $Comparable* value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($GaugeMonitor$GaugeMonitorObservedObject, o, $cast($GaugeMonitor$GaugeMonitorObservedObject, getObservedObject(object)));
		if (o == nullptr) {
			return nullptr;
		}
		$var($MonitorNotification, alarm, nullptr);
		if ($nc(o)->getDerivedGaugeValid()) {
			$assign(alarm, updateNotifications(o));
		} else {
			$assign(alarm, nullptr);
		}
		return alarm;
	}
}

bool GaugeMonitor::isThresholdTypeValid($ObjectName* object, $String* attribute, $Comparable* value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($GaugeMonitor$GaugeMonitorObservedObject, o, $cast($GaugeMonitor$GaugeMonitorObservedObject, getObservedObject(object)));
		if (o == nullptr) {
			return false;
		}
		$Class* c = classForType($($nc(o)->getType()));
		bool var$0 = isValidForType(this->highThreshold, c);
		return (var$0 && isValidForType(this->lowThreshold, c));
	}
}

void clinit$GaugeMonitor($Class* class$) {
	$assignStatic(GaugeMonitor::types, $new($StringArray, {
		"jmx.monitor.error.runtime"_s,
		"jmx.monitor.error.mbean"_s,
		"jmx.monitor.error.attribute"_s,
		"jmx.monitor.error.type"_s,
		"jmx.monitor.error.threshold"_s,
		"jmx.monitor.gauge.high"_s,
		"jmx.monitor.gauge.low"_s
	}));
	$assignStatic(GaugeMonitor::notifsInfo, $new($MBeanNotificationInfoArray, {$$new($MBeanNotificationInfo, GaugeMonitor::types, "javax.management.monitor.MonitorNotification"_s, "Notifications sent by the GaugeMonitor MBean"_s)}));
}

GaugeMonitor::GaugeMonitor() {
}

$Class* GaugeMonitor::load$($String* name, bool initialize) {
	$loadClass(GaugeMonitor, name, initialize, &_GaugeMonitor_ClassInfo_, clinit$GaugeMonitor, allocate$GaugeMonitor);
	return class$;
}

$Class* GaugeMonitor::class$ = nullptr;

		} // monitor
	} // management
} // javax