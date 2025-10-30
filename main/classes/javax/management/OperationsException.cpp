#include <javax/management/OperationsException.h>

#include <javax/management/JMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMException = ::javax::management::JMException;

namespace javax {
	namespace management {

$FieldInfo _OperationsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OperationsException, serialVersionUID)},
	{}
};

$MethodInfo _OperationsException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OperationsException::*)()>(&OperationsException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(OperationsException::*)($String*)>(&OperationsException::init$))},
	{}
};

$ClassInfo _OperationsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.OperationsException",
	"javax.management.JMException",
	nullptr,
	_OperationsException_FieldInfo_,
	_OperationsException_MethodInfo_
};

$Object* allocate$OperationsException($Class* clazz) {
	return $of($alloc(OperationsException));
}

void OperationsException::init$() {
	$JMException::init$();
}

void OperationsException::init$($String* message) {
	$JMException::init$(message);
}

OperationsException::OperationsException() {
}

OperationsException::OperationsException(const OperationsException& e) : $JMException(e) {
}

void OperationsException::throw$() {
	throw *this;
}

$Class* OperationsException::load$($String* name, bool initialize) {
	$loadClass(OperationsException, name, initialize, &_OperationsException_ClassInfo_, allocate$OperationsException);
	return class$;
}

$Class* OperationsException::class$ = nullptr;

	} // management
} // javax