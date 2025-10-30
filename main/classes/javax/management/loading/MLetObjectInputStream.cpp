#include <javax/management/loading/MLetObjectInputStream.h>

#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/reflect/Array.h>
#include <java/net/URLClassLoader.h>
#include <java/security/SecureClassLoader.h>
#include <javax/management/loading/MLet.h>
#include <jcpp.h>

#undef TYPE

using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $1Array = ::java::lang::reflect::Array;
using $URLClassLoader = ::java::net::URLClassLoader;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $MLet = ::javax::management::loading::MLet;

namespace javax {
	namespace management {
		namespace loading {

$FieldInfo _MLetObjectInputStream_FieldInfo_[] = {
	{"loader", "Ljavax/management/loading/MLet;", nullptr, $PRIVATE, $field(MLetObjectInputStream, loader)},
	{}
};

$MethodInfo _MLetObjectInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljavax/management/loading/MLet;)V", nullptr, $PUBLIC, $method(static_cast<void(MLetObjectInputStream::*)($InputStream*,$MLet*)>(&MLetObjectInputStream::init$)), "java.io.IOException,java.io.StreamCorruptedException"},
	{"getClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC},
	{"primitiveType", "(C)Ljava/lang/Class;", "(C)Ljava/lang/Class<*>;", $PRIVATE, $method(static_cast<$Class*(MLetObjectInputStream::*)(char16_t)>(&MLetObjectInputStream::primitiveType))},
	{"resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class<*>;", $PROTECTED, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _MLetObjectInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.loading.MLetObjectInputStream",
	"java.io.ObjectInputStream",
	nullptr,
	_MLetObjectInputStream_FieldInfo_,
	_MLetObjectInputStream_MethodInfo_
};

$Object* allocate$MLetObjectInputStream($Class* clazz) {
	return $of($alloc(MLetObjectInputStream));
}

void MLetObjectInputStream::init$($InputStream* in, $MLet* loader) {
	$ObjectInputStream::init$(in);
	if (loader == nullptr) {
		$throwNew($IllegalArgumentException, "Illegal null argument to MLetObjectInputStream"_s);
	}
	$set(this, loader, loader);
}

$Class* MLetObjectInputStream::primitiveType(char16_t c) {
	switch (c) {
	case u'B':
		{
			$init($Byte);
			return $Byte::TYPE;
		}
	case u'C':
		{
			$init($Character);
			return $Character::TYPE;
		}
	case u'D':
		{
			$init($Double);
			return $Double::TYPE;
		}
	case u'F':
		{
			$init($Float);
			return $Float::TYPE;
		}
	case u'I':
		{
			$init($Integer);
			return $Integer::TYPE;
		}
	case u'J':
		{
			$init($Long);
			return $Long::TYPE;
		}
	case u'S':
		{
			$init($Short);
			return $Short::TYPE;
		}
	case u'Z':
		{
			$init($Boolean);
			return $Boolean::TYPE;
		}
	}
	return nullptr;
}

$Class* MLetObjectInputStream::resolveClass($ObjectStreamClass* objectstreamclass) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, $nc(objectstreamclass)->getName());
	if ($nc(s)->startsWith("["_s)) {
		int32_t i = 0;
		for (i = 1; s->charAt(i) == u'['; ++i) {
		}
		$Class* class1 = nullptr;
		if (s->charAt(i) == u'L') {
			class1 = $nc(this->loader)->loadClass($(s->substring(i + 1, s->length() - 1)));
		} else {
			if (s->length() != i + 1) {
				$throwNew($ClassNotFoundException, s);
			}
			class1 = primitiveType(s->charAt(i));
		}
		$var($ints, ai, $new($ints, i));
		for (int32_t j = 0; j < i; ++j) {
			ai->set(j, 0);
		}
		return $of($($1Array::newInstance(class1, ai)))->getClass();
	} else {
		return $nc(this->loader)->loadClass(s);
	}
}

$ClassLoader* MLetObjectInputStream::getClassLoader() {
	return this->loader;
}

MLetObjectInputStream::MLetObjectInputStream() {
}

$Class* MLetObjectInputStream::load$($String* name, bool initialize) {
	$loadClass(MLetObjectInputStream, name, initialize, &_MLetObjectInputStream_ClassInfo_, allocate$MLetObjectInputStream);
	return class$;
}

$Class* MLetObjectInputStream::class$ = nullptr;

		} // loading
	} // management
} // javax