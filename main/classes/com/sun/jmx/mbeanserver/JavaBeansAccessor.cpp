#include <com/sun/jmx/mbeanserver/JavaBeansAccessor.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/access/JavaBeansAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $JavaBeansAccess = ::jdk::internal::access::JavaBeansAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _JavaBeansAccessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JavaBeansAccessor::*)()>(&JavaBeansAccessor::init$))},
	{"getConstructorPropertiesValue", "(Ljava/lang/reflect/Constructor;)[Ljava/lang/String;", "(Ljava/lang/reflect/Constructor<*>;)[Ljava/lang/String;", $STATIC, $method(static_cast<$StringArray*(*)($Constructor*)>(&JavaBeansAccessor::getConstructorPropertiesValue))},
	{"getJavaBeansAccess", "()Ljdk/internal/access/JavaBeansAccess;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JavaBeansAccess*(*)()>(&JavaBeansAccessor::getJavaBeansAccess))},
	{"getReadMethod", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/reflect/Method;", $STATIC, $method(static_cast<$Method*(*)($Class*,$String*)>(&JavaBeansAccessor::getReadMethod)), "java.lang.Exception"},
	{"isAvailable", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&JavaBeansAccessor::isAvailable))},
	{}
};

$ClassInfo _JavaBeansAccessor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.JavaBeansAccessor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JavaBeansAccessor_MethodInfo_
};

$Object* allocate$JavaBeansAccessor($Class* clazz) {
	return $of($alloc(JavaBeansAccessor));
}

void JavaBeansAccessor::init$() {
}

$JavaBeansAccess* JavaBeansAccessor::getJavaBeansAccess() {
	$init(JavaBeansAccessor);
	return $SharedSecrets::getJavaBeansAccess();
}

bool JavaBeansAccessor::isAvailable() {
	$init(JavaBeansAccessor);
	return getJavaBeansAccess() != nullptr;
}

$Method* JavaBeansAccessor::getReadMethod($Class* clazz, $String* property) {
	$init(JavaBeansAccessor);
	$var($JavaBeansAccess, jba, getJavaBeansAccess());
	return jba != nullptr ? $nc(jba)->getReadMethod(clazz, property) : ($Method*)nullptr;
}

$StringArray* JavaBeansAccessor::getConstructorPropertiesValue($Constructor* ctr) {
	$init(JavaBeansAccessor);
	$var($JavaBeansAccess, jba, getJavaBeansAccess());
	return jba != nullptr ? $nc(jba)->getConstructorPropertiesValue(ctr) : ($StringArray*)nullptr;
}

void clinit$JavaBeansAccessor($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$Class::forName("java.beans.Introspector"_s, true, $(JavaBeansAccessor::class$->getClassLoader()));
		} catch ($ClassNotFoundException& ignore) {
		}
	}
}

JavaBeansAccessor::JavaBeansAccessor() {
}

$Class* JavaBeansAccessor::load$($String* name, bool initialize) {
	$loadClass(JavaBeansAccessor, name, initialize, &_JavaBeansAccessor_ClassInfo_, clinit$JavaBeansAccessor, allocate$JavaBeansAccessor);
	return class$;
}

$Class* JavaBeansAccessor::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com