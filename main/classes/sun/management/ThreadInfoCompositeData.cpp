#include <sun/management/ThreadInfoCompositeData.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runtime$Version.h>
#include <java/lang/Runtime.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/Thread$State.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/management/LockInfo.h>
#include <java/lang/management/MonitorInfo.h>
#include <java/lang/management/ThreadInfo.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeDataSupport.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <sun/management/LazyCompositeData.h>
#include <sun/management/LockInfoCompositeData.h>
#include <sun/management/MonitorInfoCompositeData.h>
#include <sun/management/StackTraceElementCompositeData.h>
#include <sun/management/ThreadInfoCompositeData$ThreadInfoCompositeTypes.h>
#include <jcpp.h>

#undef BLOCKED_COUNT
#undef BLOCKED_TIME
#undef DAEMON
#undef IN_NATIVE
#undef LOCKED_MONITORS
#undef LOCKED_SYNCS
#undef LOCK_INFO
#undef LOCK_NAME
#undef LOCK_OWNER_ID
#undef LOCK_OWNER_NAME
#undef NORM_PRIORITY
#undef PRIORITY
#undef RUNTIME_VERSION
#undef STACK_TRACE
#undef SUSPENDED
#undef THREAD_ID
#undef THREAD_NAME
#undef THREAD_STATE
#undef V5_ATTRIBUTES
#undef V6_ATTRIBUTES
#undef V9_ATTRIBUTES
#undef WAITED_COUNT
#undef WAITED_TIME

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $LockInfoArray = $Array<::java::lang::management::LockInfo>;
using $MonitorInfoArray = $Array<::java::lang::management::MonitorInfo>;
using $CompositeDataArray = $Array<::javax::management::openmbean::CompositeData>;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runtime = ::java::lang::Runtime;
using $Runtime$Version = ::java::lang::Runtime$Version;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $Thread$State = ::java::lang::Thread$State;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $LockInfo = ::java::lang::management::LockInfo;
using $MonitorInfo = ::java::lang::management::MonitorInfo;
using $ThreadInfo = ::java::lang::management::ThreadInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeDataSupport = ::javax::management::openmbean::CompositeDataSupport;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $LazyCompositeData = ::sun::management::LazyCompositeData;
using $LockInfoCompositeData = ::sun::management::LockInfoCompositeData;
using $MonitorInfoCompositeData = ::sun::management::MonitorInfoCompositeData;
using $StackTraceElementCompositeData = ::sun::management::StackTraceElementCompositeData;
using $ThreadInfoCompositeData$ThreadInfoCompositeTypes = ::sun::management::ThreadInfoCompositeData$ThreadInfoCompositeTypes;

namespace sun {
	namespace management {

class ThreadInfoCompositeData$$Lambda$containsKey : public $Predicate {
	$class(ThreadInfoCompositeData$$Lambda$containsKey, $NO_CLASS_INIT, $Predicate)
public:
	void init$($CompositeType* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* itemName) override {
		 return $nc(inst$)->containsKey($cast($String, itemName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ThreadInfoCompositeData$$Lambda$containsKey>());
	}
	$CompositeType* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ThreadInfoCompositeData$$Lambda$containsKey::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ThreadInfoCompositeData$$Lambda$containsKey, inst$)},
	{}
};
$MethodInfo ThreadInfoCompositeData$$Lambda$containsKey::methodInfos[3] = {
	{"<init>", "(Ljavax/management/openmbean/CompositeType;)V", nullptr, $PUBLIC, $method(static_cast<void(ThreadInfoCompositeData$$Lambda$containsKey::*)($CompositeType*)>(&ThreadInfoCompositeData$$Lambda$containsKey::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ThreadInfoCompositeData$$Lambda$containsKey::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.management.ThreadInfoCompositeData$$Lambda$containsKey",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* ThreadInfoCompositeData$$Lambda$containsKey::load$($String* name, bool initialize) {
	$loadClass(ThreadInfoCompositeData$$Lambda$containsKey, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ThreadInfoCompositeData$$Lambda$containsKey::class$ = nullptr;

$FieldInfo _ThreadInfoCompositeData_FieldInfo_[] = {
	{"threadInfo", "Ljava/lang/management/ThreadInfo;", nullptr, $PRIVATE | $FINAL, $field(ThreadInfoCompositeData, threadInfo)},
	{"cdata", "Ljavax/management/openmbean/CompositeData;", nullptr, $PRIVATE | $FINAL, $field(ThreadInfoCompositeData, cdata)},
	{"THREAD_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, THREAD_ID)},
	{"THREAD_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, THREAD_NAME)},
	{"THREAD_STATE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, THREAD_STATE)},
	{"BLOCKED_TIME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, BLOCKED_TIME)},
	{"BLOCKED_COUNT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, BLOCKED_COUNT)},
	{"WAITED_TIME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, WAITED_TIME)},
	{"WAITED_COUNT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, WAITED_COUNT)},
	{"LOCK_INFO", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, LOCK_INFO)},
	{"LOCK_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, LOCK_NAME)},
	{"LOCK_OWNER_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, LOCK_OWNER_ID)},
	{"LOCK_OWNER_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, LOCK_OWNER_NAME)},
	{"STACK_TRACE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, STACK_TRACE)},
	{"SUSPENDED", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, SUSPENDED)},
	{"IN_NATIVE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, IN_NATIVE)},
	{"DAEMON", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, DAEMON)},
	{"PRIORITY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, PRIORITY)},
	{"LOCKED_MONITORS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, LOCKED_MONITORS)},
	{"LOCKED_SYNCS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, LOCKED_SYNCS)},
	{"V5_ATTRIBUTES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, V5_ATTRIBUTES)},
	{"V6_ATTRIBUTES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, V6_ATTRIBUTES)},
	{"V9_ATTRIBUTES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, V9_ATTRIBUTES)},
	{"RUNTIME_VERSION", "I", nullptr, $STATIC | $FINAL, $staticField(ThreadInfoCompositeData, RUNTIME_VERSION)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadInfoCompositeData, serialVersionUID)},
	{}
};

$MethodInfo _ThreadInfoCompositeData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/management/ThreadInfo;)V", nullptr, $PRIVATE, $method(static_cast<void(ThreadInfoCompositeData::*)($ThreadInfo*)>(&ThreadInfoCompositeData::init$))},
	{"<init>", "(Ljavax/management/openmbean/CompositeData;)V", nullptr, $PRIVATE, $method(static_cast<void(ThreadInfoCompositeData::*)($CompositeData*)>(&ThreadInfoCompositeData::init$))},
	{"blockedCount", "()J", nullptr, $PUBLIC},
	{"blockedTime", "()J", nullptr, $PUBLIC},
	{"getCompositeData", "()Ljavax/management/openmbean/CompositeData;", nullptr, $PROTECTED},
	{"getInstance", "(Ljavax/management/openmbean/CompositeData;)Lsun/management/ThreadInfoCompositeData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ThreadInfoCompositeData*(*)($CompositeData*)>(&ThreadInfoCompositeData::getInstance))},
	{"getPriority", "()I", nullptr, $PUBLIC},
	{"getThreadInfo", "()Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC},
	{"inNative", "()Z", nullptr, $PUBLIC},
	{"isDaemon", "()Z", nullptr, $PUBLIC},
	{"lockInfo", "()Ljava/lang/management/LockInfo;", nullptr, $PUBLIC},
	{"lockName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"lockOwnerId", "()J", nullptr, $PUBLIC},
	{"lockOwnerName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"lockedMonitors", "()[Ljava/lang/management/MonitorInfo;", nullptr, $PUBLIC},
	{"lockedSynchronizers", "()[Ljava/lang/management/LockInfo;", nullptr, $PUBLIC},
	{"stackTrace", "()[Ljava/lang/StackTraceElement;", nullptr, $PUBLIC},
	{"suspended", "()Z", nullptr, $PUBLIC},
	{"threadId", "()J", nullptr, $PUBLIC},
	{"threadName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"threadState", "()Ljava/lang/Thread$State;", nullptr, $PUBLIC},
	{"toCompositeData", "(Ljava/lang/management/ThreadInfo;)Ljavax/management/openmbean/CompositeData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CompositeData*(*)($ThreadInfo*)>(&ThreadInfoCompositeData::toCompositeData))},
	{"validateCompositeData", "(Ljavax/management/openmbean/CompositeData;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($CompositeData*)>(&ThreadInfoCompositeData::validateCompositeData))},
	{"waitedCount", "()J", nullptr, $PUBLIC},
	{"waitedTime", "()J", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ThreadInfoCompositeData_InnerClassesInfo_[] = {
	{"sun.management.ThreadInfoCompositeData$ThreadInfoCompositeTypes", "sun.management.ThreadInfoCompositeData", "ThreadInfoCompositeTypes", $STATIC},
	{}
};

$ClassInfo _ThreadInfoCompositeData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.ThreadInfoCompositeData",
	"sun.management.LazyCompositeData",
	nullptr,
	_ThreadInfoCompositeData_FieldInfo_,
	_ThreadInfoCompositeData_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadInfoCompositeData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.management.ThreadInfoCompositeData$ThreadInfoCompositeTypes"
};

$Object* allocate$ThreadInfoCompositeData($Class* clazz) {
	return $of($alloc(ThreadInfoCompositeData));
}

$String* ThreadInfoCompositeData::THREAD_ID = nullptr;
$String* ThreadInfoCompositeData::THREAD_NAME = nullptr;
$String* ThreadInfoCompositeData::THREAD_STATE = nullptr;
$String* ThreadInfoCompositeData::BLOCKED_TIME = nullptr;
$String* ThreadInfoCompositeData::BLOCKED_COUNT = nullptr;
$String* ThreadInfoCompositeData::WAITED_TIME = nullptr;
$String* ThreadInfoCompositeData::WAITED_COUNT = nullptr;
$String* ThreadInfoCompositeData::LOCK_INFO = nullptr;
$String* ThreadInfoCompositeData::LOCK_NAME = nullptr;
$String* ThreadInfoCompositeData::LOCK_OWNER_ID = nullptr;
$String* ThreadInfoCompositeData::LOCK_OWNER_NAME = nullptr;
$String* ThreadInfoCompositeData::STACK_TRACE = nullptr;
$String* ThreadInfoCompositeData::SUSPENDED = nullptr;
$String* ThreadInfoCompositeData::IN_NATIVE = nullptr;
$String* ThreadInfoCompositeData::DAEMON = nullptr;
$String* ThreadInfoCompositeData::PRIORITY = nullptr;
$String* ThreadInfoCompositeData::LOCKED_MONITORS = nullptr;
$String* ThreadInfoCompositeData::LOCKED_SYNCS = nullptr;
$StringArray* ThreadInfoCompositeData::V5_ATTRIBUTES = nullptr;
$StringArray* ThreadInfoCompositeData::V6_ATTRIBUTES = nullptr;
$StringArray* ThreadInfoCompositeData::V9_ATTRIBUTES = nullptr;
int32_t ThreadInfoCompositeData::RUNTIME_VERSION = 0;

void ThreadInfoCompositeData::init$($ThreadInfo* ti) {
	$LazyCompositeData::init$();
	$set(this, threadInfo, ti);
	$set(this, cdata, nullptr);
}

void ThreadInfoCompositeData::init$($CompositeData* cd) {
	$LazyCompositeData::init$();
	$set(this, threadInfo, nullptr);
	$set(this, cdata, cd);
}

$ThreadInfo* ThreadInfoCompositeData::getThreadInfo() {
	return this->threadInfo;
}

ThreadInfoCompositeData* ThreadInfoCompositeData::getInstance($CompositeData* cd) {
	$init(ThreadInfoCompositeData);
	validateCompositeData(cd);
	return $new(ThreadInfoCompositeData, cd);
}

$CompositeData* ThreadInfoCompositeData::toCompositeData($ThreadInfo* ti) {
	$init(ThreadInfoCompositeData);
	$var(ThreadInfoCompositeData, ticd, $new(ThreadInfoCompositeData, ti));
	return ticd->getCompositeData();
}

$CompositeData* ThreadInfoCompositeData::getCompositeData() {
	$useLocalCurrentObjectStackCache();
	$var($StackTraceElementArray, stackTrace, $nc(this->threadInfo)->getStackTrace());
	$var($CompositeDataArray, stackTraceData, $new($CompositeDataArray, $nc(stackTrace)->length));
	for (int32_t i = 0; i < stackTrace->length; ++i) {
		$var($StackTraceElement, ste, stackTrace->get(i));
		stackTraceData->set(i, $($StackTraceElementCompositeData::toCompositeData(ste)));
	}
	$var($CompositeData, lockInfoData, $LockInfoCompositeData::toCompositeData($($nc(this->threadInfo)->getLockInfo())));
	$var($LockInfoArray, lockedSyncs, $nc(this->threadInfo)->getLockedSynchronizers());
	$var($CompositeDataArray, lockedSyncsData, $new($CompositeDataArray, $nc(lockedSyncs)->length));
	for (int32_t i = 0; i < lockedSyncs->length; ++i) {
		$var($LockInfo, li, lockedSyncs->get(i));
		lockedSyncsData->set(i, $($LockInfoCompositeData::toCompositeData(li)));
	}
	$var($MonitorInfoArray, lockedMonitors, $nc(this->threadInfo)->getLockedMonitors());
	$var($CompositeDataArray, lockedMonitorsData, $new($CompositeDataArray, $nc(lockedMonitors)->length));
	for (int32_t i = 0; i < lockedMonitors->length; ++i) {
		$var($MonitorInfo, mi, lockedMonitors->get(i));
		lockedMonitorsData->set(i, $($MonitorInfoCompositeData::toCompositeData(mi)));
	}
	$var($Map, items, $new($HashMap));
	items->put(ThreadInfoCompositeData::THREAD_ID, $($Long::valueOf($nc(this->threadInfo)->getThreadId())));
	items->put(ThreadInfoCompositeData::THREAD_NAME, $($nc(this->threadInfo)->getThreadName()));
	items->put(ThreadInfoCompositeData::THREAD_STATE, $($nc($($nc(this->threadInfo)->getThreadState()))->name()));
	items->put(ThreadInfoCompositeData::BLOCKED_TIME, $($Long::valueOf($nc(this->threadInfo)->getBlockedTime())));
	items->put(ThreadInfoCompositeData::BLOCKED_COUNT, $($Long::valueOf($nc(this->threadInfo)->getBlockedCount())));
	items->put(ThreadInfoCompositeData::WAITED_TIME, $($Long::valueOf($nc(this->threadInfo)->getWaitedTime())));
	items->put(ThreadInfoCompositeData::WAITED_COUNT, $($Long::valueOf($nc(this->threadInfo)->getWaitedCount())));
	items->put(ThreadInfoCompositeData::LOCK_INFO, lockInfoData);
	items->put(ThreadInfoCompositeData::LOCK_NAME, $($nc(this->threadInfo)->getLockName()));
	items->put(ThreadInfoCompositeData::LOCK_OWNER_ID, $($Long::valueOf($nc(this->threadInfo)->getLockOwnerId())));
	items->put(ThreadInfoCompositeData::LOCK_OWNER_NAME, $($nc(this->threadInfo)->getLockOwnerName()));
	items->put(ThreadInfoCompositeData::STACK_TRACE, stackTraceData);
	items->put(ThreadInfoCompositeData::SUSPENDED, $($Boolean::valueOf($nc(this->threadInfo)->isSuspended())));
	items->put(ThreadInfoCompositeData::IN_NATIVE, $($Boolean::valueOf($nc(this->threadInfo)->isInNative())));
	items->put(ThreadInfoCompositeData::LOCKED_MONITORS, lockedMonitorsData);
	items->put(ThreadInfoCompositeData::LOCKED_SYNCS, lockedSyncsData);
	items->put(ThreadInfoCompositeData::DAEMON, $($Boolean::valueOf($nc(this->threadInfo)->isDaemon())));
	items->put(ThreadInfoCompositeData::PRIORITY, $($Integer::valueOf($nc(this->threadInfo)->getPriority())));
	try {
		return $new($CompositeDataSupport, $($ThreadInfoCompositeData$ThreadInfoCompositeTypes::ofVersion(ThreadInfoCompositeData::RUNTIME_VERSION)), items);
	} catch ($OpenDataException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

int64_t ThreadInfoCompositeData::threadId() {
	return getLong(this->cdata, ThreadInfoCompositeData::THREAD_ID);
}

$String* ThreadInfoCompositeData::threadName() {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getString(this->cdata, ThreadInfoCompositeData::THREAD_NAME));
	if (name == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Invalid composite data: Attribute "_s, ThreadInfoCompositeData::THREAD_NAME, " has null value"_s}));
	}
	return name;
}

$Thread$State* ThreadInfoCompositeData::threadState() {
	return $Thread$State::valueOf($(getString(this->cdata, ThreadInfoCompositeData::THREAD_STATE)));
}

int64_t ThreadInfoCompositeData::blockedTime() {
	return getLong(this->cdata, ThreadInfoCompositeData::BLOCKED_TIME);
}

int64_t ThreadInfoCompositeData::blockedCount() {
	return getLong(this->cdata, ThreadInfoCompositeData::BLOCKED_COUNT);
}

int64_t ThreadInfoCompositeData::waitedTime() {
	return getLong(this->cdata, ThreadInfoCompositeData::WAITED_TIME);
}

int64_t ThreadInfoCompositeData::waitedCount() {
	return getLong(this->cdata, ThreadInfoCompositeData::WAITED_COUNT);
}

$String* ThreadInfoCompositeData::lockName() {
	return getString(this->cdata, ThreadInfoCompositeData::LOCK_NAME);
}

int64_t ThreadInfoCompositeData::lockOwnerId() {
	return getLong(this->cdata, ThreadInfoCompositeData::LOCK_OWNER_ID);
}

$String* ThreadInfoCompositeData::lockOwnerName() {
	return getString(this->cdata, ThreadInfoCompositeData::LOCK_OWNER_NAME);
}

bool ThreadInfoCompositeData::suspended() {
	return getBoolean(this->cdata, ThreadInfoCompositeData::SUSPENDED);
}

bool ThreadInfoCompositeData::inNative() {
	return getBoolean(this->cdata, ThreadInfoCompositeData::IN_NATIVE);
}

bool ThreadInfoCompositeData::isDaemon() {
	return $nc(this->cdata)->containsKey(ThreadInfoCompositeData::DAEMON) ? getBoolean(this->cdata, ThreadInfoCompositeData::DAEMON) : false;
}

int32_t ThreadInfoCompositeData::getPriority() {
	return $nc(this->cdata)->containsKey(ThreadInfoCompositeData::PRIORITY) ? getInt(this->cdata, ThreadInfoCompositeData::PRIORITY) : $Thread::NORM_PRIORITY;
}

$StackTraceElementArray* ThreadInfoCompositeData::stackTrace() {
	$useLocalCurrentObjectStackCache();
	$var($CompositeDataArray, stackTraceData, $cast($CompositeDataArray, $nc(this->cdata)->get(ThreadInfoCompositeData::STACK_TRACE)));
	$var($StackTraceElementArray, stackTrace, $new($StackTraceElementArray, $nc(stackTraceData)->length));
	for (int32_t i = 0; i < stackTraceData->length; ++i) {
		$var($CompositeData, cdi, stackTraceData->get(i));
		stackTrace->set(i, $($StackTraceElementCompositeData::from(cdi)));
	}
	return stackTrace;
}

$LockInfo* ThreadInfoCompositeData::lockInfo() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->cdata)->containsKey(ThreadInfoCompositeData::LOCK_INFO)) {
		$var($CompositeData, lockInfoData, $cast($CompositeData, $nc(this->cdata)->get(ThreadInfoCompositeData::LOCK_INFO)));
		return $LockInfo::from(lockInfoData);
	} else {
		$var($String, lockName, this->lockName());
		$var($LockInfo, lock, nullptr);
		if (lockName != nullptr) {
			$var($StringArray, result, lockName->split("@"_s));
			if (result->length == 2) {
				int32_t identityHashCode = $Integer::parseInt(result->get(1), 16);
				$assign(lock, $new($LockInfo, result->get(0), identityHashCode));
			}
		}
		return lock;
	}
}

$MonitorInfoArray* ThreadInfoCompositeData::lockedMonitors() {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->cdata)->containsKey(ThreadInfoCompositeData::LOCKED_MONITORS)) {
		return $new($MonitorInfoArray, 0);
	}
	$var($CompositeDataArray, lockedMonitorsData, $cast($CompositeDataArray, $nc(this->cdata)->get(ThreadInfoCompositeData::LOCKED_MONITORS)));
	$var($MonitorInfoArray, monitors, $new($MonitorInfoArray, $nc(lockedMonitorsData)->length));
	for (int32_t i = 0; i < lockedMonitorsData->length; ++i) {
		$var($CompositeData, cdi, lockedMonitorsData->get(i));
		monitors->set(i, $($MonitorInfo::from(cdi)));
	}
	return monitors;
}

$LockInfoArray* ThreadInfoCompositeData::lockedSynchronizers() {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->cdata)->containsKey(ThreadInfoCompositeData::LOCKED_SYNCS)) {
		return $new($LockInfoArray, 0);
	}
	$var($CompositeDataArray, lockedSyncsData, $cast($CompositeDataArray, $nc(this->cdata)->get(ThreadInfoCompositeData::LOCKED_SYNCS)));
	$var($LockInfoArray, locks, $new($LockInfoArray, $nc(lockedSyncsData)->length));
	for (int32_t i = 0; i < lockedSyncsData->length; ++i) {
		$var($CompositeData, cdi, lockedSyncsData->get(i));
		locks->set(i, $($LockInfo::from(cdi)));
	}
	return locks;
}

void ThreadInfoCompositeData::validateCompositeData($CompositeData* cd) {
	$init(ThreadInfoCompositeData);
	$useLocalCurrentObjectStackCache();
	if (cd == nullptr) {
		$throwNew($NullPointerException, "Null CompositeData"_s);
	}
	$var($CompositeType, type, $nc(cd)->getCompositeType());
	int32_t version = 0;
	if ($nc($($Arrays::stream(ThreadInfoCompositeData::V9_ATTRIBUTES)))->anyMatch(static_cast<$Predicate*>($$new(ThreadInfoCompositeData$$Lambda$containsKey, static_cast<$CompositeType*>($nc(type)))))) {
		version = $nc($($Runtime::version()))->feature();
	} else {
		if ($nc($($Arrays::stream(ThreadInfoCompositeData::V6_ATTRIBUTES)))->anyMatch(static_cast<$Predicate*>($$new(ThreadInfoCompositeData$$Lambda$containsKey, static_cast<$CompositeType*>($nc(type)))))) {
			version = 6;
		} else {
			version = 5;
		}
	}
	if (!isTypeMatched($($ThreadInfoCompositeData$ThreadInfoCompositeTypes::ofVersion(version)), type)) {
		$throwNew($IllegalArgumentException, $$str({"Unexpected composite type for ThreadInfo of version "_s, $$str(version)}));
	}
}

void clinit$ThreadInfoCompositeData($Class* class$) {
	$assignStatic(ThreadInfoCompositeData::THREAD_ID, "threadId"_s);
	$assignStatic(ThreadInfoCompositeData::THREAD_NAME, "threadName"_s);
	$assignStatic(ThreadInfoCompositeData::THREAD_STATE, "threadState"_s);
	$assignStatic(ThreadInfoCompositeData::BLOCKED_TIME, "blockedTime"_s);
	$assignStatic(ThreadInfoCompositeData::BLOCKED_COUNT, "blockedCount"_s);
	$assignStatic(ThreadInfoCompositeData::WAITED_TIME, "waitedTime"_s);
	$assignStatic(ThreadInfoCompositeData::WAITED_COUNT, "waitedCount"_s);
	$assignStatic(ThreadInfoCompositeData::LOCK_INFO, "lockInfo"_s);
	$assignStatic(ThreadInfoCompositeData::LOCK_NAME, "lockName"_s);
	$assignStatic(ThreadInfoCompositeData::LOCK_OWNER_ID, "lockOwnerId"_s);
	$assignStatic(ThreadInfoCompositeData::LOCK_OWNER_NAME, "lockOwnerName"_s);
	$assignStatic(ThreadInfoCompositeData::STACK_TRACE, "stackTrace"_s);
	$assignStatic(ThreadInfoCompositeData::SUSPENDED, "suspended"_s);
	$assignStatic(ThreadInfoCompositeData::IN_NATIVE, "inNative"_s);
	$assignStatic(ThreadInfoCompositeData::DAEMON, "daemon"_s);
	$assignStatic(ThreadInfoCompositeData::PRIORITY, "priority"_s);
	$assignStatic(ThreadInfoCompositeData::LOCKED_MONITORS, "lockedMonitors"_s);
	$assignStatic(ThreadInfoCompositeData::LOCKED_SYNCS, "lockedSynchronizers"_s);
	$assignStatic(ThreadInfoCompositeData::V5_ATTRIBUTES, $new($StringArray, {
		ThreadInfoCompositeData::THREAD_ID,
		ThreadInfoCompositeData::THREAD_NAME,
		ThreadInfoCompositeData::THREAD_STATE,
		ThreadInfoCompositeData::BLOCKED_TIME,
		ThreadInfoCompositeData::BLOCKED_COUNT,
		ThreadInfoCompositeData::WAITED_TIME,
		ThreadInfoCompositeData::WAITED_COUNT,
		ThreadInfoCompositeData::LOCK_NAME,
		ThreadInfoCompositeData::LOCK_OWNER_ID,
		ThreadInfoCompositeData::LOCK_OWNER_NAME,
		ThreadInfoCompositeData::STACK_TRACE,
		ThreadInfoCompositeData::SUSPENDED,
		ThreadInfoCompositeData::IN_NATIVE
	}));
	$assignStatic(ThreadInfoCompositeData::V6_ATTRIBUTES, $new($StringArray, {
		ThreadInfoCompositeData::LOCK_INFO,
		ThreadInfoCompositeData::LOCKED_MONITORS,
		ThreadInfoCompositeData::LOCKED_SYNCS
	}));
	$assignStatic(ThreadInfoCompositeData::V9_ATTRIBUTES, $new($StringArray, {
		ThreadInfoCompositeData::DAEMON,
		ThreadInfoCompositeData::PRIORITY
	}));
	ThreadInfoCompositeData::RUNTIME_VERSION = $nc($($Runtime::version()))->feature();
}

ThreadInfoCompositeData::ThreadInfoCompositeData() {
}

$Class* ThreadInfoCompositeData::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ThreadInfoCompositeData$$Lambda$containsKey::classInfo$.name)) {
			return ThreadInfoCompositeData$$Lambda$containsKey::load$(name, initialize);
		}
	}
	$loadClass(ThreadInfoCompositeData, name, initialize, &_ThreadInfoCompositeData_ClassInfo_, clinit$ThreadInfoCompositeData, allocate$ThreadInfoCompositeData);
	return class$;
}

$Class* ThreadInfoCompositeData::class$ = nullptr;

	} // management
} // sun