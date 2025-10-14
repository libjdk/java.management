#ifndef _sun_management_ManagementFactoryHelper$LoggingMXBeanAccess_h_
#define _sun_management_ManagementFactoryHelper$LoggingMXBeanAccess_h_
//$ class sun.management.ManagementFactoryHelper$LoggingMXBeanAccess
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LOGGING_MXBEAN_CLASS_NAME")
#undef LOGGING_MXBEAN_CLASS_NAME
#pragma push_macro("LOG_MANAGER_CLASS")
#undef LOG_MANAGER_CLASS
#pragma push_macro("LOG_MANAGER_CLASS_NAME")
#undef LOG_MANAGER_CLASS_NAME

namespace java {
	namespace lang {
		class RuntimeException;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class InvocationTargetException;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace management {

class $import ManagementFactoryHelper$LoggingMXBeanAccess : public ::java::lang::Object {
	$class(ManagementFactoryHelper$LoggingMXBeanAccess, 0, ::java::lang::Object)
public:
	ManagementFactoryHelper$LoggingMXBeanAccess();
	void init$();
	static $Object* getMXBeanImplementation();
	::java::util::Map* initMethodMap(Object$* impl);
	$Object* invoke($String* methodName, $ObjectArray* args);
	static bool isAvailable();
	static $Class* loadLoggingClass($String* className);
	static ::java::lang::RuntimeException* unwrap(::java::lang::reflect::InvocationTargetException* x);
	static $String* LOG_MANAGER_CLASS_NAME;
	static $String* LOGGING_MXBEAN_CLASS_NAME;
	static $Class* LOG_MANAGER_CLASS;
	$Object* impl = nullptr;
	::java::util::Map* methods = nullptr;
};

	} // management
} // sun

#pragma pop_macro("LOGGING_MXBEAN_CLASS_NAME")
#pragma pop_macro("LOG_MANAGER_CLASS")
#pragma pop_macro("LOG_MANAGER_CLASS_NAME")

#endif // _sun_management_ManagementFactoryHelper$LoggingMXBeanAccess_h_