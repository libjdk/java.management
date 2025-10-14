#ifndef _com_sun_jmx_remote_internal_ServerCommunicatorAdmin$Timeout_h_
#define _com_sun_jmx_remote_internal_ServerCommunicatorAdmin$Timeout_h_
//$ class com.sun.jmx.remote.internal.ServerCommunicatorAdmin$Timeout
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {
					class ServerCommunicatorAdmin;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ServerCommunicatorAdmin$Timeout : public ::java::lang::Runnable {
	$class(ServerCommunicatorAdmin$Timeout, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ServerCommunicatorAdmin$Timeout();
	void init$(::com::sun::jmx::remote::internal::ServerCommunicatorAdmin* this$0);
	virtual void run() override;
	::com::sun::jmx::remote::internal::ServerCommunicatorAdmin* this$0 = nullptr;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ServerCommunicatorAdmin$Timeout_h_