#include <javax/management/RuntimeErrorException.h>

#include <java/lang/Error.h>
#include <javax/management/JMRuntimeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMRuntimeException = ::javax::management::JMRuntimeException;

namespace javax {
	namespace management {

$FieldInfo _RuntimeErrorException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RuntimeErrorException, serialVersionUID)},
	{"error", "Ljava/lang/Error;", nullptr, $PRIVATE, $field(RuntimeErrorException, error)},
	{}
};

$MethodInfo _RuntimeErrorException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Error;)V", nullptr, $PUBLIC, $method(static_cast<void(RuntimeErrorException::*)($Error*)>(&RuntimeErrorException::init$))},
	{"<init>", "(Ljava/lang/Error;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RuntimeErrorException::*)($Error*,$String*)>(&RuntimeErrorException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getTargetError", "()Ljava/lang/Error;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RuntimeErrorException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.RuntimeErrorException",
	"javax.management.JMRuntimeException",
	nullptr,
	_RuntimeErrorException_FieldInfo_,
	_RuntimeErrorException_MethodInfo_
};

$Object* allocate$RuntimeErrorException($Class* clazz) {
	return $of($alloc(RuntimeErrorException));
}

void RuntimeErrorException::init$($Error* e) {
	$JMRuntimeException::init$();
	$set(this, error, e);
}

void RuntimeErrorException::init$($Error* e, $String* message) {
	$JMRuntimeException::init$(message);
	$set(this, error, e);
}

$Error* RuntimeErrorException::getTargetError() {
	return this->error;
}

$Throwable* RuntimeErrorException::getCause() {
	return this->error;
}

RuntimeErrorException::RuntimeErrorException() {
}

RuntimeErrorException::RuntimeErrorException(const RuntimeErrorException& e) : $JMRuntimeException(e) {
}

void RuntimeErrorException::throw$() {
	throw *this;
}

$Class* RuntimeErrorException::load$($String* name, bool initialize) {
	$loadClass(RuntimeErrorException, name, initialize, &_RuntimeErrorException_ClassInfo_, allocate$RuntimeErrorException);
	return class$;
}

$Class* RuntimeErrorException::class$ = nullptr;

	} // management
} // javax