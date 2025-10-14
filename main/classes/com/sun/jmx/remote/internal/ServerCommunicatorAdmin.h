#ifndef _com_sun_jmx_remote_internal_ServerCommunicatorAdmin_h_
#define _com_sun_jmx_remote_internal_ServerCommunicatorAdmin_h_
//$ class com.sun.jmx.remote.internal.ServerCommunicatorAdmin
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class $export ServerCommunicatorAdmin : public ::java::lang::Object {
	$class(ServerCommunicatorAdmin, 0, ::java::lang::Object)
public:
	ServerCommunicatorAdmin();
	void init$(int64_t timeout);
	virtual void doStop() {}
	void logtime($String* desc, int64_t time);
	virtual bool reqIncoming();
	virtual bool rspOutgoing();
	virtual void terminate();
	int64_t timestamp = 0;
	$ints* lock = nullptr;
	int32_t currentJobs = 0;
	int64_t timeout = 0;
	bool terminated = false;
	static ::com::sun::jmx::remote::util::ClassLogger* logger;
	static ::com::sun::jmx::remote::util::ClassLogger* timelogger;
};

				} // internal
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_internal_ServerCommunicatorAdmin_h_