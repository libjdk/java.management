#ifndef _javax_management_loading_ClassLoaderRepository_h_
#define _javax_management_loading_ClassLoaderRepository_h_
//$ interface javax.management.loading.ClassLoaderRepository
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace javax {
	namespace management {
		namespace loading {

class $export ClassLoaderRepository : public ::java::lang::Object {
	$interface(ClassLoaderRepository, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Class* loadClass($String* className) {return nullptr;}
	virtual $Class* loadClassBefore(::java::lang::ClassLoader* stop, $String* className) {return nullptr;}
	virtual $Class* loadClassWithout(::java::lang::ClassLoader* exclude, $String* className) {return nullptr;}
};

		} // loading
	} // management
} // javax

#endif // _javax_management_loading_ClassLoaderRepository_h_