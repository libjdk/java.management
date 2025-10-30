#include <javax/management/loading/PrivateClassLoader.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace management {
		namespace loading {

$ClassInfo _PrivateClassLoader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.loading.PrivateClassLoader"
};

$Object* allocate$PrivateClassLoader($Class* clazz) {
	return $of($alloc(PrivateClassLoader));
}

$Class* PrivateClassLoader::load$($String* name, bool initialize) {
	$loadClass(PrivateClassLoader, name, initialize, &_PrivateClassLoader_ClassInfo_, allocate$PrivateClassLoader);
	return class$;
}

$Class* PrivateClassLoader::class$ = nullptr;

		} // loading
	} // management
} // javax