#ifndef _java_lang_management_OperatingSystemMXBean_h_
#define _java_lang_management_OperatingSystemMXBean_h_
//$ interface java.lang.management.OperatingSystemMXBean
//$ extends java.lang.management.PlatformManagedObject

#include <java/lang/management/PlatformManagedObject.h>

namespace java {
	namespace lang {
		namespace management {

class $import OperatingSystemMXBean : public ::java::lang::management::PlatformManagedObject {
	$interface(OperatingSystemMXBean, $NO_CLASS_INIT, ::java::lang::management::PlatformManagedObject)
public:
	virtual $String* getArch() {return nullptr;}
	virtual int32_t getAvailableProcessors() {return 0;}
	virtual $String* getName() {return nullptr;}
	virtual double getSystemLoadAverage() {return 0.0;}
	virtual $String* getVersion() {return nullptr;}
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_OperatingSystemMXBean_h_