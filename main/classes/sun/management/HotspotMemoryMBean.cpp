#include <sun/management/HotspotMemoryMBean.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace sun {
	namespace management {

$MethodInfo _HotspotMemoryMBean_MethodInfo_[] = {
	{"getInternalMemoryCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _HotspotMemoryMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.HotspotMemoryMBean",
	nullptr,
	nullptr,
	nullptr,
	_HotspotMemoryMBean_MethodInfo_
};

$Object* allocate$HotspotMemoryMBean($Class* clazz) {
	return $of($alloc(HotspotMemoryMBean));
}

$Class* HotspotMemoryMBean::load$($String* name, bool initialize) {
	$loadClass(HotspotMemoryMBean, name, initialize, &_HotspotMemoryMBean_ClassInfo_, allocate$HotspotMemoryMBean);
	return class$;
}

$Class* HotspotMemoryMBean::class$ = nullptr;

	} // management
} // sun