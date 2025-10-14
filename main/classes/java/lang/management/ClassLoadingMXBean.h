#ifndef _java_lang_management_ClassLoadingMXBean_h_
#define _java_lang_management_ClassLoadingMXBean_h_
//$ interface java.lang.management.ClassLoadingMXBean
//$ extends java.lang.management.PlatformManagedObject

#include <java/lang/management/PlatformManagedObject.h>

namespace java {
	namespace lang {
		namespace management {

class $export ClassLoadingMXBean : public ::java::lang::management::PlatformManagedObject {
	$interface(ClassLoadingMXBean, $NO_CLASS_INIT, ::java::lang::management::PlatformManagedObject)
public:
	virtual int32_t getLoadedClassCount() {return 0;}
	virtual int64_t getTotalLoadedClassCount() {return 0;}
	virtual int64_t getUnloadedClassCount() {return 0;}
	virtual bool isVerbose() {return false;}
	virtual void setVerbose(bool value) {}
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_ClassLoadingMXBean_h_