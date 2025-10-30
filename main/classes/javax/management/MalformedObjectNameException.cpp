#include <javax/management/MalformedObjectNameException.h>

#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

$FieldInfo _MalformedObjectNameException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MalformedObjectNameException, serialVersionUID)},
	{}
};

$MethodInfo _MalformedObjectNameException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MalformedObjectNameException::*)()>(&MalformedObjectNameException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MalformedObjectNameException::*)($String*)>(&MalformedObjectNameException::init$))},
	{}
};

$ClassInfo _MalformedObjectNameException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MalformedObjectNameException",
	"javax.management.OperationsException",
	nullptr,
	_MalformedObjectNameException_FieldInfo_,
	_MalformedObjectNameException_MethodInfo_
};

$Object* allocate$MalformedObjectNameException($Class* clazz) {
	return $of($alloc(MalformedObjectNameException));
}

void MalformedObjectNameException::init$() {
	$OperationsException::init$();
}

void MalformedObjectNameException::init$($String* message) {
	$OperationsException::init$(message);
}

MalformedObjectNameException::MalformedObjectNameException() {
}

MalformedObjectNameException::MalformedObjectNameException(const MalformedObjectNameException& e) : $OperationsException(e) {
}

void MalformedObjectNameException::throw$() {
	throw *this;
}

$Class* MalformedObjectNameException::load$($String* name, bool initialize) {
	$loadClass(MalformedObjectNameException, name, initialize, &_MalformedObjectNameException_ClassInfo_, allocate$MalformedObjectNameException);
	return class$;
}

$Class* MalformedObjectNameException::class$ = nullptr;

	} // management
} // javax