#ifndef _java_lang_management_PlatformLoggingMXBean_h_
#define _java_lang_management_PlatformLoggingMXBean_h_
//$ interface java.lang.management.PlatformLoggingMXBean
//$ extends java.lang.management.PlatformManagedObject

#include <java/lang/management/PlatformManagedObject.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace lang {
		namespace management {

class $import PlatformLoggingMXBean : public ::java::lang::management::PlatformManagedObject {
	$interface(PlatformLoggingMXBean, $NO_CLASS_INIT, ::java::lang::management::PlatformManagedObject)
public:
	virtual $String* getLoggerLevel($String* loggerName) {return nullptr;}
	virtual ::java::util::List* getLoggerNames() {return nullptr;}
	virtual $String* getParentLoggerName($String* loggerName) {return nullptr;}
	virtual void setLoggerLevel($String* loggerName, $String* levelName) {}
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_PlatformLoggingMXBean_h_