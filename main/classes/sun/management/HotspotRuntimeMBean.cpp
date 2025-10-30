#include <sun/management/HotspotRuntimeMBean.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace sun {
	namespace management {

$MethodInfo _HotspotRuntimeMBean_MethodInfo_[] = {
	{"getInternalRuntimeCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC | $ABSTRACT},
	{"getSafepointCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getSafepointSyncTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getTotalSafepointTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _HotspotRuntimeMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.HotspotRuntimeMBean",
	nullptr,
	nullptr,
	nullptr,
	_HotspotRuntimeMBean_MethodInfo_
};

$Object* allocate$HotspotRuntimeMBean($Class* clazz) {
	return $of($alloc(HotspotRuntimeMBean));
}

$Class* HotspotRuntimeMBean::load$($String* name, bool initialize) {
	$loadClass(HotspotRuntimeMBean, name, initialize, &_HotspotRuntimeMBean_ClassInfo_, allocate$HotspotRuntimeMBean);
	return class$;
}

$Class* HotspotRuntimeMBean::class$ = nullptr;

	} // management
} // sun