#include <java/lang/management/MemoryManagerMXBean.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformManagedObject = ::java::lang::management::PlatformManagedObject;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _MemoryManagerMXBean_MethodInfo_[] = {
	{"getMemoryPoolNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MemoryManagerMXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.MemoryManagerMXBean",
	nullptr,
	"java.lang.management.PlatformManagedObject",
	nullptr,
	_MemoryManagerMXBean_MethodInfo_
};

$Object* allocate$MemoryManagerMXBean($Class* clazz) {
	return $of($alloc(MemoryManagerMXBean));
}

$Class* MemoryManagerMXBean::load$($String* name, bool initialize) {
	$loadClass(MemoryManagerMXBean, name, initialize, &_MemoryManagerMXBean_ClassInfo_, allocate$MemoryManagerMXBean);
	return class$;
}

$Class* MemoryManagerMXBean::class$ = nullptr;

		} // management
	} // lang
} // java