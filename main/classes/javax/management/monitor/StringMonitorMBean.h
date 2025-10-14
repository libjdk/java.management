#ifndef _javax_management_monitor_StringMonitorMBean_h_
#define _javax_management_monitor_StringMonitorMBean_h_
//$ interface javax.management.monitor.StringMonitorMBean
//$ extends javax.management.monitor.MonitorMBean

#include <javax/management/monitor/MonitorMBean.h>

namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace javax {
	namespace management {
		namespace monitor {

class $export StringMonitorMBean : public ::javax::management::monitor::MonitorMBean {
	$interface(StringMonitorMBean, $NO_CLASS_INIT, ::javax::management::monitor::MonitorMBean)
public:
	virtual $String* getDerivedGauge() {return nullptr;}
	virtual $String* getDerivedGauge(::javax::management::ObjectName* object) {return nullptr;}
	virtual int64_t getDerivedGaugeTimeStamp() {return 0;}
	virtual int64_t getDerivedGaugeTimeStamp(::javax::management::ObjectName* object) {return 0;}
	virtual bool getNotifyDiffer() {return false;}
	virtual bool getNotifyMatch() {return false;}
	virtual $String* getStringToCompare() {return nullptr;}
	virtual void setNotifyDiffer(bool value) {}
	virtual void setNotifyMatch(bool value) {}
	virtual void setStringToCompare($String* value) {}
};

		} // monitor
	} // management
} // javax

#endif // _javax_management_monitor_StringMonitorMBean_h_