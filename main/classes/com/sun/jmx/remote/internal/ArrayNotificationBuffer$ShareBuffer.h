#ifndef _com_sun_jmx_remote_internal_ArrayNotificationBuffer$ShareBuffer_h_
#define _com_sun_jmx_remote_internal_ArrayNotificationBuffer$ShareBuffer_h_
//$ class com.sun.jmx.remote.internal.ArrayNotificationBuffer$ShareBuffer
//$ extends com.sun.jmx.remote.internal.NotificationBuffer

#include <com/sun/jmx/remote/internal/NotificationBuffer.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {
					class ArrayNotificationBuffer;
					class NotificationBufferFilter;
				}
			}
		}
	}
}
namespace javax {
	namespace management {
		namespace remote {
			class NotificationResult;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ArrayNotificationBuffer$ShareBuffer : public ::com::sun::jmx::remote::internal::NotificationBuffer {
	$class(ArrayNotificationBuffer$ShareBuffer, $NO_CLASS_INIT, ::com::sun::jmx::remote::internal::NotificationBuffer)
public:
	ArrayNotificationBuffer$ShareBuffer();
	void init$(::com::sun::jmx::remote::internal::ArrayNotificationBuffer* this$0, int32_t size);
	virtual void dispose() override;
	virtual ::javax::management::remote::NotificationResult* fetchNotifications(::com::sun::jmx::remote::internal::NotificationBufferFilter* filter, int64_t startSequenceNumber, int64_t timeout, int32_t maxNotifications) override;
	virtual int32_t getSize();
	::com::sun::jmx::remote::internal::ArrayNotificationBuffer* this$0 = nullptr;
	int32_t size = 0;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ArrayNotificationBuffer$ShareBuffer_h_