#include <java/lang/management/ThreadMXBean.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/management/ThreadInfo.h>
#include <jcpp.h>

using $ThreadInfoArray = $Array<::java::lang::management::ThreadInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $PlatformManagedObject = ::java::lang::management::PlatformManagedObject;
using $ThreadInfo = ::java::lang::management::ThreadInfo;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _ThreadMXBean_MethodInfo_[] = {
	{"dumpAllThreads", "(ZZ)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"dumpAllThreads", "(ZZI)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC},
	{"findDeadlockedThreads", "()[J", nullptr, $PUBLIC | $ABSTRACT},
	{"findMonitorDeadlockedThreads", "()[J", nullptr, $PUBLIC | $ABSTRACT},
	{"getAllThreadIds", "()[J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCurrentThreadCpuTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCurrentThreadUserTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getDaemonThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPeakThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getThreadCpuTime", "(J)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getThreadInfo", "(J)Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getThreadInfo", "([J)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getThreadInfo", "(JI)Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getThreadInfo", "([JI)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getThreadInfo", "([JZZ)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getThreadInfo", "([JZZI)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC},
	{"getThreadUserTime", "(J)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getTotalStartedThreadCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"isCurrentThreadCpuTimeSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isObjectMonitorUsageSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSynchronizerUsageSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isThreadContentionMonitoringEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isThreadContentionMonitoringSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isThreadCpuTimeEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isThreadCpuTimeSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"resetPeakThreadCount", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setThreadContentionMonitoringEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setThreadCpuTimeEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ThreadMXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.ThreadMXBean",
	nullptr,
	"java.lang.management.PlatformManagedObject",
	nullptr,
	_ThreadMXBean_MethodInfo_
};

$Object* allocate$ThreadMXBean($Class* clazz) {
	return $of($alloc(ThreadMXBean));
}

$ThreadInfoArray* ThreadMXBean::getThreadInfo($longs* ids, bool lockedMonitors, bool lockedSynchronizers, int32_t maxDepth) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$ThreadInfoArray* ThreadMXBean::dumpAllThreads(bool lockedMonitors, bool lockedSynchronizers, int32_t maxDepth) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Class* ThreadMXBean::load$($String* name, bool initialize) {
	$loadClass(ThreadMXBean, name, initialize, &_ThreadMXBean_ClassInfo_, allocate$ThreadMXBean);
	return class$;
}

$Class* ThreadMXBean::class$ = nullptr;

		} // management
	} // lang
} // java