#include <com/sun/jmx/mbeanserver/ModifiableClassLoaderRepository.h>

#include <java/lang/ClassLoader.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _ModifiableClassLoaderRepository_MethodInfo_[] = {
	{"addClassLoader", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addClassLoader", "(Ljavax/management/ObjectName;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getClassLoader", "(Ljavax/management/ObjectName;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC | $ABSTRACT},
	{"removeClassLoader", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeClassLoader", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ModifiableClassLoaderRepository_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.jmx.mbeanserver.ModifiableClassLoaderRepository",
	nullptr,
	"javax.management.loading.ClassLoaderRepository",
	nullptr,
	_ModifiableClassLoaderRepository_MethodInfo_
};

$Object* allocate$ModifiableClassLoaderRepository($Class* clazz) {
	return $of($alloc(ModifiableClassLoaderRepository));
}

$Class* ModifiableClassLoaderRepository::load$($String* name, bool initialize) {
	$loadClass(ModifiableClassLoaderRepository, name, initialize, &_ModifiableClassLoaderRepository_ClassInfo_, allocate$ModifiableClassLoaderRepository);
	return class$;
}

$Class* ModifiableClassLoaderRepository::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com