#include <java/lang/management/MemoryMXBean.h>

#include <java/lang/management/MemoryUsage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MemoryUsage = ::java::lang::management::MemoryUsage;
using $PlatformManagedObject = ::java::lang::management::PlatformManagedObject;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _MemoryMXBean_MethodInfo_[] = {
	{"gc", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getHeapMemoryUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNonHeapMemoryUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC | $ABSTRACT},
	{"getObjectPendingFinalizationCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isVerbose", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setVerbose", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MemoryMXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.MemoryMXBean",
	nullptr,
	"java.lang.management.PlatformManagedObject",
	nullptr,
	_MemoryMXBean_MethodInfo_
};

$Object* allocate$MemoryMXBean($Class* clazz) {
	return $of($alloc(MemoryMXBean));
}

$Class* MemoryMXBean::load$($String* name, bool initialize) {
	$loadClass(MemoryMXBean, name, initialize, &_MemoryMXBean_ClassInfo_, allocate$MemoryMXBean);
	return class$;
}

$Class* MemoryMXBean::class$ = nullptr;

		} // management
	} // lang
} // java