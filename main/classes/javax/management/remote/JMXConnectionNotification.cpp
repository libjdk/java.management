#include <javax/management/remote/JMXConnectionNotification.h>

#include <java/lang/Math.h>
#include <javax/management/Notification.h>
#include <jcpp.h>

#undef CLOSED
#undef FAILED
#undef NOTIFS_LOST
#undef OPENED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Notification = ::javax::management::Notification;

namespace javax {
	namespace management {
		namespace remote {

$FieldInfo _JMXConnectionNotification_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMXConnectionNotification, serialVersionUID)},
	{"OPENED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMXConnectionNotification, OPENED)},
	{"CLOSED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMXConnectionNotification, CLOSED)},
	{"FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMXConnectionNotification, FAILED)},
	{"NOTIFS_LOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMXConnectionNotification, NOTIFS_LOST)},
	{"connectionId", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JMXConnectionNotification, connectionId)},
	{}
};

$MethodInfo _JMXConnectionNotification_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;JLjava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(JMXConnectionNotification::*)($String*,Object$*,$String*,int64_t,$String*,Object$*)>(&JMXConnectionNotification::init$))},
	{"getConnectionId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"nonNull", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&JMXConnectionNotification::nonNull))},
	{}
};

$ClassInfo _JMXConnectionNotification_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.remote.JMXConnectionNotification",
	"javax.management.Notification",
	nullptr,
	_JMXConnectionNotification_FieldInfo_,
	_JMXConnectionNotification_MethodInfo_
};

$Object* allocate$JMXConnectionNotification($Class* clazz) {
	return $of($alloc(JMXConnectionNotification));
}

$String* JMXConnectionNotification::OPENED = nullptr;
$String* JMXConnectionNotification::CLOSED = nullptr;
$String* JMXConnectionNotification::FAILED = nullptr;
$String* JMXConnectionNotification::NOTIFS_LOST = nullptr;

void JMXConnectionNotification::init$($String* type, Object$* source, $String* connectionId, int64_t sequenceNumber, $String* message, Object$* userData) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $cast($String, nonNull(type)));
	$var($Object, var$1, nonNull(source));
	int64_t var$2 = $Math::max((int64_t)0, sequenceNumber);
	$Notification::init$(var$0, var$1, var$2, $System::currentTimeMillis(), message);
	if (type == nullptr || source == nullptr || connectionId == nullptr) {
		$throwNew($NullPointerException, "Illegal null argument"_s);
	}
	if (sequenceNumber < 0) {
		$throwNew($IllegalArgumentException, "Negative sequence number"_s);
	}
	$set(this, connectionId, connectionId);
	setUserData(userData);
}

$Object* JMXConnectionNotification::nonNull(Object$* arg) {
	$init(JMXConnectionNotification);
	if (arg == nullptr) {
		return $of(""_s);
	} else {
		return $of(arg);
	}
}

$String* JMXConnectionNotification::getConnectionId() {
	return this->connectionId;
}

JMXConnectionNotification::JMXConnectionNotification() {
}

void clinit$JMXConnectionNotification($Class* class$) {
	$assignStatic(JMXConnectionNotification::OPENED, "jmx.remote.connection.opened"_s);
	$assignStatic(JMXConnectionNotification::CLOSED, "jmx.remote.connection.closed"_s);
	$assignStatic(JMXConnectionNotification::FAILED, "jmx.remote.connection.failed"_s);
	$assignStatic(JMXConnectionNotification::NOTIFS_LOST, "jmx.remote.connection.notifs.lost"_s);
}

$Class* JMXConnectionNotification::load$($String* name, bool initialize) {
	$loadClass(JMXConnectionNotification, name, initialize, &_JMXConnectionNotification_ClassInfo_, clinit$JMXConnectionNotification, allocate$JMXConnectionNotification);
	return class$;
}

$Class* JMXConnectionNotification::class$ = nullptr;

		} // remote
	} // management
} // javax