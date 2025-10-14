#ifndef _javax_management_loading_DefaultLoaderRepository_h_
#define _javax_management_loading_DefaultLoaderRepository_h_
//$ class javax.management.loading.DefaultLoaderRepository
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

class $export DefaultLoaderRepository : public ::java::lang::Object {
	$class(DefaultLoaderRepository, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultLoaderRepository();
	void init$();
	static $Class* load(::java::lang::ClassLoader* without, $String* className);
	static $Class* loadClass($String* className);
	static $Class* loadClassWithout(::java::lang::ClassLoader* loader, $String* className);
};

		} // loading
	} // management
} // javax

#endif // _javax_management_loading_DefaultLoaderRepository_h_