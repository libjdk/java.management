#ifndef _java_lang_management_MemoryMXBean_h_
#define _java_lang_management_MemoryMXBean_h_
//$ interface java.lang.management.MemoryMXBean
//$ extends java.lang.management.PlatformManagedObject

#include <java/lang/management/PlatformManagedObject.h>

namespace java {
	namespace lang {
		namespace management {
			class MemoryUsage;
		}
	}
}

namespace java {
	namespace lang {
		namespace management {

class $export MemoryMXBean : public ::java::lang::management::PlatformManagedObject {
	$interface(MemoryMXBean, $NO_CLASS_INIT, ::java::lang::management::PlatformManagedObject)
public:
	virtual void gc() {}
	virtual ::java::lang::management::MemoryUsage* getHeapMemoryUsage() {return nullptr;}
	virtual ::java::lang::management::MemoryUsage* getNonHeapMemoryUsage() {return nullptr;}
	virtual int32_t getObjectPendingFinalizationCount() {return 0;}
	virtual bool isVerbose() {return false;}
	virtual void setVerbose(bool value) {}
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_MemoryMXBean_h_