#include <sun/management/HotspotInternalMBean.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace management {

$ClassInfo _HotspotInternalMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.HotspotInternalMBean"
};

$Object* allocate$HotspotInternalMBean($Class* clazz) {
	return $of($alloc(HotspotInternalMBean));
}

$Class* HotspotInternalMBean::load$($String* name, bool initialize) {
	$loadClass(HotspotInternalMBean, name, initialize, &_HotspotInternalMBean_ClassInfo_, allocate$HotspotInternalMBean);
	return class$;
}

$Class* HotspotInternalMBean::class$ = nullptr;

	} // management
} // sun