#ifndef _com_sun_jmx_remote_internal_ArrayNotificationBuffer$1_h_
#define _com_sun_jmx_remote_internal_ArrayNotificationBuffer$1_h_
//$ class com.sun.jmx.remote.internal.ArrayNotificationBuffer$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

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
		class NotificationFilter;
		class NotificationListener;
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ArrayNotificationBuffer$1 : public ::java::security::PrivilegedExceptionAction {
	$class(ArrayNotificationBuffer$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ArrayNotificationBuffer$1();
	void init$(::com::sun::jmx::remote::internal::ArrayNotificationBuffer* this$0, ::javax::management::ObjectName* val$name, ::javax::management::NotificationListener* val$listener, ::javax::management::NotificationFilter* val$filter, Object$* val$handback);
	virtual $Object* run() override;
	::com::sun::jmx::remote::internal::ArrayNotificationBuffer* this$0 = nullptr;
	$Object* val$handback = nullptr;
	::javax::management::NotificationFilter* val$filter = nullptr;
	::javax::management::NotificationListener* val$listener = nullptr;
	::javax::management::ObjectName* val$name = nullptr;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ArrayNotificationBuffer$1_h_