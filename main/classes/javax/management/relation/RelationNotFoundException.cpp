#include <javax/management/relation/RelationNotFoundException.h>

#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _RelationNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RelationNotFoundException, serialVersionUID)},
	{}
};

$MethodInfo _RelationNotFoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RelationNotFoundException::*)()>(&RelationNotFoundException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RelationNotFoundException::*)($String*)>(&RelationNotFoundException::init$))},
	{}
};

$ClassInfo _RelationNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RelationNotFoundException",
	"javax.management.relation.RelationException",
	nullptr,
	_RelationNotFoundException_FieldInfo_,
	_RelationNotFoundException_MethodInfo_
};

$Object* allocate$RelationNotFoundException($Class* clazz) {
	return $of($alloc(RelationNotFoundException));
}

void RelationNotFoundException::init$() {
	$RelationException::init$();
}

void RelationNotFoundException::init$($String* message) {
	$RelationException::init$(message);
}

RelationNotFoundException::RelationNotFoundException() {
}

RelationNotFoundException::RelationNotFoundException(const RelationNotFoundException& e) : $RelationException(e) {
}

void RelationNotFoundException::throw$() {
	throw *this;
}

$Class* RelationNotFoundException::load$($String* name, bool initialize) {
	$loadClass(RelationNotFoundException, name, initialize, &_RelationNotFoundException_ClassInfo_, allocate$RelationNotFoundException);
	return class$;
}

$Class* RelationNotFoundException::class$ = nullptr;

		} // relation
	} // management
} // javax