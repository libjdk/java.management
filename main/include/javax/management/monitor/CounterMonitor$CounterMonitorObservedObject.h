#ifndef _javax_management_monitor_CounterMonitor$CounterMonitorObservedObject_h_
#define _javax_management_monitor_CounterMonitor$CounterMonitorObservedObject_h_
//$ class javax.management.monitor.CounterMonitor$CounterMonitorObservedObject
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

class $import CounterMonitor$CounterMonitorObservedObject : public ::javax::management::monitor::Monitor$ObservedObject {
	$class(CounterMonitor$CounterMonitorObservedObject, $NO_CLASS_INIT, ::javax::management::monitor::Monitor$ObservedObject)
public:
	CounterMonitor$CounterMonitorObservedObject();
	void init$(::javax::management::ObjectName* observedObject);
	::java::lang::Number* getDerivedGaugeExceeded();
	bool getDerivedGaugeValid();
	bool getEventAlreadyNotified();
	bool getModulusExceeded();
	::java::lang::Number* getPreviousScanCounter();
	::java::lang::Number* getThreshold();
	::javax::management::monitor::Monitor$NumericalType* getType();
	void setDerivedGaugeExceeded(::java::lang::Number* derivedGaugeExceeded);
	void setDerivedGaugeValid(bool derivedGaugeValid);
	void setEventAlreadyNotified(bool eventAlreadyNotified);
	void setModulusExceeded(bool modulusExceeded);
	void setPreviousScanCounter(::java::lang::Number* previousScanCounter);
	void setThreshold(::java::lang::Number* threshold);
	void setType(::javax::management::monitor::Monitor$NumericalType* type);
	::java::lang::Number* threshold = nullptr;
	::java::lang::Number* previousScanCounter = nullptr;
	bool modulusExceeded = false;
	::java::lang::Number* derivedGaugeExceeded = nullptr;
	bool derivedGaugeValid = false;
	bool eventAlreadyNotified = false;
	::javax::management::monitor::Monitor$NumericalType* type = nullptr;
};

		} // monitor
	} // management
} // javax

#endif // _javax_management_monitor_CounterMonitor$CounterMonitorObservedObject_h_