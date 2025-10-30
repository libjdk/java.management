#include <javax/management/AttributeChangeNotification.h>

#include <javax/management/Notification.h>
#include <jcpp.h>

#undef ATTRIBUTE_CHANGE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;

namespace javax {
	namespace management {

$FieldInfo _AttributeChangeNotification_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeChangeNotification, serialVersionUID)},
	{"ATTRIBUTE_CHANGE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AttributeChangeNotification, ATTRIBUTE_CHANGE)},
	{"attributeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AttributeChangeNotification, attributeName)},
	{"attributeType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AttributeChangeNotification, attributeType)},
	{"oldValue", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(AttributeChangeNotification, oldValue)},
	{"newValue", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(AttributeChangeNotification, newValue)},
	{}
};

$MethodInfo _AttributeChangeNotification_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;JJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeChangeNotification::*)(Object$*,int64_t,int64_t,$String*,$String*,$String*,Object$*,Object$*)>(&AttributeChangeNotification::init$))},
	{"getAttributeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNewValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getOldValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AttributeChangeNotification_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.AttributeChangeNotification",
	"javax.management.Notification",
	nullptr,
	_AttributeChangeNotification_FieldInfo_,
	_AttributeChangeNotification_MethodInfo_
};

$Object* allocate$AttributeChangeNotification($Class* clazz) {
	return $of($alloc(AttributeChangeNotification));
}

$String* AttributeChangeNotification::ATTRIBUTE_CHANGE = nullptr;

void AttributeChangeNotification::init$(Object$* source, int64_t sequenceNumber, int64_t timeStamp, $String* msg, $String* attributeName, $String* attributeType, Object$* oldValue, Object$* newValue) {
	$Notification::init$(AttributeChangeNotification::ATTRIBUTE_CHANGE, source, sequenceNumber, timeStamp, msg);
	$set(this, attributeName, nullptr);
	$set(this, attributeType, nullptr);
	$set(this, oldValue, nullptr);
	$set(this, newValue, nullptr);
	$set(this, attributeName, attributeName);
	$set(this, attributeType, attributeType);
	$set(this, oldValue, oldValue);
	$set(this, newValue, newValue);
}

$String* AttributeChangeNotification::getAttributeName() {
	return this->attributeName;
}

$String* AttributeChangeNotification::getAttributeType() {
	return this->attributeType;
}

$Object* AttributeChangeNotification::getOldValue() {
	return $of(this->oldValue);
}

$Object* AttributeChangeNotification::getNewValue() {
	return $of(this->newValue);
}

AttributeChangeNotification::AttributeChangeNotification() {
}

void clinit$AttributeChangeNotification($Class* class$) {
	$assignStatic(AttributeChangeNotification::ATTRIBUTE_CHANGE, "jmx.attribute.change"_s);
}

$Class* AttributeChangeNotification::load$($String* name, bool initialize) {
	$loadClass(AttributeChangeNotification, name, initialize, &_AttributeChangeNotification_ClassInfo_, clinit$AttributeChangeNotification, allocate$AttributeChangeNotification);
	return class$;
}

$Class* AttributeChangeNotification::class$ = nullptr;

	} // management
} // javax