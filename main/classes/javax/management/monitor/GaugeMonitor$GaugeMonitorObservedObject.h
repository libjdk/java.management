#ifndef _javax_management_monitor_GaugeMonitor$GaugeMonitorObservedObject_h_
#define _javax_management_monitor_GaugeMonitor$GaugeMonitorObservedObject_h_
//$ class javax.management.monitor.GaugeMonitor$GaugeMonitorObservedObject
//$ extends javax.management.monitor.Monitor$ObservedObject

#include <javax/management/monitor/Monitor$ObservedObject.h>

namespace java {
	namespace lang {
		class Number;
	}
}
namespace javax {
	namespace management {
		class ObjectName;
	}
}
namespace javax {
	namespace management {
		namespace monitor {
			class Monitor$NumericalType;
		}
	}
}

namespace javax {
	namespace management {
		namespace monitor {

class $export GaugeMonitor$GaugeMonitorObservedObject : public ::javax::management::monitor::Monitor$ObservedObject {
	$class(GaugeMonitor$GaugeMonitorObservedObject, $NO_CLASS_INIT, ::javax::management::monitor::Monitor$ObservedObject)
public:
	GaugeMonitor$GaugeMonitorObservedObject();
	void init$(::javax::management::ObjectName* observedObject);
	bool getDerivedGaugeValid();
	::java::lang::Number* getPreviousScanGauge();
	int32_t getStatus();
	::javax::management::monitor::Monitor$NumericalType* getType();
	void setDerivedGaugeValid(bool derivedGaugeValid);
	void setPreviousScanGauge(::java::lang::Number* previousScanGauge);
	void setStatus(int32_t status);
	void setType(::javax::management::monitor::Monitor$NumericalType* type);
	bool derivedGaugeValid = false;
	::javax::management::monitor::Monitor$NumericalType* type = nullptr;
	::java::lang::Number* previousScanGauge = nullptr;
	int32_t status = 0;
};

		} // monitor
	} // management
} // javax

#endif // _javax_management_monitor_GaugeMonitor$GaugeMonitorObservedObject_h_