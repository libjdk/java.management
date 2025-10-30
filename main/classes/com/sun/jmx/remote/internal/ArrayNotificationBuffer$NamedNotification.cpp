#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$NamedNotification.h>

#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>
#include <javax/management/Notification.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ArrayNotificationBuffer = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ArrayNotificationBuffer$NamedNotification_FieldInfo_[] = {
	{"sender", "Ljavax/management/ObjectName;", nullptr, $PRIVATE | $FINAL, $field(ArrayNotificationBuffer$NamedNotification, sender)},
	{"notification", "Ljavax/management/Notification;", nullptr, $PRIVATE | $FINAL, $field(ArrayNotificationBuffer$NamedNotification, notification)},
	{}
};

$MethodInfo _ArrayNotificationBuffer$NamedNotification_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/ObjectName;Ljavax/management/Notification;)V", nullptr, 0, $method(static_cast<void(ArrayNotificationBuffer$NamedNotification::*)($ObjectName*,$Notification*)>(&ArrayNotificationBuffer$NamedNotification::init$))},
	{"getNotification", "()Ljavax/management/Notification;", nullptr, 0},
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ArrayNotificationBuffer$NamedNotification_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$NamedNotification", "com.sun.jmx.remote.internal.ArrayNotificationBuffer", "NamedNotification", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ArrayNotificationBuffer$NamedNotification_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer$NamedNotification",
	"java.lang.Object",
	nullptr,
	_ArrayNotificationBuffer$NamedNotification_FieldInfo_,
	_ArrayNotificationBuffer$NamedNotification_MethodInfo_,
	nullptr,
	nullptr,
	_ArrayNotificationBuffer$NamedNotification_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer"
};

$Object* allocate$ArrayNotificationBuffer$NamedNotification($Class* clazz) {
	return $of($alloc(ArrayNotificationBuffer$NamedNotification));
}

void ArrayNotificationBuffer$NamedNotification::init$($ObjectName* sender, $Notification* notif) {
	$set(this, sender, sender);
	$set(this, notification, notif);
}

$ObjectName* ArrayNotificationBuffer$NamedNotification::getObjectName() {
	return this->sender;
}

$Notification* ArrayNotificationBuffer$NamedNotification::getNotification() {
	return this->notification;
}

$String* ArrayNotificationBuffer$NamedNotification::toString() {
	return $str({"NamedNotification("_s, this->sender, ", "_s, this->notification, ")"_s});
}

ArrayNotificationBuffer$NamedNotification::ArrayNotificationBuffer$NamedNotification() {
}

$Class* ArrayNotificationBuffer$NamedNotification::load$($String* name, bool initialize) {
	$loadClass(ArrayNotificationBuffer$NamedNotification, name, initialize, &_ArrayNotificationBuffer$NamedNotification_ClassInfo_, allocate$ArrayNotificationBuffer$NamedNotification);
	return class$;
}

$Class* ArrayNotificationBuffer$NamedNotification::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com