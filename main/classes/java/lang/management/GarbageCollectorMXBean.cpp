#include <java/lang/management/GarbageCollectorMXBean.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MemoryManagerMXBean = ::java::lang::management::MemoryManagerMXBean;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _GarbageCollectorMXBean_MethodInfo_[] = {
	{"getCollectionCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCollectionTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _GarbageCollectorMXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.GarbageCollectorMXBean",
	nullptr,
	"java.lang.management.MemoryManagerMXBean",
	nullptr,
	_GarbageCollectorMXBean_MethodInfo_
};

$Object* allocate$GarbageCollectorMXBean($Class* clazz) {
	return $of($alloc(GarbageCollectorMXBean));
}

$Class* GarbageCollectorMXBean::load$($String* name, bool initialize) {
	$loadClass(GarbageCollectorMXBean, name, initialize, &_GarbageCollectorMXBean_ClassInfo_, allocate$GarbageCollectorMXBean);
	return class$;
}

$Class* GarbageCollectorMXBean::class$ = nullptr;

		} // management
	} // lang
} // java