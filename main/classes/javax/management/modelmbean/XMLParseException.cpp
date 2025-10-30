#include <javax/management/modelmbean/XMLParseException.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
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
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace javax {
	namespace management {
		namespace modelmbean {

$FieldInfo _XMLParseException_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLParseException, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLParseException, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLParseException, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLParseException, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLParseException, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLParseException, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XMLParseException, compat)},
	{}
};

$MethodInfo _XMLParseException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLParseException::*)()>(&XMLParseException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLParseException::*)($String*)>(&XMLParseException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLParseException::*)($Exception*,$String*)>(&XMLParseException::init$))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(XMLParseException::*)($ObjectInputStream*)>(&XMLParseException::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(XMLParseException::*)($ObjectOutputStream*)>(&XMLParseException::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _XMLParseException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.modelmbean.XMLParseException",
	"java.lang.Exception",
	nullptr,
	_XMLParseException_FieldInfo_,
	_XMLParseException_MethodInfo_
};

$Object* allocate$XMLParseException($Class* clazz) {
	return $of($alloc(XMLParseException));
}

$ObjectStreamFieldArray* XMLParseException::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* XMLParseException::newSerialPersistentFields = nullptr;
int64_t XMLParseException::serialVersionUID = 0;
$ObjectStreamFieldArray* XMLParseException::serialPersistentFields = nullptr;
bool XMLParseException::compat = false;

void XMLParseException::init$() {
	$Exception::init$("XML Parse Exception."_s);
}

void XMLParseException::init$($String* s) {
	$Exception::init$($$str({"XML Parse Exception: "_s, s}));
}

void XMLParseException::init$($Exception* e, $String* s) {
	$useLocalCurrentObjectStackCache();
	$Exception::init$($$str({"XML Parse Exception: "_s, s, ":"_s, $($nc(e)->toString())}));
}

void XMLParseException::readObject($ObjectInputStream* in) {
	$nc(in)->defaultReadObject();
}

void XMLParseException::writeObject($ObjectOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	if (XMLParseException::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("msgStr"_s, $($of(getMessage())));
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void clinit$XMLParseException($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(XMLParseException::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "msgStr"_s, $String::class$)}));
	$assignStatic(XMLParseException::newSerialPersistentFields, $new($ObjectStreamFieldArray, 0));
	XMLParseException::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			XMLParseException::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (XMLParseException::compat) {
			$assignStatic(XMLParseException::serialPersistentFields, XMLParseException::oldSerialPersistentFields);
			XMLParseException::serialVersionUID = XMLParseException::oldSerialVersionUID;
		} else {
			$assignStatic(XMLParseException::serialPersistentFields, XMLParseException::newSerialPersistentFields);
			XMLParseException::serialVersionUID = XMLParseException::newSerialVersionUID;
		}
	}
}

XMLParseException::XMLParseException() {
}

XMLParseException::XMLParseException(const XMLParseException& e) : $Exception(e) {
}

void XMLParseException::throw$() {
	throw *this;
}

$Class* XMLParseException::load$($String* name, bool initialize) {
	$loadClass(XMLParseException, name, initialize, &_XMLParseException_ClassInfo_, clinit$XMLParseException, allocate$XMLParseException);
	return class$;
}

$Class* XMLParseException::class$ = nullptr;

		} // modelmbean
	} // management
} // javax