#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$BufferListener.h>

#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$NamedNotification.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <javax/management/Notification.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ArrayNotificationBuffer = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer;
using $ArrayNotificationBuffer$NamedNotification = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer$NamedNotification;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ArrayNotificationBuffer$BufferListener_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$BufferListener, this$0)},
	{}
};

$MethodInfo _ArrayNotificationBuffer$BufferListener_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;)V", nullptr, $PRIVATE, $method(static_cast<void(ArrayNotificationBuffer$BufferListener::*)($ArrayNotificationBuffer*)>(&ArrayNotificationBuffer$BufferListener::init$))},
	{"handleNotification", "(Ljavax/management/Notification;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ArrayNotificationBuffer$BufferListener_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$BufferListener", "com.sun.jmx.remote.internal.ArrayNotificationBuffer", "BufferListener", $PRIVATE},
	{}
};

$ClassInfo _ArrayNotificationBuffer$BufferListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer$BufferListener",
	"java.lang.Object",
	"javax.management.NotificationListener",
	_ArrayNotificationBuffer$BufferListener_FieldInfo_,
	_ArrayNotificationBuffer$BufferListener_MethodInfo_,
	nullptr,
	nullptr,
	_ArrayNotificationBuffer$BufferListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer"
};

$Object* allocate$ArrayNotificationBuffer$BufferListener($Class* clazz) {
	return $of($alloc(ArrayNotificationBuffer$BufferListener));
}

void ArrayNotificationBuffer$BufferListener::init$($ArrayNotificationBuffer* this$0) {
	$set(this, this$0, this$0);
}

void ArrayNotificationBuffer$BufferListener::handleNotification($Notification* notif, Object$* handback) {
	$useLocalCurrentObjectStackCache();
	$init($ArrayNotificationBuffer);
	if ($nc($ArrayNotificationBuffer::logger)->debugOn()) {
		$nc($ArrayNotificationBuffer::logger)->debug("BufferListener.handleNotification"_s, $$str({"notif="_s, notif, "; handback="_s, handback}));
	}
	$var($ObjectName, name, $cast($ObjectName, handback));
	this->this$0->addNotification($$new($ArrayNotificationBuffer$NamedNotification, name, notif));
}

ArrayNotificationBuffer$BufferListener::ArrayNotificationBuffer$BufferListener() {
}

$Class* ArrayNotificationBuffer$BufferListener::load$($String* name, bool initialize) {
	$loadClass(ArrayNotificationBuffer$BufferListener, name, initialize, &_ArrayNotificationBuffer$BufferListener_ClassInfo_, allocate$ArrayNotificationBuffer$BufferListener);
	return class$;
}

$Class* ArrayNotificationBuffer$BufferListener::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com