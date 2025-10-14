#ifndef _java_lang_management_PlatformManagedObject_h_
#define _java_lang_management_PlatformManagedObject_h_
//$ interface java.lang.management.PlatformManagedObject
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace java {
	namespace lang {
		namespace management {

class $export PlatformManagedObject : public ::java::lang::Object {
	$interface(PlatformManagedObject, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::management::ObjectName* getObjectName() {return nullptr;}
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_PlatformManagedObject_h_