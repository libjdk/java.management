#include <javax/management/ServiceNotFoundException.h>

#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

$FieldInfo _ServiceNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServiceNotFoundException, serialVersionUID)},
	{}
};

$MethodInfo _ServiceNotFoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ServiceNotFoundException::*)()>(&ServiceNotFoundException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceNotFoundException::*)($String*)>(&ServiceNotFoundException::init$))},
	{}
};

$ClassInfo _ServiceNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.ServiceNotFoundException",
	"javax.management.OperationsException",
	nullptr,
	_ServiceNotFoundException_FieldInfo_,
	_ServiceNotFoundException_MethodInfo_
};

$Object* allocate$ServiceNotFoundException($Class* clazz) {
	return $of($alloc(ServiceNotFoundException));
}

void ServiceNotFoundException::init$() {
	$OperationsException::init$();
}

void ServiceNotFoundException::init$($String* message) {
	$OperationsException::init$(message);
}

ServiceNotFoundException::ServiceNotFoundException() {
}

ServiceNotFoundException::ServiceNotFoundException(const ServiceNotFoundException& e) : $OperationsException(e) {
}

void ServiceNotFoundException::throw$() {
	throw *this;
}

$Class* ServiceNotFoundException::load$($String* name, bool initialize) {
	$loadClass(ServiceNotFoundException, name, initialize, &_ServiceNotFoundException_ClassInfo_, allocate$ServiceNotFoundException);
	return class$;
}

$Class* ServiceNotFoundException::class$ = nullptr;

	} // management
} // javax