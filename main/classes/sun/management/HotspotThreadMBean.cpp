#include <sun/management/HotspotThreadMBean.h>

#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace sun {
	namespace management {

$MethodInfo _HotspotThreadMBean_MethodInfo_[] = {
	{"getInternalThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getInternalThreadCpuTimes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Long;>;", $PUBLIC | $ABSTRACT},
	{"getInternalThreadingCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _HotspotThreadMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.HotspotThreadMBean",
	nullptr,
	nullptr,
	nullptr,
	_HotspotThreadMBean_MethodInfo_
};

$Object* allocate$HotspotThreadMBean($Class* clazz) {
	return $of($alloc(HotspotThreadMBean));
}

$Class* HotspotThreadMBean::load$($String* name, bool initialize) {
	$loadClass(HotspotThreadMBean, name, initialize, &_HotspotThreadMBean_ClassInfo_, allocate$HotspotThreadMBean);
	return class$;
}

$Class* HotspotThreadMBean::class$ = nullptr;

	} // management
} // sun