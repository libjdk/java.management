#include <javax/management/relation/InvalidRelationTypeException.h>

#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _InvalidRelationTypeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidRelationTypeException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidRelationTypeException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidRelationTypeException::*)()>(&InvalidRelationTypeException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidRelationTypeException::*)($String*)>(&InvalidRelationTypeException::init$))},
	{}
};

$ClassInfo _InvalidRelationTypeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.InvalidRelationTypeException",
	"javax.management.relation.RelationException",
	nullptr,
	_InvalidRelationTypeException_FieldInfo_,
	_InvalidRelationTypeException_MethodInfo_
};

$Object* allocate$InvalidRelationTypeException($Class* clazz) {
	return $of($alloc(InvalidRelationTypeException));
}

void InvalidRelationTypeException::init$() {
	$RelationException::init$();
}

void InvalidRelationTypeException::init$($String* message) {
	$RelationException::init$(message);
}

InvalidRelationTypeException::InvalidRelationTypeException() {
}

InvalidRelationTypeException::InvalidRelationTypeException(const InvalidRelationTypeException& e) : $RelationException(e) {
}

void InvalidRelationTypeException::throw$() {
	throw *this;
}

$Class* InvalidRelationTypeException::load$($String* name, bool initialize) {
	$loadClass(InvalidRelationTypeException, name, initialize, &_InvalidRelationTypeException_ClassInfo_, allocate$InvalidRelationTypeException);
	return class$;
}

$Class* InvalidRelationTypeException::class$ = nullptr;

		} // relation
	} // management
} // javax