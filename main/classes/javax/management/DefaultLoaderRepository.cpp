#include <javax/management/DefaultLoaderRepository.h>

#include <java/lang/ClassLoader.h>
#include <javax/management/loading/DefaultLoaderRepository.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultLoaderRepository = ::javax::management::loading::DefaultLoaderRepository;

namespace javax {
	namespace management {

$CompoundAttribute _DefaultLoaderRepository_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _DefaultLoaderRepository_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultLoaderRepository::*)()>(&DefaultLoaderRepository::init$))},
	{"loadClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($String*)>(&DefaultLoaderRepository::loadClass)), "java.lang.ClassNotFoundException"},
	{"loadClassWithout", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($ClassLoader*,$String*)>(&DefaultLoaderRepository::loadClassWithout)), "java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _DefaultLoaderRepository_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.DefaultLoaderRepository",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DefaultLoaderRepository_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DefaultLoaderRepository_Annotations_
};

$Object* allocate$DefaultLoaderRepository($Class* clazz) {
	return $of($alloc(DefaultLoaderRepository));
}

void DefaultLoaderRepository::init$() {
}

$Class* DefaultLoaderRepository::loadClass($String* className) {
	return $DefaultLoaderRepository::loadClass(className);
}

$Class* DefaultLoaderRepository::loadClassWithout($ClassLoader* loader, $String* className) {
	return $DefaultLoaderRepository::loadClassWithout(loader, className);
}

DefaultLoaderRepository::DefaultLoaderRepository() {
}

$Class* DefaultLoaderRepository::load$($String* name, bool initialize) {
	$loadClass(DefaultLoaderRepository, name, initialize, &_DefaultLoaderRepository_ClassInfo_, allocate$DefaultLoaderRepository);
	return class$;
}

$Class* DefaultLoaderRepository::class$ = nullptr;

	} // management
} // javax