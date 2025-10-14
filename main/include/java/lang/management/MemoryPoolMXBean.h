#ifndef _java_lang_management_MemoryPoolMXBean_h_
#define _java_lang_management_MemoryPoolMXBean_h_
//$ interface java.lang.management.MemoryPoolMXBean
//$ extends java.lang.management.PlatformManagedObject

#include <java/lang/Array.h>
#include <java/lang/management/PlatformManagedObject.h>

namespace java {
	namespace lang {
		namespace management {
			class MemoryType;
			class MemoryUsage;
		}
	}
}

namespace java {
	namespace lang {
		namespace management {

class $import MemoryPoolMXBean : public ::java::lang::management::PlatformManagedObject {
	$interface(MemoryPoolMXBean, $NO_CLASS_INIT, ::java::lang::management::PlatformManagedObject)
public:
	virtual ::java::lang::management::MemoryUsage* getCollectionUsage() {return nullptr;}
	virtual int64_t getCollectionUsageThreshold() {return 0;}
	virtual int64_t getCollectionUsageThresholdCount() {return 0;}
	virtual $StringArray* getMemoryManagerNames() {return nullptr;}
	virtual $String* getName() {return nullptr;}
	virtual ::java::lang::management::MemoryUsage* getPeakUsage() {return nullptr;}
	virtual ::java::lang::management::MemoryType* getType() {return nullptr;}
	virtual ::java::lang::management::MemoryUsage* getUsage() {return nullptr;}
	virtual int64_t getUsageThreshold() {return 0;}
	virtual int64_t getUsageThresholdCount() {return 0;}
	virtual bool isCollectionUsageThresholdExceeded() {return false;}
	virtual bool isCollectionUsageThresholdSupported() {return false;}
	virtual bool isUsageThresholdExceeded() {return false;}
	virtual bool isUsageThresholdSupported() {return false;}
	virtual bool isValid() {return false;}
	virtual void resetPeakUsage() {}
	virtual void setCollectionUsageThreshold(int64_t threshold) {}
	virtual void setUsageThreshold(int64_t threshold) {}
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_MemoryPoolMXBean_h_