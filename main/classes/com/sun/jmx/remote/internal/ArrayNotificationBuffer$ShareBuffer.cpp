#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$ShareBuffer.h>

#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>
#include <com/sun/jmx/remote/internal/NotificationBuffer.h>
#include <com/sun/jmx/remote/internal/NotificationBufferFilter.h>
#include <javax/management/remote/NotificationResult.h>
#include <jcpp.h>

using $ArrayNotificationBuffer = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer;
using $NotificationBuffer = ::com::sun::jmx::remote::internal::NotificationBuffer;
using $NotificationBufferFilter = ::com::sun::jmx::remote::internal::NotificationBufferFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationResult = ::javax::management::remote::NotificationResult;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ArrayNotificationBuffer$ShareBuffer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$ShareBuffer, this$0)},
	{"size", "I", nullptr, $PRIVATE | $FINAL, $field(ArrayNotificationBuffer$ShareBuffer, size)},
	{}
};

$MethodInfo _ArrayNotificationBuffer$ShareBuffer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;I)V", nullptr, 0, $method(static_cast<void(ArrayNotificationBuffer$ShareBuffer::*)($ArrayNotificationBuffer*,int32_t)>(&ArrayNotificationBuffer$ShareBuffer::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"fetchNotifications", "(Lcom/sun/jmx/remote/internal/NotificationBufferFilter;JJI)Ljavax/management/remote/NotificationResult;", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"getSize", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _ArrayNotificationBuffer$ShareBuffer_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$ShareBuffer", "com.sun.jmx.remote.internal.ArrayNotificationBuffer", "ShareBuffer", $PRIVATE},
	{}
};

$ClassInfo _ArrayNotificationBuffer$ShareBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer$ShareBuffer",
	"java.lang.Object",
	"com.sun.jmx.remote.internal.NotificationBuffer",
	_ArrayNotificationBuffer$ShareBuffer_FieldInfo_,
	_ArrayNotificationBuffer$ShareBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_ArrayNotificationBuffer$ShareBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer"
};

$Object* allocate$ArrayNotificationBuffer$ShareBuffer($Class* clazz) {
	return $of($alloc(ArrayNotificationBuffer$ShareBuffer));
}

void ArrayNotificationBuffer$ShareBuffer::init$($ArrayNotificationBuffer* this$0, int32_t size) {
	$set(this, this$0, this$0);
	this->size = size;
	this$0->addSharer(this);
}

$NotificationResult* ArrayNotificationBuffer$ShareBuffer::fetchNotifications($NotificationBufferFilter* filter, int64_t startSequenceNumber, int64_t timeout, int32_t maxNotifications) {
	$var($NotificationBuffer, buf, this->this$0);
	return $nc(buf)->fetchNotifications(filter, startSequenceNumber, timeout, maxNotifications);
}

void ArrayNotificationBuffer$ShareBuffer::dispose() {
	this->this$0->removeSharer(this);
}

int32_t ArrayNotificationBuffer$ShareBuffer::getSize() {
	return this->size;
}

ArrayNotificationBuffer$ShareBuffer::ArrayNotificationBuffer$ShareBuffer() {
}

$Class* ArrayNotificationBuffer$ShareBuffer::load$($String* name, bool initialize) {
	$loadClass(ArrayNotificationBuffer$ShareBuffer, name, initialize, &_ArrayNotificationBuffer$ShareBuffer_ClassInfo_, allocate$ArrayNotificationBuffer$ShareBuffer);
	return class$;
}

$Class* ArrayNotificationBuffer$ShareBuffer::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com