#ifndef _com_sun_jmx_remote_internal_ClientCommunicatorAdmin_h_
#define _com_sun_jmx_remote_internal_ClientCommunicatorAdmin_h_
//$ class com.sun.jmx.remote.internal.ClientCommunicatorAdmin
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CONNECTED")
#undef CONNECTED
#pragma push_macro("FAILED")
#undef FAILED
#pragma push_macro("RE_CONNECTING")
#undef RE_CONNECTING
#pragma push_macro("TERMINATED")
#undef TERMINATED

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {
					class ClientCommunicatorAdmin$Checker;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {
					class ClassLogger;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class IOException;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class $export ClientCommunicatorAdmin : public ::java::lang::Object {
	$class(ClientCommunicatorAdmin, 0, ::java::lang::Object)
public:
	ClientCommunicatorAdmin();
	void init$(int64_t period);
	virtual void checkConnection() {}
	virtual void doStart() {}
	virtual void doStop() {}
	virtual void gotIOException(::java::io::IOException* ioe);
	void restart(::java::io::IOException* ioe);
	virtual void terminate();
	static $volatile(int64_t) threadNo;
	::com::sun::jmx::remote::internal::ClientCommunicatorAdmin$Checker* checker = nullptr;
	int64_t period = 0;
	static const int32_t CONNECTED = 0;
	static const int32_t RE_CONNECTING = 1;
	static const int32_t FAILED = 2;
	static const int32_t TERMINATED = 3;
	int32_t state = 0;
	$ints* lock = nullptr;
	static ::com::sun::jmx::remote::util::ClassLogger* logger;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#pragma pop_macro("CONNECTED")
#pragma pop_macro("FAILED")
#pragma pop_macro("RE_CONNECTING")
#pragma pop_macro("TERMINATED")

#endif // _com_sun_jmx_remote_internal_ClientCommunicatorAdmin_h_