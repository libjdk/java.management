#include <sun/management/MonitorInfoCompositeData.h>

#include <java/lang/AssertionError.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/management/MonitorInfo.h>
#include <java/lang/reflect/Type.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeDataSupport.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/management/LazyCompositeData.h>
#include <sun/management/MappedMXBeanType.h>
#include <sun/management/StackTraceElementCompositeData.h>
#include <jcpp.h>

#undef CLASS_NAME
#undef IDENTITY_HASH_CODE
#undef LOCKED_STACK_DEPTH
#undef LOCKED_STACK_FRAME
#undef MONITOR_INFO_ATTRIBUTES
#undef MONITOR_INFO_COMPOSITE_TYPE
#undef V6_COMPOSITE_TYPE

using $OpenTypeArray = $Array<::javax::management::openmbean::OpenType>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $LockInfo = ::java::lang::management::LockInfo;
using $MonitorInfo = ::java::lang::management::MonitorInfo;
using $Type = ::java::lang::reflect::Type;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeDataSupport = ::javax::management::openmbean::CompositeDataSupport;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $LazyCompositeData = ::sun::management::LazyCompositeData;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;
using $StackTraceElementCompositeData = ::sun::management::StackTraceElementCompositeData;

namespace sun {
	namespace management {

$FieldInfo _MonitorInfoCompositeData_FieldInfo_[] = {
	{"lock", "Ljava/lang/management/MonitorInfo;", nullptr, $PRIVATE | $FINAL, $field(MonitorInfoCompositeData, lock)},
	{"CLASS_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MonitorInfoCompositeData, CLASS_NAME)},
	{"IDENTITY_HASH_CODE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MonitorInfoCompositeData, IDENTITY_HASH_CODE)},
	{"LOCKED_STACK_FRAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MonitorInfoCompositeData, LOCKED_STACK_FRAME)},
	{"LOCKED_STACK_DEPTH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MonitorInfoCompositeData, LOCKED_STACK_DEPTH)},
	{"MONITOR_INFO_ATTRIBUTES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MonitorInfoCompositeData, MONITOR_INFO_ATTRIBUTES)},
	{"MONITOR_INFO_COMPOSITE_TYPE", "Ljavax/management/openmbean/CompositeType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MonitorInfoCompositeData, MONITOR_INFO_COMPOSITE_TYPE)},
	{"V6_COMPOSITE_TYPE", "Ljavax/management/openmbean/CompositeType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MonitorInfoCompositeData, V6_COMPOSITE_TYPE)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MonitorInfoCompositeData, serialVersionUID)},
	{}
};

$MethodInfo _MonitorInfoCompositeData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/management/MonitorInfo;)V", nullptr, $PRIVATE, $method(static_cast<void(MonitorInfoCompositeData::*)($MonitorInfo*)>(&MonitorInfoCompositeData::init$))},
	{"getClassName", "(Ljavax/management/openmbean/CompositeData;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($CompositeData*)>(&MonitorInfoCompositeData::getClassName))},
	{"getCompositeData", "()Ljavax/management/openmbean/CompositeData;", nullptr, $PROTECTED},
	{"getIdentityHashCode", "(Ljavax/management/openmbean/CompositeData;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($CompositeData*)>(&MonitorInfoCompositeData::getIdentityHashCode))},
	{"getLockedStackDepth", "(Ljavax/management/openmbean/CompositeData;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($CompositeData*)>(&MonitorInfoCompositeData::getLockedStackDepth))},
	{"getLockedStackFrame", "(Ljavax/management/openmbean/CompositeData;)Ljava/lang/StackTraceElement;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StackTraceElement*(*)($CompositeData*)>(&MonitorInfoCompositeData::getLockedStackFrame))},
	{"getMonitorInfo", "()Ljava/lang/management/MonitorInfo;", nullptr, $PUBLIC},
	{"toCompositeData", "(Ljava/lang/management/MonitorInfo;)Ljavax/management/openmbean/CompositeData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CompositeData*(*)($MonitorInfo*)>(&MonitorInfoCompositeData::toCompositeData))},
	{"v6CompositeType", "()Ljavax/management/openmbean/CompositeType;", nullptr, $STATIC, $method(static_cast<$CompositeType*(*)()>(&MonitorInfoCompositeData::v6CompositeType))},
	{"validateCompositeData", "(Ljavax/management/openmbean/CompositeData;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($CompositeData*)>(&MonitorInfoCompositeData::validateCompositeData))},
	{}
};

$ClassInfo _MonitorInfoCompositeData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.MonitorInfoCompositeData",
	"sun.management.LazyCompositeData",
	nullptr,
	_MonitorInfoCompositeData_FieldInfo_,
	_MonitorInfoCompositeData_MethodInfo_
};

$Object* allocate$MonitorInfoCompositeData($Class* clazz) {
	return $of($alloc(MonitorInfoCompositeData));
}

$String* MonitorInfoCompositeData::CLASS_NAME = nullptr;
$String* MonitorInfoCompositeData::IDENTITY_HASH_CODE = nullptr;
$String* MonitorInfoCompositeData::LOCKED_STACK_FRAME = nullptr;
$String* MonitorInfoCompositeData::LOCKED_STACK_DEPTH = nullptr;
$StringArray* MonitorInfoCompositeData::MONITOR_INFO_ATTRIBUTES = nullptr;
$CompositeType* MonitorInfoCompositeData::MONITOR_INFO_COMPOSITE_TYPE = nullptr;
$CompositeType* MonitorInfoCompositeData::V6_COMPOSITE_TYPE = nullptr;

void MonitorInfoCompositeData::init$($MonitorInfo* mi) {
	$LazyCompositeData::init$();
	$set(this, lock, mi);
}

$MonitorInfo* MonitorInfoCompositeData::getMonitorInfo() {
	return this->lock;
}

$CompositeData* MonitorInfoCompositeData::toCompositeData($MonitorInfo* mi) {
	$init(MonitorInfoCompositeData);
	$var(MonitorInfoCompositeData, micd, $new(MonitorInfoCompositeData, mi));
	return micd->getCompositeData();
}

$CompositeData* MonitorInfoCompositeData::getCompositeData() {
	$useLocalCurrentObjectStackCache();
	$var($StackTraceElement, ste, $nc(this->lock)->getLockedStackFrame());
	$var($CompositeData, steCData, ste != nullptr ? $StackTraceElementCompositeData::toCompositeData(ste) : ($CompositeData*)nullptr);
	$var($Map, items, $new($HashMap));
	items->put(MonitorInfoCompositeData::CLASS_NAME, $($nc(this->lock)->getClassName()));
	items->put(MonitorInfoCompositeData::IDENTITY_HASH_CODE, $($Integer::valueOf($nc(this->lock)->getIdentityHashCode())));
	items->put(MonitorInfoCompositeData::LOCKED_STACK_FRAME, steCData);
	items->put(MonitorInfoCompositeData::LOCKED_STACK_DEPTH, $($Integer::valueOf($nc(this->lock)->getLockedStackDepth())));
	try {
		return $new($CompositeDataSupport, MonitorInfoCompositeData::MONITOR_INFO_COMPOSITE_TYPE, items);
	} catch ($OpenDataException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

$CompositeType* MonitorInfoCompositeData::v6CompositeType() {
	$init(MonitorInfoCompositeData);
	return MonitorInfoCompositeData::V6_COMPOSITE_TYPE;
}

$String* MonitorInfoCompositeData::getClassName($CompositeData* cd) {
	$init(MonitorInfoCompositeData);
	return getString(cd, MonitorInfoCompositeData::CLASS_NAME);
}

int32_t MonitorInfoCompositeData::getIdentityHashCode($CompositeData* cd) {
	$init(MonitorInfoCompositeData);
	return getInt(cd, MonitorInfoCompositeData::IDENTITY_HASH_CODE);
}

$StackTraceElement* MonitorInfoCompositeData::getLockedStackFrame($CompositeData* cd) {
	$init(MonitorInfoCompositeData);
	$var($CompositeData, ste, $cast($CompositeData, $nc(cd)->get(MonitorInfoCompositeData::LOCKED_STACK_FRAME)));
	if (ste != nullptr) {
		return $StackTraceElementCompositeData::from(ste);
	} else {
		return nullptr;
	}
}

int32_t MonitorInfoCompositeData::getLockedStackDepth($CompositeData* cd) {
	$init(MonitorInfoCompositeData);
	return getInt(cd, MonitorInfoCompositeData::LOCKED_STACK_DEPTH);
}

void MonitorInfoCompositeData::validateCompositeData($CompositeData* cd) {
	$init(MonitorInfoCompositeData);
	$useLocalCurrentObjectStackCache();
	if (cd == nullptr) {
		$throwNew($NullPointerException, "Null CompositeData"_s);
	}
	bool var$0 = !isTypeMatched(MonitorInfoCompositeData::MONITOR_INFO_COMPOSITE_TYPE, $($nc(cd)->getCompositeType()));
	if (var$0 && !isTypeMatched(MonitorInfoCompositeData::V6_COMPOSITE_TYPE, $($nc(cd)->getCompositeType()))) {
		$throwNew($IllegalArgumentException, "Unexpected composite type for MonitorInfo"_s);
	}
}

void clinit$MonitorInfoCompositeData($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MonitorInfoCompositeData::CLASS_NAME, "className"_s);
	$assignStatic(MonitorInfoCompositeData::IDENTITY_HASH_CODE, "identityHashCode"_s);
	$assignStatic(MonitorInfoCompositeData::LOCKED_STACK_FRAME, "lockedStackFrame"_s);
	$assignStatic(MonitorInfoCompositeData::LOCKED_STACK_DEPTH, "lockedStackDepth"_s);
	$assignStatic(MonitorInfoCompositeData::MONITOR_INFO_ATTRIBUTES, $new($StringArray, {
		MonitorInfoCompositeData::CLASS_NAME,
		MonitorInfoCompositeData::IDENTITY_HASH_CODE,
		MonitorInfoCompositeData::LOCKED_STACK_FRAME,
		MonitorInfoCompositeData::LOCKED_STACK_DEPTH
	}));
	{
		try {
			$load($MonitorInfo);
			$assignStatic(MonitorInfoCompositeData::MONITOR_INFO_COMPOSITE_TYPE, $cast($CompositeType, $MappedMXBeanType::toOpenType($MonitorInfo::class$)));
			$var($OpenTypeArray, types, $new($OpenTypeArray, $nc(MonitorInfoCompositeData::MONITOR_INFO_ATTRIBUTES)->length));
			for (int32_t i = 0; i < $nc(MonitorInfoCompositeData::MONITOR_INFO_ATTRIBUTES)->length; ++i) {
				$var($String, name, $nc(MonitorInfoCompositeData::MONITOR_INFO_ATTRIBUTES)->get(i));
				types->set(i, $nc(name)->equals(MonitorInfoCompositeData::LOCKED_STACK_FRAME) ? $(static_cast<$OpenType*>($StackTraceElementCompositeData::v5CompositeType())) : $($nc(MonitorInfoCompositeData::MONITOR_INFO_COMPOSITE_TYPE)->getType(name)));
			}
			$assignStatic(MonitorInfoCompositeData::V6_COMPOSITE_TYPE, $new($CompositeType, "MonitorInfo"_s, "JDK 6 MonitorInfo"_s, MonitorInfoCompositeData::MONITOR_INFO_ATTRIBUTES, MonitorInfoCompositeData::MONITOR_INFO_ATTRIBUTES, types));
		} catch ($OpenDataException& e) {
			$throwNew($AssertionError, $of(e));
		}
	}
}

MonitorInfoCompositeData::MonitorInfoCompositeData() {
}

$Class* MonitorInfoCompositeData::load$($String* name, bool initialize) {
	$loadClass(MonitorInfoCompositeData, name, initialize, &_MonitorInfoCompositeData_ClassInfo_, clinit$MonitorInfoCompositeData, allocate$MonitorInfoCompositeData);
	return class$;
}

$Class* MonitorInfoCompositeData::class$ = nullptr;

	} // management
} // sun