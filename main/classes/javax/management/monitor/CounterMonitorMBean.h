#ifndef _javax_management_monitor_CounterMonitorMBean_h_
#define _javax_management_monitor_CounterMonitorMBean_h_
//$ interface javax.management.monitor.CounterMonitorMBean
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

class $export CounterMonitorMBean : public ::javax::management::monitor::MonitorMBean {
	$interface(CounterMonitorMBean, $NO_CLASS_INIT, ::javax::management::monitor::MonitorMBean)
public:
	virtual ::java::lang::Number* getDerivedGauge() {return nullptr;}
	virtual ::java::lang::Number* getDerivedGauge(::javax::management::ObjectName* object) {return nullptr;}
	virtual int64_t getDerivedGaugeTimeStamp() {return 0;}
	virtual int64_t getDerivedGaugeTimeStamp(::javax::management::ObjectName* object) {return 0;}
	virtual bool getDifferenceMode() {return false;}
	virtual ::java::lang::Number* getInitThreshold() {return nullptr;}
	virtual ::java::lang::Number* getModulus() {return nullptr;}
	virtual bool getNotify() {return false;}
	virtual ::java::lang::Number* getOffset() {return nullptr;}
	virtual ::java::lang::Number* getThreshold() {return nullptr;}
	virtual ::java::lang::Number* getThreshold(::javax::management::ObjectName* object) {return nullptr;}
	virtual void setDifferenceMode(bool value) {}
	virtual void setInitThreshold(::java::lang::Number* value) {}
	virtual void setModulus(::java::lang::Number* value) {}
	virtual void setNotify(bool value) {}
	virtual void setOffset(::java::lang::Number* value) {}
	virtual void setThreshold(::java::lang::Number* value) {}
};

		} // monitor
	} // management
} // javax

#endif // _javax_management_monitor_CounterMonitorMBean_h_