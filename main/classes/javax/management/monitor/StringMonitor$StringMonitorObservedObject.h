#ifndef _javax_management_monitor_StringMonitor$StringMonitorObservedObject_h_
#define _javax_management_monitor_StringMonitor$StringMonitorObservedObject_h_
//$ class javax.management.monitor.StringMonitor$StringMonitorObservedObject
//$ extends javax.management.monitor.Monitor$ObservedObject

#include <javax/management/monitor/Monitor$ObservedObject.h>

namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace javax {
	namespace management {
		namespace monitor {

class $export StringMonitor$StringMonitorObservedObject : public ::javax::management::monitor::Monitor$ObservedObject {
	$class(StringMonitor$StringMonitorObservedObject, $NO_CLASS_INIT, ::javax::management::monitor::Monitor$ObservedObject)
public:
	StringMonitor$StringMonitorObservedObject();
	void init$(::javax::management::ObjectName* observedObject);
	int32_t getStatus();
	void setStatus(int32_t status);
	int32_t status = 0;
};

		} // monitor
	} // management
} // javax

#endif // _javax_management_monitor_StringMonitor$StringMonitorObservedObject_h_