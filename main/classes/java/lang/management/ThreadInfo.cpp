#include <java/lang/management/ThreadInfo.h>

#include <java/lang/StackTraceElement.h>
#include <java/lang/Thread$State.h>
#include <java/lang/management/LockInfo.h>
#include <java/lang/management/MonitorInfo.h>
#include <java/lang/management/ThreadInfo$1.h>
#include <javax/management/openmbean/CompositeData.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <sun/management/ThreadInfoCompositeData.h>
#include <jcpp.h>

#undef EMPTY_MONITORS
#undef EMPTY_SYNCS
#undef MAX_FRAMES
#undef NO_STACK_TRACE

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $LockInfoArray = $Array<::java::lang::management::LockInfo>;
using $MonitorInfoArray = $Array<::java::lang::management::MonitorInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $Thread$State = ::java::lang::Thread$State;
using $LockInfo = ::java::lang::management::LockInfo;
using $MonitorInfo = ::java::lang::management::MonitorInfo;
using $ThreadInfo$1 = ::java::lang::management::ThreadInfo$1;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;
using $ThreadInfoCompositeData = ::sun::management::ThreadInfoCompositeData;

namespace java {
	namespace lang {
		namespace management {

$FieldInfo _ThreadInfo_FieldInfo_[] = {
	{"threadName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ThreadInfo, threadName)},
	{"threadId", "J", nullptr, $PRIVATE, $field(ThreadInfo, threadId)},
	{"blockedTime", "J", nullptr, $PRIVATE, $field(ThreadInfo, blockedTime)},
	{"blockedCount", "J", nullptr, $PRIVATE, $field(ThreadInfo, blockedCount)},
	{"waitedTime", "J", nullptr, $PRIVATE, $field(ThreadInfo, waitedTime)},
	{"waitedCount", "J", nullptr, $PRIVATE, $field(ThreadInfo, waitedCount)},
	{"lock", "Ljava/lang/management/LockInfo;", nullptr, $PRIVATE, $field(ThreadInfo, lock)},
	{"lockName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ThreadInfo, lockName)},
	{"lockOwnerId", "J", nullptr, $PRIVATE, $field(ThreadInfo, lockOwnerId)},
	{"lockOwnerName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ThreadInfo, lockOwnerName)},
	{"daemon", "Z", nullptr, $PRIVATE, $field(ThreadInfo, daemon)},
	{"inNative", "Z", nullptr, $PRIVATE, $field(ThreadInfo, inNative)},
	{"suspended", "Z", nullptr, $PRIVATE, $field(ThreadInfo, suspended)},
	{"threadState", "Ljava/lang/Thread$State;", nullptr, $PRIVATE, $field(ThreadInfo, threadState)},
	{"priority", "I", nullptr, $PRIVATE, $field(ThreadInfo, priority)},
	{"stackTrace", "[Ljava/lang/StackTraceElement;", nullptr, $PRIVATE, $field(ThreadInfo, stackTrace)},
	{"lockedMonitors", "[Ljava/lang/management/MonitorInfo;", nullptr, $PRIVATE, $field(ThreadInfo, lockedMonitors)},
	{"lockedSynchronizers", "[Ljava/lang/management/LockInfo;", nullptr, $PRIVATE, $field(ThreadInfo, lockedSynchronizers)},
	{"EMPTY_MONITORS", "[Ljava/lang/management/MonitorInfo;", nullptr, $PRIVATE | $STATIC, $staticField(ThreadInfo, EMPTY_MONITORS)},
	{"EMPTY_SYNCS", "[Ljava/lang/management/LockInfo;", nullptr, $PRIVATE | $STATIC, $staticField(ThreadInfo, EMPTY_SYNCS)},
	{"MAX_FRAMES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadInfo, MAX_FRAMES)},
	{"NO_STACK_TRACE", "[Ljava/lang/StackTraceElement;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfo, NO_STACK_TRACE)},
	{}
};

$MethodInfo _ThreadInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Thread;ILjava/lang/Object;Ljava/lang/Thread;JJJJ[Ljava/lang/StackTraceElement;)V", nullptr, $PRIVATE, $method(static_cast<void(ThreadInfo::*)($Thread*,int32_t,Object$*,$Thread*,int64_t,int64_t,int64_t,int64_t,$StackTraceElementArray*)>(&ThreadInfo::init$))},
	{"<init>", "(Ljava/lang/Thread;ILjava/lang/Object;Ljava/lang/Thread;JJJJ[Ljava/lang/StackTraceElement;[Ljava/lang/Object;[I[Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(ThreadInfo::*)($Thread*,int32_t,Object$*,$Thread*,int64_t,int64_t,int64_t,int64_t,$StackTraceElementArray*,$ObjectArray*,$ints*,$ObjectArray*)>(&ThreadInfo::init$))},
	{"<init>", "(Ljavax/management/openmbean/CompositeData;)V", nullptr, $PRIVATE, $method(static_cast<void(ThreadInfo::*)($CompositeData*)>(&ThreadInfo::init$))},
	{"from", "(Ljavax/management/openmbean/CompositeData;)Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ThreadInfo*(*)($CompositeData*)>(&ThreadInfo::from))},
	{"getBlockedCount", "()J", nullptr, $PUBLIC},
	{"getBlockedTime", "()J", nullptr, $PUBLIC},
	{"getLockInfo", "()Ljava/lang/management/LockInfo;", nullptr, $PUBLIC},
	{"getLockName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLockOwnerId", "()J", nullptr, $PUBLIC},
	{"getLockOwnerName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLockedMonitors", "()[Ljava/lang/management/MonitorInfo;", nullptr, $PUBLIC},
	{"getLockedSynchronizers", "()[Ljava/lang/management/LockInfo;", nullptr, $PUBLIC},
	{"getPriority", "()I", nullptr, $PUBLIC},
	{"getStackTrace", "()[Ljava/lang/StackTraceElement;", nullptr, $PUBLIC},
	{"getThreadId", "()J", nullptr, $PUBLIC},
	{"getThreadName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getThreadState", "()Ljava/lang/Thread$State;", nullptr, $PUBLIC},
	{"getWaitedCount", "()J", nullptr, $PUBLIC},
	{"getWaitedTime", "()J", nullptr, $PUBLIC},
	{"initialize", "(Ljava/lang/Thread;ILjava/lang/Object;Ljava/lang/Thread;JJJJ[Ljava/lang/StackTraceElement;[Ljava/lang/management/MonitorInfo;[Ljava/lang/management/LockInfo;)V", nullptr, $PRIVATE, $method(static_cast<void(ThreadInfo::*)($Thread*,int32_t,Object$*,$Thread*,int64_t,int64_t,int64_t,int64_t,$StackTraceElementArray*,$MonitorInfoArray*,$LockInfoArray*)>(&ThreadInfo::initialize))},
	{"isDaemon", "()Z", nullptr, $PUBLIC},
	{"isInNative", "()Z", nullptr, $PUBLIC},
	{"isSuspended", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ThreadInfo_InnerClassesInfo_[] = {
	{"java.lang.management.ThreadInfo$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ThreadInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.management.ThreadInfo",
	"java.lang.Object",
	nullptr,
	_ThreadInfo_FieldInfo_,
	_ThreadInfo_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.management.ThreadInfo$1"
};

$Object* allocate$ThreadInfo($Class* clazz) {
	return $of($alloc(ThreadInfo));
}

$MonitorInfoArray* ThreadInfo::EMPTY_MONITORS = nullptr;
$LockInfoArray* ThreadInfo::EMPTY_SYNCS = nullptr;
$StackTraceElementArray* ThreadInfo::NO_STACK_TRACE = nullptr;

void ThreadInfo::init$($Thread* t, int32_t state, Object$* lockObj, $Thread* lockOwner, int64_t blockedCount, int64_t blockedTime, int64_t waitedCount, int64_t waitedTime, $StackTraceElementArray* stackTrace) {
	initialize(t, state, lockObj, lockOwner, blockedCount, blockedTime, waitedCount, waitedTime, stackTrace, ThreadInfo::EMPTY_MONITORS, ThreadInfo::EMPTY_SYNCS);
}

void ThreadInfo::init$($Thread* t, int32_t state, Object$* lockObj, $Thread* lockOwner, int64_t blockedCount, int64_t blockedTime, int64_t waitedCount, int64_t waitedTime, $StackTraceElementArray* stackTrace, $ObjectArray* monitors, $ints* stackDepths, $ObjectArray* synchronizers) {
	$useLocalCurrentObjectStackCache();
	int32_t numMonitors = (monitors == nullptr ? 0 : $nc(monitors)->length);
	$var($MonitorInfoArray, lockedMonitors, nullptr);
	if (numMonitors == 0) {
		$assign(lockedMonitors, ThreadInfo::EMPTY_MONITORS);
	} else {
		$assign(lockedMonitors, $new($MonitorInfoArray, numMonitors));
		for (int32_t i = 0; i < numMonitors; ++i) {
			$var($Object0, lock, monitors->get(i));
			$var($String, className, $nc($of(lock))->getClass()->getName());
			int32_t identityHashCode = $System::identityHashCode(lock);
			int32_t depth = $nc(stackDepths)->get(i);
			$var($StackTraceElement, ste, depth >= 0 ? $nc(stackTrace)->get(depth) : ($StackTraceElement*)nullptr);
			lockedMonitors->set(i, $$new($MonitorInfo, className, identityHashCode, depth, ste));
		}
	}
	int32_t numSyncs = (synchronizers == nullptr ? 0 : $nc(synchronizers)->length);
	$var($LockInfoArray, lockedSynchronizers, nullptr);
	if (numSyncs == 0) {
		$assign(lockedSynchronizers, ThreadInfo::EMPTY_SYNCS);
	} else {
		$assign(lockedSynchronizers, $new($LockInfoArray, numSyncs));
		for (int32_t i = 0; i < numSyncs; ++i) {
			$var($Object0, lock, synchronizers->get(i));
			$var($String, className, $nc($of(lock))->getClass()->getName());
			int32_t identityHashCode = $System::identityHashCode(lock);
			lockedSynchronizers->set(i, $$new($LockInfo, className, identityHashCode));
		}
	}
	initialize(t, state, lockObj, lockOwner, blockedCount, blockedTime, waitedCount, waitedTime, stackTrace, lockedMonitors, lockedSynchronizers);
}

void ThreadInfo::initialize($Thread* t, int32_t state, Object$* lockObj, $Thread* lockOwner, int64_t blockedCount, int64_t blockedTime, int64_t waitedCount, int64_t waitedTime, $StackTraceElementArray* stackTrace, $MonitorInfoArray* lockedMonitors, $LockInfoArray* lockedSynchronizers) {
	$useLocalCurrentObjectStackCache();
	this->threadId = $nc(t)->getId();
	$set(this, threadName, t->getName());
	$set(this, threadState, $ManagementFactoryHelper::toThreadState(state));
	this->suspended = $ManagementFactoryHelper::isThreadSuspended(state);
	this->inNative = $ManagementFactoryHelper::isThreadRunningNative(state);
	this->blockedCount = blockedCount;
	this->blockedTime = blockedTime;
	this->waitedCount = waitedCount;
	this->waitedTime = waitedTime;
	this->daemon = t->isDaemon();
	this->priority = t->getPriority();
	if (lockObj == nullptr) {
		$set(this, lock, nullptr);
		$set(this, lockName, nullptr);
	} else {
		$set(this, lock, $new($LockInfo, lockObj));
		$var($String, var$0, $$str({$($nc(this->lock)->getClassName()), $$str(u'@')}));
		$set(this, lockName, $concat(var$0, $($Integer::toHexString($nc(this->lock)->getIdentityHashCode()))));
	}
	if (lockOwner == nullptr) {
		this->lockOwnerId = -1;
		$set(this, lockOwnerName, nullptr);
	} else {
		this->lockOwnerId = $nc(lockOwner)->getId();
		$set(this, lockOwnerName, lockOwner->getName());
	}
	if (stackTrace == nullptr) {
		$set(this, stackTrace, ThreadInfo::NO_STACK_TRACE);
	} else {
		$set(this, stackTrace, stackTrace);
	}
	$set(this, lockedMonitors, lockedMonitors);
	$set(this, lockedSynchronizers, lockedSynchronizers);
}

void ThreadInfo::init$($CompositeData* cd) {
	$var($ThreadInfoCompositeData, ticd, $ThreadInfoCompositeData::getInstance(cd));
	this->threadId = $nc(ticd)->threadId();
	$set(this, threadName, ticd->threadName());
	this->blockedTime = ticd->blockedTime();
	this->blockedCount = ticd->blockedCount();
	this->waitedTime = ticd->waitedTime();
	this->waitedCount = ticd->waitedCount();
	$set(this, lockName, ticd->lockName());
	this->lockOwnerId = ticd->lockOwnerId();
	$set(this, lockOwnerName, ticd->lockOwnerName());
	$set(this, threadState, ticd->threadState());
	this->suspended = ticd->suspended();
	this->inNative = ticd->inNative();
	$set(this, stackTrace, ticd->stackTrace());
	$set(this, lock, ticd->lockInfo());
	$set(this, lockedMonitors, ticd->lockedMonitors());
	$set(this, lockedSynchronizers, ticd->lockedSynchronizers());
	this->daemon = ticd->isDaemon();
	this->priority = ticd->getPriority();
}

int64_t ThreadInfo::getThreadId() {
	return this->threadId;
}

$String* ThreadInfo::getThreadName() {
	return this->threadName;
}

$Thread$State* ThreadInfo::getThreadState() {
	return this->threadState;
}

int64_t ThreadInfo::getBlockedTime() {
	return this->blockedTime;
}

int64_t ThreadInfo::getBlockedCount() {
	return this->blockedCount;
}

int64_t ThreadInfo::getWaitedTime() {
	return this->waitedTime;
}

int64_t ThreadInfo::getWaitedCount() {
	return this->waitedCount;
}

$LockInfo* ThreadInfo::getLockInfo() {
	return this->lock;
}

$String* ThreadInfo::getLockName() {
	return this->lockName;
}

int64_t ThreadInfo::getLockOwnerId() {
	return this->lockOwnerId;
}

$String* ThreadInfo::getLockOwnerName() {
	return this->lockOwnerName;
}

$StackTraceElementArray* ThreadInfo::getStackTrace() {
	return $cast($StackTraceElementArray, $nc(this->stackTrace)->clone());
}

bool ThreadInfo::isSuspended() {
	return this->suspended;
}

bool ThreadInfo::isInNative() {
	return this->inNative;
}

bool ThreadInfo::isDaemon() {
	return this->daemon;
}

int32_t ThreadInfo::getPriority() {
	return this->priority;
}

$String* ThreadInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $$str({"\""_s, $(getThreadName()), "\""_s, (this->daemon ? " daemon"_s : ""_s), " prio="_s, $$str(this->priority), " Id="_s}));
	$var($String, var$1, $$concat(var$2, $$str(getThreadId())));
	$var($String, var$0, $$concat(var$1, " "));
	$var($StringBuilder, sb, $new($StringBuilder, $$concat(var$0, $(getThreadState()))));
	if (getLockName() != nullptr) {
		sb->append($$str({" on "_s, $(getLockName())}));
	}
	if (getLockOwnerName() != nullptr) {
		$var($String, var$3, $$str({" owned by \""_s, $(getLockOwnerName()), "\" Id="_s}));
		sb->append($$concat(var$3, $$str(getLockOwnerId())));
	}
	if (isSuspended()) {
		sb->append(" (suspended)"_s);
	}
	if (isInNative()) {
		sb->append(" (in native)"_s);
	}
	sb->append(u'\n');
	int32_t i = 0;
	for (; i < $nc(this->stackTrace)->length && i < ThreadInfo::MAX_FRAMES; ++i) {
		$var($StackTraceElement, ste, $nc(this->stackTrace)->get(i));
		sb->append($$str({"\tat "_s, $($nc(ste)->toString())}));
		sb->append(u'\n');
		if (i == 0 && getLockInfo() != nullptr) {
			$Thread$State* ts = getThreadState();
			$init($ThreadInfo$1);
			switch ($nc($ThreadInfo$1::$SwitchMap$java$lang$Thread$State)->get($nc((ts))->ordinal())) {
			case 1:
				{
					sb->append($$str({"\t-  blocked on "_s, $(getLockInfo())}));
					sb->append(u'\n');
					break;
				}
			case 2:
				{
					sb->append($$str({"\t-  waiting on "_s, $(getLockInfo())}));
					sb->append(u'\n');
					break;
				}
			case 3:
				{
					sb->append($$str({"\t-  waiting on "_s, $(getLockInfo())}));
					sb->append(u'\n');
					break;
				}
			default:
				{}
			}
		}
		{
			$var($MonitorInfoArray, arr$, this->lockedMonitors);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($MonitorInfo, mi, arr$->get(i$));
				{
					if ($nc(mi)->getLockedStackDepth() == i) {
						sb->append($$str({"\t-  locked "_s, mi}));
						sb->append(u'\n');
					}
				}
			}
		}
	}
	if (i < $nc(this->stackTrace)->length) {
		sb->append("\t..."_s);
		sb->append(u'\n');
	}
	$var($LockInfoArray, locks, getLockedSynchronizers());
	if ($nc(locks)->length > 0) {
		sb->append($$str({"\n\tNumber of locked synchronizers = "_s, $$str(locks->length)}));
		sb->append(u'\n');
		{
			$var($LockInfoArray, arr$, locks);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($LockInfo, li, arr$->get(i$));
				{
					sb->append($$str({"\t- "_s, li}));
					sb->append(u'\n');
				}
			}
		}
	}
	sb->append(u'\n');
	return sb->toString();
}

ThreadInfo* ThreadInfo::from($CompositeData* cd) {
	$init(ThreadInfo);
	if (cd == nullptr) {
		return nullptr;
	}
	if ($instanceOf($ThreadInfoCompositeData, cd)) {
		return $nc(($cast($ThreadInfoCompositeData, cd)))->getThreadInfo();
	} else {
		return $new(ThreadInfo, cd);
	}
}

$MonitorInfoArray* ThreadInfo::getLockedMonitors() {
	return $cast($MonitorInfoArray, $nc(this->lockedMonitors)->clone());
}

$LockInfoArray* ThreadInfo::getLockedSynchronizers() {
	return $cast($LockInfoArray, $nc(this->lockedSynchronizers)->clone());
}

void clinit$ThreadInfo($Class* class$) {
	$assignStatic(ThreadInfo::EMPTY_MONITORS, $new($MonitorInfoArray, 0));
	$assignStatic(ThreadInfo::EMPTY_SYNCS, $new($LockInfoArray, 0));
	$assignStatic(ThreadInfo::NO_STACK_TRACE, $new($StackTraceElementArray, 0));
}

ThreadInfo::ThreadInfo() {
}

$Class* ThreadInfo::load$($String* name, bool initialize) {
	$loadClass(ThreadInfo, name, initialize, &_ThreadInfo_ClassInfo_, clinit$ThreadInfo, allocate$ThreadInfo);
	return class$;
}

$Class* ThreadInfo::class$ = nullptr;

		} // management
	} // lang
} // java