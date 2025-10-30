#include <java/lang/management/MonitorInfo.h>

#include <java/lang/StackTraceElement.h>
#include <java/lang/management/LockInfo.h>
#include <javax/management/openmbean/CompositeData.h>
#include <sun/management/MonitorInfoCompositeData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $LockInfo = ::java::lang::management::LockInfo;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $MonitorInfoCompositeData = ::sun::management::MonitorInfoCompositeData;

namespace java {
	namespace lang {
		namespace management {

$FieldInfo _MonitorInfo_FieldInfo_[] = {
	{"stackDepth", "I", nullptr, $PRIVATE, $field(MonitorInfo, stackDepth)},
	{"stackFrame", "Ljava/lang/StackTraceElement;", nullptr, $PRIVATE, $field(MonitorInfo, stackFrame)},
	{}
};

$MethodInfo _MonitorInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;IILjava/lang/StackTraceElement;)V", nullptr, $PUBLIC, $method(static_cast<void(MonitorInfo::*)($String*,int32_t,int32_t,$StackTraceElement*)>(&MonitorInfo::init$))},
	{"from", "(Ljavax/management/openmbean/CompositeData;)Ljava/lang/management/MonitorInfo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MonitorInfo*(*)($CompositeData*)>(&MonitorInfo::from))},
	{"getLockedStackDepth", "()I", nullptr, $PUBLIC},
	{"getLockedStackFrame", "()Ljava/lang/StackTraceElement;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MonitorInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.management.MonitorInfo",
	"java.lang.management.LockInfo",
	nullptr,
	_MonitorInfo_FieldInfo_,
	_MonitorInfo_MethodInfo_
};

$Object* allocate$MonitorInfo($Class* clazz) {
	return $of($alloc(MonitorInfo));
}

void MonitorInfo::init$($String* className, int32_t identityHashCode, int32_t stackDepth, $StackTraceElement* stackFrame) {
	$useLocalCurrentObjectStackCache();
	$LockInfo::init$(className, identityHashCode);
	if (stackDepth >= 0 && stackFrame == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Parameter stackDepth is "_s, $$str(stackDepth), " but stackFrame is null"_s}));
	}
	if (stackDepth < 0 && stackFrame != nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Parameter stackDepth is "_s, $$str(stackDepth), " but stackFrame is not null"_s}));
	}
	this->stackDepth = stackDepth;
	$set(this, stackFrame, stackFrame);
}

int32_t MonitorInfo::getLockedStackDepth() {
	return this->stackDepth;
}

$StackTraceElement* MonitorInfo::getLockedStackFrame() {
	return this->stackFrame;
}

MonitorInfo* MonitorInfo::from($CompositeData* cd) {
	$init(MonitorInfo);
	$useLocalCurrentObjectStackCache();
	if (cd == nullptr) {
		return nullptr;
	}
	if ($instanceOf($MonitorInfoCompositeData, cd)) {
		return $nc(($cast($MonitorInfoCompositeData, cd)))->getMonitorInfo();
	} else {
		$MonitorInfoCompositeData::validateCompositeData(cd);
		$var($String, className, $MonitorInfoCompositeData::getClassName(cd));
		int32_t identityHashCode = $MonitorInfoCompositeData::getIdentityHashCode(cd);
		int32_t stackDepth = $MonitorInfoCompositeData::getLockedStackDepth(cd);
		$var($StackTraceElement, stackFrame, $MonitorInfoCompositeData::getLockedStackFrame(cd));
		return $new(MonitorInfo, className, identityHashCode, stackDepth, stackFrame);
	}
}

MonitorInfo::MonitorInfo() {
}

$Class* MonitorInfo::load$($String* name, bool initialize) {
	$loadClass(MonitorInfo, name, initialize, &_MonitorInfo_ClassInfo_, allocate$MonitorInfo);
	return class$;
}

$Class* MonitorInfo::class$ = nullptr;

		} // management
	} // lang
} // java