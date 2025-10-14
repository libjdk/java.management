#include <javax/management/relation/InvalidRoleValueException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _InvalidRoleValueException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidRoleValueException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidRoleValueException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidRoleValueException::*)()>(&InvalidRoleValueException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidRoleValueException::*)($String*)>(&InvalidRoleValueException::init$))},
	{}
};

$ClassInfo _InvalidRoleValueException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.InvalidRoleValueException",
	"javax.management.relation.RelationException",
	nullptr,
	_InvalidRoleValueException_FieldInfo_,
	_InvalidRoleValueException_MethodInfo_
};

$Object* allocate$InvalidRoleValueException($Class* clazz) {
	return $of($alloc(InvalidRoleValueException));
}

void InvalidRoleValueException::init$() {
	$RelationException::init$();
}

void InvalidRoleValueException::init$($String* message) {
	$RelationException::init$(message);
}

InvalidRoleValueException::InvalidRoleValueException() {
}

InvalidRoleValueException::InvalidRoleValueException(const InvalidRoleValueException& e) {
}

InvalidRoleValueException InvalidRoleValueException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidRoleValueException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidRoleValueException::load$($String* name, bool initialize) {
	$loadClass(InvalidRoleValueException, name, initialize, &_InvalidRoleValueException_ClassInfo_, allocate$InvalidRoleValueException);
	return class$;
}

$Class* InvalidRoleValueException::class$ = nullptr;

		} // relation
	} // management
} // javax