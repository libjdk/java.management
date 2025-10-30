#include <javax/management/NotCompliantMBeanException.h>

#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

$FieldInfo _NotCompliantMBeanException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotCompliantMBeanException, serialVersionUID)},
	{}
};

$MethodInfo _NotCompliantMBeanException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NotCompliantMBeanException::*)()>(&NotCompliantMBeanException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NotCompliantMBeanException::*)($String*)>(&NotCompliantMBeanException::init$))},
	{}
};

$ClassInfo _NotCompliantMBeanException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.NotCompliantMBeanException",
	"javax.management.OperationsException",
	nullptr,
	_NotCompliantMBeanException_FieldInfo_,
	_NotCompliantMBeanException_MethodInfo_
};

$Object* allocate$NotCompliantMBeanException($Class* clazz) {
	return $of($alloc(NotCompliantMBeanException));
}

void NotCompliantMBeanException::init$() {
	$OperationsException::init$();
}

void NotCompliantMBeanException::init$($String* message) {
	$OperationsException::init$(message);
}

NotCompliantMBeanException::NotCompliantMBeanException() {
}

NotCompliantMBeanException::NotCompliantMBeanException(const NotCompliantMBeanException& e) : $OperationsException(e) {
}

void NotCompliantMBeanException::throw$() {
	throw *this;
}

$Class* NotCompliantMBeanException::load$($String* name, bool initialize) {
	$loadClass(NotCompliantMBeanException, name, initialize, &_NotCompliantMBeanException_ClassInfo_, allocate$NotCompliantMBeanException);
	return class$;
}

$Class* NotCompliantMBeanException::class$ = nullptr;

	} // management
} // javax