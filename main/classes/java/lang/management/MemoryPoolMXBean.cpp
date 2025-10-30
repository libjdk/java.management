#include <java/lang/management/MemoryPoolMXBean.h>

#include <java/lang/management/MemoryType.h>
#include <java/lang/management/MemoryUsage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MemoryType = ::java::lang::management::MemoryType;
using $MemoryUsage = ::java::lang::management::MemoryUsage;
using $PlatformManagedObject = ::java::lang::management::PlatformManagedObject;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _MemoryPoolMXBean_MethodInfo_[] = {
	{"getCollectionUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCollectionUsageThreshold", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCollectionUsageThresholdCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMemoryManagerNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPeakUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "()Ljava/lang/management/MemoryType;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUsageThreshold", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getUsageThresholdCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"isCollectionUsageThresholdExceeded", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isCollectionUsageThresholdSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isUsageThresholdExceeded", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isUsageThresholdSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"resetPeakUsage", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCollectionUsageThreshold", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setUsageThreshold", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MemoryPoolMXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.MemoryPoolMXBean",
	nullptr,
	"java.lang.management.PlatformManagedObject",
	nullptr,
	_MemoryPoolMXBean_MethodInfo_
};

$Object* allocate$MemoryPoolMXBean($Class* clazz) {
	return $of($alloc(MemoryPoolMXBean));
}

$Class* MemoryPoolMXBean::load$($String* name, bool initialize) {
	$loadClass(MemoryPoolMXBean, name, initialize, &_MemoryPoolMXBean_ClassInfo_, allocate$MemoryPoolMXBean);
	return class$;
}

$Class* MemoryPoolMXBean::class$ = nullptr;

		} // management
	} // lang
} // java