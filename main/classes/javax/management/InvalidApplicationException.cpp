#include <javax/management/InvalidApplicationException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {

$FieldInfo _InvalidApplicationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidApplicationException, serialVersionUID)},
	{"val", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(InvalidApplicationException, val)},
	{}
};

$MethodInfo _InvalidApplicationException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidApplicationException::*)(Object$*)>(&InvalidApplicationException::init$))},
	{}
};

$ClassInfo _InvalidApplicationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.InvalidApplicationException",
	"java.lang.Exception",
	nullptr,
	_InvalidApplicationException_FieldInfo_,
	_InvalidApplicationException_MethodInfo_
};

$Object* allocate$InvalidApplicationException($Class* clazz) {
	return $of($alloc(InvalidApplicationException));
}

void InvalidApplicationException::init$(Object$* val) {
	$Exception::init$();
	$set(this, val, val);
}

InvalidApplicationException::InvalidApplicationException() {
}

InvalidApplicationException::InvalidApplicationException(const InvalidApplicationException& e) : $Exception(e) {
}

void InvalidApplicationException::throw$() {
	throw *this;
}

$Class* InvalidApplicationException::load$($String* name, bool initialize) {
	$loadClass(InvalidApplicationException, name, initialize, &_InvalidApplicationException_ClassInfo_, allocate$InvalidApplicationException);
	return class$;
}

$Class* InvalidApplicationException::class$ = nullptr;

	} // management
} // javax