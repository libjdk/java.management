#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$TabularMapping.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/io/InvalidObjectException.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeDataSupport.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <javax/management/openmbean/TabularData.h>
#include <javax/management/openmbean/TabularDataSupport.h>
#include <javax/management/openmbean/TabularType.h>
#include <jcpp.h>

using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $DefaultMXBeanMappingFactory$NonNullMXBeanMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping;
using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Type = ::java::lang::reflect::Type;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeDataSupport = ::javax::management::openmbean::CompositeDataSupport;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $TabularData = ::javax::management::openmbean::TabularData;
using $TabularDataSupport = ::javax::management::openmbean::TabularDataSupport;
using $TabularType = ::javax::management::openmbean::TabularType;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _DefaultMXBeanMappingFactory$TabularMapping_FieldInfo_[] = {
	{"sortedMap", "Z", nullptr, $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$TabularMapping, sortedMap)},
	{"keyMapping", "Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$TabularMapping, keyMapping)},
	{"valueMapping", "Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$TabularMapping, valueMapping)},
	{}
};

$MethodInfo _DefaultMXBeanMappingFactory$TabularMapping_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Type;ZLjavax/management/openmbean/TabularType;Lcom/sun/jmx/mbeanserver/MXBeanMapping;Lcom/sun/jmx/mbeanserver/MXBeanMapping;)V", nullptr, 0, $method(static_cast<void(DefaultMXBeanMappingFactory$TabularMapping::*)($Type*,bool,$TabularType*,$MXBeanMapping*,$MXBeanMapping*)>(&DefaultMXBeanMappingFactory$TabularMapping::init$))},
	{"checkReconstructible", "()V", nullptr, $PUBLIC, nullptr, "java.io.InvalidObjectException"},
	{"fromNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL, nullptr, "java.io.InvalidObjectException"},
	{"toNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL, nullptr, "javax.management.openmbean.OpenDataException"},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$TabularMapping_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$TabularMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "TabularMapping", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "NonNullMXBeanMapping", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$TabularMapping_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$TabularMapping",
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping",
	nullptr,
	_DefaultMXBeanMappingFactory$TabularMapping_FieldInfo_,
	_DefaultMXBeanMappingFactory$TabularMapping_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$TabularMapping_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$TabularMapping($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$TabularMapping));
}

void DefaultMXBeanMappingFactory$TabularMapping::init$($Type* targetType, bool sortedMap, $TabularType* tabularType, $MXBeanMapping* keyConverter, $MXBeanMapping* valueConverter) {
	$DefaultMXBeanMappingFactory$NonNullMXBeanMapping::init$(targetType, tabularType);
	this->sortedMap = sortedMap;
	$set(this, keyMapping, keyConverter);
	$set(this, valueMapping, valueConverter);
}

$Object* DefaultMXBeanMappingFactory$TabularMapping::toNonNullOpenValue(Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($Map, valueMap, $cast($Map, $Util::cast(value)));
	if ($instanceOf($SortedMap, valueMap)) {
		$var($Comparator, comparator, $nc(($cast($SortedMap, valueMap)))->comparator());
		if (comparator != nullptr) {
			$var($String, msg, $str({"Cannot convert SortedMap with non-null comparator: "_s, comparator}));
			$throw($($DefaultMXBeanMappingFactory::openDataException(msg, $$new($IllegalArgumentException, msg))));
		}
	}
	$var($TabularType, tabularType, $cast($TabularType, getOpenType()));
	$var($TabularData, table, $new($TabularDataSupport, tabularType));
	$var($CompositeType, rowType, $nc(tabularType)->getRowType());
	{
		$var($Iterator, i$, $nc($($nc(valueMap)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($Object, openKey, $nc(this->keyMapping)->toOpenValue($($nc(entry)->getKey())));
				$var($Object, openValue, $nc(this->valueMapping)->toOpenValue($($nc(entry)->getValue())));
				$var($CompositeData, row, nullptr);
				$init($DefaultMXBeanMappingFactory);
				$assign(row, $new($CompositeDataSupport, rowType, $DefaultMXBeanMappingFactory::keyValueArray, $$new($ObjectArray, {
					openKey,
					openValue
				})));
				table->put(row);
			}
		}
	}
	return $of(table);
}

$Object* DefaultMXBeanMappingFactory$TabularMapping::fromNonNullOpenValue(Object$* openValue) {
	$useLocalCurrentObjectStackCache();
	$var($TabularData, table, $cast($TabularData, openValue));
	$var($Collection, rows, $cast($Collection, $Util::cast($($nc(table)->values()))));
	$var($Map, valueMap, this->sortedMap ? static_cast<$Map*>($Util::newSortedMap()) : $Util::newInsertionOrderMap());
	{
		$var($Iterator, i$, $nc(rows)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($CompositeData, row, $cast($CompositeData, i$->next()));
			{
				$var($Object, key, $nc(this->keyMapping)->fromOpenValue($($nc(row)->get("key"_s))));
				$var($Object, value, $nc(this->valueMapping)->fromOpenValue($($nc(row)->get("value"_s))));
				if ($nc(valueMap)->put(key, value) != nullptr) {
					$var($String, msg, $str({"Duplicate entry in TabularData: key="_s, key}));
					$throwNew($InvalidObjectException, msg);
				}
			}
		}
	}
	return $of(valueMap);
}

void DefaultMXBeanMappingFactory$TabularMapping::checkReconstructible() {
	$nc(this->keyMapping)->checkReconstructible();
	$nc(this->valueMapping)->checkReconstructible();
}

DefaultMXBeanMappingFactory$TabularMapping::DefaultMXBeanMappingFactory$TabularMapping() {
}

$Class* DefaultMXBeanMappingFactory$TabularMapping::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$TabularMapping, name, initialize, &_DefaultMXBeanMappingFactory$TabularMapping_ClassInfo_, allocate$DefaultMXBeanMappingFactory$TabularMapping);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$TabularMapping::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com