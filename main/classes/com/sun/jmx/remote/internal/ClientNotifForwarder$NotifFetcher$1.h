#ifndef _com_sun_jmx_remote_internal_ClientNotifForwarder$NotifFetcher$1_h_
#define _com_sun_jmx_remote_internal_ClientNotifForwarder$NotifFetcher$1_h_
//$ class com.sun.jmx.remote.internal.ClientNotifForwarder$NotifFetcher$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {
					class ClientNotifForwarder$NotifFetcher;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ClientNotifForwarder$NotifFetcher$1 : public ::java::security::PrivilegedAction {
	$class(ClientNotifForwarder$NotifFetcher$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ClientNotifForwarder$NotifFetcher$1();
	void init$(::com::sun::jmx::remote::internal::ClientNotifForwarder$NotifFetcher* this$1, ::java::lang::ClassLoader* val$loader);
	virtual $Object* run() override;
	::com::sun::jmx::remote::internal::ClientNotifForwarder$NotifFetcher* this$1 = nullptr;
	::java::lang::ClassLoader* val$loader = nullptr;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ClientNotifForwarder$NotifFetcher$1_h_