#ifndef _java_lang_management_RuntimeMXBean_h_
#define _java_lang_management_RuntimeMXBean_h_
//$ interface java.lang.management.RuntimeMXBean
//$ extends java.lang.management.PlatformManagedObject

#include <java/lang/management/PlatformManagedObject.h>

namespace java {
	namespace lang {
		class Long;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace java {
	namespace lang {
		namespace management {

class $import RuntimeMXBean : public ::java::lang::management::PlatformManagedObject {
	$interface(RuntimeMXBean, $NO_CLASS_INIT, ::java::lang::management::PlatformManagedObject)
public:
	virtual $String* getBootClassPath() {return nullptr;}
	virtual $String* getClassPath() {return nullptr;}
	virtual ::java::util::List* getInputArguments() {return nullptr;}
	virtual $String* getLibraryPath() {return nullptr;}
	virtual $String* getManagementSpecVersion() {return nullptr;}
	virtual $String* getName() {return nullptr;}
	virtual int64_t getPid();
	virtual $String* getSpecName() {return nullptr;}
	virtual $String* getSpecVendor() {return nullptr;}
	virtual $String* getSpecVersion() {return nullptr;}
	virtual int64_t getStartTime() {return 0;}
	virtual ::java::util::Map* getSystemProperties() {return nullptr;}
	virtual int64_t getUptime() {return 0;}
	virtual $String* getVmName() {return nullptr;}
	virtual $String* getVmVendor() {return nullptr;}
	virtual $String* getVmVersion() {return nullptr;}
	virtual bool isBootClassPathSupported() {return false;}
	static ::java::lang::Long* lambda$getPid$0();
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_RuntimeMXBean_h_