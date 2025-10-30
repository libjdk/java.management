#include <sun/management/HotspotClassLoading.h>

#include <java/util/List.h>
#include <sun/management/VMManagement.h>
#include <jcpp.h>

#undef CLS_COUNTER_NAME_PATTERN
#undef COM_SUN_CLS
#undef JAVA_CLS
#undef SUN_CLS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $HotspotClassLoadingMBean = ::sun::management::HotspotClassLoadingMBean;
using $VMManagement = ::sun::management::VMManagement;

namespace sun {
	namespace management {

$FieldInfo _HotspotClassLoading_FieldInfo_[] = {
	{"jvm", "Lsun/management/VMManagement;", nullptr, $PRIVATE, $field(HotspotClassLoading, jvm)},
	{"JAVA_CLS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotClassLoading, JAVA_CLS)},
	{"COM_SUN_CLS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotClassLoading, COM_SUN_CLS)},
	{"SUN_CLS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotClassLoading, SUN_CLS)},
	{"CLS_COUNTER_NAME_PATTERN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotClassLoading, CLS_COUNTER_NAME_PATTERN)},
	{}
};

$MethodInfo _HotspotClassLoading_MethodInfo_[] = {
	{"<init>", "(Lsun/management/VMManagement;)V", nullptr, 0, $method(static_cast<void(HotspotClassLoading::*)($VMManagement*)>(&HotspotClassLoading::init$))},
	{"getClassInitializationTime", "()J", nullptr, $PUBLIC},
	{"getClassLoadingTime", "()J", nullptr, $PUBLIC},
	{"getClassVerificationTime", "()J", nullptr, $PUBLIC},
	{"getInitializedClassCount", "()J", nullptr, $PUBLIC},
	{"getInternalClassLoadingCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC},
	{"getLoadedClassSize", "()J", nullptr, $PUBLIC},
	{"getMethodDataSize", "()J", nullptr, $PUBLIC},
	{"getUnloadedClassSize", "()J", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HotspotClassLoading_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.HotspotClassLoading",
	"java.lang.Object",
	"sun.management.HotspotClassLoadingMBean",
	_HotspotClassLoading_FieldInfo_,
	_HotspotClassLoading_MethodInfo_
};

$Object* allocate$HotspotClassLoading($Class* clazz) {
	return $of($alloc(HotspotClassLoading));
}

$String* HotspotClassLoading::JAVA_CLS = nullptr;
$String* HotspotClassLoading::COM_SUN_CLS = nullptr;
$String* HotspotClassLoading::SUN_CLS = nullptr;
$String* HotspotClassLoading::CLS_COUNTER_NAME_PATTERN = nullptr;

void HotspotClassLoading::init$($VMManagement* vm) {
	$set(this, jvm, vm);
}

int64_t HotspotClassLoading::getLoadedClassSize() {
	return $nc(this->jvm)->getLoadedClassSize();
}

int64_t HotspotClassLoading::getUnloadedClassSize() {
	return $nc(this->jvm)->getUnloadedClassSize();
}

int64_t HotspotClassLoading::getClassLoadingTime() {
	return $nc(this->jvm)->getClassLoadingTime();
}

int64_t HotspotClassLoading::getMethodDataSize() {
	return $nc(this->jvm)->getMethodDataSize();
}

int64_t HotspotClassLoading::getInitializedClassCount() {
	return $nc(this->jvm)->getInitializedClassCount();
}

int64_t HotspotClassLoading::getClassInitializationTime() {
	return $nc(this->jvm)->getClassInitializationTime();
}

int64_t HotspotClassLoading::getClassVerificationTime() {
	return $nc(this->jvm)->getClassVerificationTime();
}

$List* HotspotClassLoading::getInternalClassLoadingCounters() {
	return $nc(this->jvm)->getInternalCounters(HotspotClassLoading::CLS_COUNTER_NAME_PATTERN);
}

HotspotClassLoading::HotspotClassLoading() {
}

void clinit$HotspotClassLoading($Class* class$) {
	$assignStatic(HotspotClassLoading::JAVA_CLS, "java.cls."_s);
	$assignStatic(HotspotClassLoading::COM_SUN_CLS, "com.sun.cls."_s);
	$assignStatic(HotspotClassLoading::SUN_CLS, "sun.cls."_s);
	$assignStatic(HotspotClassLoading::CLS_COUNTER_NAME_PATTERN, $str({HotspotClassLoading::JAVA_CLS, "|"_s, HotspotClassLoading::COM_SUN_CLS, "|"_s, HotspotClassLoading::SUN_CLS}));
}

$Class* HotspotClassLoading::load$($String* name, bool initialize) {
	$loadClass(HotspotClassLoading, name, initialize, &_HotspotClassLoading_ClassInfo_, clinit$HotspotClassLoading, allocate$HotspotClassLoading);
	return class$;
}

$Class* HotspotClassLoading::class$ = nullptr;

	} // management
} // sun