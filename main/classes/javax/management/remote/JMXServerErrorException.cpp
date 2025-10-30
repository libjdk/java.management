#include <javax/management/remote/JMXServerErrorException.h>

#include <java/io/IOException.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace remote {

$FieldInfo _JMXServerErrorException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMXServerErrorException, serialVersionUID)},
	{"cause", "Ljava/lang/Error;", nullptr, $PRIVATE | $FINAL, $field(JMXServerErrorException, cause)},
	{}
};

$MethodInfo _JMXServerErrorException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Error;)V", nullptr, $PUBLIC, $method(static_cast<void(JMXServerErrorException::*)($String*,$Error*)>(&JMXServerErrorException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JMXServerErrorException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.remote.JMXServerErrorException",
	"java.io.IOException",
	nullptr,
	_JMXServerErrorException_FieldInfo_,
	_JMXServerErrorException_MethodInfo_
};

$Object* allocate$JMXServerErrorException($Class* clazz) {
	return $of($alloc(JMXServerErrorException));
}

void JMXServerErrorException::init$($String* s, $Error* err) {
	$IOException::init$(s);
	$set(this, cause, err);
}

$Throwable* JMXServerErrorException::getCause() {
	return this->cause;
}

JMXServerErrorException::JMXServerErrorException() {
}

JMXServerErrorException::JMXServerErrorException(const JMXServerErrorException& e) : $IOException(e) {
}

void JMXServerErrorException::throw$() {
	throw *this;
}

$Class* JMXServerErrorException::load$($String* name, bool initialize) {
	$loadClass(JMXServerErrorException, name, initialize, &_JMXServerErrorException_ClassInfo_, allocate$JMXServerErrorException);
	return class$;
}

$Class* JMXServerErrorException::class$ = nullptr;

		} // remote
	} // management
} // javax