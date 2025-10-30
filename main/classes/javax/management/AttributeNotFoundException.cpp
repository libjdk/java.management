#include <javax/management/AttributeNotFoundException.h>

#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

$FieldInfo _AttributeNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeNotFoundException, serialVersionUID)},
	{}
};

$MethodInfo _AttributeNotFoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AttributeNotFoundException::*)()>(&AttributeNotFoundException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeNotFoundException::*)($String*)>(&AttributeNotFoundException::init$))},
	{}
};

$ClassInfo _AttributeNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.AttributeNotFoundException",
	"javax.management.OperationsException",
	nullptr,
	_AttributeNotFoundException_FieldInfo_,
	_AttributeNotFoundException_MethodInfo_
};

$Object* allocate$AttributeNotFoundException($Class* clazz) {
	return $of($alloc(AttributeNotFoundException));
}

void AttributeNotFoundException::init$() {
	$OperationsException::init$();
}

void AttributeNotFoundException::init$($String* message) {
	$OperationsException::init$(message);
}

AttributeNotFoundException::AttributeNotFoundException() {
}

AttributeNotFoundException::AttributeNotFoundException(const AttributeNotFoundException& e) : $OperationsException(e) {
}

void AttributeNotFoundException::throw$() {
	throw *this;
}

$Class* AttributeNotFoundException::load$($String* name, bool initialize) {
	$loadClass(AttributeNotFoundException, name, initialize, &_AttributeNotFoundException_ClassInfo_, allocate$AttributeNotFoundException);
	return class$;
}

$Class* AttributeNotFoundException::class$ = nullptr;

	} // management
} // javax