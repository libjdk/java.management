#include <javax/management/relation/InvalidRelationIdException.h>

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

InvalidRelationIdException::InvalidRelationIdException(const InvalidRelationIdException& e) {
}

InvalidRelationIdException InvalidRelationIdException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidRelationIdException::throwWrapper$() {
	$pendingException(this);
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