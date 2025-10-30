#include <javax/management/Notification.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Date.h>
#include <java/util/EventObject.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Date = ::java::util::Date;
using $EventObject = ::java::util::EventObject;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {

$FieldInfo _Notification_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Notification, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Notification, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Notification, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Notification, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Notification, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Notification, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Notification, compat)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Notification, type)},
	{"sequenceNumber", "J", nullptr, $PRIVATE, $field(Notification, sequenceNumber)},
	{"timeStamp", "J", nullptr, $PRIVATE, $field(Notification, timeStamp)},
	{"userData", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Notification, userData)},
	{"message", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Notification, message)},
	{"source", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(Notification, source)},
	{}
};

$MethodInfo _Notification_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;J)V", nullptr, $PUBLIC, $method(static_cast<void(Notification::*)($String*,Object$*,int64_t)>(&Notification::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;JLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Notification::*)($String*,Object$*,int64_t,$String*)>(&Notification::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, $method(static_cast<void(Notification::*)($String*,Object$*,int64_t,int64_t)>(&Notification::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;JJLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Notification::*)($String*,Object$*,int64_t,int64_t,$String*)>(&Notification::init$))},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSequenceNumber", "()J", nullptr, $PUBLIC},
	{"getTimeStamp", "()J", nullptr, $PUBLIC},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUserData", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Notification::*)($ObjectInputStream*)>(&Notification::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setSequenceNumber", "(J)V", nullptr, $PUBLIC},
	{"setSource", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setTimeStamp", "(J)V", nullptr, $PUBLIC},
	{"setUserData", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Notification::*)($ObjectOutputStream*)>(&Notification::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _Notification_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.Notification",
	"java.util.EventObject",
	nullptr,
	_Notification_FieldInfo_,
	_Notification_MethodInfo_
};

$Object* allocate$Notification($Class* clazz) {
	return $of($alloc(Notification));
}

$ObjectStreamFieldArray* Notification::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* Notification::newSerialPersistentFields = nullptr;
int64_t Notification::serialVersionUID = 0;
$ObjectStreamFieldArray* Notification::serialPersistentFields = nullptr;
bool Notification::compat = false;

void Notification::init$($String* type, Object$* source, int64_t sequenceNumber) {
	$EventObject::init$(source);
	$set(this, userData, nullptr);
	$set(this, message, ""_s);
	$set(this, source, nullptr);
	$set(this, source, source);
	$set(this, type, type);
	this->sequenceNumber = sequenceNumber;
	this->timeStamp = ($$new($Date))->getTime();
}

void Notification::init$($String* type, Object$* source, int64_t sequenceNumber, $String* message) {
	$EventObject::init$(source);
	$set(this, userData, nullptr);
	$set(this, message, ""_s);
	$set(this, source, nullptr);
	$set(this, source, source);
	$set(this, type, type);
	this->sequenceNumber = sequenceNumber;
	this->timeStamp = ($$new($Date))->getTime();
	$set(this, message, message);
}

void Notification::init$($String* type, Object$* source, int64_t sequenceNumber, int64_t timeStamp) {
	$EventObject::init$(source);
	$set(this, userData, nullptr);
	$set(this, message, ""_s);
	$set(this, source, nullptr);
	$set(this, source, source);
	$set(this, type, type);
	this->sequenceNumber = sequenceNumber;
	this->timeStamp = timeStamp;
}

void Notification::init$($String* type, Object$* source, int64_t sequenceNumber, int64_t timeStamp, $String* message) {
	$EventObject::init$(source);
	$set(this, userData, nullptr);
	$set(this, message, ""_s);
	$set(this, source, nullptr);
	$set(this, source, source);
	$set(this, type, type);
	this->sequenceNumber = sequenceNumber;
	this->timeStamp = timeStamp;
	$set(this, message, message);
}

void Notification::setSource(Object$* source) {
	$set(this, source, source);
	$set(this, source, source);
}

int64_t Notification::getSequenceNumber() {
	return this->sequenceNumber;
}

void Notification::setSequenceNumber(int64_t sequenceNumber) {
	this->sequenceNumber = sequenceNumber;
}

$String* Notification::getType() {
	return this->type;
}

int64_t Notification::getTimeStamp() {
	return this->timeStamp;
}

void Notification::setTimeStamp(int64_t timeStamp) {
	this->timeStamp = timeStamp;
}

$String* Notification::getMessage() {
	return this->message;
}

$Object* Notification::getUserData() {
	return $of(this->userData);
}

void Notification::setUserData(Object$* userData) {
	$set(this, userData, userData);
}

$String* Notification::toString() {
	return $str({$($EventObject::toString()), "[type="_s, this->type, "][message="_s, this->message, "]"_s});
}

void Notification::readObject($ObjectInputStream* in) {
	$nc(in)->defaultReadObject();
	$set(this, source, this->source);
}

void Notification::writeObject($ObjectOutputStream* out) {
	if (Notification::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("type"_s, $of(this->type));
		fields->put("sequenceNumber"_s, this->sequenceNumber);
		fields->put("timeStamp"_s, this->timeStamp);
		fields->put("userData"_s, this->userData);
		fields->put("message"_s, $of(this->message));
		fields->put("source"_s, this->source);
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void clinit$Notification($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($Long);
	$load($ObjectName);
	$assignStatic(Notification::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "message"_s, $String::class$),
		$$new($ObjectStreamField, "sequenceNumber"_s, $Long::TYPE),
		$$new($ObjectStreamField, "source"_s, $Object::class$),
		$$new($ObjectStreamField, "sourceObjectName"_s, $ObjectName::class$),
		$$new($ObjectStreamField, "timeStamp"_s, $Long::TYPE),
		$$new($ObjectStreamField, "type"_s, $String::class$),
		$$new($ObjectStreamField, "userData"_s, $Object::class$)
	}));
	$assignStatic(Notification::newSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "message"_s, $String::class$),
		$$new($ObjectStreamField, "sequenceNumber"_s, $Long::TYPE),
		$$new($ObjectStreamField, "source"_s, $Object::class$),
		$$new($ObjectStreamField, "timeStamp"_s, $Long::TYPE),
		$$new($ObjectStreamField, "type"_s, $String::class$),
		$$new($ObjectStreamField, "userData"_s, $Object::class$)
	}));
	Notification::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			Notification::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (Notification::compat) {
			$assignStatic(Notification::serialPersistentFields, Notification::oldSerialPersistentFields);
			Notification::serialVersionUID = Notification::oldSerialVersionUID;
		} else {
			$assignStatic(Notification::serialPersistentFields, Notification::newSerialPersistentFields);
			Notification::serialVersionUID = Notification::newSerialVersionUID;
		}
	}
}

Notification::Notification() {
}

$Class* Notification::load$($String* name, bool initialize) {
	$loadClass(Notification, name, initialize, &_Notification_ClassInfo_, clinit$Notification, allocate$Notification);
	return class$;
}

$Class* Notification::class$ = nullptr;

	} // management
} // javax