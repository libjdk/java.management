#include <javax/management/InvalidAttributeValueException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

$FieldInfo _InvalidAttributeValueException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidAttributeValueException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidAttributeValueException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidAttributeValueException::*)()>(&InvalidAttributeValueException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidAttributeValueException::*)($String*)>(&InvalidAttributeValueException::init$))},
	{}
};

$ClassInfo _InvalidAttributeValueException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.InvalidAttributeValueException",
	"javax.management.OperationsException",
	nullptr,
	_InvalidAttributeValueException_FieldInfo_,
	_InvalidAttributeValueException_MethodInfo_
};

$Object* allocate$InvalidAttributeValueException($Class* clazz) {
	return $of($alloc(InvalidAttributeValueException));
}

void InvalidAttributeValueException::init$() {
	$OperationsException::init$();
}

void InvalidAttributeValueException::init$($String* message) {
	$OperationsException::init$(message);
}

InvalidAttributeValueException::InvalidAttributeValueException() {
}

InvalidAttributeValueException::InvalidAttributeValueException(const InvalidAttributeValueException& e) {
}

InvalidAttributeValueException InvalidAttributeValueException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidAttributeValueException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidAttributeValueException::load$($String* name, bool initialize) {
	$loadClass(InvalidAttributeValueException, name, initialize, &_InvalidAttributeValueException_ClassInfo_, allocate$InvalidAttributeValueException);
	return class$;
}

$Class* InvalidAttributeValueException::class$ = nullptr;

	} // management
} // javax