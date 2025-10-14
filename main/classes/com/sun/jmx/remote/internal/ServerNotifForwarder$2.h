#ifndef _com_sun_jmx_remote_internal_ServerNotifForwarder$2_h_
#define _com_sun_jmx_remote_internal_ServerNotifForwarder$2_h_
//$ class com.sun.jmx.remote.internal.ServerNotifForwarder$2
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace javax {
	namespace management {
		class MBeanServer;
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ServerNotifForwarder$2 : public ::java::security::PrivilegedExceptionAction {
	$class(ServerNotifForwarder$2, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ServerNotifForwarder$2();
	void init$(::javax::management::MBeanServer* val$mbs, ::javax::management::ObjectName* val$name);
	virtual $Object* run() override;
	::javax::management::ObjectName* val$name = nullptr;
	::javax::management::MBeanServer* val$mbs = nullptr;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ServerNotifForwarder$2_h_