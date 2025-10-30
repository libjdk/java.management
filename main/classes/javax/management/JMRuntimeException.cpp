#include <javax/management/JMRuntimeException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace javax {
	namespace management {

$FieldInfo _JMRuntimeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMRuntimeException, serialVersionUID)},
	{}
};

$MethodInfo _JMRuntimeException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMRuntimeException::*)()>(&JMRuntimeException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JMRuntimeException::*)($String*)>(&JMRuntimeException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, 0, $method(static_cast<void(JMRuntimeException::*)($String*,$Throwable*)>(&JMRuntimeException::init$))},
	{}
};

$ClassInfo _JMRuntimeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.JMRuntimeException",
	"java.lang.RuntimeException",
	nullptr,
	_JMRuntimeException_FieldInfo_,
	_JMRuntimeException_MethodInfo_
};

$Object* allocate$JMRuntimeException($Class* clazz) {
	return $of($alloc(JMRuntimeException));
}

void JMRuntimeException::init$() {
	$RuntimeException::init$();
}

void JMRuntimeException::init$($String* message) {
	$RuntimeException::init$(message);
}

void JMRuntimeException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

JMRuntimeException::JMRuntimeException() {
}

JMRuntimeException::JMRuntimeException(const JMRuntimeException& e) : $RuntimeException(e) {
}

void JMRuntimeException::throw$() {
	throw *this;
}

$Class* JMRuntimeException::load$($String* name, bool initialize) {
	$loadClass(JMRuntimeException, name, initialize, &_JMRuntimeException_ClassInfo_, allocate$JMRuntimeException);
	return class$;
}

$Class* JMRuntimeException::class$ = nullptr;

	} // management
} // javax