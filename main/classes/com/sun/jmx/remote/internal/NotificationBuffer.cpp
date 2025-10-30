#include <com/sun/jmx/remote/internal/NotificationBuffer.h>

#include <com/sun/jmx/remote/internal/NotificationBufferFilter.h>
#include <javax/management/remote/NotificationResult.h>
#include <jcpp.h>

using $NotificationBufferFilter = ::com::sun::jmx::remote::internal::NotificationBufferFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationResult = ::javax::management::remote::NotificationResult;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$MethodInfo _NotificationBuffer_MethodInfo_[] = {
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"fetchNotifications", "(Lcom/sun/jmx/remote/internal/NotificationBufferFilter;JJI)Ljavax/management/remote/NotificationResult;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{}
};

$ClassInfo _NotificationBuffer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.jmx.remote.internal.NotificationBuffer",
	nullptr,
	nullptr,
	nullptr,
	_NotificationBuffer_MethodInfo_
};

$Object* allocate$NotificationBuffer($Class* clazz) {
	return $of($alloc(NotificationBuffer));
}

$Class* NotificationBuffer::load$($String* name, bool initialize) {
	$loadClass(NotificationBuffer, name, initialize, &_NotificationBuffer_ClassInfo_, allocate$NotificationBuffer);
	return class$;
}

$Class* NotificationBuffer::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com