#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$5.h>

#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <javax/management/MBeanServerNotification.h>
#include <javax/management/Notification.h>
#include <jcpp.h>

using $ArrayNotificationBuffer = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServerNotification = ::javax::management::MBeanServerNotification;
using $Notification = ::javax::management::Notification;
using $NotificationListener = ::javax::management::NotificationListener;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ArrayNotificationBuffer$5_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$5, this$0)},
	{}
};

$MethodInfo _ArrayNotificationBuffer$5_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;)V", nullptr, 0, $method(static_cast<void(ArrayNotificationBuffer$5::*)($ArrayNotificationBuffer*)>(&ArrayNotificationBuffer$5::init$))},
	{"handleNotification", "(Ljavax/management/Notification;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ArrayNotificationBuffer$5_EnclosingMethodInfo_ = {
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer",
	nullptr,
	nullptr
};

$InnerClassInfo _ArrayNotificationBuffer$5_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ArrayNotificationBuffer$5_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer$5",
	"java.lang.Object",
	"javax.management.NotificationListener",
	_ArrayNotificationBuffer$5_FieldInfo_,
	_ArrayNotificationBuffer$5_MethodInfo_,
	nullptr,
	&_ArrayNotificationBuffer$5_EnclosingMethodInfo_,
	_ArrayNotificationBuffer$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer"
};

$Object* allocate$ArrayNotificationBuffer$5($Class* clazz) {
	return $of($alloc(ArrayNotificationBuffer$5));
}

void ArrayNotificationBuffer$5::init$($ArrayNotificationBuffer* this$0) {
	$set(this, this$0, this$0);
}

void ArrayNotificationBuffer$5::handleNotification($Notification* notif, Object$* handback) {
	$init($ArrayNotificationBuffer);
	$nc($ArrayNotificationBuffer::logger)->debug("creationListener"_s, "handleNotification called"_s);
	this->this$0->createdNotification($cast($MBeanServerNotification, notif));
}

ArrayNotificationBuffer$5::ArrayNotificationBuffer$5() {
}

$Class* ArrayNotificationBuffer$5::load$($String* name, bool initialize) {
	$loadClass(ArrayNotificationBuffer$5, name, initialize, &_ArrayNotificationBuffer$5_ClassInfo_, allocate$ArrayNotificationBuffer$5);
	return class$;
}

$Class* ArrayNotificationBuffer$5::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com