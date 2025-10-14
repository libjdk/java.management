#ifndef _java_lang_management_ThreadInfo_h_
#define _java_lang_management_ThreadInfo_h_
//$ class java.lang.management.ThreadInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY_MONITORS")
#undef EMPTY_MONITORS
#pragma push_macro("EMPTY_SYNCS")
#undef EMPTY_SYNCS
#pragma push_macro("MAX_FRAMES")
#undef MAX_FRAMES
#pragma push_macro("NO_STACK_TRACE")
#undef NO_STACK_TRACE

namespace java {
	namespace lang {
		class StackTraceElement;
		class Thread;
		class Thread$State;
	}
}
namespace java {
	namespace lang {
		namespace management {
			class LockInfo;
			class MonitorInfo;
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

namespace java {
	namespace lang {
		namespace management {

class $export ThreadInfo : public ::java::lang::Object {
	$class(ThreadInfo, 0, ::java::lang::Object)
public:
	ThreadInfo();
	void init$($Thread* t, int32_t state, Object$* lockObj, $Thread* lockOwner, int64_t blockedCount, int64_t blockedTime, int64_t waitedCount, int64_t waitedTime, $Array<::java::lang::StackTraceElement>* stackTrace);
	void init$($Thread* t, int32_t state, Object$* lockObj, $Thread* lockOwner, int64_t blockedCount, int64_t blockedTime, int64_t waitedCount, int64_t waitedTime, $Array<::java::lang::StackTraceElement>* stackTrace, $ObjectArray* monitors, $ints* stackDepths, $ObjectArray* synchronizers);
	void init$(::javax::management::openmbean::CompositeData* cd);
	static ::java::lang::management::ThreadInfo* from(::javax::management::openmbean::CompositeData* cd);
	virtual int64_t getBlockedCount();
	virtual int64_t getBlockedTime();
	virtual ::java::lang::management::LockInfo* getLockInfo();
	virtual $String* getLockName();
	virtual int64_t getLockOwnerId();
	virtual $String* getLockOwnerName();
	virtual $Array<::java::lang::management::MonitorInfo>* getLockedMonitors();
	virtual $Array<::java::lang::management::LockInfo>* getLockedSynchronizers();
	virtual int32_t getPriority();
	virtual $Array<::java::lang::StackTraceElement>* getStackTrace();
	virtual int64_t getThreadId();
	virtual $String* getThreadName();
	virtual ::java::lang::Thread$State* getThreadState();
	virtual int64_t getWaitedCount();
	virtual int64_t getWaitedTime();
	void initialize($Thread* t, int32_t state, Object$* lockObj, $Thread* lockOwner, int64_t blockedCount, int64_t blockedTime, int64_t waitedCount, int64_t waitedTime, $Array<::java::lang::StackTraceElement>* stackTrace, $Array<::java::lang::management::MonitorInfo>* lockedMonitors, $Array<::java::lang::management::LockInfo>* lockedSynchronizers);
	virtual bool isDaemon();
	virtual bool isInNative();
	virtual bool isSuspended();
	virtual $String* toString() override;
	$String* threadName = nullptr;
	int64_t threadId = 0;
	int64_t blockedTime = 0;
	int64_t blockedCount = 0;
	int64_t waitedTime = 0;
	int64_t waitedCount = 0;
	::java::lang::management::LockInfo* lock = nullptr;
	$String* lockName = nullptr;
	int64_t lockOwnerId = 0;
	$String* lockOwnerName = nullptr;
	bool daemon = false;
	bool inNative = false;
	bool suspended = false;
	::java::lang::Thread$State* threadState = nullptr;
	int32_t priority = 0;
	$Array<::java::lang::StackTraceElement>* stackTrace = nullptr;
	$Array<::java::lang::management::MonitorInfo>* lockedMonitors = nullptr;
	$Array<::java::lang::management::LockInfo>* lockedSynchronizers = nullptr;
	static $Array<::java::lang::management::MonitorInfo>* EMPTY_MONITORS;
	static $Array<::java::lang::management::LockInfo>* EMPTY_SYNCS;
	static const int32_t MAX_FRAMES = 8;
	static $Array<::java::lang::StackTraceElement>* NO_STACK_TRACE;
};

		} // management
	} // lang
} // java

#pragma pop_macro("EMPTY_MONITORS")
#pragma pop_macro("EMPTY_SYNCS")
#pragma pop_macro("MAX_FRAMES")
#pragma pop_macro("NO_STACK_TRACE")

#endif // _java_lang_management_ThreadInfo_h_