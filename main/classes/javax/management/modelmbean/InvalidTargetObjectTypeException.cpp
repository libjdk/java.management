#include <javax/management/modelmbean/InvalidTargetObjectTypeException.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace javax {
	namespace management {
		namespace modelmbean {

$FieldInfo _InvalidTargetObjectTypeException_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidTargetObjectTypeException, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidTargetObjectTypeException, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InvalidTargetObjectTypeException, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InvalidTargetObjectTypeException, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InvalidTargetObjectTypeException, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InvalidTargetObjectTypeException, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(InvalidTargetObjectTypeException, compat)},
	{"exception", "Ljava/lang/Exception;", nullptr, 0, $field(InvalidTargetObjectTypeException, exception)},
	{}
};

$MethodInfo _InvalidTargetObjectTypeException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidTargetObjectTypeException::*)()>(&InvalidTargetObjectTypeException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidTargetObjectTypeException::*)($String*)>(&InvalidTargetObjectTypeException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidTargetObjectTypeException::*)($Exception*,$String*)>(&InvalidTargetObjectTypeException::init$))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(InvalidTargetObjectTypeException::*)($ObjectInputStream*)>(&InvalidTargetObjectTypeException::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(InvalidTargetObjectTypeException::*)($ObjectOutputStream*)>(&InvalidTargetObjectTypeException::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _InvalidTargetObjectTypeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.modelmbean.InvalidTargetObjectTypeException",
	"java.lang.Exception",
	nullptr,
	_InvalidTargetObjectTypeException_FieldInfo_,
	_InvalidTargetObjectTypeException_MethodInfo_
};

$Object* allocate$InvalidTargetObjectTypeException($Class* clazz) {
	return $of($alloc(InvalidTargetObjectTypeException));
}

$ObjectStreamFieldArray* InvalidTargetObjectTypeException::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* InvalidTargetObjectTypeException::newSerialPersistentFields = nullptr;
int64_t InvalidTargetObjectTypeException::serialVersionUID = 0;
$ObjectStreamFieldArray* InvalidTargetObjectTypeException::serialPersistentFields = nullptr;
bool InvalidTargetObjectTypeException::compat = false;

void InvalidTargetObjectTypeException::init$() {
	$Exception::init$("InvalidTargetObjectTypeException: "_s);
	$set(this, exception, nullptr);
}

void InvalidTargetObjectTypeException::init$($String* s) {
	$Exception::init$($$str({"InvalidTargetObjectTypeException: "_s, s}));
	$set(this, exception, nullptr);
}

void InvalidTargetObjectTypeException::init$($Exception* e, $String* s) {
	$useLocalCurrentObjectStackCache();
	$Exception::init$($$str({"InvalidTargetObjectTypeException: "_s, s, ((e != nullptr) ? ($$str({"\n\t triggered by:"_s, $($nc(e)->toString())})) : ""_s)}));
	$set(this, exception, e);
}

void InvalidTargetObjectTypeException::readObject($ObjectInputStream* in) {
	if (InvalidTargetObjectTypeException::compat) {
		$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
		$set(this, exception, $cast($Exception, $nc(fields)->get("relatedExcept"_s, ($Object*)nullptr)));
		if (fields->defaulted("relatedExcept"_s)) {
			$throwNew($NullPointerException, "relatedExcept"_s);
		}
	} else {
		$nc(in)->defaultReadObject();
	}
}

void InvalidTargetObjectTypeException::writeObject($ObjectOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	if (InvalidTargetObjectTypeException::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("relatedExcept"_s, $of(this->exception));
		fields->put("msgStr"_s, ((this->exception != nullptr) ? $($of($nc(this->exception)->getMessage())) : $of(""_s)));
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void clinit$InvalidTargetObjectTypeException($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($Exception);
	$assignStatic(InvalidTargetObjectTypeException::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "msgStr"_s, $String::class$),
		$$new($ObjectStreamField, "relatedExcept"_s, $Exception::class$)
	}));
	$assignStatic(InvalidTargetObjectTypeException::newSerialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "exception"_s, $Exception::class$)}));
	InvalidTargetObjectTypeException::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			InvalidTargetObjectTypeException::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (InvalidTargetObjectTypeException::compat) {
			$assignStatic(InvalidTargetObjectTypeException::serialPersistentFields, InvalidTargetObjectTypeException::oldSerialPersistentFields);
			InvalidTargetObjectTypeException::serialVersionUID = InvalidTargetObjectTypeException::oldSerialVersionUID;
		} else {
			$assignStatic(InvalidTargetObjectTypeException::serialPersistentFields, InvalidTargetObjectTypeException::newSerialPersistentFields);
			InvalidTargetObjectTypeException::serialVersionUID = InvalidTargetObjectTypeException::newSerialVersionUID;
		}
	}
}

InvalidTargetObjectTypeException::InvalidTargetObjectTypeException() {
}

InvalidTargetObjectTypeException::InvalidTargetObjectTypeException(const InvalidTargetObjectTypeException& e) : $Exception(e) {
}

void InvalidTargetObjectTypeException::throw$() {
	throw *this;
}

$Class* InvalidTargetObjectTypeException::load$($String* name, bool initialize) {
	$loadClass(InvalidTargetObjectTypeException, name, initialize, &_InvalidTargetObjectTypeException_ClassInfo_, clinit$InvalidTargetObjectTypeException, allocate$InvalidTargetObjectTypeException);
	return class$;
}

$Class* InvalidTargetObjectTypeException::class$ = nullptr;

		} // modelmbean
	} // management
} // javax