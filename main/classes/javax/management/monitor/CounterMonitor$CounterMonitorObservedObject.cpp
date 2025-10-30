#include <javax/management/monitor/CounterMonitor$CounterMonitorObservedObject.h>

#include <java/lang/Number.h>
#include <javax/management/ObjectName.h>
#include <javax/management/monitor/CounterMonitor.h>
#include <javax/management/monitor/Monitor$NumericalType.h>
#include <javax/management/monitor/Monitor$ObservedObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $ObjectName = ::javax::management::ObjectName;
using $CounterMonitor = ::javax::management::monitor::CounterMonitor;
using $Monitor$NumericalType = ::javax::management::monitor::Monitor$NumericalType;
using $Monitor$ObservedObject = ::javax::management::monitor::Monitor$ObservedObject;

namespace javax {
	namespace management {
		namespace monitor {

$FieldInfo _CounterMonitor$CounterMonitorObservedObject_FieldInfo_[] = {
	{"threshold", "Ljava/lang/Number;", nullptr, $PRIVATE, $field(CounterMonitor$CounterMonitorObservedObject, threshold)},
	{"previousScanCounter", "Ljava/lang/Number;", nullptr, $PRIVATE, $field(CounterMonitor$CounterMonitorObservedObject, previousScanCounter)},
	{"modulusExceeded", "Z", nullptr, $PRIVATE, $field(CounterMonitor$CounterMonitorObservedObject, modulusExceeded)},
	{"derivedGaugeExceeded", "Ljava/lang/Number;", nullptr, $PRIVATE, $field(CounterMonitor$CounterMonitorObservedObject, derivedGaugeExceeded)},
	{"derivedGaugeValid", "Z", nullptr, $PRIVATE, $field(CounterMonitor$CounterMonitorObservedObject, derivedGaugeValid)},
	{"eventAlreadyNotified", "Z", nullptr, $PRIVATE, $field(CounterMonitor$CounterMonitorObservedObject, eventAlreadyNotified)},
	{"type", "Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PRIVATE, $field(CounterMonitor$CounterMonitorObservedObject, type)},
	{}
};

$MethodInfo _CounterMonitor$CounterMonitorObservedObject_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, $method(static_cast<void(CounterMonitor$CounterMonitorObservedObject::*)($ObjectName*)>(&CounterMonitor$CounterMonitorObservedObject::init$))},
	{"getDerivedGaugeExceeded", "()Ljava/lang/Number;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<$Number*(CounterMonitor$CounterMonitorObservedObject::*)()>(&CounterMonitor$CounterMonitorObservedObject::getDerivedGaugeExceeded))},
	{"getDerivedGaugeValid", "()Z", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<bool(CounterMonitor$CounterMonitorObservedObject::*)()>(&CounterMonitor$CounterMonitorObservedObject::getDerivedGaugeValid))},
	{"getEventAlreadyNotified", "()Z", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<bool(CounterMonitor$CounterMonitorObservedObject::*)()>(&CounterMonitor$CounterMonitorObservedObject::getEventAlreadyNotified))},
	{"getModulusExceeded", "()Z", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<bool(CounterMonitor$CounterMonitorObservedObject::*)()>(&CounterMonitor$CounterMonitorObservedObject::getModulusExceeded))},
	{"getPreviousScanCounter", "()Ljava/lang/Number;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<$Number*(CounterMonitor$CounterMonitorObservedObject::*)()>(&CounterMonitor$CounterMonitorObservedObject::getPreviousScanCounter))},
	{"getThreshold", "()Ljava/lang/Number;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<$Number*(CounterMonitor$CounterMonitorObservedObject::*)()>(&CounterMonitor$CounterMonitorObservedObject::getThreshold))},
	{"getType", "()Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<$Monitor$NumericalType*(CounterMonitor$CounterMonitorObservedObject::*)()>(&CounterMonitor$CounterMonitorObservedObject::getType))},
	{"setDerivedGaugeExceeded", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(CounterMonitor$CounterMonitorObservedObject::*)($Number*)>(&CounterMonitor$CounterMonitorObservedObject::setDerivedGaugeExceeded))},
	{"setDerivedGaugeValid", "(Z)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(CounterMonitor$CounterMonitorObservedObject::*)(bool)>(&CounterMonitor$CounterMonitorObservedObject::setDerivedGaugeValid))},
	{"setEventAlreadyNotified", "(Z)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(CounterMonitor$CounterMonitorObservedObject::*)(bool)>(&CounterMonitor$CounterMonitorObservedObject::setEventAlreadyNotified))},
	{"setModulusExceeded", "(Z)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(CounterMonitor$CounterMonitorObservedObject::*)(bool)>(&CounterMonitor$CounterMonitorObservedObject::setModulusExceeded))},
	{"setPreviousScanCounter", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(CounterMonitor$CounterMonitorObservedObject::*)($Number*)>(&CounterMonitor$CounterMonitorObservedObject::setPreviousScanCounter))},
	{"setThreshold", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(CounterMonitor$CounterMonitorObservedObject::*)($Number*)>(&CounterMonitor$CounterMonitorObservedObject::setThreshold))},
	{"setType", "(Ljavax/management/monitor/Monitor$NumericalType;)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(CounterMonitor$CounterMonitorObservedObject::*)($Monitor$NumericalType*)>(&CounterMonitor$CounterMonitorObservedObject::setType))},
	{}
};

$InnerClassInfo _CounterMonitor$CounterMonitorObservedObject_InnerClassesInfo_[] = {
	{"javax.management.monitor.CounterMonitor$CounterMonitorObservedObject", "javax.management.monitor.CounterMonitor", "CounterMonitorObservedObject", $STATIC},
	{"javax.management.monitor.Monitor$ObservedObject", "javax.management.monitor.Monitor", "ObservedObject", $STATIC},
	{}
};

$ClassInfo _CounterMonitor$CounterMonitorObservedObject_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.monitor.CounterMonitor$CounterMonitorObservedObject",
	"javax.management.monitor.Monitor$ObservedObject",
	nullptr,
	_CounterMonitor$CounterMonitorObservedObject_FieldInfo_,
	_CounterMonitor$CounterMonitorObservedObject_MethodInfo_,
	nullptr,
	nullptr,
	_CounterMonitor$CounterMonitorObservedObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.monitor.CounterMonitor"
};

$Object* allocate$CounterMonitor$CounterMonitorObservedObject($Class* clazz) {
	return $of($alloc(CounterMonitor$CounterMonitorObservedObject));
}

void CounterMonitor$CounterMonitorObservedObject::init$($ObjectName* observedObject) {
	$Monitor$ObservedObject::init$(observedObject);
}

$Number* CounterMonitor$CounterMonitorObservedObject::getThreshold() {
	$synchronized(this) {
		return this->threshold;
	}
}

void CounterMonitor$CounterMonitorObservedObject::setThreshold($Number* threshold) {
	$synchronized(this) {
		$set(this, threshold, threshold);
	}
}

$Number* CounterMonitor$CounterMonitorObservedObject::getPreviousScanCounter() {
	$synchronized(this) {
		return this->previousScanCounter;
	}
}

void CounterMonitor$CounterMonitorObservedObject::setPreviousScanCounter($Number* previousScanCounter) {
	$synchronized(this) {
		$set(this, previousScanCounter, previousScanCounter);
	}
}

bool CounterMonitor$CounterMonitorObservedObject::getModulusExceeded() {
	$synchronized(this) {
		return this->modulusExceeded;
	}
}

void CounterMonitor$CounterMonitorObservedObject::setModulusExceeded(bool modulusExceeded) {
	$synchronized(this) {
		this->modulusExceeded = modulusExceeded;
	}
}

$Number* CounterMonitor$CounterMonitorObservedObject::getDerivedGaugeExceeded() {
	$synchronized(this) {
		return this->derivedGaugeExceeded;
	}
}

void CounterMonitor$CounterMonitorObservedObject::setDerivedGaugeExceeded($Number* derivedGaugeExceeded) {
	$synchronized(this) {
		$set(this, derivedGaugeExceeded, derivedGaugeExceeded);
	}
}

bool CounterMonitor$CounterMonitorObservedObject::getDerivedGaugeValid() {
	$synchronized(this) {
		return this->derivedGaugeValid;
	}
}

void CounterMonitor$CounterMonitorObservedObject::setDerivedGaugeValid(bool derivedGaugeValid) {
	$synchronized(this) {
		this->derivedGaugeValid = derivedGaugeValid;
	}
}

bool CounterMonitor$CounterMonitorObservedObject::getEventAlreadyNotified() {
	$synchronized(this) {
		return this->eventAlreadyNotified;
	}
}

void CounterMonitor$CounterMonitorObservedObject::setEventAlreadyNotified(bool eventAlreadyNotified) {
	$synchronized(this) {
		this->eventAlreadyNotified = eventAlreadyNotified;
	}
}

$Monitor$NumericalType* CounterMonitor$CounterMonitorObservedObject::getType() {
	$synchronized(this) {
		return this->type;
	}
}

void CounterMonitor$CounterMonitorObservedObject::setType($Monitor$NumericalType* type) {
	$synchronized(this) {
		$set(this, type, type);
	}
}

CounterMonitor$CounterMonitorObservedObject::CounterMonitor$CounterMonitorObservedObject() {
}

$Class* CounterMonitor$CounterMonitorObservedObject::load$($String* name, bool initialize) {
	$loadClass(CounterMonitor$CounterMonitorObservedObject, name, initialize, &_CounterMonitor$CounterMonitorObservedObject_ClassInfo_, allocate$CounterMonitor$CounterMonitorObservedObject);
	return class$;
}

$Class* CounterMonitor$CounterMonitorObservedObject::class$ = nullptr;

		} // monitor
	} // management
} // javax