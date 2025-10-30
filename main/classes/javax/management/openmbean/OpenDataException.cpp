#include <javax/management/openmbean/OpenDataException.h>

#include <javax/management/JMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMException = ::javax::management::JMException;

namespace javax {
	namespace management {
		namespace openmbean {

$FieldInfo _OpenDataException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OpenDataException, serialVersionUID)},
	{}
};

$MethodInfo _OpenDataException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OpenDataException::*)()>(&OpenDataException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(OpenDataException::*)($String*)>(&OpenDataException::init$))},
	{}
};

$ClassInfo _OpenDataException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.openmbean.OpenDataException",
	"javax.management.JMException",
	nullptr,
	_OpenDataException_FieldInfo_,
	_OpenDataException_MethodInfo_
};

$Object* allocate$OpenDataException($Class* clazz) {
	return $of($alloc(OpenDataException));
}

void OpenDataException::init$() {
	$JMException::init$();
}

void OpenDataException::init$($String* msg) {
	$JMException::init$(msg);
}

OpenDataException::OpenDataException() {
}

OpenDataException::OpenDataException(const OpenDataException& e) : $JMException(e) {
}

void OpenDataException::throw$() {
	throw *this;
}

$Class* OpenDataException::load$($String* name, bool initialize) {
	$loadClass(OpenDataException, name, initialize, &_OpenDataException_ClassInfo_, allocate$OpenDataException);
	return class$;
}

$Class* OpenDataException::class$ = nullptr;

		} // openmbean
	} // management
} // javax