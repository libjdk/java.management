#include <javax/management/RuntimeMBeanException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _RuntimeMBeanException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RuntimeMBeanException, serialVersionUID)},
	{"runtimeException", "Ljava/lang/RuntimeException;", nullptr, $PRIVATE, $field(RuntimeMBeanException, runtimeException)},
	{}
};

$MethodInfo _RuntimeMBeanException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/RuntimeException;)V", nullptr, $PUBLIC, $method(static_cast<void(RuntimeMBeanException::*)($RuntimeException*)>(&RuntimeMBeanException::init$))},
	{"<init>", "(Ljava/lang/RuntimeException;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RuntimeMBeanException::*)($RuntimeException*,$String*)>(&RuntimeMBeanException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getTargetException", "()Ljava/lang/RuntimeException;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RuntimeMBeanException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.RuntimeMBeanException",
	"javax.management.JMRuntimeException",
	nullptr,
	_RuntimeMBeanException_FieldInfo_,
	_RuntimeMBeanException_MethodInfo_
};

$Object* allocate$RuntimeMBeanException($Class* clazz) {
	return $of($alloc(RuntimeMBeanException));
}

void RuntimeMBeanException::init$($RuntimeException* e) {
	$JMRuntimeException::init$();
	$set(this, runtimeException, e);
}

void RuntimeMBeanException::init$($RuntimeException* e, $String* message) {
	$JMRuntimeException::init$(message);
	$set(this, runtimeException, e);
}

$RuntimeException* RuntimeMBeanException::getTargetException() {
	return this->runtimeException;
}

$Throwable* RuntimeMBeanException::getCause() {
	return this->runtimeException;
}

RuntimeMBeanException::RuntimeMBeanException() {
}

RuntimeMBeanException::RuntimeMBeanException(const RuntimeMBeanException& e) {
}

RuntimeMBeanException RuntimeMBeanException::wrapper$() {
	$pendingException(this);
	return *this;
}

void RuntimeMBeanException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* RuntimeMBeanException::load$($String* name, bool initialize) {
	$loadClass(RuntimeMBeanException, name, initialize, &_RuntimeMBeanException_ClassInfo_, allocate$RuntimeMBeanException);
	return class$;
}

$Class* RuntimeMBeanException::class$ = nullptr;

	} // management
} // javax