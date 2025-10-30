#include <javax/management/RuntimeOperationsException.h>

#include <javax/management/JMRuntimeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JMRuntimeException = ::javax::management::JMRuntimeException;

namespace javax {
	namespace management {

$FieldInfo _RuntimeOperationsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RuntimeOperationsException, serialVersionUID)},
	{"runtimeException", "Ljava/lang/RuntimeException;", nullptr, $PRIVATE, $field(RuntimeOperationsException, runtimeException)},
	{}
};

$MethodInfo _RuntimeOperationsException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/RuntimeException;)V", nullptr, $PUBLIC, $method(static_cast<void(RuntimeOperationsException::*)($RuntimeException*)>(&RuntimeOperationsException::init$))},
	{"<init>", "(Ljava/lang/RuntimeException;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RuntimeOperationsException::*)($RuntimeException*,$String*)>(&RuntimeOperationsException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getTargetException", "()Ljava/lang/RuntimeException;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RuntimeOperationsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.RuntimeOperationsException",
	"javax.management.JMRuntimeException",
	nullptr,
	_RuntimeOperationsException_FieldInfo_,
	_RuntimeOperationsException_MethodInfo_
};

$Object* allocate$RuntimeOperationsException($Class* clazz) {
	return $of($alloc(RuntimeOperationsException));
}

void RuntimeOperationsException::init$($RuntimeException* e) {
	$JMRuntimeException::init$();
	$set(this, runtimeException, e);
}

void RuntimeOperationsException::init$($RuntimeException* e, $String* message) {
	$JMRuntimeException::init$(message);
	$set(this, runtimeException, e);
}

$RuntimeException* RuntimeOperationsException::getTargetException() {
	return this->runtimeException;
}

$Throwable* RuntimeOperationsException::getCause() {
	return this->runtimeException;
}

RuntimeOperationsException::RuntimeOperationsException() {
}

RuntimeOperationsException::RuntimeOperationsException(const RuntimeOperationsException& e) : $JMRuntimeException(e) {
}

void RuntimeOperationsException::throw$() {
	throw *this;
}

$Class* RuntimeOperationsException::load$($String* name, bool initialize) {
	$loadClass(RuntimeOperationsException, name, initialize, &_RuntimeOperationsException_ClassInfo_, allocate$RuntimeOperationsException);
	return class$;
}

$Class* RuntimeOperationsException::class$ = nullptr;

	} // management
} // javax