#include <javax/management/relation/RoleNotFoundException.h>

#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _RoleNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RoleNotFoundException, serialVersionUID)},
	{}
};

$MethodInfo _RoleNotFoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RoleNotFoundException::*)()>(&RoleNotFoundException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RoleNotFoundException::*)($String*)>(&RoleNotFoundException::init$))},
	{}
};

$ClassInfo _RoleNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RoleNotFoundException",
	"javax.management.relation.RelationException",
	nullptr,
	_RoleNotFoundException_FieldInfo_,
	_RoleNotFoundException_MethodInfo_
};

$Object* allocate$RoleNotFoundException($Class* clazz) {
	return $of($alloc(RoleNotFoundException));
}

void RoleNotFoundException::init$() {
	$RelationException::init$();
}

void RoleNotFoundException::init$($String* message) {
	$RelationException::init$(message);
}

RoleNotFoundException::RoleNotFoundException() {
}

RoleNotFoundException::RoleNotFoundException(const RoleNotFoundException& e) : $RelationException(e) {
}

void RoleNotFoundException::throw$() {
	throw *this;
}

$Class* RoleNotFoundException::load$($String* name, bool initialize) {
	$loadClass(RoleNotFoundException, name, initialize, &_RoleNotFoundException_ClassInfo_, allocate$RoleNotFoundException);
	return class$;
}

$Class* RoleNotFoundException::class$ = nullptr;

		} // relation
	} // management
} // javax