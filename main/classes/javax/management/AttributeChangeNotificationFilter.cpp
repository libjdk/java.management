#include <javax/management/AttributeChangeNotificationFilter.h>

#include <java/util/Vector.h>
#include <javax/management/AttributeChangeNotification.h>
#include <javax/management/Notification.h>
#include <jcpp.h>

#undef ATTRIBUTE_CHANGE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AttributeChangeNotification = ::javax::management::AttributeChangeNotification;
using $Notification = ::javax::management::Notification;
using $NotificationFilter = ::javax::management::NotificationFilter;

namespace javax {
	namespace management {

$FieldInfo _AttributeChangeNotificationFilter_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeChangeNotificationFilter, serialVersionUID)},
	{"enabledAttributes", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/String;>;", $PRIVATE, $field(AttributeChangeNotificationFilter, enabledAttributes)},
	{}
};

$MethodInfo _AttributeChangeNotificationFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AttributeChangeNotificationFilter::*)()>(&AttributeChangeNotificationFilter::init$))},
	{"disableAllAttributes", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"disableAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"enableAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"getEnabledAttributes", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/lang/String;>;", $PUBLIC | $SYNCHRONIZED},
	{"isNotificationEnabled", "(Ljavax/management/Notification;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _AttributeChangeNotificationFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.AttributeChangeNotificationFilter",
	"java.lang.Object",
	"javax.management.NotificationFilter",
	_AttributeChangeNotificationFilter_FieldInfo_,
	_AttributeChangeNotificationFilter_MethodInfo_
};

$Object* allocate$AttributeChangeNotificationFilter($Class* clazz) {
	return $of($alloc(AttributeChangeNotificationFilter));
}

void AttributeChangeNotificationFilter::init$() {
	$set(this, enabledAttributes, $new($Vector));
}

bool AttributeChangeNotificationFilter::isNotificationEnabled($Notification* notification) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($String, type, $nc(notification)->getType());
		$init($AttributeChangeNotification);
		if ((type == nullptr) || ($nc(type)->equals($AttributeChangeNotification::ATTRIBUTE_CHANGE) == false) || (!($instanceOf($AttributeChangeNotification, notification)))) {
			return false;
		}
		$var($String, attributeName, $nc(($cast($AttributeChangeNotification, notification)))->getAttributeName());
		return $nc(this->enabledAttributes)->contains(attributeName);
	}
}

void AttributeChangeNotificationFilter::enableAttribute($String* name) {
	$synchronized(this) {
		if (name == nullptr) {
			$throwNew($IllegalArgumentException, "The name cannot be null."_s);
		}
		if (!$nc(this->enabledAttributes)->contains(name)) {
			$nc(this->enabledAttributes)->addElement(name);
		}
	}
}

void AttributeChangeNotificationFilter::disableAttribute($String* name) {
	$synchronized(this) {
		$nc(this->enabledAttributes)->removeElement(name);
	}
}

void AttributeChangeNotificationFilter::disableAllAttributes() {
	$synchronized(this) {
		$nc(this->enabledAttributes)->removeAllElements();
	}
}

$Vector* AttributeChangeNotificationFilter::getEnabledAttributes() {
	$synchronized(this) {
		return this->enabledAttributes;
	}
}

AttributeChangeNotificationFilter::AttributeChangeNotificationFilter() {
}

$Class* AttributeChangeNotificationFilter::load$($String* name, bool initialize) {
	$loadClass(AttributeChangeNotificationFilter, name, initialize, &_AttributeChangeNotificationFilter_ClassInfo_, allocate$AttributeChangeNotificationFilter);
	return class$;
}

$Class* AttributeChangeNotificationFilter::class$ = nullptr;

	} // management
} // javax