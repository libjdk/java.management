#ifndef _com_sun_jmx_remote_internal_ServerNotifForwarder$1_h_
#define _com_sun_jmx_remote_internal_ServerNotifForwarder$1_h_
//$ class com.sun.jmx.remote.internal.ServerNotifForwarder$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {
					class ServerNotifForwarder;
				}
			}
		}
	}
}
namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ServerNotifForwarder$1 : public ::java::security::PrivilegedExceptionAction {
	$class(ServerNotifForwarder$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ServerNotifForwarder$1();
	void init$(::com::sun::jmx::remote::internal::ServerNotifForwarder* this$0, ::javax::management::ObjectName* val$name);
	virtual $Object* run() override;
	::com::sun::jmx::remote::internal::ServerNotifForwarder* this$0 = nullptr;
	::javax::management::ObjectName* val$name = nullptr;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ServerNotifForwarder$1_h_