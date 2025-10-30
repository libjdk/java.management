#include <javax/management/monitor/GaugeMonitor$GaugeMonitorObservedObject.h>

#include <java/lang/Number.h>
#include <javax/management/ObjectName.h>
#include <javax/management/monitor/GaugeMonitor.h>
#include <javax/management/monitor/Monitor$NumericalType.h>
#include <javax/management/monitor/Monitor$ObservedObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $ObjectName = ::javax::management::ObjectName;
using $GaugeMonitor = ::javax::management::monitor::GaugeMonitor;
using $Monitor$NumericalType = ::javax::management::monitor::Monitor$NumericalType;
using $Monitor$ObservedObject = ::javax::management::monitor::Monitor$ObservedObject;

namespace javax {
	namespace management {
		namespace monitor {

$FieldInfo _GaugeMonitor$GaugeMonitorObservedObject_FieldInfo_[] = {
	{"derivedGaugeValid", "Z", nullptr, $PRIVATE, $field(GaugeMonitor$GaugeMonitorObservedObject, derivedGaugeValid)},
	{"type", "Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PRIVATE, $field(GaugeMonitor$GaugeMonitorObservedObject, type)},
	{"previousScanGauge", "Ljava/lang/Number;", nullptr, $PRIVATE, $field(GaugeMonitor$GaugeMonitorObservedObject, previousScanGauge)},
	{"status", "I", nullptr, $PRIVATE, $field(GaugeMonitor$GaugeMonitorObservedObject, status)},
	{}
};

$MethodInfo _GaugeMonitor$GaugeMonitorObservedObject_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, $method(static_cast<void(GaugeMonitor$GaugeMonitorObservedObject::*)($ObjectName*)>(&GaugeMonitor$GaugeMonitorObservedObject::init$))},
	{"getDerivedGaugeValid", "()Z", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<bool(GaugeMonitor$GaugeMonitorObservedObject::*)()>(&GaugeMonitor$GaugeMonitorObservedObject::getDerivedGaugeValid))},
	{"getPreviousScanGauge", "()Ljava/lang/Number;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<$Number*(GaugeMonitor$GaugeMonitorObservedObject::*)()>(&GaugeMonitor$GaugeMonitorObservedObject::getPreviousScanGauge))},
	{"getStatus", "()I", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<int32_t(GaugeMonitor$GaugeMonitorObservedObject::*)()>(&GaugeMonitor$GaugeMonitorObservedObject::getStatus))},
	{"getType", "()Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<$Monitor$NumericalType*(GaugeMonitor$GaugeMonitorObservedObject::*)()>(&GaugeMonitor$GaugeMonitorObservedObject::getType))},
	{"setDerivedGaugeValid", "(Z)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(GaugeMonitor$GaugeMonitorObservedObject::*)(bool)>(&GaugeMonitor$GaugeMonitorObservedObject::setDerivedGaugeValid))},
	{"setPreviousScanGauge", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(GaugeMonitor$GaugeMonitorObservedObject::*)($Number*)>(&GaugeMonitor$GaugeMonitorObservedObject::setPreviousScanGauge))},
	{"setStatus", "(I)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(GaugeMonitor$GaugeMonitorObservedObject::*)(int32_t)>(&GaugeMonitor$GaugeMonitorObservedObject::setStatus))},
	{"setType", "(Ljavax/management/monitor/Monitor$NumericalType;)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(GaugeMonitor$GaugeMonitorObservedObject::*)($Monitor$NumericalType*)>(&GaugeMonitor$GaugeMonitorObservedObject::setType))},
	{}
};

$InnerClassInfo _GaugeMonitor$GaugeMonitorObservedObject_InnerClassesInfo_[] = {
	{"javax.management.monitor.GaugeMonitor$GaugeMonitorObservedObject", "javax.management.monitor.GaugeMonitor", "GaugeMonitorObservedObject", $STATIC},
	{"javax.management.monitor.Monitor$ObservedObject", "javax.management.monitor.Monitor", "ObservedObject", $STATIC},
	{}
};

$ClassInfo _GaugeMonitor$GaugeMonitorObservedObject_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.monitor.GaugeMonitor$GaugeMonitorObservedObject",
	"javax.management.monitor.Monitor$ObservedObject",
	nullptr,
	_GaugeMonitor$GaugeMonitorObservedObject_FieldInfo_,
	_GaugeMonitor$GaugeMonitorObservedObject_MethodInfo_,
	nullptr,
	nullptr,
	_GaugeMonitor$GaugeMonitorObservedObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.monitor.GaugeMonitor"
};

$Object* allocate$GaugeMonitor$GaugeMonitorObservedObject($Class* clazz) {
	return $of($alloc(GaugeMonitor$GaugeMonitorObservedObject));
}

void GaugeMonitor$GaugeMonitorObservedObject::init$($ObjectName* observedObject) {
	$Monitor$ObservedObject::init$(observedObject);
}

bool GaugeMonitor$GaugeMonitorObservedObject::getDerivedGaugeValid() {
	$synchronized(this) {
		return this->derivedGaugeValid;
	}
}

void GaugeMonitor$GaugeMonitorObservedObject::setDerivedGaugeValid(bool derivedGaugeValid) {
	$synchronized(this) {
		this->derivedGaugeValid = derivedGaugeValid;
	}
}

$Monitor$NumericalType* GaugeMonitor$GaugeMonitorObservedObject::getType() {
	$synchronized(this) {
		return this->type;
	}
}

void GaugeMonitor$GaugeMonitorObservedObject::setType($Monitor$NumericalType* type) {
	$synchronized(this) {
		$set(this, type, type);
	}
}

$Number* GaugeMonitor$GaugeMonitorObservedObject::getPreviousScanGauge() {
	$synchronized(this) {
		return this->previousScanGauge;
	}
}

void GaugeMonitor$GaugeMonitorObservedObject::setPreviousScanGauge($Number* previousScanGauge) {
	$synchronized(this) {
		$set(this, previousScanGauge, previousScanGauge);
	}
}

int32_t GaugeMonitor$GaugeMonitorObservedObject::getStatus() {
	$synchronized(this) {
		return this->status;
	}
}

void GaugeMonitor$GaugeMonitorObservedObject::setStatus(int32_t status) {
	$synchronized(this) {
		this->status = status;
	}
}

GaugeMonitor$GaugeMonitorObservedObject::GaugeMonitor$GaugeMonitorObservedObject() {
}

$Class* GaugeMonitor$GaugeMonitorObservedObject::load$($String* name, bool initialize) {
	$loadClass(GaugeMonitor$GaugeMonitorObservedObject, name, initialize, &_GaugeMonitor$GaugeMonitorObservedObject_ClassInfo_, allocate$GaugeMonitor$GaugeMonitorObservedObject);
	return class$;
}

$Class* GaugeMonitor$GaugeMonitorObservedObject::class$ = nullptr;

		} // monitor
	} // management
} // javax