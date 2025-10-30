#include <javax/management/InstanceAlreadyExistsException.h>

#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

$FieldInfo _InstanceAlreadyExistsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InstanceAlreadyExistsException, serialVersionUID)},
	{}
};

$MethodInfo _InstanceAlreadyExistsException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InstanceAlreadyExistsException::*)()>(&InstanceAlreadyExistsException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InstanceAlreadyExistsException::*)($String*)>(&InstanceAlreadyExistsException::init$))},
	{}
};

$ClassInfo _InstanceAlreadyExistsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.InstanceAlreadyExistsException",
	"javax.management.OperationsException",
	nullptr,
	_InstanceAlreadyExistsException_FieldInfo_,
	_InstanceAlreadyExistsException_MethodInfo_
};

$Object* allocate$InstanceAlreadyExistsException($Class* clazz) {
	return $of($alloc(InstanceAlreadyExistsException));
}

void InstanceAlreadyExistsException::init$() {
	$OperationsException::init$();
}

void InstanceAlreadyExistsException::init$($String* message) {
	$OperationsException::init$(message);
}

InstanceAlreadyExistsException::InstanceAlreadyExistsException() {
}

InstanceAlreadyExistsException::InstanceAlreadyExistsException(const InstanceAlreadyExistsException& e) : $OperationsException(e) {
}

void InstanceAlreadyExistsException::throw$() {
	throw *this;
}

$Class* InstanceAlreadyExistsException::load$($String* name, bool initialize) {
	$loadClass(InstanceAlreadyExistsException, name, initialize, &_InstanceAlreadyExistsException_ClassInfo_, allocate$InstanceAlreadyExistsException);
	return class$;
}

$Class* InstanceAlreadyExistsException::class$ = nullptr;

	} // management
} // javax