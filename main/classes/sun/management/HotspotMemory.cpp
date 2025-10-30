#include <sun/management/HotspotMemory.h>

#include <java/util/List.h>
#include <sun/management/VMManagement.h>
#include <jcpp.h>

#undef COM_SUN_GC
#undef GC_COUNTER_NAME_PATTERN
#undef JAVA_GC
#undef SUN_GC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $HotspotMemoryMBean = ::sun::management::HotspotMemoryMBean;
using $VMManagement = ::sun::management::VMManagement;

namespace sun {
	namespace management {

$FieldInfo _HotspotMemory_FieldInfo_[] = {
	{"jvm", "Lsun/management/VMManagement;", nullptr, $PRIVATE, $field(HotspotMemory, jvm)},
	{"JAVA_GC", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotMemory, JAVA_GC)},
	{"COM_SUN_GC", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotMemory, COM_SUN_GC)},
	{"SUN_GC", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotMemory, SUN_GC)},
	{"GC_COUNTER_NAME_PATTERN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotMemory, GC_COUNTER_NAME_PATTERN)},
	{}
};

$MethodInfo _HotspotMemory_MethodInfo_[] = {
	{"<init>", "(Lsun/management/VMManagement;)V", nullptr, 0, $method(static_cast<void(HotspotMemory::*)($VMManagement*)>(&HotspotMemory::init$))},
	{"getInternalMemoryCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC},
	{}
};

$ClassInfo _HotspotMemory_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.HotspotMemory",
	"java.lang.Object",
	"sun.management.HotspotMemoryMBean",
	_HotspotMemory_FieldInfo_,
	_HotspotMemory_MethodInfo_
};

$Object* allocate$HotspotMemory($Class* clazz) {
	return $of($alloc(HotspotMemory));
}

$String* HotspotMemory::JAVA_GC = nullptr;
$String* HotspotMemory::COM_SUN_GC = nullptr;
$String* HotspotMemory::SUN_GC = nullptr;
$String* HotspotMemory::GC_COUNTER_NAME_PATTERN = nullptr;

void HotspotMemory::init$($VMManagement* vm) {
	$set(this, jvm, vm);
}

$List* HotspotMemory::getInternalMemoryCounters() {
	return $nc(this->jvm)->getInternalCounters(HotspotMemory::GC_COUNTER_NAME_PATTERN);
}

HotspotMemory::HotspotMemory() {
}

void clinit$HotspotMemory($Class* class$) {
	$assignStatic(HotspotMemory::JAVA_GC, "java.gc."_s);
	$assignStatic(HotspotMemory::COM_SUN_GC, "com.sun.gc."_s);
	$assignStatic(HotspotMemory::SUN_GC, "sun.gc."_s);
	$assignStatic(HotspotMemory::GC_COUNTER_NAME_PATTERN, $str({HotspotMemory::JAVA_GC, "|"_s, HotspotMemory::COM_SUN_GC, "|"_s, HotspotMemory::SUN_GC}));
}

$Class* HotspotMemory::load$($String* name, bool initialize) {
	$loadClass(HotspotMemory, name, initialize, &_HotspotMemory_ClassInfo_, clinit$HotspotMemory, allocate$HotspotMemory);
	return class$;
}

$Class* HotspotMemory::class$ = nullptr;

	} // management
} // sun