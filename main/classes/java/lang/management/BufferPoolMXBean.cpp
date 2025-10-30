#include <java/lang/management/BufferPoolMXBean.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformManagedObject = ::java::lang::management::PlatformManagedObject;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _BufferPoolMXBean_MethodInfo_[] = {
	{"getCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMemoryUsed", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTotalCapacity", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BufferPoolMXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.BufferPoolMXBean",
	nullptr,
	"java.lang.management.PlatformManagedObject",
	nullptr,
	_BufferPoolMXBean_MethodInfo_
};

$Object* allocate$BufferPoolMXBean($Class* clazz) {
	return $of($alloc(BufferPoolMXBean));
}

$Class* BufferPoolMXBean::load$($String* name, bool initialize) {
	$loadClass(BufferPoolMXBean, name, initialize, &_BufferPoolMXBean_ClassInfo_, allocate$BufferPoolMXBean);
	return class$;
}

$Class* BufferPoolMXBean::class$ = nullptr;

		} // management
	} // lang
} // java