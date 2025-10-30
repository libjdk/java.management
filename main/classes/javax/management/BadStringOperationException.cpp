#include <javax/management/BadStringOperationException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {

$FieldInfo _BadStringOperationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BadStringOperationException, serialVersionUID)},
	{"op", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BadStringOperationException, op)},
	{}
};

$MethodInfo _BadStringOperationException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BadStringOperationException::*)($String*)>(&BadStringOperationException::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BadStringOperationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.BadStringOperationException",
	"java.lang.Exception",
	nullptr,
	_BadStringOperationException_FieldInfo_,
	_BadStringOperationException_MethodInfo_
};

$Object* allocate$BadStringOperationException($Class* clazz) {
	return $of($alloc(BadStringOperationException));
}

void BadStringOperationException::init$($String* message) {
	$Exception::init$();
	$set(this, op, message);
}

$String* BadStringOperationException::toString() {
	return $str({"BadStringOperationException: "_s, this->op});
}

BadStringOperationException::BadStringOperationException() {
}

BadStringOperationException::BadStringOperationException(const BadStringOperationException& e) : $Exception(e) {
}

void BadStringOperationException::throw$() {
	throw *this;
}

$Class* BadStringOperationException::load$($String* name, bool initialize) {
	$loadClass(BadStringOperationException, name, initialize, &_BadStringOperationException_ClassInfo_, allocate$BadStringOperationException);
	return class$;
}

$Class* BadStringOperationException::class$ = nullptr;

	} // management
} // javax