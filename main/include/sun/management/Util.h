#ifndef _sun_management_Util_h_
#define _sun_management_Util_h_
//$ class sun.management.Util
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY_STRING_ARRAY")
#undef EMPTY_STRING_ARRAY

namespace java {
	namespace lang {
		class Exception;
		class RuntimeException;
	}
}
namespace java {
	namespace lang {
		namespace management {
			class ManagementPermission;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace sun {
	namespace management {

class $import Util : public ::java::lang::Object {
	$class(Util, 0, ::java::lang::Object)
public:
	Util();
	void init$();
	static void checkAccess(::java::lang::management::ManagementPermission* p);
	static void checkControlAccess();
	static void checkMonitorAccess();
	static ::java::lang::RuntimeException* newException(::java::lang::Exception* e);
	static ::javax::management::ObjectName* newObjectName($String* domainAndType, $String* name);
	static ::javax::management::ObjectName* newObjectName($String* name);
	static $StringArray* toStringArray(::java::util::List* list);
	static $StringArray* EMPTY_STRING_ARRAY;
	static ::java::lang::management::ManagementPermission* monitorPermission;
	static ::java::lang::management::ManagementPermission* controlPermission;
};

	} // management
} // sun

#pragma pop_macro("EMPTY_STRING_ARRAY")

#endif // _sun_management_Util_h_