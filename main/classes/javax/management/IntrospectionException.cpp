#include <javax/management/IntrospectionException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

$FieldInfo _IntrospectionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntrospectionException, serialVersionUID)},
	{}
};

$MethodInfo _IntrospectionException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntrospectionException::*)()>(&IntrospectionException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IntrospectionException::*)($String*)>(&IntrospectionException::init$))},
	{}
};

$ClassInfo _IntrospectionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.IntrospectionException",
	"javax.management.OperationsException",
	nullptr,
	_IntrospectionException_FieldInfo_,
	_IntrospectionException_MethodInfo_
};

$Object* allocate$IntrospectionException($Class* clazz) {
	return $of($alloc(IntrospectionException));
}

void IntrospectionException::init$() {
	$OperationsException::init$();
}

void IntrospectionException::init$($String* message) {
	$OperationsException::init$(message);
}

IntrospectionException::IntrospectionException() {
}

IntrospectionException::IntrospectionException(const IntrospectionException& e) {
}

IntrospectionException IntrospectionException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IntrospectionException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IntrospectionException::load$($String* name, bool initialize) {
	$loadClass(IntrospectionException, name, initialize, &_IntrospectionException_ClassInfo_, allocate$IntrospectionException);
	return class$;
}

$Class* IntrospectionException::class$ = nullptr;

	} // management
} // javax