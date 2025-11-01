#include <javax/management/monitor/StringMonitor.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <java/lang/Comparable.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/ObjectName.h>
#include <javax/management/monitor/Monitor$ObservedObject.h>
#include <javax/management/monitor/Monitor.h>
#include <javax/management/monitor/MonitorNotification.h>
#include <javax/management/monitor/StringMonitor$StringMonitorObservedObject.h>
#include <javax/management/monitor/StringMonitorMBean.h>
#include <jcpp.h>

#undef DIFFERING
#undef MATCHING
#undef MATCHING_OR_DIFFERING
#undef MONITOR_LOGGER
#undef TRACE

using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $ObjectNameArray = $Array<::javax::management::ObjectName>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $ObjectName = ::javax::management::ObjectName;
using $Monitor = ::javax::management::monitor::Monitor;
using $Monitor$ObservedObject = ::javax::management::monitor::Monitor$ObservedObject;
using $MonitorNotification = ::javax::management::monitor::MonitorNotification;
using $StringMonitor$StringMonitorObservedObject = ::javax::management::monitor::StringMonitor$StringMonitorObservedObject;
using $StringMonitorMBean = ::javax::management::monitor::StringMonitorMBean;

namespace javax {
	namespace management {
		namespace monitor {

$CompoundAttribute _StringMonitor_MethodAnnotations_getDerivedGauge4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _StringMonitor_MethodAnnotations_getDerivedGaugeTimeStamp6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _StringMonitor_FieldInfo_[] = {
	{"stringToCompare", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringMonitor, stringToCompare)},
	{"notifyMatch", "Z", nullptr, $PRIVATE, $field(StringMonitor, notifyMatch)},
	{"notifyDiffer", "Z", nullptr, $PRIVATE, $field(StringMonitor, notifyDiffer)},
	{"types", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringMonitor, types)},
	{"notifsInfo", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringMonitor, notifsInfo)},
	{"MATCHING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringMonitor, MATCHING)},
	{"DIFFERING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringMonitor, DIFFERING)},
	{"MATCHING_OR_DIFFERING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringMonitor, MATCHING_OR_DIFFERING)},
	{}
};

$MethodInfo _StringMonitor_MethodInfo_[] = {
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringMonitor::*)()>(&StringMonitor::init$))},
	{"buildAlarmNotification", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable;)Ljavax/management/monitor/MonitorNotification;", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable<*>;)Ljavax/management/monitor/MonitorNotification;", $SYNCHRONIZED},
	{"createObservedObject", "(Ljavax/management/ObjectName;)Ljavax/management/monitor/Monitor$ObservedObject;", nullptr, 0},
	{"getDerivedGauge", "(Ljavax/management/ObjectName;)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDerivedGauge", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _StringMonitor_MethodAnnotations_getDerivedGauge4},
	{"getDerivedGaugeTimeStamp", "(Ljavax/management/ObjectName;)J", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDerivedGaugeTimeStamp", "()J", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _StringMonitor_MethodAnnotations_getDerivedGaugeTimeStamp6},
	{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC},
	{"getNotifyDiffer", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getNotifyMatch", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getStringToCompare", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*isActive", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isComparableTypeValid", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable;)Z", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Comparable<*>;)Z", $SYNCHRONIZED},
	{"onErrorNotification", "(Ljavax/management/monitor/MonitorNotification;)V", nullptr, $SYNCHRONIZED},
	{"*removeObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setGranularityPeriod", "(J)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setNotifyDiffer", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setNotifyMatch", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setObservedAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED},
	{"setStringToCompare", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"start", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"stop", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StringMonitor_InnerClassesInfo_[] = {
	{"javax.management.monitor.StringMonitor$StringMonitorObservedObject", "javax.management.monitor.StringMonitor", "StringMonitorObservedObject", $STATIC},
	{}
};

$ClassInfo _StringMonitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.monitor.StringMonitor",
	"javax.management.monitor.Monitor",
	"javax.management.monitor.StringMonitorMBean",
	_StringMonitor_FieldInfo_,
	_StringMonitor_MethodInfo_,
	nullptr,
	nullptr,
	_StringMonitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.management.monitor.StringMonitor$StringMonitorObservedObject"
};

$Object* allocate$StringMonitor($Class* clazz) {
	return $of($alloc(StringMonitor));
}

$ObjectName* StringMonitor::getObservedObject() {
	 return this->$Monitor::getObservedObject();
}

void StringMonitor::setObservedObject($ObjectName* object) {
	this->$Monitor::setObservedObject(object);
}

void StringMonitor::addObservedObject($ObjectName* object) {
	this->$Monitor::addObservedObject(object);
}

void StringMonitor::removeObservedObject($ObjectName* object) {
	this->$Monitor::removeObservedObject(object);
}

bool StringMonitor::containsObservedObject($ObjectName* object) {
	 return this->$Monitor::containsObservedObject(object);
}

$ObjectNameArray* StringMonitor::getObservedObjects() {
	 return this->$Monitor::getObservedObjects();
}

$String* StringMonitor::getObservedAttribute() {
	 return this->$Monitor::getObservedAttribute();
}

void StringMonitor::setObservedAttribute($String* attribute) {
	this->$Monitor::setObservedAttribute(attribute);
}

int64_t StringMonitor::getGranularityPeriod() {
	 return this->$Monitor::getGranularityPeriod();
}

void StringMonitor::setGranularityPeriod(int64_t period) {
	this->$Monitor::setGranularityPeriod(period);
}

bool StringMonitor::isActive() {
	 return this->$Monitor::isActive();
}

int32_t StringMonitor::hashCode() {
	 return this->$Monitor::hashCode();
}

bool StringMonitor::equals(Object$* arg0) {
	 return this->$Monitor::equals(arg0);
}

$Object* StringMonitor::clone() {
	 return this->$Monitor::clone();
}

$String* StringMonitor::toString() {
	 return this->$Monitor::toString();
}

void StringMonitor::finalize() {
	this->$Monitor::finalize();
}

StringMonitor::MemberClass0$::MemberClass0$() {
	$patchMemberClass(StringMonitor, $StringMonitorMBean, memberClass0$);
}

$String* StringMonitor::MemberClass0$::getDerivedGauge() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->getDerivedGauge();
}

int64_t StringMonitor::MemberClass0$::getDerivedGaugeTimeStamp() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->getDerivedGaugeTimeStamp();
}

$String* StringMonitor::MemberClass0$::getDerivedGauge($ObjectName* object) {
	return $cast($String, ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->getDerivedGauge(object));
}

int64_t StringMonitor::MemberClass0$::getDerivedGaugeTimeStamp($ObjectName* object) {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->getDerivedGaugeTimeStamp(object);
}

$String* StringMonitor::MemberClass0$::getStringToCompare() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->getStringToCompare();
}

void StringMonitor::MemberClass0$::setStringToCompare($String* value) {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->setStringToCompare(value);
}

bool StringMonitor::MemberClass0$::getNotifyMatch() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->getNotifyMatch();
}

void StringMonitor::MemberClass0$::setNotifyMatch(bool value) {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->setNotifyMatch(value);
}

bool StringMonitor::MemberClass0$::getNotifyDiffer() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->getNotifyDiffer();
}

void StringMonitor::MemberClass0$::setNotifyDiffer(bool value) {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->setNotifyDiffer(value);
}

void StringMonitor::MemberClass0$::start() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->start();
}

void StringMonitor::MemberClass0$::stop() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->stop();
}

void StringMonitor::MemberClass0$::addObservedObject($ObjectName* object) {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->addObservedObject(object);
}

void StringMonitor::MemberClass0$::removeObservedObject($ObjectName* object) {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->removeObservedObject(object);
}

bool StringMonitor::MemberClass0$::containsObservedObject($ObjectName* object) {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->containsObservedObject(object);
}

$ObjectNameArray* StringMonitor::MemberClass0$::getObservedObjects() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->getObservedObjects();
}

$ObjectName* StringMonitor::MemberClass0$::getObservedObject() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->getObservedObject();
}

void StringMonitor::MemberClass0$::setObservedObject($ObjectName* object) {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->setObservedObject(object);
}

$String* StringMonitor::MemberClass0$::getObservedAttribute() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->getObservedAttribute();
}

void StringMonitor::MemberClass0$::setObservedAttribute($String* attribute) {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->setObservedAttribute(attribute);
}

int64_t StringMonitor::MemberClass0$::getGranularityPeriod() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->getGranularityPeriod();
}

void StringMonitor::MemberClass0$::setGranularityPeriod(int64_t period) {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->setGranularityPeriod(period);
}

bool StringMonitor::MemberClass0$::isActive() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->isActive();
}

int32_t StringMonitor::MemberClass0$::hashCode() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->hashCode();
}

bool StringMonitor::MemberClass0$::equals(Object$* arg0) {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->equals(arg0);
}

$Object* StringMonitor::MemberClass0$::clone() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->clone();
}

$String* StringMonitor::MemberClass0$::toString() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->toString();
}

void StringMonitor::MemberClass0$::finalize() {
	return ((StringMonitor*)(void*)((int8_t*)(void*)this - $offsetof(StringMonitor, memberClass0$)))->finalize();
}

$StringArray* StringMonitor::types = nullptr;
$MBeanNotificationInfoArray* StringMonitor::notifsInfo = nullptr;

void StringMonitor::init$() {
	$Monitor::init$();
	$set(this, stringToCompare, ""_s);
	this->notifyMatch = false;
	this->notifyDiffer = false;
}

void StringMonitor::start() {
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
					$var($StringMonitor$StringMonitorObservedObject, smo, $cast($StringMonitor$StringMonitorObservedObject, o));
					$nc(smo)->setStatus(StringMonitor::MATCHING_OR_DIFFERING);
				}
			}
		}
		doStart();
	}
}

void StringMonitor::stop() {
	$synchronized(this) {
		doStop();
	}
}

$Object* StringMonitor::getDerivedGauge($ObjectName* object) {
	$synchronized(this) {
		return $of($cast($String, $Monitor::getDerivedGauge(object)));
	}
}

int64_t StringMonitor::getDerivedGaugeTimeStamp($ObjectName* object) {
	$synchronized(this) {
		return $Monitor::getDerivedGaugeTimeStamp(object);
	}
}

$String* StringMonitor::getDerivedGauge() {
	$synchronized(this) {
		if ($nc(this->observedObjects)->isEmpty()) {
			return nullptr;
		} else {
			return $cast($String, $nc(($cast($Monitor$ObservedObject, $($nc(this->observedObjects)->get(0)))))->getDerivedGauge());
		}
	}
}

int64_t StringMonitor::getDerivedGaugeTimeStamp() {
	$synchronized(this) {
		if ($nc(this->observedObjects)->isEmpty()) {
			return 0;
		} else {
			return $nc(($cast($Monitor$ObservedObject, $($nc(this->observedObjects)->get(0)))))->getDerivedGaugeTimeStamp();
		}
	}
}

$String* StringMonitor::getStringToCompare() {
	$synchronized(this) {
		return this->stringToCompare;
	}
}

void StringMonitor::setStringToCompare($String* value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (value == nullptr) {
			$throwNew($IllegalArgumentException, "Null string to compare"_s);
		}
		if ($nc(this->stringToCompare)->equals(value)) {
			return;
		}
		$set(this, stringToCompare, value);
		{
			$var($Iterator, i$, $nc(this->observedObjects)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Monitor$ObservedObject, o, $cast($Monitor$ObservedObject, i$->next()));
				{
					$var($StringMonitor$StringMonitorObservedObject, smo, $cast($StringMonitor$StringMonitorObservedObject, o));
					$nc(smo)->setStatus(StringMonitor::MATCHING_OR_DIFFERING);
				}
			}
		}
	}
}

bool StringMonitor::getNotifyMatch() {
	$synchronized(this) {
		return this->notifyMatch;
	}
}

void StringMonitor::setNotifyMatch(bool value) {
	$synchronized(this) {
		if (this->notifyMatch == value) {
			return;
		}
		this->notifyMatch = value;
	}
}

bool StringMonitor::getNotifyDiffer() {
	$synchronized(this) {
		return this->notifyDiffer;
	}
}

void StringMonitor::setNotifyDiffer(bool value) {
	$synchronized(this) {
		if (this->notifyDiffer == value) {
			return;
		}
		this->notifyDiffer = value;
	}
}

$MBeanNotificationInfoArray* StringMonitor::getNotificationInfo() {
	return $cast($MBeanNotificationInfoArray, $nc(StringMonitor::notifsInfo)->clone());
}

$Monitor$ObservedObject* StringMonitor::createObservedObject($ObjectName* object) {
	$var($StringMonitor$StringMonitorObservedObject, smo, $new($StringMonitor$StringMonitorObservedObject, object));
	smo->setStatus(StringMonitor::MATCHING_OR_DIFFERING);
	return smo;
}

bool StringMonitor::isComparableTypeValid($ObjectName* object, $String* attribute, $Comparable* value) {
	$synchronized(this) {
		if ($instanceOf($String, value)) {
			return true;
		}
		return false;
	}
}

void StringMonitor::onErrorNotification($MonitorNotification* notification) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($StringMonitor$StringMonitorObservedObject, o, $cast($StringMonitor$StringMonitorObservedObject, getObservedObject($($nc(notification)->getObservedObject()))));
		if (o == nullptr) {
			return;
		}
		$nc(o)->setStatus(StringMonitor::MATCHING_OR_DIFFERING);
	}
}

$MonitorNotification* StringMonitor::buildAlarmNotification($ObjectName* object, $String* attribute, $Comparable* value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($String, type, nullptr);
		$var($String, msg, nullptr);
		$var($Object, trigger, nullptr);
		$var($StringMonitor$StringMonitorObservedObject, o, $cast($StringMonitor$StringMonitorObservedObject, getObservedObject(object)));
		if (o == nullptr) {
			return nullptr;
		}
		if ($nc(o)->getStatus() == StringMonitor::MATCHING_OR_DIFFERING) {
			if ($nc($of($(o->getDerivedGauge())))->equals(this->stringToCompare)) {
				if (this->notifyMatch) {
					$assign(type, "jmx.monitor.string.matches"_s);
					$assign(msg, ""_s);
					$assign(trigger, this->stringToCompare);
				}
				o->setStatus(StringMonitor::DIFFERING);
			} else {
				if (this->notifyDiffer) {
					$assign(type, "jmx.monitor.string.differs"_s);
					$assign(msg, ""_s);
					$assign(trigger, this->stringToCompare);
				}
				o->setStatus(StringMonitor::MATCHING);
			}
		} else if (o->getStatus() == StringMonitor::MATCHING) {
			if ($nc($of($(o->getDerivedGauge())))->equals(this->stringToCompare)) {
				if (this->notifyMatch) {
					$assign(type, "jmx.monitor.string.matches"_s);
					$assign(msg, ""_s);
					$assign(trigger, this->stringToCompare);
				}
				o->setStatus(StringMonitor::DIFFERING);
			}
		} else if (o->getStatus() == StringMonitor::DIFFERING) {
			if (!$nc($of($(o->getDerivedGauge())))->equals(this->stringToCompare)) {
				if (this->notifyDiffer) {
					$assign(type, "jmx.monitor.string.differs"_s);
					$assign(msg, ""_s);
					$assign(trigger, this->stringToCompare);
				}
				o->setStatus(StringMonitor::MATCHING);
			}
		}
		return $new($MonitorNotification, type, this, 0, 0, msg, nullptr, nullptr, nullptr, trigger);
	}
}

void clinit$StringMonitor($Class* class$) {
	$assignStatic(StringMonitor::types, $new($StringArray, {
		"jmx.monitor.error.runtime"_s,
		"jmx.monitor.error.mbean"_s,
		"jmx.monitor.error.attribute"_s,
		"jmx.monitor.error.type"_s,
		"jmx.monitor.string.matches"_s,
		"jmx.monitor.string.differs"_s
	}));
	$assignStatic(StringMonitor::notifsInfo, $new($MBeanNotificationInfoArray, {$$new($MBeanNotificationInfo, StringMonitor::types, "javax.management.monitor.MonitorNotification"_s, "Notifications sent by the StringMonitor MBean"_s)}));
}

StringMonitor::StringMonitor() {
}

$Class* StringMonitor::load$($String* name, bool initialize) {
	$loadClass(StringMonitor, name, initialize, &_StringMonitor_ClassInfo_, clinit$StringMonitor, allocate$StringMonitor);
	return class$;
}

$Class* StringMonitor::class$ = nullptr;

		} // monitor
	} // management
} // javax