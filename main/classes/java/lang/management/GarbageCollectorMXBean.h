#ifndef _java_lang_management_GarbageCollectorMXBean_h_
#define _java_lang_management_GarbageCollectorMXBean_h_
//$ interface java.lang.management.GarbageCollectorMXBean
//$ extends java.lang.management.MemoryManagerMXBean

#include <java/lang/management/MemoryManagerMXBean.h>

namespace java {
	namespace lang {
		namespace management {

class $export GarbageCollectorMXBean : public ::java::lang::management::MemoryManagerMXBean {
	$interface(GarbageCollectorMXBean, $NO_CLASS_INIT, ::java::lang::management::MemoryManagerMXBean)
public:
	virtual int64_t getCollectionCount() {return 0;}
	virtual int64_t getCollectionTime() {return 0;}
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_GarbageCollectorMXBean_h_