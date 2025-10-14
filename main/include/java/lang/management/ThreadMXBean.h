#ifndef _java_lang_management_ThreadMXBean_h_
#define _java_lang_management_ThreadMXBean_h_
//$ interface java.lang.management.ThreadMXBean
//$ extends java.lang.management.PlatformManagedObject

#include <java/lang/Array.h>
#include <java/lang/management/PlatformManagedObject.h>

namespace java {
	namespace lang {
		namespace management {
			class ThreadInfo;
		}
	}
}

namespace java {
	namespace lang {
		namespace management {

class $import ThreadMXBean : public ::java::lang::management::PlatformManagedObject {
	$interface(ThreadMXBean, $NO_CLASS_INIT, ::java::lang::management::PlatformManagedObject)
public:
	virtual $Array<::java::lang::management::ThreadInfo>* dumpAllThreads(bool lockedMonitors, bool lockedSynchronizers) {return nullptr;}
	virtual $Array<::java::lang::management::ThreadInfo>* dumpAllThreads(bool lockedMonitors, bool lockedSynchronizers, int32_t maxDepth);
	virtual $longs* findDeadlockedThreads() {return nullptr;}
	virtual $longs* findMonitorDeadlockedThreads() {return nullptr;}
	virtual $longs* getAllThreadIds() {return nullptr;}
	virtual int64_t getCurrentThreadCpuTime() {return 0;}
	virtual int64_t getCurrentThreadUserTime() {return 0;}
	virtual int32_t getDaemonThreadCount() {return 0;}
	virtual int32_t getPeakThreadCount() {return 0;}
	virtual int32_t getThreadCount() {return 0;}
	virtual int64_t getThreadCpuTime(int64_t id) {return 0;}
	virtual ::java::lang::management::ThreadInfo* getThreadInfo(int64_t id) {return nullptr;}
	virtual $Array<::java::lang::management::ThreadInfo>* getThreadInfo($longs* ids) {return nullptr;}
	virtual ::java::lang::management::ThreadInfo* getThreadInfo(int64_t id, int32_t maxDepth) {return nullptr;}
	virtual $Array<::java::lang::management::ThreadInfo>* getThreadInfo($longs* ids, int32_t maxDepth) {return nullptr;}
	virtual $Array<::java::lang::management::ThreadInfo>* getThreadInfo($longs* ids, bool lockedMonitors, bool lockedSynchronizers) {return nullptr;}
	virtual $Array<::java::lang::management::ThreadInfo>* getThreadInfo($longs* ids, bool lockedMonitors, bool lockedSynchronizers, int32_t maxDepth);
	virtual int64_t getThreadUserTime(int64_t id) {return 0;}
	virtual int64_t getTotalStartedThreadCount() {return 0;}
	virtual bool isCurrentThreadCpuTimeSupported() {return false;}
	virtual bool isObjectMonitorUsageSupported() {return false;}
	virtual bool isSynchronizerUsageSupported() {return false;}
	virtual bool isThreadContentionMonitoringEnabled() {return false;}
	virtual bool isThreadContentionMonitoringSupported() {return false;}
	virtual bool isThreadCpuTimeEnabled() {return false;}
	virtual bool isThreadCpuTimeSupported() {return false;}
	virtual void resetPeakThreadCount() {}
	virtual void setThreadContentionMonitoringEnabled(bool enable) {}
	virtual void setThreadCpuTimeEnabled(bool enable) {}
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_ThreadMXBean_h_