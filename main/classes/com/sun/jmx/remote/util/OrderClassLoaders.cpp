#include <com/sun/jmx/remote/util/OrderClassLoaders.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {

$FieldInfo _OrderClassLoaders_FieldInfo_[] = {
	{"cl2", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(OrderClassLoaders, cl2)},
	{}
};

$MethodInfo _OrderClassLoaders_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(static_cast<void(OrderClassLoaders::*)($ClassLoader*,$ClassLoader*)>(&OrderClassLoaders::init$))},
	{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PROTECTED, nullptr, "java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _OrderClassLoaders_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.remote.util.OrderClassLoaders",
	"java.lang.ClassLoader",
	nullptr,
	_OrderClassLoaders_FieldInfo_,
	_OrderClassLoaders_MethodInfo_
};

$Object* allocate$OrderClassLoaders($Class* clazz) {
	return $of($alloc(OrderClassLoaders));
}

void OrderClassLoaders::init$($ClassLoader* cl1, $ClassLoader* cl2) {
	$ClassLoader::init$(cl1);
	$set(this, cl2, cl2);
}

$Class* OrderClassLoaders::loadClass($String* name, bool resolve) {
	$ReflectUtil::checkPackageAccess(name);
	try {
		return $ClassLoader::loadClass(name, resolve);
	} catch ($ClassNotFoundException& cne) {
		if (this->cl2 != nullptr) {
			return $nc(this->cl2)->loadClass(name);
		} else {
			$throw(cne);
		}
	}
	$shouldNotReachHere();
}

OrderClassLoaders::OrderClassLoaders() {
}

$Class* OrderClassLoaders::load$($String* name, bool initialize) {
	$loadClass(OrderClassLoaders, name, initialize, &_OrderClassLoaders_ClassInfo_, allocate$OrderClassLoaders);
	return class$;
}

$Class* OrderClassLoaders::class$ = nullptr;

				} // util
			} // remote
		} // jmx
	} // sun
} // com