#include <javax/management/BadBinaryOpValueExpException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/management/ValueExp.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ValueExp = ::javax::management::ValueExp;

namespace javax {
	namespace management {

$FieldInfo _BadBinaryOpValueExpException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BadBinaryOpValueExpException, serialVersionUID)},
	{"exp", "Ljavax/management/ValueExp;", nullptr, $PRIVATE, $field(BadBinaryOpValueExpException, exp)},
	{}
};

$MethodInfo _BadBinaryOpValueExpException_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/ValueExp;)V", nullptr, $PUBLIC, $method(static_cast<void(BadBinaryOpValueExpException::*)($ValueExp*)>(&BadBinaryOpValueExpException::init$))},
	{"getExp", "()Ljavax/management/ValueExp;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BadBinaryOpValueExpException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.BadBinaryOpValueExpException",
	"java.lang.Exception",
	nullptr,
	_BadBinaryOpValueExpException_FieldInfo_,
	_BadBinaryOpValueExpException_MethodInfo_
};

$Object* allocate$BadBinaryOpValueExpException($Class* clazz) {
	return $of($alloc(BadBinaryOpValueExpException));
}

void BadBinaryOpValueExpException::init$($ValueExp* exp) {
	$Exception::init$();
	$set(this, exp, exp);
}

$ValueExp* BadBinaryOpValueExpException::getExp() {
	return this->exp;
}

$String* BadBinaryOpValueExpException::toString() {
	return $str({"BadBinaryOpValueExpException: "_s, this->exp});
}

BadBinaryOpValueExpException::BadBinaryOpValueExpException() {
}

BadBinaryOpValueExpException::BadBinaryOpValueExpException(const BadBinaryOpValueExpException& e) {
}

BadBinaryOpValueExpException BadBinaryOpValueExpException::wrapper$() {
	$pendingException(this);
	return *this;
}

void BadBinaryOpValueExpException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* BadBinaryOpValueExpException::load$($String* name, bool initialize) {
	$loadClass(BadBinaryOpValueExpException, name, initialize, &_BadBinaryOpValueExpException_ClassInfo_, allocate$BadBinaryOpValueExpException);
	return class$;
}

$Class* BadBinaryOpValueExpException::class$ = nullptr;

	} // management
} // javax