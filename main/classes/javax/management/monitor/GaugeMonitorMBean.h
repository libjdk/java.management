#ifndef _javax_management_monitor_GaugeMonitorMBean_h_
#define _javax_management_monitor_GaugeMonitorMBean_h_
//$ interface javax.management.monitor.GaugeMonitorMBean
//$ extends javax.management.monitor.MonitorMBean

#include <javax/management/monitor/MonitorMBean.h>

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

class $export GaugeMonitorMBean : public ::javax::management::monitor::MonitorMBean {
	$interface(GaugeMonitorMBean, $NO_CLASS_INIT, ::javax::management::monitor::MonitorMBean)
public:
	virtual ::java::lang::Number* getDerivedGauge() {return nullptr;}
	virtual ::java::lang::Number* getDerivedGauge(::javax::management::ObjectName* object) {return nullptr;}
	virtual int64_t getDerivedGaugeTimeStamp() {return 0;}
	virtual int64_t getDerivedGaugeTimeStamp(::javax::management::ObjectName* object) {return 0;}
	virtual bool getDifferenceMode() {return false;}
	virtual ::java::lang::Number* getHighThreshold() {return nullptr;}
	virtual ::java::lang::Number* getLowThreshold() {return nullptr;}
	virtual bool getNotifyHigh() {return false;}
	virtual bool getNotifyLow() {return false;}
	virtual void setDifferenceMode(bool value) {}
	virtual void setNotifyHigh(bool value) {}
	virtual void setNotifyLow(bool value) {}
	virtual void setThresholds(::java::lang::Number* highValue, ::java::lang::Number* lowValue) {}
};

		} // monitor
	} // management
} // javax

#endif // _javax_management_monitor_GaugeMonitorMBean_h_