#ifndef _sun_management_ThreadImpl_h_
#define _sun_management_ThreadImpl_h_
//$ class sun.management.ThreadImpl
//$ extends java.lang.management.ThreadMXBean

#include <java/lang/Array.h>
#include <java/lang/management/ThreadMXBean.h>

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace lang {
		namespace management {
			class ThreadInfo;
		}
	}
}
namespace javax {
	namespace management {
		class ObjectName;
	}
}
namespace sun {
	namespace management {
		class VMManagement;
	}
}

namespace sun {
	namespace management {

class $import ThreadImpl : public ::java::lang::management::ThreadMXBean {
	$class(ThreadImpl, $NO_CLASS_INIT, ::java::lang::management::ThreadMXBean)
public:
	ThreadImpl();
	void init$(::sun::management::VMManagement* vm);
	virtual $Array<::java::lang::management::ThreadInfo>* dumpAllThreads(bool lockedMonitors, bool lockedSynchronizers) override;
	virtual $Array<::java::lang::management::ThreadInfo>* dumpAllThreads(bool lockedMonitors, bool lockedSynchronizers, int32_t maxDepth) override;
	static $Array<::java::lang::management::ThreadInfo>* dumpThreads0($longs* ids, bool lockedMonitors, bool lockedSynchronizers, int32_t maxDepth);
	void ensureThreadAllocatedMemorySupported();
	virtual $longs* findDeadlockedThreads() override;
	static $Array<::java::lang::Thread>* findDeadlockedThreads0();
	virtual $longs* findMonitorDeadlockedThreads() override;
	static $Array<::java::lang::Thread>* findMonitorDeadlockedThreads0();
	virtual $longs* getAllThreadIds() override;
	virtual int64_t getCurrentThreadAllocatedBytes();
	virtual int64_t getCurrentThreadCpuTime() override;
	virtual int64_t getCurrentThreadUserTime() override;
	virtual int32_t getDaemonThreadCount() override;
	virtual ::javax::management::ObjectName* getObjectName() override;
	virtual int32_t getPeakThreadCount() override;
	virtual int64_t getThreadAllocatedBytes(int64_t id);
	virtual $longs* getThreadAllocatedBytes($longs* ids);
	static int64_t getThreadAllocatedMemory0(int64_t id);
	static void getThreadAllocatedMemory1($longs* ids, $longs* result);
	virtual int32_t getThreadCount() override;
	virtual int64_t getThreadCpuTime(int64_t id) override;
	virtual $longs* getThreadCpuTime($longs* ids);
	virtual ::java::lang::management::ThreadInfo* getThreadInfo(int64_t id) override;
	virtual ::java::lang::management::ThreadInfo* getThreadInfo(int64_t id, int32_t maxDepth) override;
	virtual $Array<::java::lang::management::ThreadInfo>* getThreadInfo($longs* ids) override;
	virtual $Array<::java::lang::management::ThreadInfo>* getThreadInfo($longs* ids, int32_t maxDepth) override;
	virtual $Array<::java::lang::management::ThreadInfo>* getThreadInfo($longs* ids, bool lockedMonitors, bool lockedSynchronizers) override;
	virtual $Array<::java::lang::management::ThreadInfo>* getThreadInfo($longs* ids, bool lockedMonitors, bool lockedSynchronizers, int32_t maxDepth) override;
	static void getThreadInfo1($longs* ids, int32_t maxDepth, $Array<::java::lang::management::ThreadInfo>* result);
	static int64_t getThreadTotalCpuTime0(int64_t id);
	static void getThreadTotalCpuTime1($longs* ids, $longs* result);
	static int64_t getThreadUserCpuTime0(int64_t id);
	static void getThreadUserCpuTime1($longs* ids, $longs* result);
	virtual int64_t getThreadUserTime(int64_t id) override;
	virtual $longs* getThreadUserTime($longs* ids);
	static $Array<::java::lang::Thread>* getThreads();
	virtual int64_t getTotalStartedThreadCount() override;
	virtual bool isCurrentThreadCpuTimeSupported() override;
	virtual bool isObjectMonitorUsageSupported() override;
	virtual bool isSynchronizerUsageSupported() override;
	virtual bool isThreadAllocatedMemoryEnabled();
	virtual bool isThreadAllocatedMemorySupported();
	virtual bool isThreadContentionMonitoringEnabled() override;
	virtual bool isThreadContentionMonitoringSupported() override;
	virtual bool isThreadCpuTimeEnabled() override;
	virtual bool isThreadCpuTimeSupported() override;
	static void resetContentionTimes0(int64_t tid);
	virtual void resetPeakThreadCount() override;
	static void resetPeakThreadCount0();
	virtual void setThreadAllocatedMemoryEnabled(bool enable);
	static void setThreadAllocatedMemoryEnabled0(bool enable);
	virtual void setThreadContentionMonitoringEnabled(bool enable) override;
	static void setThreadContentionMonitoringEnabled0(bool enable);
	virtual void setThreadCpuTimeEnabled(bool enable) override;
	static void setThreadCpuTimeEnabled0(bool enable);
	bool verifyCurrentThreadCpuTime();
	void verifyDumpThreads(bool lockedMonitors, bool lockedSynchronizers);
	bool verifyThreadAllocatedMemory(int64_t id);
	bool verifyThreadAllocatedMemory($longs* ids);
	bool verifyThreadCpuTime($longs* ids);
	void verifyThreadId(int64_t id);
	void verifyThreadIds($longs* ids);
	::sun::management::VMManagement* jvm = nullptr;
	bool contentionMonitoringEnabled = false;
	bool cpuTimeEnabled = false;
	bool allocatedMemoryEnabled = false;
};

	} // management
} // sun

#endif // _sun_management_ThreadImpl_h_