#include <javax/management/openmbean/CompositeDataSupport.h>

#include <java/lang/ArrayStoreException.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/NavigableMap.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/TreeMap.h>
#include <java/util/TreeSet.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/InvalidKeyException.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ArrayStoreException = ::java::lang::ArrayStoreException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $NavigableMap = ::java::util::NavigableMap;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $TreeMap = ::java::util::TreeMap;
using $TreeSet = ::java::util::TreeSet;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $InvalidKeyException = ::javax::management::openmbean::InvalidKeyException;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace javax {
	namespace management {
		namespace openmbean {

$FieldInfo _CompositeDataSupport_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(CompositeDataSupport, serialVersionUID)},
	{"contents", "Ljava/util/SortedMap;", "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(CompositeDataSupport, contents)},
	{"compositeType", "Ljavax/management/openmbean/CompositeType;", nullptr, $PRIVATE | $FINAL, $field(CompositeDataSupport, compositeType)},
	{}
};

$MethodInfo _CompositeDataSupport_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljavax/management/openmbean/CompositeType;[Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(CompositeDataSupport::*)($CompositeType*,$StringArray*,$ObjectArray*)>(&CompositeDataSupport::init$)), "javax.management.openmbean.OpenDataException"},
	{"<init>", "(Ljavax/management/openmbean/CompositeType;Ljava/util/Map;)V", "(Ljavax/management/openmbean/CompositeType;Ljava/util/Map<Ljava/lang/String;*>;)V", $PUBLIC, $method(static_cast<void(CompositeDataSupport::*)($CompositeType*,$Map*)>(&CompositeDataSupport::init$)), "javax.management.openmbean.OpenDataException"},
	{"<init>", "(Ljava/util/SortedMap;Ljavax/management/openmbean/CompositeType;)V", "(Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/Object;>;Ljavax/management/openmbean/CompositeType;)V", $PRIVATE, $method(static_cast<void(CompositeDataSupport::*)($SortedMap*,$CompositeType*)>(&CompositeDataSupport::init$)), "javax.management.openmbean.OpenDataException"},
	{"containsKey", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"contentString", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(CompositeDataSupport::*)()>(&CompositeDataSupport::contentString))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAll", "([Ljava/lang/String;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getCompositeType", "()Ljavax/management/openmbean/CompositeType;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"makeMap", "([Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/SortedMap;", "([Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $STATIC, $method(static_cast<$SortedMap*(*)($StringArray*,$ObjectArray*)>(&CompositeDataSupport::makeMap)), "javax.management.openmbean.OpenDataException"},
	{"makeMap", "(Ljava/util/Map;)Ljava/util/SortedMap;", "(Ljava/util/Map<Ljava/lang/String;*>;)Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $STATIC, $method(static_cast<$SortedMap*(*)($Map*)>(&CompositeDataSupport::makeMap))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<*>;", $PUBLIC},
	{}
};

$ClassInfo _CompositeDataSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.openmbean.CompositeDataSupport",
	"java.lang.Object",
	"javax.management.openmbean.CompositeData,java.io.Serializable",
	_CompositeDataSupport_FieldInfo_,
	_CompositeDataSupport_MethodInfo_
};

$Object* allocate$CompositeDataSupport($Class* clazz) {
	return $of($alloc(CompositeDataSupport));
}

$Object* CompositeDataSupport::clone() {
	 return this->$CompositeData::clone();
}

void CompositeDataSupport::finalize() {
	this->$CompositeData::finalize();
}

void CompositeDataSupport::init$($CompositeType* compositeType, $StringArray* itemNames, $ObjectArray* itemValues) {
	CompositeDataSupport::init$($(makeMap(itemNames, itemValues)), compositeType);
}

$SortedMap* CompositeDataSupport::makeMap($StringArray* itemNames, $ObjectArray* itemValues) {
	$init(CompositeDataSupport);
	$useLocalCurrentObjectStackCache();
	if (itemNames == nullptr || itemValues == nullptr) {
		$throwNew($IllegalArgumentException, "Null itemNames or itemValues"_s);
	}
	if ($nc(itemNames)->length == 0 || $nc(itemValues)->length == 0) {
		$throwNew($IllegalArgumentException, "Empty itemNames or itemValues"_s);
	}
	if ($nc(itemNames)->length != $nc(itemValues)->length) {
		$throwNew($IllegalArgumentException, $$str({"Different lengths: itemNames["_s, $$str(itemNames->length), "], itemValues["_s, $$str(itemValues->length), "]"_s}));
	}
	$var($SortedMap, map, $new($TreeMap));
	for (int32_t i = 0; i < $nc(itemNames)->length; ++i) {
		$var($String, name, itemNames->get(i));
		if (name == nullptr || $nc(name)->equals(""_s)) {
			$throwNew($IllegalArgumentException, "Null or empty item name"_s);
		}
		if (map->containsKey(name)) {
			$throwNew($OpenDataException, $$str({"Duplicate item name "_s, name}));
		}
		map->put(itemNames->get(i), $nc(itemValues)->get(i));
	}
	return map;
}

void CompositeDataSupport::init$($CompositeType* compositeType, $Map* items) {
	CompositeDataSupport::init$($(makeMap(items)), compositeType);
}

$SortedMap* CompositeDataSupport::makeMap($Map* items) {
	$init(CompositeDataSupport);
	$useLocalCurrentObjectStackCache();
	if (items == nullptr || $nc(items)->isEmpty()) {
		$throwNew($IllegalArgumentException, "Null or empty items map"_s);
	}
	$var($SortedMap, map, $new($TreeMap));
	{
		$var($Iterator, i$, $nc($($nc(items)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, key, i$->next());
			{
				if (key == nullptr || $nc($of(key))->equals(""_s)) {
					$throwNew($IllegalArgumentException, "Null or empty item name"_s);
				}
				if (!($instanceOf($String, key))) {
					$throwNew($ArrayStoreException, $$str({"Item name is not string: "_s, key}));
				}
				map->put($cast($String, key), $(items->get(key)));
			}
		}
	}
	return map;
}

void CompositeDataSupport::init$($SortedMap* items, $CompositeType* compositeType) {
	$useLocalCurrentObjectStackCache();
	if (compositeType == nullptr) {
		$throwNew($IllegalArgumentException, "Argument compositeType cannot be null."_s);
	}
	$var($Set, namesFromType, $nc(compositeType)->keySet());
	$var($Set, namesFromItems, $nc(items)->keySet());
	if (!$nc(namesFromType)->equals(namesFromItems)) {
		$var($Set, extraFromType, static_cast<$Set*>(static_cast<$AbstractSet*>($new($TreeSet, static_cast<$Collection*>(namesFromType)))));
		extraFromType->removeAll(namesFromItems);
		$var($Set, extraFromItems, static_cast<$Set*>(static_cast<$AbstractSet*>($new($TreeSet, static_cast<$Collection*>(namesFromItems)))));
		extraFromItems->removeAll(namesFromType);
		bool var$0 = !extraFromType->isEmpty();
		if (var$0 || !extraFromItems->isEmpty()) {
			$throwNew($OpenDataException, $$str({"Item names do not match CompositeType: names in items but not in CompositeType: "_s, extraFromItems, "; names in CompositeType but not in items: "_s, extraFromType}));
		}
	}
	{
		$var($Iterator, i$, $nc(namesFromType)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, name, $cast($String, i$->next()));
			{
				$var($Object, value, items->get(name));
				if (value != nullptr) {
					$var($OpenType, itemType, compositeType->getType(name));
					if (!$nc(itemType)->isValue(value)) {
						$throwNew($OpenDataException, $$str({"Argument value of wrong type for item "_s, name, ": value "_s, value, ", type "_s, itemType}));
					}
				}
			}
		}
	}
	$set(this, compositeType, compositeType);
	$set(this, contents, items);
}

$CompositeType* CompositeDataSupport::getCompositeType() {
	return this->compositeType;
}

$Object* CompositeDataSupport::get($String* key) {
	$useLocalCurrentObjectStackCache();
	if ((key == nullptr) || ($($nc(key)->trim())->equals(""_s))) {
		$throwNew($IllegalArgumentException, "Argument key cannot be a null or empty String."_s);
	}
	if (!$nc(this->contents)->containsKey($($nc(key)->trim()))) {
		$throwNew($InvalidKeyException, $$str({"Argument key=\""_s, $($nc(key)->trim()), "\" is not an existing item name for this CompositeData instance."_s}));
	}
	return $of($nc(this->contents)->get($($nc(key)->trim())));
}

$ObjectArray* CompositeDataSupport::getAll($StringArray* keys) {
	$useLocalCurrentObjectStackCache();
	if ((keys == nullptr) || ($nc(keys)->length == 0)) {
		return $new($ObjectArray, 0);
	}
	$var($ObjectArray, results, $new($ObjectArray, $nc(keys)->length));
	for (int32_t i = 0; i < keys->length; ++i) {
		results->set(i, $(this->get(keys->get(i))));
	}
	return results;
}

bool CompositeDataSupport::containsKey($String* key) {
	if ((key == nullptr) || ($($nc(key)->trim())->equals(""_s))) {
		return false;
	}
	return $nc(this->contents)->containsKey(key);
}

bool CompositeDataSupport::containsValue(Object$* value) {
	return $nc(this->contents)->containsValue(value);
}

$Collection* CompositeDataSupport::values() {
	return $Collections::unmodifiableCollection($($nc(this->contents)->values()));
}

bool CompositeDataSupport::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf($CompositeData, obj))) {
		return false;
	}
	$var($CompositeData, other, $cast($CompositeData, obj));
	if (!$nc($(this->getCompositeType()))->equals($($nc(other)->getCompositeType()))) {
		return false;
	}
	int32_t var$0 = $nc(this->contents)->size();
	if (var$0 != $nc($($nc(other)->values()))->size()) {
		return false;
	}
	{
		$var($Iterator, i$, $nc($($nc(this->contents)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($Object, e1, $nc(entry)->getValue());
				$var($Object, e2, $nc(other)->get($cast($String, $(entry->getKey()))));
				if ($equals(e1, e2)) {
					continue;
				}
				if (e1 == nullptr) {
					return false;
				}
				bool eq = $nc($of(e1))->getClass()->isArray() ? $Arrays::deepEquals($$new($ObjectArray, {e1}), $$new($ObjectArray, {e2})) : $nc($of(e1))->equals(e2);
				if (!eq) {
					return false;
				}
			}
		}
	}
	return true;
}

int32_t CompositeDataSupport::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t hashcode = $nc(this->compositeType)->hashCode();
	{
		$var($Iterator, i$, $nc($($nc(this->contents)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, o, i$->next());
			{
				if ($instanceOf($ObjectArray, o)) {
					hashcode += $Arrays::deepHashCode($cast($ObjectArray, o));
				} else if ($instanceOf($bytes, o)) {
					hashcode += $Arrays::hashCode($cast($bytes, o));
				} else if ($instanceOf($shorts, o)) {
					hashcode += $Arrays::hashCode($cast($shorts, o));
				} else if ($instanceOf($ints, o)) {
					hashcode += $Arrays::hashCode($cast($ints, o));
				} else if ($instanceOf($longs, o)) {
					hashcode += $Arrays::hashCode($cast($longs, o));
				} else if ($instanceOf($chars, o)) {
					hashcode += $Arrays::hashCode($cast($chars, o));
				} else if ($instanceOf($floats, o)) {
					hashcode += $Arrays::hashCode($cast($floats, o));
				} else if ($instanceOf($doubles, o)) {
					hashcode += $Arrays::hashCode($cast($doubles, o));
				} else if ($instanceOf($booleans, o)) {
					hashcode += $Arrays::hashCode($cast($booleans, o));
				} else if (o != nullptr) {
					hashcode += $of(o)->hashCode();
				}
			}
		}
	}
	return hashcode;
}

$String* CompositeDataSupport::toString() {
	$useLocalCurrentObjectStackCache();
	return $$new($StringBuilder)->append($($of(this)->getClass()->getName()))->append("(compositeType="_s)->append($($nc(this->compositeType)->toString()))->append(",contents="_s)->append($(contentString()))->append(")"_s)->toString();
}

$String* CompositeDataSupport::contentString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, "{"_s));
	$var($String, sep, ""_s);
	{
		$var($Iterator, i$, $nc($($nc(this->contents)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				sb->append(sep)->append($cast($String, $($nc(entry)->getKey())))->append("="_s);
				$var($String, s, $Arrays::deepToString($$new($ObjectArray, {$($nc(entry)->getValue())})));
				sb->append($($nc(s)->substring(1, s->length() - 1)));
				$assign(sep, ", "_s);
			}
		}
	}
	sb->append("}"_s);
	return sb->toString();
}

CompositeDataSupport::CompositeDataSupport() {
}

$Class* CompositeDataSupport::load$($String* name, bool initialize) {
	$loadClass(CompositeDataSupport, name, initialize, &_CompositeDataSupport_ClassInfo_, allocate$CompositeDataSupport);
	return class$;
}

$Class* CompositeDataSupport::class$ = nullptr;

		} // openmbean
	} // management
} // javax