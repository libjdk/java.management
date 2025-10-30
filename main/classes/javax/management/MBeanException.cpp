#include <javax/management/MBeanException.h>

#include <javax/management/JMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMException = ::javax::management::JMException;

namespace javax {
	namespace management {

$FieldInfo _MBeanException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanException, serialVersionUID)},
	{"exception", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(MBeanException, exception)},
	{}
};

$MethodInfo _MBeanException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanException::*)($Exception*)>(&MBeanException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanException::*)($Exception*,$String*)>(&MBeanException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getTargetException", "()Ljava/lang/Exception;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MBeanException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MBeanException",
	"javax.management.JMException",
	nullptr,
	_MBeanException_FieldInfo_,
	_MBeanException_MethodInfo_
};

$Object* allocate$MBeanException($Class* clazz) {
	return $of($alloc(MBeanException));
}

void MBeanException::init$($Exception* e) {
	$JMException::init$();
	$set(this, exception, e);
}

void MBeanException::init$($Exception* e, $String* message) {
	$JMException::init$(message);
	$set(this, exception, e);
}

$Exception* MBeanException::getTargetException() {
	return this->exception;
}

$Throwable* MBeanException::getCause() {
	return this->exception;
}

MBeanException::MBeanException() {
}

MBeanException::MBeanException(const MBeanException& e) : $JMException(e) {
}

void MBeanException::throw$() {
	throw *this;
}

$Class* MBeanException::load$($String* name, bool initialize) {
	$loadClass(MBeanException, name, initialize, &_MBeanException_ClassInfo_, allocate$MBeanException);
	return class$;
}

$Class* MBeanException::class$ = nullptr;

	} // management
} // javax