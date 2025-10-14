#ifndef _sun_management_MemoryPoolImpl_h_
#define _sun_management_MemoryPoolImpl_h_
//$ class sun.management.MemoryPoolImpl
//$ extends java.lang.management.MemoryPoolMXBean

#include <java/lang/Array.h>
#include <java/lang/management/MemoryPoolMXBean.h>

namespace java {
	namespace lang {
		namespace management {
			class MemoryManagerMXBean;
			class MemoryType;
			class MemoryUsage;
		}
	}
}
namespace javax {
	namespace management {
		class ObjectName;
	}
}
namespace sun {
	namespace management {
		class Sensor;
	}
}

namespace sun {
	namespace management {

class MemoryPoolImpl : public ::java::lang::management::MemoryPoolMXBean {
	$class(MemoryPoolImpl, $NO_CLASS_INIT, ::java::lang::management::MemoryPoolMXBean)
public:
	MemoryPoolImpl();
	void init$($String* name, bool isHeap, int64_t usageThreshold, int64_t gcThreshold);
	virtual ::java::lang::management::MemoryUsage* getCollectionUsage() override;
	::java::lang::management::MemoryUsage* getCollectionUsage0();
	virtual int64_t getCollectionUsageThreshold() override;
	virtual int64_t getCollectionUsageThresholdCount() override;
	virtual $StringArray* getMemoryManagerNames() override;
	$Array<::java::lang::management::MemoryManagerMXBean>* getMemoryManagers();
	$Array<::java::lang::management::MemoryManagerMXBean>* getMemoryManagers0();
	virtual $String* getName() override;
	virtual ::javax::management::ObjectName* getObjectName() override;
	virtual ::java::lang::management::MemoryUsage* getPeakUsage() override;
	::java::lang::management::MemoryUsage* getPeakUsage0();
	virtual ::java::lang::management::MemoryType* getType() override;
	virtual ::java::lang::management::MemoryUsage* getUsage() override;
	::java::lang::management::MemoryUsage* getUsage0();
	virtual int64_t getUsageThreshold() override;
	virtual int64_t getUsageThresholdCount() override;
	virtual bool isCollectionUsageThresholdExceeded() override;
	virtual bool isCollectionUsageThresholdSupported() override;
	virtual bool isUsageThresholdExceeded() override;
	virtual bool isUsageThresholdSupported() override;
	virtual bool isValid() override;
	virtual void resetPeakUsage() override;
	void resetPeakUsage0();
	void setCollectionThreshold0(int64_t current, int64_t newThreshold);
	virtual void setCollectionUsageThreshold(int64_t newThreshold) override;
	void setPoolCollectionSensor(::sun::management::Sensor* s);
	void setPoolUsageSensor(::sun::management::Sensor* s);
	virtual void setUsageThreshold(int64_t newThreshold) override;
	void setUsageThreshold0(int64_t current, int64_t newThreshold);
	$String* name = nullptr;
	bool isHeap = false;
	bool isValid$ = false;
	bool collectionThresholdSupported = false;
	bool usageThresholdSupported = false;
	$Array<::java::lang::management::MemoryManagerMXBean>* managers = nullptr;
	int64_t usageThreshold = 0;
	int64_t collectionThreshold = 0;
	bool usageSensorRegistered = false;
	bool gcSensorRegistered = false;
	::sun::management::Sensor* usageSensor = nullptr;
	::sun::management::Sensor* gcSensor = nullptr;
};

	} // management
} // sun

#endif // _sun_management_MemoryPoolImpl_h_