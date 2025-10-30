#include <javax/management/remote/TargetedNotification.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <javax/management/Notification.h>
#include <jcpp.h>

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;

namespace javax {
	namespace management {
		namespace remote {

$FieldInfo _TargetedNotification_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TargetedNotification, serialVersionUID)},
	{"notif", "Ljavax/management/Notification;", nullptr, $PRIVATE, $field(TargetedNotification, notif)},
	{"id", "Ljava/lang/Integer;", nullptr, $PRIVATE, $field(TargetedNotification, id)},
	{}
};

$MethodInfo _TargetedNotification_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/Notification;Ljava/lang/Integer;)V", nullptr, $PUBLIC, $method(static_cast<void(TargetedNotification::*)($Notification*,$Integer*)>(&TargetedNotification::init$))},
	{"getListenerID", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{"getNotification", "()Ljavax/management/Notification;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(TargetedNotification::*)($ObjectInputStream*)>(&TargetedNotification::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "(Ljavax/management/Notification;Ljava/lang/Integer;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Notification*,$Integer*)>(&TargetedNotification::validate)), "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _TargetedNotification_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.remote.TargetedNotification",
	"java.lang.Object",
	"java.io.Serializable",
	_TargetedNotification_FieldInfo_,
	_TargetedNotification_MethodInfo_
};

$Object* allocate$TargetedNotification($Class* clazz) {
	return $of($alloc(TargetedNotification));
}

void TargetedNotification::init$($Notification* notification, $Integer* listenerID) {
	validate(notification, listenerID);
	$set(this, notif, notification);
	$set(this, id, listenerID);
}

$Notification* TargetedNotification::getNotification() {
	return this->notif;
}

$Integer* TargetedNotification::getListenerID() {
	return this->id;
}

$String* TargetedNotification::toString() {
	return $str({"{"_s, this->notif, ", "_s, this->id, "}"_s});
}

void TargetedNotification::readObject($ObjectInputStream* ois) {
	$nc(ois)->defaultReadObject();
	try {
		validate(this->notif, this->id);
	} catch ($IllegalArgumentException& e) {
		$throwNew($InvalidObjectException, $(e->getMessage()));
	}
}

void TargetedNotification::validate($Notification* notif, $Integer* id) {
	$init(TargetedNotification);
	if (notif == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid notification: null"_s);
	}
	if (id == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid listener ID: null"_s);
	}
}

TargetedNotification::TargetedNotification() {
}

$Class* TargetedNotification::load$($String* name, bool initialize) {
	$loadClass(TargetedNotification, name, initialize, &_TargetedNotification_ClassInfo_, allocate$TargetedNotification);
	return class$;
}

$Class* TargetedNotification::class$ = nullptr;

		} // remote
	} // management
} // javax