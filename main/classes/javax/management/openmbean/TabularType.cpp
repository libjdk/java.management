#include <javax/management/openmbean/TabularType.h>

#include <java/lang/ClassCastException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <javax/management/openmbean/TabularData.h>
#include <jcpp.h>

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $TabularData = ::javax::management::openmbean::TabularData;

namespace javax {
	namespace management {
		namespace openmbean {

$FieldInfo _TabularType_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(TabularType, serialVersionUID)},
	{"rowType", "Ljavax/management/openmbean/CompositeType;", nullptr, $PRIVATE, $field(TabularType, rowType)},
	{"indexNames", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(TabularType, indexNames)},
	{"myHashCode", "Ljava/lang/Integer;", nullptr, $PRIVATE | $TRANSIENT, $field(TabularType, myHashCode)},
	{"myToString", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(TabularType, myToString)},
	{}
};

$MethodInfo _TabularType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/CompositeType;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TabularType::*)($String*,$String*,$CompositeType*,$StringArray*)>(&TabularType::init$)), "javax.management.openmbean.OpenDataException"},
	{"checkForEmptyString", "([Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($StringArray*,$String*)>(&TabularType::checkForEmptyString))},
	{"checkForNullElement", "([Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectArray*,$String*)>(&TabularType::checkForNullElement))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getIndexNames", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"getRowType", "()Ljavax/management/openmbean/CompositeType;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isAssignableFrom", "(Ljavax/management/openmbean/OpenType;)Z", "(Ljavax/management/openmbean/OpenType<*>;)Z", 0},
	{"isValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TabularType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.openmbean.TabularType",
	"javax.management.openmbean.OpenType",
	nullptr,
	_TabularType_FieldInfo_,
	_TabularType_MethodInfo_,
	"Ljavax/management/openmbean/OpenType<Ljavax/management/openmbean/TabularData;>;"
};

$Object* allocate$TabularType($Class* clazz) {
	return $of($alloc(TabularType));
}

void TabularType::init$($String* typeName, $String* description, $CompositeType* rowType, $StringArray* indexNames) {
	$useLocalCurrentObjectStackCache();
	$load($TabularData);
	$OpenType::init$($($TabularData::class$->getName()), typeName, description, false);
	$set(this, myHashCode, nullptr);
	$set(this, myToString, nullptr);
	if (rowType == nullptr) {
		$throwNew($IllegalArgumentException, "Argument rowType cannot be null."_s);
	}
	checkForNullElement(indexNames, "indexNames"_s);
	checkForEmptyString(indexNames, "indexNames"_s);
	for (int32_t i = 0; i < $nc(indexNames)->length; ++i) {
		if (!$nc(rowType)->containsKey(indexNames->get(i))) {
			$throwNew($OpenDataException, $$str({"Argument\'s element value indexNames["_s, $$str(i), "]=\""_s, indexNames->get(i), "\" is not a valid item name for rowType."_s}));
		}
	}
	$set(this, rowType, rowType);
	$var($List, tmpList, $new($ArrayList, $nc(indexNames)->length + 1));
	for (int32_t i = 0; i < $nc(indexNames)->length; ++i) {
		tmpList->add(indexNames->get(i));
	}
	$set(this, indexNames, $Collections::unmodifiableList(tmpList));
}

void TabularType::checkForNullElement($ObjectArray* arg, $String* argName) {
	$init(TabularType);
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

void TabularType::checkForEmptyString($StringArray* arg, $String* argName) {
	$init(TabularType);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(arg)->length; ++i) {
		if ($($nc(arg->get(i))->trim())->isEmpty()) {
			$throwNew($IllegalArgumentException, $$str({"Argument\'s element "_s, argName, "["_s, $$str(i), "] cannot be an empty string."_s}));
		}
	}
}

$CompositeType* TabularType::getRowType() {
	return this->rowType;
}

$List* TabularType::getIndexNames() {
	return this->indexNames;
}

bool TabularType::isValue(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($TabularData, obj))) {
		return false;
	}
	$var($TabularData, value, $cast($TabularData, obj));
	$var(TabularType, valueType, $nc(value)->getTabularType());
	return isAssignableFrom(valueType);
}

bool TabularType::isAssignableFrom($OpenType* ot) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(TabularType, ot))) {
		return false;
	}
	$var(TabularType, tt, $cast(TabularType, ot));
	bool var$0 = !$nc($(getTypeName()))->equals($($nc(tt)->getTypeName()));
	if (var$0 || !$nc($(getIndexNames()))->equals($($nc(tt)->getIndexNames()))) {
		return false;
	}
	return $nc($(getRowType()))->isAssignableFrom($($nc(tt)->getRowType()));
}

bool TabularType::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (obj == nullptr) {
		return false;
	}
	$var(TabularType, other, nullptr);
	try {
		$assign(other, $cast(TabularType, obj));
	} catch ($ClassCastException& e) {
		return false;
	}
	if (!$nc($(this->getTypeName()))->equals($($nc(other)->getTypeName()))) {
		return false;
	}
	if (!$nc(this->rowType)->equals($nc(other)->rowType)) {
		return false;
	}
	if (!$nc(this->indexNames)->equals($nc(other)->indexNames)) {
		return false;
	}
	return true;
}

int32_t TabularType::hashCode() {
	$useLocalCurrentObjectStackCache();
	if (this->myHashCode == nullptr) {
		int32_t value = 0;
		value += $nc($(this->getTypeName()))->hashCode();
		value += $nc(this->rowType)->hashCode();
		{
			$var($Iterator, i$, $nc(this->indexNames)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, index, $cast($String, i$->next()));
				value += $nc(index)->hashCode();
			}
		}
		$set(this, myHashCode, $Integer::valueOf(value));
	}
	return $nc(this->myHashCode)->intValue();
}

$String* TabularType::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->myToString == nullptr) {
		$var($StringBuilder, result, $$new($StringBuilder)->append($($of(this)->getClass()->getName()))->append("(name="_s)->append($(getTypeName()))->append(",rowType="_s)->append($($nc(this->rowType)->toString()))->append(",indexNames=("_s));
		$var($String, sep, ""_s);
		{
			$var($Iterator, i$, $nc(this->indexNames)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, index, $cast($String, i$->next()));
				{
					result->append(sep)->append(index);
					$assign(sep, ","_s);
				}
			}
		}
		result->append("))"_s);
		$set(this, myToString, result->toString());
	}
	return this->myToString;
}

TabularType::TabularType() {
}

$Class* TabularType::load$($String* name, bool initialize) {
	$loadClass(TabularType, name, initialize, &_TabularType_ClassInfo_, allocate$TabularType);
	return class$;
}

$Class* TabularType::class$ = nullptr;

		} // openmbean
	} // management
} // javax