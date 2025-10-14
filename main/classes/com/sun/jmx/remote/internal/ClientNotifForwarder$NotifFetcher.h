#ifndef _com_sun_jmx_remote_internal_ClientNotifForwarder$NotifFetcher_h_
#define _com_sun_jmx_remote_internal_ClientNotifForwarder$NotifFetcher_h_
//$ class com.sun.jmx.remote.internal.ClientNotifForwarder$NotifFetcher
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {
					class ClientNotifForwarder;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class Exception;
		class Integer;
		class SecurityException;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace management {
		namespace remote {
			class NotificationResult;
			class TargetedNotification;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ClientNotifForwarder$NotifFetcher : public ::java::lang::Runnable {
	$class(ClientNotifForwarder$NotifFetcher, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ClientNotifForwarder$NotifFetcher();
	void init$(::com::sun::jmx::remote::internal::ClientNotifForwarder* this$0);
	virtual void dispatchNotification(::javax::management::remote::TargetedNotification* tn, ::java::lang::Integer* myListenerID, ::java::util::Map* listeners);
	void doRun();
	::javax::management::remote::NotificationResult* fetchNotifs();
	::javax::management::remote::NotificationResult* fetchOneNotif();
	bool isRejectedExecutionException(::java::lang::Exception* e);
	void logOnce($String* msg, ::java::lang::SecurityException* x);
	virtual void run() override;
	::java::lang::ClassLoader* setContextClassLoader(::java::lang::ClassLoader* loader);
	bool shouldStop();
	::com::sun::jmx::remote::internal::ClientNotifForwarder* this$0 = nullptr;
	$volatile(bool) alreadyLogged = false;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ClientNotifForwarder$NotifFetcher_h_