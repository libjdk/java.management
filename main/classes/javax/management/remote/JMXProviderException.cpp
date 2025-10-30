#include <javax/management/remote/JMXProviderException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace remote {

$FieldInfo _JMXProviderException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMXProviderException, serialVersionUID)},
	{"cause", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(JMXProviderException, cause)},
	{}
};

$MethodInfo _JMXProviderException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMXProviderException::*)()>(&JMXProviderException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JMXProviderException::*)($String*)>(&JMXProviderException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(JMXProviderException::*)($String*,$Throwable*)>(&JMXProviderException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JMXProviderException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.remote.JMXProviderException",
	"java.io.IOException",
	nullptr,
	_JMXProviderException_FieldInfo_,
	_JMXProviderException_MethodInfo_
};

$Object* allocate$JMXProviderException($Class* clazz) {
	return $of($alloc(JMXProviderException));
}

void JMXProviderException::init$() {
	$IOException::init$();
	$set(this, cause, nullptr);
}

void JMXProviderException::init$($String* message) {
	$IOException::init$(message);
	$set(this, cause, nullptr);
}

void JMXProviderException::init$($String* message, $Throwable* cause) {
	$IOException::init$(message);
	$set(this, cause, nullptr);
	$set(this, cause, cause);
}

$Throwable* JMXProviderException::getCause() {
	return this->cause;
}

JMXProviderException::JMXProviderException() {
}

JMXProviderException::JMXProviderException(const JMXProviderException& e) : $IOException(e) {
}

void JMXProviderException::throw$() {
	throw *this;
}

$Class* JMXProviderException::load$($String* name, bool initialize) {
	$loadClass(JMXProviderException, name, initialize, &_JMXProviderException_ClassInfo_, allocate$JMXProviderException);
	return class$;
}

$Class* JMXProviderException::class$ = nullptr;

		} // remote
	} // management
} // javax