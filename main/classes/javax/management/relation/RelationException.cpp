#include <javax/management/relation/RelationException.h>

#include <javax/management/JMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMException = ::javax::management::JMException;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _RelationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RelationException, serialVersionUID)},
	{}
};

$MethodInfo _RelationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RelationException::*)()>(&RelationException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RelationException::*)($String*)>(&RelationException::init$))},
	{}
};

$ClassInfo _RelationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RelationException",
	"javax.management.JMException",
	nullptr,
	_RelationException_FieldInfo_,
	_RelationException_MethodInfo_
};

$Object* allocate$RelationException($Class* clazz) {
	return $of($alloc(RelationException));
}

void RelationException::init$() {
	$JMException::init$();
}

void RelationException::init$($String* message) {
	$JMException::init$(message);
}

RelationException::RelationException() {
}

RelationException::RelationException(const RelationException& e) : $JMException(e) {
}

void RelationException::throw$() {
	throw *this;
}

$Class* RelationException::load$($String* name, bool initialize) {
	$loadClass(RelationException, name, initialize, &_RelationException_ClassInfo_, allocate$RelationException);
	return class$;
}

$Class* RelationException::class$ = nullptr;

		} // relation
	} // management
} // javax