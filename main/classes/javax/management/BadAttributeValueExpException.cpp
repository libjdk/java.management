#include <javax/management/BadAttributeValueExpException.h>

#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {

$FieldInfo _BadAttributeValueExpException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BadAttributeValueExpException, serialVersionUID)},
	{"val", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BadAttributeValueExpException, val)},
	{}
};

$MethodInfo _BadAttributeValueExpException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(BadAttributeValueExpException::*)(Object$*)>(&BadAttributeValueExpException::init$))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(BadAttributeValueExpException::*)($ObjectInputStream*)>(&BadAttributeValueExpException::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BadAttributeValueExpException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.BadAttributeValueExpException",
	"java.lang.Exception",
	nullptr,
	_BadAttributeValueExpException_FieldInfo_,
	_BadAttributeValueExpException_MethodInfo_
};

$Object* allocate$BadAttributeValueExpException($Class* clazz) {
	return $of($alloc(BadAttributeValueExpException));
}

void BadAttributeValueExpException::init$(Object$* val) {
	$Exception::init$();
	$set(this, val, val == nullptr ? ($String*)nullptr : $nc($of(val))->toString());
}

$String* BadAttributeValueExpException::toString() {
	return $str({"BadAttributeValueException: "_s, this->val});
}

void BadAttributeValueExpException::readObject($ObjectInputStream* ois) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, gf, $nc(ois)->readFields());
	$var($Object, valObj, $nc(gf)->get("val"_s, ($Object*)nullptr));
	if ($instanceOf($String, valObj) || valObj == nullptr) {
		$set(this, val, $cast($String, valObj));
	} else {
		$var($String, var$0, $$str({$$str($System::identityHashCode(valObj)), "@"_s}));
		$set(this, val, $concat(var$0, $($nc($of(valObj))->getClass()->getName())));
	}
}

BadAttributeValueExpException::BadAttributeValueExpException() {
}

BadAttributeValueExpException::BadAttributeValueExpException(const BadAttributeValueExpException& e) : $Exception(e) {
}

void BadAttributeValueExpException::throw$() {
	throw *this;
}

$Class* BadAttributeValueExpException::load$($String* name, bool initialize) {
	$loadClass(BadAttributeValueExpException, name, initialize, &_BadAttributeValueExpException_ClassInfo_, allocate$BadAttributeValueExpException);
	return class$;
}

$Class* BadAttributeValueExpException::class$ = nullptr;

	} // management
} // javax