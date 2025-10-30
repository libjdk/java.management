#include <javax/management/relation/InvalidRoleInfoException.h>

#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _InvalidRoleInfoException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidRoleInfoException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidRoleInfoException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidRoleInfoException::*)()>(&InvalidRoleInfoException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidRoleInfoException::*)($String*)>(&InvalidRoleInfoException::init$))},
	{}
};

$ClassInfo _InvalidRoleInfoException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.InvalidRoleInfoException",
	"javax.management.relation.RelationException",
	nullptr,
	_InvalidRoleInfoException_FieldInfo_,
	_InvalidRoleInfoException_MethodInfo_
};

$Object* allocate$InvalidRoleInfoException($Class* clazz) {
	return $of($alloc(InvalidRoleInfoException));
}

void InvalidRoleInfoException::init$() {
	$RelationException::init$();
}

void InvalidRoleInfoException::init$($String* message) {
	$RelationException::init$(message);
}

InvalidRoleInfoException::InvalidRoleInfoException() {
}

InvalidRoleInfoException::InvalidRoleInfoException(const InvalidRoleInfoException& e) : $RelationException(e) {
}

void InvalidRoleInfoException::throw$() {
	throw *this;
}

$Class* InvalidRoleInfoException::load$($String* name, bool initialize) {
	$loadClass(InvalidRoleInfoException, name, initialize, &_InvalidRoleInfoException_ClassInfo_, allocate$InvalidRoleInfoException);
	return class$;
}

$Class* InvalidRoleInfoException::class$ = nullptr;

		} // relation
	} // management
} // javax