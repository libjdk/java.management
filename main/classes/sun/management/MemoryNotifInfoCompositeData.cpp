#include <sun/management/MemoryNotifInfoCompositeData.h>

#include <java/lang/AssertionError.h>
#include <java/lang/management/MemoryNotificationInfo.h>
#include <java/lang/management/MemoryUsage.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeDataSupport.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/management/LazyCompositeData.h>
#include <sun/management/MappedMXBeanType.h>
#include <sun/management/MemoryUsageCompositeData.h>
#include <jcpp.h>

#undef COUNT
#undef POOL_NAME
#undef USAGE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MemoryNotificationInfo = ::java::lang::management::MemoryNotificationInfo;
using $MemoryUsage = ::java::lang::management::MemoryUsage;
using $Type = ::java::lang::reflect::Type;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeDataSupport = ::javax::management::openmbean::CompositeDataSupport;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $LazyCompositeData = ::sun::management::LazyCompositeData;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;
using $MemoryUsageCompositeData = ::sun::management::MemoryUsageCompositeData;

namespace sun {
	namespace management {

$FieldInfo _MemoryNotifInfoCompositeData_FieldInfo_[] = {
	{"memoryNotifInfo", "Ljava/lang/management/MemoryNotificationInfo;", nullptr, $PRIVATE | $FINAL, $field(MemoryNotifInfoCompositeData, memoryNotifInfo)},
	{"memoryNotifInfoCompositeType", "Ljavax/management/openmbean/CompositeType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryNotifInfoCompositeData, memoryNotifInfoCompositeType)},
	{"POOL_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryNotifInfoCompositeData, POOL_NAME)},
	{"USAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryNotifInfoCompositeData, USAGE)},
	{"COUNT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryNotifInfoCompositeData, COUNT)},
	{"memoryNotifInfoItemNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryNotifInfoCompositeData, memoryNotifInfoItemNames)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MemoryNotifInfoCompositeData, serialVersionUID)},
	{}
};

$MethodInfo _MemoryNotifInfoCompositeData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/management/MemoryNotificationInfo;)V", nullptr, $PRIVATE, $method(static_cast<void(MemoryNotifInfoCompositeData::*)($MemoryNotificationInfo*)>(&MemoryNotifInfoCompositeData::init$))},
	{"getCompositeData", "()Ljavax/management/openmbean/CompositeData;", nullptr, $PROTECTED},
	{"getCount", "(Ljavax/management/openmbean/CompositeData;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($CompositeData*)>(&MemoryNotifInfoCompositeData::getCount))},
	{"getMemoryNotifInfo", "()Ljava/lang/management/MemoryNotificationInfo;", nullptr, $PUBLIC},
	{"getPoolName", "(Ljavax/management/openmbean/CompositeData;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($CompositeData*)>(&MemoryNotifInfoCompositeData::getPoolName))},
	{"getUsage", "(Ljavax/management/openmbean/CompositeData;)Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MemoryUsage*(*)($CompositeData*)>(&MemoryNotifInfoCompositeData::getUsage))},
	{"toCompositeData", "(Ljava/lang/management/MemoryNotificationInfo;)Ljavax/management/openmbean/CompositeData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CompositeData*(*)($MemoryNotificationInfo*)>(&MemoryNotifInfoCompositeData::toCompositeData))},
	{"validateCompositeData", "(Ljavax/management/openmbean/CompositeData;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($CompositeData*)>(&MemoryNotifInfoCompositeData::validateCompositeData))},
	{}
};

$ClassInfo _MemoryNotifInfoCompositeData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.MemoryNotifInfoCompositeData",
	"sun.management.LazyCompositeData",
	nullptr,
	_MemoryNotifInfoCompositeData_FieldInfo_,
	_MemoryNotifInfoCompositeData_MethodInfo_
};

$Object* allocate$MemoryNotifInfoCompositeData($Class* clazz) {
	return $of($alloc(MemoryNotifInfoCompositeData));
}

$CompositeType* MemoryNotifInfoCompositeData::memoryNotifInfoCompositeType = nullptr;
$String* MemoryNotifInfoCompositeData::POOL_NAME = nullptr;
$String* MemoryNotifInfoCompositeData::USAGE = nullptr;
$String* MemoryNotifInfoCompositeData::COUNT = nullptr;
$StringArray* MemoryNotifInfoCompositeData::memoryNotifInfoItemNames = nullptr;

void MemoryNotifInfoCompositeData::init$($MemoryNotificationInfo* info) {
	$LazyCompositeData::init$();
	$set(this, memoryNotifInfo, info);
}

$MemoryNotificationInfo* MemoryNotifInfoCompositeData::getMemoryNotifInfo() {
	return this->memoryNotifInfo;
}

$CompositeData* MemoryNotifInfoCompositeData::toCompositeData($MemoryNotificationInfo* info) {
	$init(MemoryNotifInfoCompositeData);
	$var(MemoryNotifInfoCompositeData, mnicd, $new(MemoryNotifInfoCompositeData, info));
	return mnicd->getCompositeData();
}

$CompositeData* MemoryNotifInfoCompositeData::getCompositeData() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, memoryNotifInfoItemValues, $new($ObjectArray, {
		$($of($nc(this->memoryNotifInfo)->getPoolName())),
		$($of($MemoryUsageCompositeData::toCompositeData($($nc(this->memoryNotifInfo)->getUsage())))),
		$($of($Long::valueOf($nc(this->memoryNotifInfo)->getCount())))
	}));
	try {
		return $new($CompositeDataSupport, MemoryNotifInfoCompositeData::memoryNotifInfoCompositeType, MemoryNotifInfoCompositeData::memoryNotifInfoItemNames, memoryNotifInfoItemValues);
	} catch ($OpenDataException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

$String* MemoryNotifInfoCompositeData::getPoolName($CompositeData* cd) {
	$init(MemoryNotifInfoCompositeData);
	$useLocalCurrentObjectStackCache();
	$var($String, poolname, getString(cd, MemoryNotifInfoCompositeData::POOL_NAME));
	if (poolname == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Invalid composite data: Attribute "_s, MemoryNotifInfoCompositeData::POOL_NAME, " has null value"_s}));
	}
	return poolname;
}

$MemoryUsage* MemoryNotifInfoCompositeData::getUsage($CompositeData* cd) {
	$init(MemoryNotifInfoCompositeData);
	$var($CompositeData, usageData, $cast($CompositeData, $nc(cd)->get(MemoryNotifInfoCompositeData::USAGE)));
	return $MemoryUsage::from(usageData);
}

int64_t MemoryNotifInfoCompositeData::getCount($CompositeData* cd) {
	$init(MemoryNotifInfoCompositeData);
	return getLong(cd, MemoryNotifInfoCompositeData::COUNT);
}

void MemoryNotifInfoCompositeData::validateCompositeData($CompositeData* cd) {
	$init(MemoryNotifInfoCompositeData);
	if (cd == nullptr) {
		$throwNew($NullPointerException, "Null CompositeData"_s);
	}
	if (!isTypeMatched(MemoryNotifInfoCompositeData::memoryNotifInfoCompositeType, $($nc(cd)->getCompositeType()))) {
		$throwNew($IllegalArgumentException, "Unexpected composite type for MemoryNotificationInfo"_s);
	}
}

void clinit$MemoryNotifInfoCompositeData($Class* class$) {
	$assignStatic(MemoryNotifInfoCompositeData::POOL_NAME, "poolName"_s);
	$assignStatic(MemoryNotifInfoCompositeData::USAGE, "usage"_s);
	$assignStatic(MemoryNotifInfoCompositeData::COUNT, "count"_s);
	{
		try {
			$load($MemoryNotificationInfo);
			$assignStatic(MemoryNotifInfoCompositeData::memoryNotifInfoCompositeType, $cast($CompositeType, $MappedMXBeanType::toOpenType($MemoryNotificationInfo::class$)));
		} catch ($OpenDataException& e) {
			$throwNew($AssertionError, $of(e));
		}
	}
	$assignStatic(MemoryNotifInfoCompositeData::memoryNotifInfoItemNames, $new($StringArray, {
		MemoryNotifInfoCompositeData::POOL_NAME,
		MemoryNotifInfoCompositeData::USAGE,
		MemoryNotifInfoCompositeData::COUNT
	}));
}

MemoryNotifInfoCompositeData::MemoryNotifInfoCompositeData() {
}

$Class* MemoryNotifInfoCompositeData::load$($String* name, bool initialize) {
	$loadClass(MemoryNotifInfoCompositeData, name, initialize, &_MemoryNotifInfoCompositeData_ClassInfo_, clinit$MemoryNotifInfoCompositeData, allocate$MemoryNotifInfoCompositeData);
	return class$;
}

$Class* MemoryNotifInfoCompositeData::class$ = nullptr;

	} // management
} // sun