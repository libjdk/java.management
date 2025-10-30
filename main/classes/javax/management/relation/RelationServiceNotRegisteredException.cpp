#include <javax/management/relation/RelationServiceNotRegisteredException.h>

#include <javax/management/relation/RelationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RelationException = ::javax::management::relation::RelationException;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _RelationServiceNotRegisteredException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RelationServiceNotRegisteredException, serialVersionUID)},
	{}
};

$MethodInfo _RelationServiceNotRegisteredException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RelationServiceNotRegisteredException::*)()>(&RelationServiceNotRegisteredException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RelationServiceNotRegisteredException::*)($String*)>(&RelationServiceNotRegisteredException::init$))},
	{}
};

$ClassInfo _RelationServiceNotRegisteredException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RelationServiceNotRegisteredException",
	"javax.management.relation.RelationException",
	nullptr,
	_RelationServiceNotRegisteredException_FieldInfo_,
	_RelationServiceNotRegisteredException_MethodInfo_
};

$Object* allocate$RelationServiceNotRegisteredException($Class* clazz) {
	return $of($alloc(RelationServiceNotRegisteredException));
}

void RelationServiceNotRegisteredException::init$() {
	$RelationException::init$();
}

void RelationServiceNotRegisteredException::init$($String* message) {
	$RelationException::init$(message);
}

RelationServiceNotRegisteredException::RelationServiceNotRegisteredException() {
}

RelationServiceNotRegisteredException::RelationServiceNotRegisteredException(const RelationServiceNotRegisteredException& e) : $RelationException(e) {
}

void RelationServiceNotRegisteredException::throw$() {
	throw *this;
}

$Class* RelationServiceNotRegisteredException::load$($String* name, bool initialize) {
	$loadClass(RelationServiceNotRegisteredException, name, initialize, &_RelationServiceNotRegisteredException_ClassInfo_, allocate$RelationServiceNotRegisteredException);
	return class$;
}

$Class* RelationServiceNotRegisteredException::class$ = nullptr;

		} // relation
	} // management
} // javax