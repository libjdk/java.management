#include <com/sun/jmx/mbeanserver/SecureClassLoaderRepository.h>

#include <java/lang/ClassLoader.h>
#include <javax/management/loading/ClassLoaderRepository.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _SecureClassLoaderRepository_FieldInfo_[] = {
	{"clr", "Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PRIVATE | $FINAL, $field(SecureClassLoaderRepository, clr)},
	{}
};

$MethodInfo _SecureClassLoaderRepository_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/loading/ClassLoaderRepository;)V", nullptr, $PUBLIC, $method(static_cast<void(SecureClassLoaderRepository::*)($ClassLoaderRepository*)>(&SecureClassLoaderRepository::init$))},
	{"loadClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $FINAL, nullptr, "java.lang.ClassNotFoundException"},
	{"loadClassBefore", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $FINAL, nullptr, "java.lang.ClassNotFoundException"},
	{"loadClassWithout", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $FINAL, nullptr, "java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _SecureClassLoaderRepository_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.SecureClassLoaderRepository",
	"java.lang.Object",
	"javax.management.loading.ClassLoaderRepository",
	_SecureClassLoaderRepository_FieldInfo_,
	_SecureClassLoaderRepository_MethodInfo_
};

$Object* allocate$SecureClassLoaderRepository($Class* clazz) {
	return $of($alloc(SecureClassLoaderRepository));
}

void SecureClassLoaderRepository::init$($ClassLoaderRepository* clr) {
	$set(this, clr, clr);
}

$Class* SecureClassLoaderRepository::loadClass($String* className) {
	return $nc(this->clr)->loadClass(className);
}

$Class* SecureClassLoaderRepository::loadClassWithout($ClassLoader* loader, $String* className) {
	return $nc(this->clr)->loadClassWithout(loader, className);
}

$Class* SecureClassLoaderRepository::loadClassBefore($ClassLoader* loader, $String* className) {
	return $nc(this->clr)->loadClassBefore(loader, className);
}

SecureClassLoaderRepository::SecureClassLoaderRepository() {
}

$Class* SecureClassLoaderRepository::load$($String* name, bool initialize) {
	$loadClass(SecureClassLoaderRepository, name, initialize, &_SecureClassLoaderRepository_ClassInfo_, allocate$SecureClassLoaderRepository);
	return class$;
}

$Class* SecureClassLoaderRepository::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com