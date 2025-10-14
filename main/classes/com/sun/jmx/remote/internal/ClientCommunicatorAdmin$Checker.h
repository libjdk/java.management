#ifndef _com_sun_jmx_remote_internal_ClientCommunicatorAdmin$Checker_h_
#define _com_sun_jmx_remote_internal_ClientCommunicatorAdmin$Checker_h_
//$ class com.sun.jmx.remote.internal.ClientCommunicatorAdmin$Checker
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {
					class ClientCommunicatorAdmin;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ClientCommunicatorAdmin$Checker : public ::java::lang::Runnable {
	$class(ClientCommunicatorAdmin$Checker, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ClientCommunicatorAdmin$Checker();
	void init$(::com::sun::jmx::remote::internal::ClientCommunicatorAdmin* this$0);
	virtual void run() override;
	void stop();
	::com::sun::jmx::remote::internal::ClientCommunicatorAdmin* this$0 = nullptr;
	$Thread* myThread = nullptr;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ClientCommunicatorAdmin$Checker_h_