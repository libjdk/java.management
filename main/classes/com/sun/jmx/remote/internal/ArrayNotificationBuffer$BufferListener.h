#ifndef _com_sun_jmx_remote_internal_ArrayNotificationBuffer$BufferListener_h_
#define _com_sun_jmx_remote_internal_ArrayNotificationBuffer$BufferListener_h_
//$ class com.sun.jmx.remote.internal.ArrayNotificationBuffer$BufferListener
//$ extends javax.management.NotificationListener

#include <javax/management/NotificationListener.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {
					class ArrayNotificationBuffer;
				}
			}
		}
	}
}
namespace javax {
	namespace management {
		class Notification;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ArrayNotificationBuffer$BufferListener : public ::javax::management::NotificationListener {
	$class(ArrayNotificationBuffer$BufferListener, $NO_CLASS_INIT, ::javax::management::NotificationListener)
public:
	ArrayNotificationBuffer$BufferListener();
	void init$(::com::sun::jmx::remote::internal::ArrayNotificationBuffer* this$0);
	virtual void handleNotification(::javax::management::Notification* notif, Object$* handback) override;
	::com::sun::jmx::remote::internal::ArrayNotificationBuffer* this$0 = nullptr;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ArrayNotificationBuffer$BufferListener_h_