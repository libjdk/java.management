#include <sun/management/MemoryUsageCompositeData.h>

#include <java/lang/AssertionError.h>
#include <java/lang/management/MemoryUsage.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeDataSupport.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/management/LazyCompositeData.h>
#include <sun/management/MappedMXBeanType.h>
#include <jcpp.h>

#undef COMMITTED
#undef INIT
#undef MAX
#undef USED

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MemoryUsage = ::java::lang::management::MemoryUsage;
using $Type = ::java::lang::reflect::Type;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeDataSupport = ::javax::management::openmbean::CompositeDataSupport;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $LazyCompositeData = ::sun::management::LazyCompositeData;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;

namespace sun {
	namespace management {

$FieldInfo _MemoryUsageCompositeData_FieldInfo_[] = {
	{"usage", "Ljava/lang/management/MemoryUsage;", nullptr, $PRIVATE | $FINAL, $field(MemoryUsageCompositeData, usage)},
	{"memoryUsageCompositeType", "Ljavax/management/openmbean/CompositeType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryUsageCompositeData, memoryUsageCompositeType)},
	{"INIT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryUsageCompositeData, INIT)},
	{"USED", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryUsageCompositeData, USED)},
	{"COMMITTED", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryUsageCompositeData, COMMITTED)},
	{"MAX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryUsageCompositeData, MAX)},
	{"memoryUsageItemNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryUsageCompositeData, memoryUsageItemNames)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MemoryUsageCompositeData, serialVersionUID)},
	{}
};

$MethodInfo _MemoryUsageCompositeData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/management/MemoryUsage;)V", nullptr, $PRIVATE, $method(static_cast<void(MemoryUsageCompositeData::*)($MemoryUsage*)>(&MemoryUsageCompositeData::init$))},
	{"getCommitted", "(Ljavax/management/openmbean/CompositeData;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($CompositeData*)>(&MemoryUsageCompositeData::getCommitted))},
	{"getCompositeData", "()Ljavax/management/openmbean/CompositeData;", nullptr, $PROTECTED},
	{"getInit", "(Ljavax/management/openmbean/CompositeData;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($CompositeData*)>(&MemoryUsageCompositeData::getInit))},
	{"getMax", "(Ljavax/management/openmbean/CompositeData;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($CompositeData*)>(&MemoryUsageCompositeData::getMax))},
	{"getMemoryUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC},
	{"getMemoryUsageCompositeType", "()Ljavax/management/openmbean/CompositeType;", nullptr, $STATIC, $method(static_cast<$CompositeType*(*)()>(&MemoryUsageCompositeData::getMemoryUsageCompositeType))},
	{"getUsed", "(Ljavax/management/openmbean/CompositeData;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($CompositeData*)>(&MemoryUsageCompositeData::getUsed))},
	{"toCompositeData", "(Ljava/lang/management/MemoryUsage;)Ljavax/management/openmbean/CompositeData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CompositeData*(*)($MemoryUsage*)>(&MemoryUsageCompositeData::toCompositeData))},
	{"validateCompositeData", "(Ljavax/management/openmbean/CompositeData;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($CompositeData*)>(&MemoryUsageCompositeData::validateCompositeData))},
	{}
};

$ClassInfo _MemoryUsageCompositeData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.MemoryUsageCompositeData",
	"sun.management.LazyCompositeData",
	nullptr,
	_MemoryUsageCompositeData_FieldInfo_,
	_MemoryUsageCompositeData_MethodInfo_
};

$Object* allocate$MemoryUsageCompositeData($Class* clazz) {
	return $of($alloc(MemoryUsageCompositeData));
}

$CompositeType* MemoryUsageCompositeData::memoryUsageCompositeType = nullptr;
$String* MemoryUsageCompositeData::INIT = nullptr;
$String* MemoryUsageCompositeData::USED = nullptr;
$String* MemoryUsageCompositeData::COMMITTED = nullptr;
$String* MemoryUsageCompositeData::MAX = nullptr;
$StringArray* MemoryUsageCompositeData::memoryUsageItemNames = nullptr;

void MemoryUsageCompositeData::init$($MemoryUsage* u) {
	$LazyCompositeData::init$();
	$set(this, usage, u);
}

$MemoryUsage* MemoryUsageCompositeData::getMemoryUsage() {
	return this->usage;
}

$CompositeData* MemoryUsageCompositeData::toCompositeData($MemoryUsage* u) {
	$init(MemoryUsageCompositeData);
	$var(MemoryUsageCompositeData, mucd, $new(MemoryUsageCompositeData, u));
	return mucd->getCompositeData();
}

$CompositeData* MemoryUsageCompositeData::getCompositeData() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, memoryUsageItemValues, $new($ObjectArray, {
		$($of($Long::valueOf($nc(this->usage)->getInit()))),
		$($of($Long::valueOf($nc(this->usage)->getUsed()))),
		$($of($Long::valueOf($nc(this->usage)->getCommitted()))),
		$($of($Long::valueOf($nc(this->usage)->getMax())))
	}));
	try {
		return $new($CompositeDataSupport, MemoryUsageCompositeData::memoryUsageCompositeType, MemoryUsageCompositeData::memoryUsageItemNames, memoryUsageItemValues);
	} catch ($OpenDataException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

$CompositeType* MemoryUsageCompositeData::getMemoryUsageCompositeType() {
	$init(MemoryUsageCompositeData);
	return MemoryUsageCompositeData::memoryUsageCompositeType;
}

int64_t MemoryUsageCompositeData::getInit($CompositeData* cd) {
	$init(MemoryUsageCompositeData);
	return getLong(cd, MemoryUsageCompositeData::INIT);
}

int64_t MemoryUsageCompositeData::getUsed($CompositeData* cd) {
	$init(MemoryUsageCompositeData);
	return getLong(cd, MemoryUsageCompositeData::USED);
}

int64_t MemoryUsageCompositeData::getCommitted($CompositeData* cd) {
	$init(MemoryUsageCompositeData);
	return getLong(cd, MemoryUsageCompositeData::COMMITTED);
}

int64_t MemoryUsageCompositeData::getMax($CompositeData* cd) {
	$init(MemoryUsageCompositeData);
	return getLong(cd, MemoryUsageCompositeData::MAX);
}

void MemoryUsageCompositeData::validateCompositeData($CompositeData* cd) {
	$init(MemoryUsageCompositeData);
	if (cd == nullptr) {
		$throwNew($NullPointerException, "Null CompositeData"_s);
	}
	if (!isTypeMatched(MemoryUsageCompositeData::memoryUsageCompositeType, $($nc(cd)->getCompositeType()))) {
		$throwNew($IllegalArgumentException, "Unexpected composite type for MemoryUsage"_s);
	}
}

void clinit$MemoryUsageCompositeData($Class* class$) {
	$assignStatic(MemoryUsageCompositeData::INIT, "init"_s);
	$assignStatic(MemoryUsageCompositeData::USED, "used"_s);
	$assignStatic(MemoryUsageCompositeData::COMMITTED, "committed"_s);
	$assignStatic(MemoryUsageCompositeData::MAX, "max"_s);
	{
		try {
			$load($MemoryUsage);
			$assignStatic(MemoryUsageCompositeData::memoryUsageCompositeType, $cast($CompositeType, $MappedMXBeanType::toOpenType($MemoryUsage::class$)));
		} catch ($OpenDataException& e) {
			$throwNew($AssertionError, $of(e));
		}
	}
	$assignStatic(MemoryUsageCompositeData::memoryUsageItemNames, $new($StringArray, {
		MemoryUsageCompositeData::INIT,
		MemoryUsageCompositeData::USED,
		MemoryUsageCompositeData::COMMITTED,
		MemoryUsageCompositeData::MAX
	}));
}

MemoryUsageCompositeData::MemoryUsageCompositeData() {
}

$Class* MemoryUsageCompositeData::load$($String* name, bool initialize) {
	$loadClass(MemoryUsageCompositeData, name, initialize, &_MemoryUsageCompositeData_ClassInfo_, clinit$MemoryUsageCompositeData, allocate$MemoryUsageCompositeData);
	return class$;
}

$Class* MemoryUsageCompositeData::class$ = nullptr;

	} // management
} // sun