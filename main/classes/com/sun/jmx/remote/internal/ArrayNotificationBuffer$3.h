#ifndef _com_sun_jmx_remote_internal_ArrayNotificationBuffer$3_h_
#define _com_sun_jmx_remote_internal_ArrayNotificationBuffer$3_h_
//$ class com.sun.jmx.remote.internal.ArrayNotificationBuffer$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

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
		class ObjectName;
		class QueryExp;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ArrayNotificationBuffer$3 : public ::java::security::PrivilegedAction {
	$class(ArrayNotificationBuffer$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ArrayNotificationBuffer$3();
	void init$(::com::sun::jmx::remote::internal::ArrayNotificationBuffer* this$0, ::javax::management::ObjectName* val$name, ::javax::management::QueryExp* val$query);
	virtual $Object* run() override;
	::com::sun::jmx::remote::internal::ArrayNotificationBuffer* this$0 = nullptr;
	::javax::management::QueryExp* val$query = nullptr;
	::javax::management::ObjectName* val$name = nullptr;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ArrayNotificationBuffer$3_h_