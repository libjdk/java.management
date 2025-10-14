#ifndef _java_lang_management_CompilationMXBean_h_
#define _java_lang_management_CompilationMXBean_h_
//$ interface java.lang.management.CompilationMXBean
//$ extends java.lang.management.PlatformManagedObject

#include <java/lang/management/PlatformManagedObject.h>

namespace java {
	namespace lang {
		namespace management {

class $export CompilationMXBean : public ::java::lang::management::PlatformManagedObject {
	$interface(CompilationMXBean, $NO_CLASS_INIT, ::java::lang::management::PlatformManagedObject)
public:
	virtual $String* getName() {return nullptr;}
	virtual int64_t getTotalCompilationTime() {return 0;}
	virtual bool isCompilationTimeMonitoringSupported() {return false;}
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_CompilationMXBean_h_