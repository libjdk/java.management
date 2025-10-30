#include <javax/management/openmbean/InvalidKeyException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace openmbean {

$FieldInfo _InvalidKeyException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidKeyException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidKeyException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidKeyException::*)()>(&InvalidKeyException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidKeyException::*)($String*)>(&InvalidKeyException::init$))},
	{}
};

$ClassInfo _InvalidKeyException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.openmbean.InvalidKeyException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_InvalidKeyException_FieldInfo_,
	_InvalidKeyException_MethodInfo_
};

$Object* allocate$InvalidKeyException($Class* clazz) {
	return $of($alloc(InvalidKeyException));
}

void InvalidKeyException::init$() {
	$IllegalArgumentException::init$();
}

void InvalidKeyException::init$($String* msg) {
	$IllegalArgumentException::init$(msg);
}

InvalidKeyException::InvalidKeyException() {
}

InvalidKeyException::InvalidKeyException(const InvalidKeyException& e) : $IllegalArgumentException(e) {
}

void InvalidKeyException::throw$() {
	throw *this;
}

$Class* InvalidKeyException::load$($String* name, bool initialize) {
	$loadClass(InvalidKeyException, name, initialize, &_InvalidKeyException_ClassInfo_, allocate$InvalidKeyException);
	return class$;
}

$Class* InvalidKeyException::class$ = nullptr;

		} // openmbean
	} // management
} // javax