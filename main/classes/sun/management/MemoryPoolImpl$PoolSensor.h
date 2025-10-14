#ifndef _sun_management_MemoryPoolImpl$PoolSensor_h_
#define _sun_management_MemoryPoolImpl$PoolSensor_h_
//$ class sun.management.MemoryPoolImpl$PoolSensor
//$ extends sun.management.Sensor

#include <sun/management/Sensor.h>

namespace java {
	namespace lang {
		namespace management {
			class MemoryUsage;
		}
	}
}
namespace sun {
	namespace management {
		class MemoryPoolImpl;
	}
}

namespace sun {
	namespace management {

class MemoryPoolImpl$PoolSensor : public ::sun::management::Sensor {
	$class(MemoryPoolImpl$PoolSensor, $NO_CLASS_INIT, ::sun::management::Sensor)
public:
	MemoryPoolImpl$PoolSensor();
	void init$(::sun::management::MemoryPoolImpl* this$0, ::sun::management::MemoryPoolImpl* pool, $String* name);
	virtual void clearAction() override;
	virtual void triggerAction(::java::lang::management::MemoryUsage* usage) override;
	virtual void triggerAction() override;
	::sun::management::MemoryPoolImpl* this$0 = nullptr;
	::sun::management::MemoryPoolImpl* pool = nullptr;
};

	} // management
} // sun

#endif // _sun_management_MemoryPoolImpl$PoolSensor_h_