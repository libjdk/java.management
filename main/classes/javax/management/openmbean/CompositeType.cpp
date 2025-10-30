#include <javax/management/openmbean/CompositeType.h>

#include <java/lang/ClassCastException.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

using $OpenTypeArray = $Array<::javax::management::openmbean::OpenType>;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace javax {
	namespace management {
		namespace openmbean {

$FieldInfo _CompositeType_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(CompositeType, serialVersionUID)},
	{"nameToDescription", "Ljava/util/TreeMap;", "Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(CompositeType, nameToDescription)},
	{"nameToType", "Ljava/util/TreeMap;", "Ljava/util/TreeMap<Ljava/lang/String;Ljavax/management/openmbean/OpenType<*>;>;", $PRIVATE, $field(CompositeType, nameToType)},
	{"myHashCode", "Ljava/lang/Integer;", nullptr, $PRIVATE | $TRANSIENT, $field(CompositeType, myHashCode)},
	{"myToString", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(CompositeType, myToString)},
	{"myNamesSet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $TRANSIENT, $field(CompositeType, myNamesSet)},
	{}
};

$MethodInfo _CompositeType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljavax/management/openmbean/OpenType;)V", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljavax/management/openmbean/OpenType<*>;)V", $PUBLIC, $method(static_cast<void(CompositeType::*)($String*,$String*,$StringArray*,$StringArray*,$OpenTypeArray*)>(&CompositeType::init$)), "javax.management.openmbean.OpenDataException"},
	{"checkForEmptyString", "([Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($StringArray*,$String*)>(&CompositeType::checkForEmptyString))},
	{"checkForNullElement", "([Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectArray*,$String*)>(&CompositeType::checkForNullElement))},
	{"containsKey", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getDescription", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "(Ljava/lang/String;)Ljavax/management/openmbean/OpenType;", "(Ljava/lang/String;)Ljavax/management/openmbean/OpenType<*>;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isAssignableFrom", "(Ljavax/management/openmbean/OpenType;)Z", "(Ljavax/management/openmbean/OpenType<*>;)Z", 0},
	{"isValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CompositeType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.openmbean.CompositeType",
	"javax.management.openmbean.OpenType",
	nullptr,
	_CompositeType_FieldInfo_,
	_CompositeType_MethodInfo_,
	"Ljavax/management/openmbean/OpenType<Ljavax/management/openmbean/CompositeData;>;"
};

$Object* allocate$CompositeType($Class* clazz) {
	return $of($alloc(CompositeType));
}

void CompositeType::init$($String* typeName, $String* description, $StringArray* itemNames, $StringArray* itemDescriptions, $OpenTypeArray* itemTypes) {
	$useLocalCurrentObjectStackCache();
	$load($CompositeData);
	$OpenType::init$($($CompositeData::class$->getName()), typeName, description, false);
	$set(this, myHashCode, nullptr);
	$set(this, myToString, nullptr);
	$set(this, myNamesSet, nullptr);
	checkForNullElement(itemNames, "itemNames"_s);
	checkForNullElement(itemDescriptions, "itemDescriptions"_s);
	checkForNullElement(itemTypes, "itemTypes"_s);
	checkForEmptyString(itemNames, "itemNames"_s);
	checkForEmptyString(itemDescriptions, "itemDescriptions"_s);
	if (($nc(itemNames)->length != $nc(itemDescriptions)->length) || ($nc(itemNames)->length != $nc(itemTypes)->length)) {
		$throwNew($IllegalArgumentException, $$str({"Array arguments itemNames[], itemDescriptions[] and itemTypes[] should be of same length (got "_s, $$str(itemNames->length), ", "_s, $$str($nc(itemDescriptions)->length), " and "_s, $$str(itemTypes->length), ")."_s}));
	}
	$set(this, nameToDescription, $new($TreeMap));
	$set(this, nameToType, $new($TreeMap));
	$var($String, key, nullptr);
	for (int32_t i = 0; i < $nc(itemNames)->length; ++i) {
		$assign(key, $nc(itemNames->get(i))->trim());
		if ($nc(this->nameToDescription)->containsKey(key)) {
			$throwNew($OpenDataException, $$str({"Argument\'s element itemNames["_s, $$str(i), "]=\""_s, itemNames->get(i), "\" duplicates a previous item names."_s}));
		}
		$nc(this->nameToDescription)->put(key, $($nc($nc(itemDescriptions)->get(i))->trim()));
		$nc(this->nameToType)->put(key, $nc(itemTypes)->get(i));
	}
}

void CompositeType::checkForNullElement($ObjectArray* arg, $String* argName) {
	$init(CompositeType);
	$useLocalCurrentObjectStackCache();
	if ((arg == nullptr) || ($nc(arg)->length == 0)) {
		$throwNew($IllegalArgumentException, $$str({"Argument "_s, argName, "[] cannot be null or empty."_s}));
	}
	for (int32_t i = 0; i < $nc(arg)->length; ++i) {
		if (arg->get(i) == nullptr) {
			$throwNew($IllegalArgumentException, $$str({"Argument\'s element "_s, argName, "["_s, $$str(i), "] cannot be null."_s}));
		}
	}
}

void CompositeType::checkForEmptyString($StringArray* arg, $String* argName) {
	$init(CompositeType);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(arg)->length; ++i) {
		if ($($nc(arg->get(i))->trim())->isEmpty()) {
			$throwNew($IllegalArgumentException, $$str({"Argument\'s element "_s, argName, "["_s, $$str(i), "] cannot be an empty string."_s}));
		}
	}
}

bool CompositeType::containsKey($String* itemName) {
	if (itemName == nullptr) {
		return false;
	}
	return $nc(this->nameToDescription)->containsKey(itemName);
}

$String* CompositeType::getDescription($String* itemName) {
	if (itemName == nullptr) {
		return nullptr;
	}
	return $cast($String, $nc(this->nameToDescription)->get(itemName));
}

$OpenType* CompositeType::getType($String* itemName) {
	if (itemName == nullptr) {
		return nullptr;
	}
	return $cast($OpenType, $nc(this->nameToType)->get(itemName));
}

$Set* CompositeType::keySet() {
	if (this->myNamesSet == nullptr) {
		$set(this, myNamesSet, $Collections::unmodifiableSet($($nc(this->nameToDescription)->keySet())));
	}
	return this->myNamesSet;
}

bool CompositeType::isValue(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($CompositeData, obj))) {
		return false;
	}
	$var($CompositeData, value, $cast($CompositeData, obj));
	$var(CompositeType, valueType, $nc(value)->getCompositeType());
	return this->isAssignableFrom(valueType);
}

bool CompositeType::isAssignableFrom($OpenType* ot) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(CompositeType, ot))) {
		return false;
	}
	$var(CompositeType, ct, $cast(CompositeType, ot));
	if (!$nc($($nc(ct)->getTypeName()))->equals($(getTypeName()))) {
		return false;
	}
	{
		$var($Iterator, i$, $nc($(keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, key, $cast($String, i$->next()));
			{
				$var($OpenType, otItemType, $nc(ct)->getType(key));
				$var($OpenType, thisItemType, getType(key));
				if (otItemType == nullptr || !$nc(thisItemType)->isAssignableFrom(otItemType)) {
					return false;
				}
			}
		}
	}
	return true;
}

bool CompositeType::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (obj == nullptr) {
		return false;
	}
	$var(CompositeType, other, nullptr);
	try {
		$assign(other, $cast(CompositeType, obj));
	} catch ($ClassCastException& e) {
		return false;
	}
	if (!$nc($(this->getTypeName()))->equals($($nc(other)->getTypeName()))) {
		return false;
	}
	if (!$nc(this->nameToType)->equals($nc(other)->nameToType)) {
		return false;
	}
	return true;
}

int32_t CompositeType::hashCode() {
	$useLocalCurrentObjectStackCache();
	if (this->myHashCode == nullptr) {
		int32_t value = 0;
		value += $nc($(this->getTypeName()))->hashCode();
		{
			$var($Iterator, i$, $nc($($nc(this->nameToDescription)->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, key, $cast($String, i$->next()));
				{
					value += $nc(key)->hashCode();
					value += $nc(($cast($OpenType, $($nc(this->nameToType)->get(key)))))->hashCode();
				}
			}
		}
		$set(this, myHashCode, $Integer::valueOf(value));
	}
	return $nc(this->myHashCode)->intValue();
}

$String* CompositeType::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->myToString == nullptr) {
		$var($StringBuilder, result, $new($StringBuilder));
		result->append($($of(this)->getClass()->getName()));
		result->append("(name="_s);
		result->append($(getTypeName()));
		result->append(",items=("_s);
		int32_t i = 0;
		$var($Iterator, k, $nc($($nc(this->nameToType)->keySet()))->iterator());
		$var($String, key, nullptr);
		while ($nc(k)->hasNext()) {
			$assign(key, $cast($String, k->next()));
			if (i > 0) {
				result->append(","_s);
			}
			result->append("(itemName="_s);
			result->append(key);
			result->append(",itemType="_s);
			result->append($$str({$($nc(($cast($OpenType, $($nc(this->nameToType)->get(key)))))->toString()), ")"_s}));
			++i;
		}
		result->append("))"_s);
		$set(this, myToString, result->toString());
	}
	return this->myToString;
}

CompositeType::CompositeType() {
}

$Class* CompositeType::load$($String* name, bool initialize) {
	$loadClass(CompositeType, name, initialize, &_CompositeType_ClassInfo_, allocate$CompositeType);
	return class$;
}

$Class* CompositeType::class$ = nullptr;

		} // openmbean
	} // management
} // javax