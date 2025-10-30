#include <javax/management/InstanceNotFoundException.h>

#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

$FieldInfo _InstanceNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InstanceNotFoundException, serialVersionUID)},
	{}
};

$MethodInfo _InstanceNotFoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InstanceNotFoundException::*)()>(&InstanceNotFoundException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InstanceNotFoundException::*)($String*)>(&InstanceNotFoundException::init$))},
	{}
};

$ClassInfo _InstanceNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.InstanceNotFoundException",
	"javax.management.OperationsException",
	nullptr,
	_InstanceNotFoundException_FieldInfo_,
	_InstanceNotFoundException_MethodInfo_
};

$Object* allocate$InstanceNotFoundException($Class* clazz) {
	return $of($alloc(InstanceNotFoundException));
}

void InstanceNotFoundException::init$() {
	$OperationsException::init$();
}

void InstanceNotFoundException::init$($String* message) {
	$OperationsException::init$(message);
}

InstanceNotFoundException::InstanceNotFoundException() {
}

InstanceNotFoundException::InstanceNotFoundException(const InstanceNotFoundException& e) : $OperationsException(e) {
}

void InstanceNotFoundException::throw$() {
	throw *this;
}

$Class* InstanceNotFoundException::load$($String* name, bool initialize) {
	$loadClass(InstanceNotFoundException, name, initialize, &_InstanceNotFoundException_ClassInfo_, allocate$InstanceNotFoundException);
	return class$;
}

$Class* InstanceNotFoundException::class$ = nullptr;

	} // management
} // javax