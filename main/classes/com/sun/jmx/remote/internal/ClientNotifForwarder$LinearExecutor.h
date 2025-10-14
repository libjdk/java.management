#ifndef _com_sun_jmx_remote_internal_ClientNotifForwarder$LinearExecutor_h_
#define _com_sun_jmx_remote_internal_ClientNotifForwarder$LinearExecutor_h_
//$ class com.sun.jmx.remote.internal.ClientNotifForwarder$LinearExecutor
//$ extends java.util.concurrent.Executor

#include <java/util/concurrent/Executor.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ClientNotifForwarder$LinearExecutor : public ::java::util::concurrent::Executor {
	$class(ClientNotifForwarder$LinearExecutor, $NO_CLASS_INIT, ::java::util::concurrent::Executor)
public:
	ClientNotifForwarder$LinearExecutor();
	void init$();
	virtual void execute(::java::lang::Runnable* command) override;
	void lambda$execute$0();
	::java::lang::Runnable* command = nullptr;
	$Thread* thread = nullptr;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ClientNotifForwarder$LinearExecutor_h_