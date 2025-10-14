#include <javax/management/MBeanRegistrationException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/management/MBeanException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanException = ::javax::management::MBeanException;

namespace javax {
	namespace management {

$FieldInfo _MBeanRegistrationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanRegistrationException, serialVersionUID)},
	{}
};

$MethodInfo _MBeanRegistrationException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanRegistrationException::*)($Exception*)>(&MBeanRegistrationException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanRegistrationException::*)($Exception*,$String*)>(&MBeanRegistrationException::init$))},
	{}
};

$ClassInfo _MBeanRegistrationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MBeanRegistrationException",
	"javax.management.MBeanException",
	nullptr,
	_MBeanRegistrationException_FieldInfo_,
	_MBeanRegistrationException_MethodInfo_
};

$Object* allocate$MBeanRegistrationException($Class* clazz) {
	return $of($alloc(MBeanRegistrationException));
}

void MBeanRegistrationException::init$($Exception* e) {
	$MBeanException::init$(e);
}

void MBeanRegistrationException::init$($Exception* e, $String* message) {
	$MBeanException::init$(e, message);
}

MBeanRegistrationException::MBeanRegistrationException() {
}

MBeanRegistrationException::MBeanRegistrationException(const MBeanRegistrationException& e) {
}

MBeanRegistrationException MBeanRegistrationException::wrapper$() {
	$pendingException(this);
	return *this;
}

void MBeanRegistrationException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* MBeanRegistrationException::load$($String* name, bool initialize) {
	$loadClass(MBeanRegistrationException, name, initialize, &_MBeanRegistrationException_ClassInfo_, allocate$MBeanRegistrationException);
	return class$;
}

$Class* MBeanRegistrationException::class$ = nullptr;

	} // management
} // javax