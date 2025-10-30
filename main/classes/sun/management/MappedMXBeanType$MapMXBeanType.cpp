#include <sun/management/MappedMXBeanType$MapMXBeanType.h>

#include <java/lang/AssertionError.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeDataSupport.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenType.h>
#include <javax/management/openmbean/TabularData.h>
#include <javax/management/openmbean/TabularDataSupport.h>
#include <javax/management/openmbean/TabularType.h>
#include <sun/management/MappedMXBeanType.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $OpenTypeArray = $Array<::javax::management::openmbean::OpenType>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeDataSupport = ::javax::management::openmbean::CompositeDataSupport;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $OpenType = ::javax::management::openmbean::OpenType;
using $TabularData = ::javax::management::openmbean::TabularData;
using $TabularDataSupport = ::javax::management::openmbean::TabularDataSupport;
using $TabularType = ::javax::management::openmbean::TabularType;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;

namespace sun {
	namespace management {

$FieldInfo _MappedMXBeanType$MapMXBeanType_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MappedMXBeanType$MapMXBeanType, $assertionsDisabled)},
	{"javaType", "Ljava/lang/reflect/ParameterizedType;", nullptr, $FINAL, $field(MappedMXBeanType$MapMXBeanType, javaType)},
	{"keyType", "Lsun/management/MappedMXBeanType;", nullptr, $FINAL, $field(MappedMXBeanType$MapMXBeanType, keyType)},
	{"valueType", "Lsun/management/MappedMXBeanType;", nullptr, $FINAL, $field(MappedMXBeanType$MapMXBeanType, valueType)},
	{"typeName", "Ljava/lang/String;", nullptr, $FINAL, $field(MappedMXBeanType$MapMXBeanType, typeName)},
	{}
};

$MethodInfo _MappedMXBeanType$MapMXBeanType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/ParameterizedType;)V", nullptr, 0, $method(static_cast<void(MappedMXBeanType$MapMXBeanType::*)($ParameterizedType*)>(&MappedMXBeanType$MapMXBeanType::init$)), "javax.management.openmbean.OpenDataException"},
	{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"toJavaTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.openmbean.OpenDataException,java.io.InvalidObjectException"},
	{"toOpenTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.openmbean.OpenDataException"},
	{}
};

$InnerClassInfo _MappedMXBeanType$MapMXBeanType_InnerClassesInfo_[] = {
	{"sun.management.MappedMXBeanType$MapMXBeanType", "sun.management.MappedMXBeanType", "MapMXBeanType", $STATIC},
	{}
};

$ClassInfo _MappedMXBeanType$MapMXBeanType_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.MappedMXBeanType$MapMXBeanType",
	"sun.management.MappedMXBeanType",
	nullptr,
	_MappedMXBeanType$MapMXBeanType_FieldInfo_,
	_MappedMXBeanType$MapMXBeanType_MethodInfo_,
	nullptr,
	nullptr,
	_MappedMXBeanType$MapMXBeanType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.MappedMXBeanType"
};

$Object* allocate$MappedMXBeanType$MapMXBeanType($Class* clazz) {
	return $of($alloc(MappedMXBeanType$MapMXBeanType));
}

bool MappedMXBeanType$MapMXBeanType::$assertionsDisabled = false;

void MappedMXBeanType$MapMXBeanType::init$($ParameterizedType* pt) {
	$useLocalCurrentObjectStackCache();
	$MappedMXBeanType::init$();
	$set(this, javaType, pt);
	$var($TypeArray, argTypes, $nc(pt)->getActualTypeArguments());
	if (!MappedMXBeanType$MapMXBeanType::$assertionsDisabled && !($nc(argTypes)->length == 2)) {
		$throwNew($AssertionError);
	}
	$set(this, keyType, getMappedType($nc(argTypes)->get(0)));
	$set(this, valueType, getMappedType($nc(argTypes)->get(1)));
	$var($String, var$1, $$str({"Map<"_s, $($nc(this->keyType)->getName()), ","_s}));
	$var($String, var$0, $$concat(var$1, $($nc(this->valueType)->getName())));
	$set(this, typeName, $concat(var$0, ">"));
	$var($OpenTypeArray, mapItemTypes, $new($OpenTypeArray, {
		$($nc(this->keyType)->getOpenType()),
		$($nc(this->valueType)->getOpenType())
	}));
	$var($CompositeType, rowType, $new($CompositeType, this->typeName, this->typeName, $MappedMXBeanType::mapItemNames, $MappedMXBeanType::mapItemNames, mapItemTypes));
	$set(this, openType, $new($TabularType, this->typeName, this->typeName, rowType, $MappedMXBeanType::mapIndexNames));
	$load($TabularData);
	$set(this, mappedTypeClass, $TabularData::class$);
}

$Type* MappedMXBeanType$MapMXBeanType::getJavaType() {
	return this->javaType;
}

$String* MappedMXBeanType$MapMXBeanType::getName() {
	return this->typeName;
}

$Object* MappedMXBeanType$MapMXBeanType::toOpenTypeData(Object$* data) {
	$useLocalCurrentObjectStackCache();
	$var($Map, map, $cast($Map, data));
	$var($TabularType, tabularType, $cast($TabularType, this->openType));
	$var($TabularData, table, $new($TabularDataSupport, tabularType));
	$var($CompositeType, rowType, $nc(tabularType)->getRowType());
	{
		$var($Iterator, i$, $nc($($nc(map)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($Object, key, $nc(this->keyType)->toOpenTypeData($($nc(entry)->getKey())));
				$var($Object, value, $nc(this->valueType)->toOpenTypeData($($nc(entry)->getValue())));
				$var($CompositeData, row, $new($CompositeDataSupport, rowType, $MappedMXBeanType::mapItemNames, $$new($ObjectArray, {
					key,
					value
				})));
				table->put(row);
			}
		}
	}
	return $of(table);
}

$Object* MappedMXBeanType$MapMXBeanType::toJavaTypeData(Object$* data) {
	$useLocalCurrentObjectStackCache();
	$var($TabularData, td, $cast($TabularData, data));
	$var($Map, result, $new($HashMap));
	{
		$var($Iterator, i$, $nc(($($nc(td)->values())))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($CompositeData, row, $cast($CompositeData, i$->next()));
			{
				$var($Object, key, $nc(this->keyType)->toJavaTypeData($($nc(row)->get("key"_s))));
				$var($Object, value, $nc(this->valueType)->toJavaTypeData($($nc(row)->get("value"_s))));
				result->put(key, value);
			}
		}
	}
	return $of(result);
}

void clinit$MappedMXBeanType$MapMXBeanType($Class* class$) {
	$load($MappedMXBeanType);
	MappedMXBeanType$MapMXBeanType::$assertionsDisabled = !$MappedMXBeanType::class$->desiredAssertionStatus();
}

MappedMXBeanType$MapMXBeanType::MappedMXBeanType$MapMXBeanType() {
}

$Class* MappedMXBeanType$MapMXBeanType::load$($String* name, bool initialize) {
	$loadClass(MappedMXBeanType$MapMXBeanType, name, initialize, &_MappedMXBeanType$MapMXBeanType_ClassInfo_, clinit$MappedMXBeanType$MapMXBeanType, allocate$MappedMXBeanType$MapMXBeanType);
	return class$;
}

$Class* MappedMXBeanType$MapMXBeanType::class$ = nullptr;

	} // management
} // sun