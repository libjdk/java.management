#ifndef _javax_management_DefaultLoaderRepository_h_
#define _javax_management_DefaultLoaderRepository_h_
//$ class javax.management.DefaultLoaderRepository
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace javax {
	namespace management {

class $import DefaultLoaderRepository : public ::java::lang::Object {
	$class(DefaultLoaderRepository, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultLoaderRepository();
	void init$();
	static $Class* loadClass($String* className);
	static $Class* loadClassWithout(::java::lang::ClassLoader* loader, $String* className);
};

	} // management
} // javax

#endif // _javax_management_DefaultLoaderRepository_h_