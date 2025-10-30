#include <javax/management/remote/NotificationResult.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <javax/management/remote/TargetedNotification.h>
#include <jcpp.h>

using $TargetedNotificationArray = $Array<::javax::management::remote::TargetedNotification>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $TargetedNotification = ::javax::management::remote::TargetedNotification;

namespace javax {
	namespace management {
		namespace remote {

$FieldInfo _NotificationResult_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotificationResult, serialVersionUID)},
	{"earliestSequenceNumber", "J", nullptr, $PRIVATE, $field(NotificationResult, earliestSequenceNumber)},
	{"nextSequenceNumber", "J", nullptr, $PRIVATE, $field(NotificationResult, nextSequenceNumber)},
	{"targetedNotifications", "[Ljavax/management/remote/TargetedNotification;", nullptr, $PRIVATE, $field(NotificationResult, targetedNotifications)},
	{}
};

$MethodInfo _NotificationResult_MethodInfo_[] = {
	{"<init>", "(JJ[Ljavax/management/remote/TargetedNotification;)V", nullptr, $PUBLIC, $method(static_cast<void(NotificationResult::*)(int64_t,int64_t,$TargetedNotificationArray*)>(&NotificationResult::init$))},
	{"getEarliestSequenceNumber", "()J", nullptr, $PUBLIC},
	{"getNextSequenceNumber", "()J", nullptr, $PUBLIC},
	{"getTargetedNotifications", "()[Ljavax/management/remote/TargetedNotification;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(NotificationResult::*)($ObjectInputStream*)>(&NotificationResult::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "([Ljavax/management/remote/TargetedNotification;JJ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($TargetedNotificationArray*,int64_t,int64_t)>(&NotificationResult::validate)), "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _NotificationResult_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.remote.NotificationResult",
	"java.lang.Object",
	"java.io.Serializable",
	_NotificationResult_FieldInfo_,
	_NotificationResult_MethodInfo_
};

$Object* allocate$NotificationResult($Class* clazz) {
	return $of($alloc(NotificationResult));
}

void NotificationResult::init$(int64_t earliestSequenceNumber, int64_t nextSequenceNumber, $TargetedNotificationArray* targetedNotifications) {
	validate(targetedNotifications, earliestSequenceNumber, nextSequenceNumber);
	this->earliestSequenceNumber = earliestSequenceNumber;
	this->nextSequenceNumber = nextSequenceNumber;
	$set(this, targetedNotifications, $nc(targetedNotifications)->length == 0 ? targetedNotifications : $cast($TargetedNotificationArray, $nc(targetedNotifications)->clone()));
}

int64_t NotificationResult::getEarliestSequenceNumber() {
	return this->earliestSequenceNumber;
}

int64_t NotificationResult::getNextSequenceNumber() {
	return this->nextSequenceNumber;
}

$TargetedNotificationArray* NotificationResult::getTargetedNotifications() {
	return $nc(this->targetedNotifications)->length == 0 ? this->targetedNotifications : $cast($TargetedNotificationArray, $nc(this->targetedNotifications)->clone());
}

$String* NotificationResult::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $$str({"NotificationResult: earliest="_s, $$str(getEarliestSequenceNumber()), "; next="_s}));
	$var($String, var$1, $$concat(var$2, $$str(getNextSequenceNumber())));
	$var($String, var$0, $$concat(var$1, "; nnotifs="));
	return $concat(var$0, $$str($nc($(getTargetedNotifications()))->length));
}

void NotificationResult::readObject($ObjectInputStream* ois) {
	$nc(ois)->defaultReadObject();
	try {
		validate(this->targetedNotifications, this->earliestSequenceNumber, this->nextSequenceNumber);
		$set(this, targetedNotifications, $nc(this->targetedNotifications)->length == 0 ? this->targetedNotifications : $cast($TargetedNotificationArray, $nc(this->targetedNotifications)->clone()));
	} catch ($IllegalArgumentException& e) {
		$throwNew($InvalidObjectException, $(e->getMessage()));
	}
}

void NotificationResult::validate($TargetedNotificationArray* targetedNotifications, int64_t earliestSequenceNumber, int64_t nextSequenceNumber) {
	$init(NotificationResult);
	if (targetedNotifications == nullptr) {
		$var($String, msg, "Notifications null"_s);
		$throwNew($IllegalArgumentException, msg);
	}
	if (earliestSequenceNumber < 0 || nextSequenceNumber < 0) {
		$throwNew($IllegalArgumentException, "Bad sequence numbers"_s);
	}
}

NotificationResult::NotificationResult() {
}

$Class* NotificationResult::load$($String* name, bool initialize) {
	$loadClass(NotificationResult, name, initialize, &_NotificationResult_ClassInfo_, allocate$NotificationResult);
	return class$;
}

$Class* NotificationResult::class$ = nullptr;

		} // remote
	} // management
} // javax