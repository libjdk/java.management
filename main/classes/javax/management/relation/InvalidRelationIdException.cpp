#include <javax/management/relation/InvalidRelationIdException.h>

#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _InvalidRelationIdException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidRelationIdException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidRelationIdException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidRelationIdException::*)()>(&InvalidRelationIdException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidRelationIdException::*)($String*)>(&InvalidRelationIdException::init$))},
	{}
};

$ClassInfo _InvalidRelationIdException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.InvalidRelationIdException",
	"javax.management.relation.RelationException",
	nullptr,
	_InvalidRelationIdException_FieldInfo_,
	_InvalidRelationIdException_MethodInfo_
};

$Object* allocate$InvalidRelationIdException($Class* clazz) {
	return $of($alloc(InvalidRelationIdException));
}

void InvalidRelationIdException::init$() {
	$RelationException::init$();
}

void InvalidRelationIdException::init$($String* message) {
	$RelationException::init$(message);
}

InvalidRelationIdException::InvalidRelationIdException() {
}

InvalidRelationIdException::InvalidRelationIdException(const InvalidRelationIdException& e) : $RelationException(e) {
}

void InvalidRelationIdException::throw$() {
	throw *this;
}

$Class* InvalidRelationIdException::load$($String* name, bool initialize) {
	$loadClass(InvalidRelationIdException, name, initialize, &_InvalidRelationIdException_ClassInfo_, allocate$InvalidRelationIdException);
	return class$;
}

$Class* InvalidRelationIdException::class$ = nullptr;

		} // relation
	} // management
} // javax