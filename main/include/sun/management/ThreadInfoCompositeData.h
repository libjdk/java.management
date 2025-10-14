#ifndef _sun_management_ThreadInfoCompositeData_h_
#define _sun_management_ThreadInfoCompositeData_h_
//$ class sun.management.ThreadInfoCompositeData
//$ extends sun.management.LazyCompositeData

#include <java/lang/Array.h>
#include <sun/management/LazyCompositeData.h>

#pragma push_macro("BLOCKED_COUNT")
#undef BLOCKED_COUNT
#pragma push_macro("BLOCKED_TIME")
#undef BLOCKED_TIME
#pragma push_macro("DAEMON")
#undef DAEMON
#pragma push_macro("IN_NATIVE")
#undef IN_NATIVE
#pragma push_macro("LOCKED_MONITORS")
#undef LOCKED_MONITORS
#pragma push_macro("LOCKED_SYNCS")
#undef LOCKED_SYNCS
#pragma push_macro("LOCK_INFO")
#undef LOCK_INFO
#pragma push_macro("LOCK_NAME")
#undef LOCK_NAME
#pragma push_macro("LOCK_OWNER_ID")
#undef LOCK_OWNER_ID
#pragma push_macro("LOCK_OWNER_NAME")
#undef LOCK_OWNER_NAME
#pragma push_macro("PRIORITY")
#undef PRIORITY
#pragma push_macro("RUNTIME_VERSION")
#undef RUNTIME_VERSION
#pragma push_macro("STACK_TRACE")
#undef STACK_TRACE
#pragma push_macro("SUSPENDED")
#undef SUSPENDED
#pragma push_macro("THREAD_ID")
#undef THREAD_ID
#pragma push_macro("THREAD_NAME")
#undef THREAD_NAME
#pragma push_macro("THREAD_STATE")
#undef THREAD_STATE
#pragma push_macro("V5_ATTRIBUTES")
#undef V5_ATTRIBUTES
#pragma push_macro("V6_ATTRIBUTES")
#undef V6_ATTRIBUTES
#pragma push_macro("V9_ATTRIBUTES")
#undef V9_ATTRIBUTES
#pragma push_macro("WAITED_COUNT")
#undef WAITED_COUNT
#pragma push_macro("WAITED_TIME")
#undef WAITED_TIME

namespace java {
	namespace lang {
		class StackTraceElement;
		class Thread$State;
	}
}
namespace java {
	namespace lang {
		namespace management {
			class LockInfo;
			class MonitorInfo;
			class ThreadInfo;
		}
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class CompositeData;
		}
	}
}

namespace sun {
	namespace management {

class $import ThreadInfoCompositeData : public ::sun::management::LazyCompositeData {
	$class(ThreadInfoCompositeData, 0, ::sun::management::LazyCompositeData)
public:
	ThreadInfoCompositeData();
	void init$(::java::lang::management::ThreadInfo* ti);
	void init$(::javax::management::openmbean::CompositeData* cd);
	virtual int64_t blockedCount();
	virtual int64_t blockedTime();
	virtual ::javax::management::openmbean::CompositeData* getCompositeData() override;
	static ::sun::management::ThreadInfoCompositeData* getInstance(::javax::management::openmbean::CompositeData* cd);
	virtual int32_t getPriority();
	virtual ::java::lang::management::ThreadInfo* getThreadInfo();
	virtual bool inNative();
	virtual bool isDaemon();
	virtual ::java::lang::management::LockInfo* lockInfo();
	virtual $String* lockName();
	virtual int64_t lockOwnerId();
	virtual $String* lockOwnerName();
	virtual $Array<::java::lang::management::MonitorInfo>* lockedMonitors();
	virtual $Array<::java::lang::management::LockInfo>* lockedSynchronizers();
	virtual $Array<::java::lang::StackTraceElement>* stackTrace();
	virtual bool suspended();
	virtual int64_t threadId();
	virtual $String* threadName();
	virtual ::java::lang::Thread$State* threadState();
	static ::javax::management::openmbean::CompositeData* toCompositeData(::java::lang::management::ThreadInfo* ti);
	static void validateCompositeData(::javax::management::openmbean::CompositeData* cd);
	virtual int64_t waitedCount();
	virtual int64_t waitedTime();
	::java::lang::management::ThreadInfo* threadInfo = nullptr;
	::javax::management::openmbean::CompositeData* cdata = nullptr;
	static $String* THREAD_ID;
	static $String* THREAD_NAME;
	static $String* THREAD_STATE;
	static $String* BLOCKED_TIME;
	static $String* BLOCKED_COUNT;
	static $String* WAITED_TIME;
	static $String* WAITED_COUNT;
	static $String* LOCK_INFO;
	static $String* LOCK_NAME;
	static $String* LOCK_OWNER_ID;
	static $String* LOCK_OWNER_NAME;
	static $String* STACK_TRACE;
	static $String* SUSPENDED;
	static $String* IN_NATIVE;
	static $String* DAEMON;
	static $String* PRIORITY;
	static $String* LOCKED_MONITORS;
	static $String* LOCKED_SYNCS;
	static $StringArray* V5_ATTRIBUTES;
	static $StringArray* V6_ATTRIBUTES;
	static $StringArray* V9_ATTRIBUTES;
	static int32_t RUNTIME_VERSION;
	static const int64_t serialVersionUID = (int64_t)0x22333B39785437D7;
};

	} // management
} // sun

#pragma pop_macro("BLOCKED_COUNT")
#pragma pop_macro("BLOCKED_TIME")
#pragma pop_macro("DAEMON")
#pragma pop_macro("IN_NATIVE")
#pragma pop_macro("LOCKED_MONITORS")
#pragma pop_macro("LOCKED_SYNCS")
#pragma pop_macro("LOCK_INFO")
#pragma pop_macro("LOCK_NAME")
#pragma pop_macro("LOCK_OWNER_ID")
#pragma pop_macro("LOCK_OWNER_NAME")
#pragma pop_macro("PRIORITY")
#pragma pop_macro("RUNTIME_VERSION")
#pragma pop_macro("STACK_TRACE")
#pragma pop_macro("SUSPENDED")
#pragma pop_macro("THREAD_ID")
#pragma pop_macro("THREAD_NAME")
#pragma pop_macro("THREAD_STATE")
#pragma pop_macro("V5_ATTRIBUTES")
#pragma pop_macro("V6_ATTRIBUTES")
#pragma pop_macro("V9_ATTRIBUTES")
#pragma pop_macro("WAITED_COUNT")
#pragma pop_macro("WAITED_TIME")

#endif // _sun_management_ThreadInfoCompositeData_h_