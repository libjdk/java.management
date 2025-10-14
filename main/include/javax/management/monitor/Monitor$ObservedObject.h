#ifndef _javax_management_monitor_Monitor$ObservedObject_h_
#define _javax_management_monitor_Monitor$ObservedObject_h_
//$ class javax.management.monitor.Monitor$ObservedObject
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace javax {
	namespace management {
		namespace monitor {

class $import Monitor$ObservedObject : public ::java::lang::Object {
	$class(Monitor$ObservedObject, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Monitor$ObservedObject();
	void init$(::javax::management::ObjectName* observedObject);
	int32_t getAlreadyNotified();
	$Object* getDerivedGauge();
	int64_t getDerivedGaugeTimeStamp();
	::javax::management::ObjectName* getObservedObject();
	void setAlreadyNotified(int32_t alreadyNotified);
	void setDerivedGauge(Object$* derivedGauge);
	void setDerivedGaugeTimeStamp(int64_t derivedGaugeTimeStamp);
	::javax::management::ObjectName* observedObject = nullptr;
	int32_t alreadyNotified = 0;
	$Object* derivedGauge = nullptr;
	int64_t derivedGaugeTimeStamp = 0;
};

		} // monitor
	} // management
} // javax

#endif // _javax_management_monitor_Monitor$ObservedObject_h_