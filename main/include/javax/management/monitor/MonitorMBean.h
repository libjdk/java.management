#ifndef _javax_management_monitor_MonitorMBean_h_
#define _javax_management_monitor_MonitorMBean_h_
//$ interface javax.management.monitor.MonitorMBean
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace javax {
	namespace management {
		namespace monitor {

class $import MonitorMBean : public ::java::lang::Object {
	$interface(MonitorMBean, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addObservedObject(::javax::management::ObjectName* object) {}
	virtual bool containsObservedObject(::javax::management::ObjectName* object) {return false;}
	virtual int64_t getGranularityPeriod() {return 0;}
	virtual $String* getObservedAttribute() {return nullptr;}
	virtual ::javax::management::ObjectName* getObservedObject() {return nullptr;}
	virtual $Array<::javax::management::ObjectName>* getObservedObjects() {return nullptr;}
	virtual bool isActive() {return false;}
	virtual void removeObservedObject(::javax::management::ObjectName* object) {}
	virtual void setGranularityPeriod(int64_t period) {}
	virtual void setObservedAttribute($String* attribute) {}
	virtual void setObservedObject(::javax::management::ObjectName* object) {}
	virtual void start() {}
	virtual void stop() {}
};

		} // monitor
	} // management
} // javax

#endif // _javax_management_monitor_MonitorMBean_h_