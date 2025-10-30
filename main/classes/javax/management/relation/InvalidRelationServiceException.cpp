#include <javax/management/relation/InvalidRelationServiceException.h>

#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _InvalidRelationServiceException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidRelationServiceException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidRelationServiceException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidRelationServiceException::*)()>(&InvalidRelationServiceException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidRelationServiceException::*)($String*)>(&InvalidRelationServiceException::init$))},
	{}
};

$ClassInfo _InvalidRelationServiceException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.InvalidRelationServiceException",
	"javax.management.relation.RelationException",
	nullptr,
	_InvalidRelationServiceException_FieldInfo_,
	_InvalidRelationServiceException_MethodInfo_
};

$Object* allocate$InvalidRelationServiceException($Class* clazz) {
	return $of($alloc(InvalidRelationServiceException));
}

void InvalidRelationServiceException::init$() {
	$RelationException::init$();
}

void InvalidRelationServiceException::init$($String* message) {
	$RelationException::init$(message);
}

InvalidRelationServiceException::InvalidRelationServiceException() {
}

InvalidRelationServiceException::InvalidRelationServiceException(const InvalidRelationServiceException& e) : $RelationException(e) {
}

void InvalidRelationServiceException::throw$() {
	throw *this;
}

$Class* InvalidRelationServiceException::load$($String* name, bool initialize) {
	$loadClass(InvalidRelationServiceException, name, initialize, &_InvalidRelationServiceException_ClassInfo_, allocate$InvalidRelationServiceException);
	return class$;
}

$Class* InvalidRelationServiceException::class$ = nullptr;

		} // relation
	} // management
} // javax