#include <javax/management/openmbean/KeyAlreadyExistsException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace openmbean {

$FieldInfo _KeyAlreadyExistsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyAlreadyExistsException, serialVersionUID)},
	{}
};

$MethodInfo _KeyAlreadyExistsException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyAlreadyExistsException::*)()>(&KeyAlreadyExistsException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyAlreadyExistsException::*)($String*)>(&KeyAlreadyExistsException::init$))},
	{}
};

$ClassInfo _KeyAlreadyExistsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.openmbean.KeyAlreadyExistsException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_KeyAlreadyExistsException_FieldInfo_,
	_KeyAlreadyExistsException_MethodInfo_
};

$Object* allocate$KeyAlreadyExistsException($Class* clazz) {
	return $of($alloc(KeyAlreadyExistsException));
}

void KeyAlreadyExistsException::init$() {
	$IllegalArgumentException::init$();
}

void KeyAlreadyExistsException::init$($String* msg) {
	$IllegalArgumentException::init$(msg);
}

KeyAlreadyExistsException::KeyAlreadyExistsException() {
}

KeyAlreadyExistsException::KeyAlreadyExistsException(const KeyAlreadyExistsException& e) {
}

KeyAlreadyExistsException KeyAlreadyExistsException::wrapper$() {
	$pendingException(this);
	return *this;
}

void KeyAlreadyExistsException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* KeyAlreadyExistsException::load$($String* name, bool initialize) {
	$loadClass(KeyAlreadyExistsException, name, initialize, &_KeyAlreadyExistsException_ClassInfo_, allocate$KeyAlreadyExistsException);
	return class$;
}

$Class* KeyAlreadyExistsException::class$ = nullptr;

		} // openmbean
	} // management
} // javax