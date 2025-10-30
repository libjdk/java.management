#include <javax/management/openmbean/InvalidOpenTypeException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace openmbean {

$FieldInfo _InvalidOpenTypeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidOpenTypeException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidOpenTypeException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidOpenTypeException::*)()>(&InvalidOpenTypeException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidOpenTypeException::*)($String*)>(&InvalidOpenTypeException::init$))},
	{}
};

$ClassInfo _InvalidOpenTypeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.openmbean.InvalidOpenTypeException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_InvalidOpenTypeException_FieldInfo_,
	_InvalidOpenTypeException_MethodInfo_
};

$Object* allocate$InvalidOpenTypeException($Class* clazz) {
	return $of($alloc(InvalidOpenTypeException));
}

void InvalidOpenTypeException::init$() {
	$IllegalArgumentException::init$();
}

void InvalidOpenTypeException::init$($String* msg) {
	$IllegalArgumentException::init$(msg);
}

InvalidOpenTypeException::InvalidOpenTypeException() {
}

InvalidOpenTypeException::InvalidOpenTypeException(const InvalidOpenTypeException& e) : $IllegalArgumentException(e) {
}

void InvalidOpenTypeException::throw$() {
	throw *this;
}

$Class* InvalidOpenTypeException::load$($String* name, bool initialize) {
	$loadClass(InvalidOpenTypeException, name, initialize, &_InvalidOpenTypeException_ClassInfo_, allocate$InvalidOpenTypeException);
	return class$;
}

$Class* InvalidOpenTypeException::class$ = nullptr;

		} // openmbean
	} // management
} // javax