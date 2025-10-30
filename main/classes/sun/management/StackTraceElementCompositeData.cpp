#include <sun/management/StackTraceElementCompositeData.h>

#include <java/lang/AssertionError.h>
#include <java/lang/StackTraceElement.h>
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
#include <jcpp.h>

#undef CLASS_LOADER_NAME
#undef CLASS_NAME
#undef FILE_NAME
#undef LINE_NUMBER
#undef METHOD_NAME
#undef MODULE_NAME
#undef MODULE_VERSION
#undef NATIVE_METHOD
#undef STACK_TRACE_ELEMENT_COMPOSITE_TYPE
#undef V5_ATTRIBUTES
#undef V5_COMPOSITE_TYPE
#undef V9_ATTRIBUTES

using $OpenTypeArray = $Array<::javax::management::openmbean::OpenType>;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StackTraceElement = ::java::lang::StackTraceElement;
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

namespace sun {
	namespace management {

$FieldInfo _StackTraceElementCompositeData_FieldInfo_[] = {
	{"ste", "Ljava/lang/StackTraceElement;", nullptr, $PRIVATE | $FINAL, $field(StackTraceElementCompositeData, ste)},
	{"CLASS_LOADER_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StackTraceElementCompositeData, CLASS_LOADER_NAME)},
	{"MODULE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StackTraceElementCompositeData, MODULE_NAME)},
	{"MODULE_VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StackTraceElementCompositeData, MODULE_VERSION)},
	{"CLASS_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StackTraceElementCompositeData, CLASS_NAME)},
	{"METHOD_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StackTraceElementCompositeData, METHOD_NAME)},
	{"FILE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StackTraceElementCompositeData, FILE_NAME)},
	{"LINE_NUMBER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StackTraceElementCompositeData, LINE_NUMBER)},
	{"NATIVE_METHOD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StackTraceElementCompositeData, NATIVE_METHOD)},
	{"V5_ATTRIBUTES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StackTraceElementCompositeData, V5_ATTRIBUTES)},
	{"V9_ATTRIBUTES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StackTraceElementCompositeData, V9_ATTRIBUTES)},
	{"STACK_TRACE_ELEMENT_COMPOSITE_TYPE", "Ljavax/management/openmbean/CompositeType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StackTraceElementCompositeData, STACK_TRACE_ELEMENT_COMPOSITE_TYPE)},
	{"V5_COMPOSITE_TYPE", "Ljavax/management/openmbean/CompositeType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StackTraceElementCompositeData, V5_COMPOSITE_TYPE)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StackTraceElementCompositeData, serialVersionUID)},
	{}
};

$MethodInfo _StackTraceElementCompositeData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/StackTraceElement;)V", nullptr, $PRIVATE, $method(static_cast<void(StackTraceElementCompositeData::*)($StackTraceElement*)>(&StackTraceElementCompositeData::init$))},
	{"from", "(Ljavax/management/openmbean/CompositeData;)Ljava/lang/StackTraceElement;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StackTraceElement*(*)($CompositeData*)>(&StackTraceElementCompositeData::from))},
	{"getCompositeData", "()Ljavax/management/openmbean/CompositeData;", nullptr, $PROTECTED},
	{"getStackTraceElement", "()Ljava/lang/StackTraceElement;", nullptr, $PUBLIC},
	{"toCompositeData", "(Ljava/lang/StackTraceElement;)Ljavax/management/openmbean/CompositeData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CompositeData*(*)($StackTraceElement*)>(&StackTraceElementCompositeData::toCompositeData))},
	{"v5CompositeType", "()Ljavax/management/openmbean/CompositeType;", nullptr, $STATIC, $method(static_cast<$CompositeType*(*)()>(&StackTraceElementCompositeData::v5CompositeType))},
	{"validateCompositeData", "(Ljavax/management/openmbean/CompositeData;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($CompositeData*)>(&StackTraceElementCompositeData::validateCompositeData))},
	{}
};

$ClassInfo _StackTraceElementCompositeData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.StackTraceElementCompositeData",
	"sun.management.LazyCompositeData",
	nullptr,
	_StackTraceElementCompositeData_FieldInfo_,
	_StackTraceElementCompositeData_MethodInfo_
};

$Object* allocate$StackTraceElementCompositeData($Class* clazz) {
	return $of($alloc(StackTraceElementCompositeData));
}

$String* StackTraceElementCompositeData::CLASS_LOADER_NAME = nullptr;
$String* StackTraceElementCompositeData::MODULE_NAME = nullptr;
$String* StackTraceElementCompositeData::MODULE_VERSION = nullptr;
$String* StackTraceElementCompositeData::CLASS_NAME = nullptr;
$String* StackTraceElementCompositeData::METHOD_NAME = nullptr;
$String* StackTraceElementCompositeData::FILE_NAME = nullptr;
$String* StackTraceElementCompositeData::LINE_NUMBER = nullptr;
$String* StackTraceElementCompositeData::NATIVE_METHOD = nullptr;
$StringArray* StackTraceElementCompositeData::V5_ATTRIBUTES = nullptr;
$StringArray* StackTraceElementCompositeData::V9_ATTRIBUTES = nullptr;
$CompositeType* StackTraceElementCompositeData::STACK_TRACE_ELEMENT_COMPOSITE_TYPE = nullptr;
$CompositeType* StackTraceElementCompositeData::V5_COMPOSITE_TYPE = nullptr;

void StackTraceElementCompositeData::init$($StackTraceElement* ste) {
	$LazyCompositeData::init$();
	$set(this, ste, ste);
}

$StackTraceElement* StackTraceElementCompositeData::getStackTraceElement() {
	return this->ste;
}

$StackTraceElement* StackTraceElementCompositeData::from($CompositeData* cd) {
	$init(StackTraceElementCompositeData);
	$useLocalCurrentObjectStackCache();
	validateCompositeData(cd);
	if ($nc(StackTraceElementCompositeData::STACK_TRACE_ELEMENT_COMPOSITE_TYPE)->equals($($nc(cd)->getCompositeType()))) {
		$var($String, var$0, getString(cd, StackTraceElementCompositeData::CLASS_LOADER_NAME));
		$var($String, var$1, getString(cd, StackTraceElementCompositeData::MODULE_NAME));
		$var($String, var$2, getString(cd, StackTraceElementCompositeData::MODULE_VERSION));
		$var($String, var$3, getString(cd, StackTraceElementCompositeData::CLASS_NAME));
		$var($String, var$4, getString(cd, StackTraceElementCompositeData::METHOD_NAME));
		$var($String, var$5, getString(cd, StackTraceElementCompositeData::FILE_NAME));
		return $new($StackTraceElement, var$0, var$1, var$2, var$3, var$4, var$5, getInt(cd, StackTraceElementCompositeData::LINE_NUMBER));
	} else {
		$var($String, var$6, getString(cd, StackTraceElementCompositeData::CLASS_NAME));
		$var($String, var$7, getString(cd, StackTraceElementCompositeData::METHOD_NAME));
		$var($String, var$8, getString(cd, StackTraceElementCompositeData::FILE_NAME));
		return $new($StackTraceElement, var$6, var$7, var$8, getInt(cd, StackTraceElementCompositeData::LINE_NUMBER));
	}
}

$CompositeData* StackTraceElementCompositeData::toCompositeData($StackTraceElement* ste) {
	$init(StackTraceElementCompositeData);
	$var(StackTraceElementCompositeData, cd, $new(StackTraceElementCompositeData, ste));
	return cd->getCompositeData();
}

$CompositeData* StackTraceElementCompositeData::getCompositeData() {
	$useLocalCurrentObjectStackCache();
	$var($Map, items, $new($HashMap));
	items->put(StackTraceElementCompositeData::CLASS_LOADER_NAME, $($nc(this->ste)->getClassLoaderName()));
	items->put(StackTraceElementCompositeData::MODULE_NAME, $($nc(this->ste)->getModuleName()));
	items->put(StackTraceElementCompositeData::MODULE_VERSION, $($nc(this->ste)->getModuleVersion()));
	items->put(StackTraceElementCompositeData::CLASS_NAME, $($nc(this->ste)->getClassName()));
	items->put(StackTraceElementCompositeData::METHOD_NAME, $($nc(this->ste)->getMethodName()));
	items->put(StackTraceElementCompositeData::FILE_NAME, $($nc(this->ste)->getFileName()));
	items->put(StackTraceElementCompositeData::LINE_NUMBER, $($Integer::valueOf($nc(this->ste)->getLineNumber())));
	items->put(StackTraceElementCompositeData::NATIVE_METHOD, $($Boolean::valueOf($nc(this->ste)->isNativeMethod())));
	try {
		return $new($CompositeDataSupport, StackTraceElementCompositeData::STACK_TRACE_ELEMENT_COMPOSITE_TYPE, items);
	} catch ($OpenDataException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

$CompositeType* StackTraceElementCompositeData::v5CompositeType() {
	$init(StackTraceElementCompositeData);
	return StackTraceElementCompositeData::V5_COMPOSITE_TYPE;
}

void StackTraceElementCompositeData::validateCompositeData($CompositeData* cd) {
	$init(StackTraceElementCompositeData);
	if (cd == nullptr) {
		$throwNew($NullPointerException, "Null CompositeData"_s);
	}
	$var($CompositeType, ct, $nc(cd)->getCompositeType());
	bool var$0 = !isTypeMatched(StackTraceElementCompositeData::STACK_TRACE_ELEMENT_COMPOSITE_TYPE, ct);
	if (var$0 && !isTypeMatched(StackTraceElementCompositeData::V5_COMPOSITE_TYPE, ct)) {
		$throwNew($IllegalArgumentException, "Unexpected composite type for StackTraceElement"_s);
	}
}

void clinit$StackTraceElementCompositeData($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(StackTraceElementCompositeData::CLASS_LOADER_NAME, "classLoaderName"_s);
	$assignStatic(StackTraceElementCompositeData::MODULE_NAME, "moduleName"_s);
	$assignStatic(StackTraceElementCompositeData::MODULE_VERSION, "moduleVersion"_s);
	$assignStatic(StackTraceElementCompositeData::CLASS_NAME, "className"_s);
	$assignStatic(StackTraceElementCompositeData::METHOD_NAME, "methodName"_s);
	$assignStatic(StackTraceElementCompositeData::FILE_NAME, "fileName"_s);
	$assignStatic(StackTraceElementCompositeData::LINE_NUMBER, "lineNumber"_s);
	$assignStatic(StackTraceElementCompositeData::NATIVE_METHOD, "nativeMethod"_s);
	$assignStatic(StackTraceElementCompositeData::V5_ATTRIBUTES, $new($StringArray, {
		StackTraceElementCompositeData::CLASS_NAME,
		StackTraceElementCompositeData::METHOD_NAME,
		StackTraceElementCompositeData::FILE_NAME,
		StackTraceElementCompositeData::LINE_NUMBER,
		StackTraceElementCompositeData::NATIVE_METHOD
	}));
	$assignStatic(StackTraceElementCompositeData::V9_ATTRIBUTES, $new($StringArray, {
		StackTraceElementCompositeData::CLASS_LOADER_NAME,
		StackTraceElementCompositeData::MODULE_NAME,
		StackTraceElementCompositeData::MODULE_VERSION
	}));
	{
		try {
			$load($StackTraceElement);
			$assignStatic(StackTraceElementCompositeData::STACK_TRACE_ELEMENT_COMPOSITE_TYPE, $cast($CompositeType, $MappedMXBeanType::toOpenType($StackTraceElement::class$)));
			$var($OpenTypeArray, types, $new($OpenTypeArray, $nc(StackTraceElementCompositeData::V5_ATTRIBUTES)->length));
			for (int32_t i = 0; i < $nc(StackTraceElementCompositeData::V5_ATTRIBUTES)->length; ++i) {
				$var($String, name, $nc(StackTraceElementCompositeData::V5_ATTRIBUTES)->get(i));
				types->set(i, $($nc(StackTraceElementCompositeData::STACK_TRACE_ELEMENT_COMPOSITE_TYPE)->getType(name)));
			}
			$assignStatic(StackTraceElementCompositeData::V5_COMPOSITE_TYPE, $new($CompositeType, "StackTraceElement"_s, "JDK 5 StackTraceElement"_s, StackTraceElementCompositeData::V5_ATTRIBUTES, StackTraceElementCompositeData::V5_ATTRIBUTES, types));
		} catch ($OpenDataException& e) {
			$throwNew($AssertionError, $of(e));
		}
	}
}

StackTraceElementCompositeData::StackTraceElementCompositeData() {
}

$Class* StackTraceElementCompositeData::load$($String* name, bool initialize) {
	$loadClass(StackTraceElementCompositeData, name, initialize, &_StackTraceElementCompositeData_ClassInfo_, clinit$StackTraceElementCompositeData, allocate$StackTraceElementCompositeData);
	return class$;
}

$Class* StackTraceElementCompositeData::class$ = nullptr;

	} // management
} // sun