#ifndef _java_lang_management_MemoryManagerMXBean_h_
#define _java_lang_management_MemoryManagerMXBean_h_
//$ interface java.lang.management.MemoryManagerMXBean
//$ extends java.lang.management.PlatformManagedObject

#include <java/lang/Array.h>
#include <java/lang/management/PlatformManagedObject.h>

namespace java {
	namespace lang {
		namespace management {

class $import MemoryManagerMXBean : public ::java::lang::management::PlatformManagedObject {
	$interface(MemoryManagerMXBean, $NO_CLASS_INIT, ::java::lang::management::PlatformManagedObject)
public:
	virtual $StringArray* getMemoryPoolNames() {return nullptr;}
	virtual $String* getName() {return nullptr;}
	virtual bool isValid() {return false;}
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_MemoryManagerMXBean_h_