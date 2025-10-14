#ifndef _java_lang_management_BufferPoolMXBean_h_
#define _java_lang_management_BufferPoolMXBean_h_
//$ interface java.lang.management.BufferPoolMXBean
//$ extends java.lang.management.PlatformManagedObject

#include <java/lang/management/PlatformManagedObject.h>

namespace java {
	namespace lang {
		namespace management {

class $import BufferPoolMXBean : public ::java::lang::management::PlatformManagedObject {
	$interface(BufferPoolMXBean, $NO_CLASS_INIT, ::java::lang::management::PlatformManagedObject)
public:
	virtual int64_t getCount() {return 0;}
	virtual int64_t getMemoryUsed() {return 0;}
	virtual $String* getName() {return nullptr;}
	virtual int64_t getTotalCapacity() {return 0;}
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_BufferPoolMXBean_h_