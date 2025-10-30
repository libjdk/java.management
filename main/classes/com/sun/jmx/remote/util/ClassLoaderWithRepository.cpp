#include <com/sun/jmx/remote/util/ClassLoaderWithRepository.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <javax/management/loading/ClassLoaderRepository.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {

$FieldInfo _ClassLoaderWithRepository_FieldInfo_[] = {
	{"repository", "Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PRIVATE, $field(ClassLoaderWithRepository, repository)},
	{"cl2", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(ClassLoaderWithRepository, cl2)},
	{}
};

$MethodInfo _ClassLoaderWithRepository_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/loading/ClassLoaderRepository;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassLoaderWithRepository::*)($ClassLoaderRepository*,$ClassLoader*)>(&ClassLoaderWithRepository::init$))},
	{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PROTECTED, nullptr, "java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _ClassLoaderWithRepository_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.remote.util.ClassLoaderWithRepository",
	"java.lang.ClassLoader",
	nullptr,
	_ClassLoaderWithRepository_FieldInfo_,
	_ClassLoaderWithRepository_MethodInfo_
};

$Object* allocate$ClassLoaderWithRepository($Class* clazz) {
	return $of($alloc(ClassLoaderWithRepository));
}

void ClassLoaderWithRepository::init$($ClassLoaderRepository* clr, $ClassLoader* cl2) {
	$ClassLoader::init$();
	if (clr == nullptr) {
		$throwNew($IllegalArgumentException, "Null ClassLoaderRepository object."_s);
	}
	$set(this, repository, clr);
	$set(this, cl2, cl2);
}

$Class* ClassLoaderWithRepository::findClass($String* name) {
	$Class* cls = nullptr;
	try {
		cls = $nc(this->repository)->loadClass(name);
	} catch ($ClassNotFoundException& cne) {
		if (this->cl2 != nullptr) {
			return $nc(this->cl2)->loadClass(name);
		} else {
			$throw(cne);
		}
	}
	if (!$nc($($nc(cls)->getName()))->equals(name)) {
		if (this->cl2 != nullptr) {
			return $nc(this->cl2)->loadClass(name);
		} else {
			$throwNew($ClassNotFoundException, name);
		}
	}
	return cls;
}

ClassLoaderWithRepository::ClassLoaderWithRepository() {
}

$Class* ClassLoaderWithRepository::load$($String* name, bool initialize) {
	$loadClass(ClassLoaderWithRepository, name, initialize, &_ClassLoaderWithRepository_ClassInfo_, allocate$ClassLoaderWithRepository);
	return class$;
}

$Class* ClassLoaderWithRepository::class$ = nullptr;

				} // util
			} // remote
		} // jmx
	} // sun
} // com