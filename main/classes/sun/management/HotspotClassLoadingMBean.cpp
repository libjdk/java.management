#include <sun/management/HotspotClassLoadingMBean.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace sun {
	namespace management {

$MethodInfo _HotspotClassLoadingMBean_MethodInfo_[] = {
	{"getClassInitializationTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getClassLoadingTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getClassVerificationTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getInitializedClassCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getInternalClassLoadingCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC | $ABSTRACT},
	{"getLoadedClassSize", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMethodDataSize", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getUnloadedClassSize", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _HotspotClassLoadingMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.HotspotClassLoadingMBean",
	nullptr,
	nullptr,
	nullptr,
	_HotspotClassLoadingMBean_MethodInfo_
};

$Object* allocate$HotspotClassLoadingMBean($Class* clazz) {
	return $of($alloc(HotspotClassLoadingMBean));
}

$Class* HotspotClassLoadingMBean::load$($String* name, bool initialize) {
	$loadClass(HotspotClassLoadingMBean, name, initialize, &_HotspotClassLoadingMBean_ClassInfo_, allocate$HotspotClassLoadingMBean);
	return class$;
}

$Class* HotspotClassLoadingMBean::class$ = nullptr;

	} // management
} // sun