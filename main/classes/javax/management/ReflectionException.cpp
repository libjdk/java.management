#include <javax/management/ReflectionException.h>

#include <javax/management/JMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMException = ::javax::management::JMException;

namespace javax {
	namespace management {

$FieldInfo _ReflectionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReflectionException, serialVersionUID)},
	{"exception", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(ReflectionException, exception)},
	{}
};

$MethodInfo _ReflectionException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(ReflectionException::*)($Exception*)>(&ReflectionException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ReflectionException::*)($Exception*,$String*)>(&ReflectionException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getTargetException", "()Ljava/lang/Exception;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ReflectionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.ReflectionException",
	"javax.management.JMException",
	nullptr,
	_ReflectionException_FieldInfo_,
	_ReflectionException_MethodInfo_
};

$Object* allocate$ReflectionException($Class* clazz) {
	return $of($alloc(ReflectionException));
}

void ReflectionException::init$($Exception* e) {
	$JMException::init$();
	$set(this, exception, e);
}

void ReflectionException::init$($Exception* e, $String* message) {
	$JMException::init$(message);
	$set(this, exception, e);
}

$Exception* ReflectionException::getTargetException() {
	return this->exception;
}

$Throwable* ReflectionException::getCause() {
	return this->exception;
}

ReflectionException::ReflectionException() {
}

ReflectionException::ReflectionException(const ReflectionException& e) : $JMException(e) {
}

void ReflectionException::throw$() {
	throw *this;
}

$Class* ReflectionException::load$($String* name, bool initialize) {
	$loadClass(ReflectionException, name, initialize, &_ReflectionException_ClassInfo_, allocate$ReflectionException);
	return class$;
}

$Class* ReflectionException::class$ = nullptr;

	} // management
} // javax