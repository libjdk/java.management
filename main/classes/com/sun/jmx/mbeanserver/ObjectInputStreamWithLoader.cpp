#include <com/sun/jmx/mbeanserver/ObjectInputStreamWithLoader.h>

#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <java/lang/ClassLoader.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _ObjectInputStreamWithLoader_FieldInfo_[] = {
	{"loader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(ObjectInputStreamWithLoader, loader)},
	{}
};

$MethodInfo _ObjectInputStreamWithLoader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectInputStreamWithLoader::*)($InputStream*,$ClassLoader*)>(&ObjectInputStreamWithLoader::init$)), "java.io.IOException"},
	{"resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class<*>;", $PROTECTED, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _ObjectInputStreamWithLoader_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.ObjectInputStreamWithLoader",
	"java.io.ObjectInputStream",
	nullptr,
	_ObjectInputStreamWithLoader_FieldInfo_,
	_ObjectInputStreamWithLoader_MethodInfo_
};

$Object* allocate$ObjectInputStreamWithLoader($Class* clazz) {
	return $of($alloc(ObjectInputStreamWithLoader));
}

void ObjectInputStreamWithLoader::init$($InputStream* in, $ClassLoader* theLoader) {
	$ObjectInputStream::init$(in);
	$set(this, loader, theLoader);
}

$Class* ObjectInputStreamWithLoader::resolveClass($ObjectStreamClass* aClass) {
	$beforeCallerSensitive();
	if (this->loader == nullptr) {
		return $ObjectInputStream::resolveClass(aClass);
	} else {
		$var($String, name, $nc(aClass)->getName());
		$ReflectUtil::checkPackageAccess(name);
		return $Class::forName(name, false, this->loader);
	}
}

ObjectInputStreamWithLoader::ObjectInputStreamWithLoader() {
}

$Class* ObjectInputStreamWithLoader::load$($String* name, bool initialize) {
	$loadClass(ObjectInputStreamWithLoader, name, initialize, &_ObjectInputStreamWithLoader_ClassInfo_, allocate$ObjectInputStreamWithLoader);
	return class$;
}

$Class* ObjectInputStreamWithLoader::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com