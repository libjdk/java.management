#include <javax/management/JMException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {

$FieldInfo _JMException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMException, serialVersionUID)},
	{}
};

$MethodInfo _JMException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMException::*)()>(&JMException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JMException::*)($String*)>(&JMException::init$))},
	{}
};

$ClassInfo _JMException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.JMException",
	"java.lang.Exception",
	nullptr,
	_JMException_FieldInfo_,
	_JMException_MethodInfo_
};

$Object* allocate$JMException($Class* clazz) {
	return $of($alloc(JMException));
}

void JMException::init$() {
	$Exception::init$();
}

void JMException::init$($String* msg) {
	$Exception::init$(msg);
}

JMException::JMException() {
}

JMException::JMException(const JMException& e) {
}

JMException JMException::wrapper$() {
	$pendingException(this);
	return *this;
}

void JMException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* JMException::load$($String* name, bool initialize) {
	$loadClass(JMException, name, initialize, &_JMException_ClassInfo_, allocate$JMException);
	return class$;
}

$Class* JMException::class$ = nullptr;

	} // management
} // javax