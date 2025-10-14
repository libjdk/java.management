#ifndef _com_sun_jmx_remote_internal_ArrayNotificationBuffer$2_h_
#define _com_sun_jmx_remote_internal_ArrayNotificationBuffer$2_h_
//$ class com.sun.jmx.remote.internal.ArrayNotificationBuffer$2
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
		class NotificationListener;
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ArrayNotificationBuffer$2 : public ::java::security::PrivilegedExceptionAction {
	$class(ArrayNotificationBuffer$2, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ArrayNotificationBuffer$2();
	void init$(::com::sun::jmx::remote::internal::ArrayNotificationBuffer* this$0, ::javax::management::ObjectName* val$name, ::javax::management::NotificationListener* val$listener);
	virtual $Object* run() override;
	::com::sun::jmx::remote::internal::ArrayNotificationBuffer* this$0 = nullptr;
	::javax::management::NotificationListener* val$listener = nullptr;
	::javax::management::ObjectName* val$name = nullptr;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ArrayNotificationBuffer$2_h_