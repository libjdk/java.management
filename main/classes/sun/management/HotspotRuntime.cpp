#include <sun/management/HotspotRuntime.h>

#include <java/util/List.h>
#include <sun/management/VMManagement.h>
#include <jcpp.h>

#undef COM_SUN_PROPERTY
#undef COM_SUN_RT
#undef JAVA_PROPERTY
#undef JAVA_RT
#undef RT_COUNTER_NAME_PATTERN
#undef SUN_PROPERTY
#undef SUN_RT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $HotspotRuntimeMBean = ::sun::management::HotspotRuntimeMBean;
using $VMManagement = ::sun::management::VMManagement;

namespace sun {
	namespace management {

$FieldInfo _HotspotRuntime_FieldInfo_[] = {
	{"jvm", "Lsun/management/VMManagement;", nullptr, $PRIVATE, $field(HotspotRuntime, jvm)},
	{"JAVA_RT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotRuntime, JAVA_RT)},
	{"COM_SUN_RT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotRuntime, COM_SUN_RT)},
	{"SUN_RT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotRuntime, SUN_RT)},
	{"JAVA_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotRuntime, JAVA_PROPERTY)},
	{"COM_SUN_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotRuntime, COM_SUN_PROPERTY)},
	{"SUN_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotRuntime, SUN_PROPERTY)},
	{"RT_COUNTER_NAME_PATTERN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotRuntime, RT_COUNTER_NAME_PATTERN)},
	{}
};

$MethodInfo _HotspotRuntime_MethodInfo_[] = {
	{"<init>", "(Lsun/management/VMManagement;)V", nullptr, 0, $method(static_cast<void(HotspotRuntime::*)($VMManagement*)>(&HotspotRuntime::init$))},
	{"getInternalRuntimeCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC},
	{"getSafepointCount", "()J", nullptr, $PUBLIC},
	{"getSafepointSyncTime", "()J", nullptr, $PUBLIC},
	{"getTotalSafepointTime", "()J", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HotspotRuntime_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.HotspotRuntime",
	"java.lang.Object",
	"sun.management.HotspotRuntimeMBean",
	_HotspotRuntime_FieldInfo_,
	_HotspotRuntime_MethodInfo_
};

$Object* allocate$HotspotRuntime($Class* clazz) {
	return $of($alloc(HotspotRuntime));
}

$String* HotspotRuntime::JAVA_RT = nullptr;
$String* HotspotRuntime::COM_SUN_RT = nullptr;
$String* HotspotRuntime::SUN_RT = nullptr;
$String* HotspotRuntime::JAVA_PROPERTY = nullptr;
$String* HotspotRuntime::COM_SUN_PROPERTY = nullptr;
$String* HotspotRuntime::SUN_PROPERTY = nullptr;
$String* HotspotRuntime::RT_COUNTER_NAME_PATTERN = nullptr;

void HotspotRuntime::init$($VMManagement* vm) {
	$set(this, jvm, vm);
}

int64_t HotspotRuntime::getSafepointCount() {
	return $nc(this->jvm)->getSafepointCount();
}

int64_t HotspotRuntime::getTotalSafepointTime() {
	return $nc(this->jvm)->getTotalSafepointTime();
}

int64_t HotspotRuntime::getSafepointSyncTime() {
	return $nc(this->jvm)->getSafepointSyncTime();
}

$List* HotspotRuntime::getInternalRuntimeCounters() {
	return $nc(this->jvm)->getInternalCounters(HotspotRuntime::RT_COUNTER_NAME_PATTERN);
}

HotspotRuntime::HotspotRuntime() {
}

void clinit$HotspotRuntime($Class* class$) {
	$assignStatic(HotspotRuntime::JAVA_RT, "java.rt."_s);
	$assignStatic(HotspotRuntime::COM_SUN_RT, "com.sun.rt."_s);
	$assignStatic(HotspotRuntime::SUN_RT, "sun.rt."_s);
	$assignStatic(HotspotRuntime::JAVA_PROPERTY, "java.property."_s);
	$assignStatic(HotspotRuntime::COM_SUN_PROPERTY, "com.sun.property."_s);
	$assignStatic(HotspotRuntime::SUN_PROPERTY, "sun.property."_s);
	$assignStatic(HotspotRuntime::RT_COUNTER_NAME_PATTERN, $str({HotspotRuntime::JAVA_RT, "|"_s, HotspotRuntime::COM_SUN_RT, "|"_s, HotspotRuntime::SUN_RT, "|"_s, HotspotRuntime::JAVA_PROPERTY, "|"_s, HotspotRuntime::COM_SUN_PROPERTY, "|"_s, HotspotRuntime::SUN_PROPERTY}));
}

$Class* HotspotRuntime::load$($String* name, bool initialize) {
	$loadClass(HotspotRuntime, name, initialize, &_HotspotRuntime_ClassInfo_, clinit$HotspotRuntime, allocate$HotspotRuntime);
	return class$;
}

$Class* HotspotRuntime::class$ = nullptr;

	} // management
} // sun