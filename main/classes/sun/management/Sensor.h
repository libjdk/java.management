#ifndef _sun_management_Sensor_h_
#define _sun_management_Sensor_h_
//$ class sun.management.Sensor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace management {
			class MemoryUsage;
		}
	}
}

namespace sun {
	namespace management {

class $export Sensor : public ::java::lang::Object {
	$class(Sensor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Sensor();
	void init$($String* name);
	virtual void clear();
	virtual void clear(int32_t increment);
	virtual void clearAction() {}
	virtual int64_t getCount();
	virtual $String* getName();
	virtual bool isOn();
	virtual $String* toString() override;
	virtual void trigger();
	virtual void trigger(int32_t increment);
	virtual void trigger(int32_t increment, ::java::lang::management::MemoryUsage* usage);
	virtual void triggerAction() {}
	virtual void triggerAction(::java::lang::management::MemoryUsage* u) {}
	$Object* lock = nullptr;
	$String* name = nullptr;
	int64_t count = 0;
	bool on = false;
};

	} // management
} // sun

#endif // _sun_management_Sensor_h_