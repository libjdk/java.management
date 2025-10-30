#include <javax/management/relation/RoleInfoNotFoundException.h>

#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _RoleInfoNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RoleInfoNotFoundException, serialVersionUID)},
	{}
};

$MethodInfo _RoleInfoNotFoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RoleInfoNotFoundException::*)()>(&RoleInfoNotFoundException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RoleInfoNotFoundException::*)($String*)>(&RoleInfoNotFoundException::init$))},
	{}
};

$ClassInfo _RoleInfoNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RoleInfoNotFoundException",
	"javax.management.relation.RelationException",
	nullptr,
	_RoleInfoNotFoundException_FieldInfo_,
	_RoleInfoNotFoundException_MethodInfo_
};

$Object* allocate$RoleInfoNotFoundException($Class* clazz) {
	return $of($alloc(RoleInfoNotFoundException));
}

void RoleInfoNotFoundException::init$() {
	$RelationException::init$();
}

void RoleInfoNotFoundException::init$($String* message) {
	$RelationException::init$(message);
}

RoleInfoNotFoundException::RoleInfoNotFoundException() {
}

RoleInfoNotFoundException::RoleInfoNotFoundException(const RoleInfoNotFoundException& e) : $RelationException(e) {
}

void RoleInfoNotFoundException::throw$() {
	throw *this;
}

$Class* RoleInfoNotFoundException::load$($String* name, bool initialize) {
	$loadClass(RoleInfoNotFoundException, name, initialize, &_RoleInfoNotFoundException_ClassInfo_, allocate$RoleInfoNotFoundException);
	return class$;
}

$Class* RoleInfoNotFoundException::class$ = nullptr;

		} // relation
	} // management
} // javax