#include <javax/management/relation/RelationTypeNotFoundException.h>

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

$FieldInfo _RelationTypeNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RelationTypeNotFoundException, serialVersionUID)},
	{}
};

$MethodInfo _RelationTypeNotFoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RelationTypeNotFoundException::*)()>(&RelationTypeNotFoundException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RelationTypeNotFoundException::*)($String*)>(&RelationTypeNotFoundException::init$))},
	{}
};

$ClassInfo _RelationTypeNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RelationTypeNotFoundException",
	"javax.management.relation.RelationException",
	nullptr,
	_RelationTypeNotFoundException_FieldInfo_,
	_RelationTypeNotFoundException_MethodInfo_
};

$Object* allocate$RelationTypeNotFoundException($Class* clazz) {
	return $of($alloc(RelationTypeNotFoundException));
}

void RelationTypeNotFoundException::init$() {
	$RelationException::init$();
}

void RelationTypeNotFoundException::init$($String* message) {
	$RelationException::init$(message);
}

RelationTypeNotFoundException::RelationTypeNotFoundException() {
}

RelationTypeNotFoundException::RelationTypeNotFoundException(const RelationTypeNotFoundException& e) {
}

RelationTypeNotFoundException RelationTypeNotFoundException::wrapper$() {
	$pendingException(this);
	return *this;
}

void RelationTypeNotFoundException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* RelationTypeNotFoundException::load$($String* name, bool initialize) {
	$loadClass(RelationTypeNotFoundException, name, initialize, &_RelationTypeNotFoundException_ClassInfo_, allocate$RelationTypeNotFoundException);
	return class$;
}

$Class* RelationTypeNotFoundException::class$ = nullptr;

		} // relation
	} // management
} // javax