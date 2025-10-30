#include <javax/management/loading/ClassLoaderRepository.h>

#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace loading {

$MethodInfo _ClassLoaderRepository_MethodInfo_[] = {
	{"loadClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.ClassNotFoundException"},
	{"loadClassBefore", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.ClassNotFoundException"},
	{"loadClassWithout", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _ClassLoaderRepository_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.loading.ClassLoaderRepository",
	nullptr,
	nullptr,
	nullptr,
	_ClassLoaderRepository_MethodInfo_
};

$Object* allocate$ClassLoaderRepository($Class* clazz) {
	return $of($alloc(ClassLoaderRepository));
}

$Class* ClassLoaderRepository::load$($String* name, bool initialize) {
	$loadClass(ClassLoaderRepository, name, initialize, &_ClassLoaderRepository_ClassInfo_, allocate$ClassLoaderRepository);
	return class$;
}

$Class* ClassLoaderRepository::class$ = nullptr;

		} // loading
	} // management
} // javax