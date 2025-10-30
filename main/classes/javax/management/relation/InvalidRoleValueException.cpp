#include <javax/management/relation/InvalidRoleValueException.h>

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

InvalidRoleValueException::InvalidRoleValueException(const InvalidRoleValueException& e) : $RelationException(e) {
}

void InvalidRoleValueException::throw$() {
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