#include <javax/management/openmbean/TabularDataSupport.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/ArrayStoreException.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/InternalError.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/InvalidKeyException.h>
#include <javax/management/openmbean/InvalidOpenTypeException.h>
#include <javax/management/openmbean/KeyAlreadyExistsException.h>
#include <javax/management/openmbean/OpenType.h>
#include <javax/management/openmbean/TabularData.h>
#include <javax/management/openmbean/TabularType.h>
#include <jdk/internal/access/JavaObjectInputStreamAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

using $CompositeDataArray = $Array<::javax::management::openmbean::CompositeData>;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ArrayStoreException = ::java::lang::ArrayStoreException;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $InvalidKeyException = ::javax::management::openmbean::InvalidKeyException;
using $InvalidOpenTypeException = ::javax::management::openmbean::InvalidOpenTypeException;
using $KeyAlreadyExistsException = ::javax::management::openmbean::KeyAlreadyExistsException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $TabularData = ::javax::management::openmbean::TabularData;
using $TabularType = ::javax::management::openmbean::TabularType;
using $JavaObjectInputStreamAccess = ::jdk::internal::access::JavaObjectInputStreamAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace javax {
	namespace management {
		namespace openmbean {

$FieldInfo _TabularDataSupport_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(TabularDataSupport, serialVersionUID)},
	{"dataMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljavax/management/openmbean/CompositeData;>;", $PRIVATE, $field(TabularDataSupport, dataMap)},
	{"tabularType", "Ljavax/management/openmbean/TabularType;", nullptr, $PRIVATE | $FINAL, $field(TabularDataSupport, tabularType)},
	{"indexNamesArray", "[Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(TabularDataSupport, indexNamesArray)},
	{}
};

$MethodInfo _TabularDataSupport_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljavax/management/openmbean/TabularType;)V", nullptr, $PUBLIC, $method(static_cast<void(TabularDataSupport::*)($TabularType*)>(&TabularDataSupport::init$))},
	{"<init>", "(Ljavax/management/openmbean/TabularType;IF)V", nullptr, $PUBLIC, $method(static_cast<void(TabularDataSupport::*)($TabularType*,int32_t,float)>(&TabularDataSupport::init$))},
	{"calculateIndex", "(Ljavax/management/openmbean/CompositeData;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"checkKeyType", "([Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(TabularDataSupport::*)($ObjectArray*)>(&TabularDataSupport::checkKeyType))},
	{"checkValueAndIndex", "(Ljavax/management/openmbean/CompositeData;)Ljava/util/List;", "(Ljavax/management/openmbean/CompositeData;)Ljava/util/List<*>;", $PRIVATE, $method(static_cast<$List*(TabularDataSupport::*)($CompositeData*)>(&TabularDataSupport::checkValueAndIndex))},
	{"checkValueType", "(Ljavax/management/openmbean/CompositeData;)V", nullptr, $PRIVATE, $method(static_cast<void(TabularDataSupport::*)($CompositeData*)>(&TabularDataSupport::checkValueType))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsKey", "([Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsValue", "(Ljavax/management/openmbean/CompositeData;)Z", nullptr, $PUBLIC},
	{"containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"get", "([Ljava/lang/Object;)Ljavax/management/openmbean/CompositeData;", nullptr, $PUBLIC},
	{"getTabularType", "()Ljavax/management/openmbean/TabularType;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"internalCalculateIndex", "(Ljavax/management/openmbean/CompositeData;)Ljava/util/List;", "(Ljavax/management/openmbean/CompositeData;)Ljava/util/List<*>;", $PRIVATE, $method(static_cast<$List*(TabularDataSupport::*)($CompositeData*)>(&TabularDataSupport::internalCalculateIndex))},
	{"internalPut", "(Ljavax/management/openmbean/CompositeData;)Ljavax/management/openmbean/CompositeData;", nullptr, $PRIVATE, $method(static_cast<$CompositeData*(TabularDataSupport::*)($CompositeData*)>(&TabularDataSupport::internalPut))},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Object;>;", $PUBLIC},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"put", "(Ljavax/management/openmbean/CompositeData;)V", nullptr, $PUBLIC},
	{"putAll", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC},
	{"putAll", "([Ljavax/management/openmbean/CompositeData;)V", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(TabularDataSupport::*)($ObjectInputStream*)>(&TabularDataSupport::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"remove", "([Ljava/lang/Object;)Ljavax/management/openmbean/CompositeData;", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Object;>;", $PUBLIC},
	{}
};

$ClassInfo _TabularDataSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.openmbean.TabularDataSupport",
	"java.lang.Object",
	"javax.management.openmbean.TabularData,java.util.Map,java.lang.Cloneable,java.io.Serializable",
	_TabularDataSupport_FieldInfo_,
	_TabularDataSupport_MethodInfo_,
	"Ljava/lang/Object;Ljavax/management/openmbean/TabularData;Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;Ljava/lang/Cloneable;Ljava/io/Serializable;"
};

$Object* allocate$TabularDataSupport($Class* clazz) {
	return $of($alloc(TabularDataSupport));
}

void TabularDataSupport::finalize() {
	this->$TabularData::finalize();
}

void TabularDataSupport::init$($TabularType* tabularType) {
	TabularDataSupport::init$(tabularType, 16, 0.75f);
}

void TabularDataSupport::init$($TabularType* tabularType, int32_t initialCapacity, float loadFactor) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (tabularType == nullptr) {
		$throwNew($IllegalArgumentException, "Argument tabularType cannot be null."_s);
	}
	$set(this, tabularType, tabularType);
	$var($List, tmpNames, $nc(tabularType)->getIndexNames());
	$set(this, indexNamesArray, $fcast($StringArray, $nc(tmpNames)->toArray($$new($StringArray, tmpNames->size()))));
	$var($String, useHashMapProp, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "jmx.tabular.data.hash.map"_s)))));
	bool useHashMap = "true"_s->equalsIgnoreCase(useHashMapProp);
	$set(this, dataMap, useHashMap ? static_cast<$Map*>($new($HashMap, initialCapacity, loadFactor)) : static_cast<$Map*>($new($LinkedHashMap, initialCapacity, loadFactor)));
}

$TabularType* TabularDataSupport::getTabularType() {
	return this->tabularType;
}

$ObjectArray* TabularDataSupport::calculateIndex($CompositeData* value) {
	checkValueType(value);
	return $nc($(internalCalculateIndex(value)))->toArray();
}

bool TabularDataSupport::containsKey(Object$* key) {
	$var($ObjectArray, k, nullptr);
	try {
		$assign(k, $cast($ObjectArray, key));
	} catch ($ClassCastException& e) {
		return false;
	}
	return this->containsKey(k);
}

bool TabularDataSupport::containsKey($ObjectArray* key) {
	return (key == nullptr ? false : $nc(this->dataMap)->containsKey($($Arrays::asList(key))));
}

bool TabularDataSupport::containsValue($CompositeData* value) {
	return $nc(this->dataMap)->containsValue(value);
}

bool TabularDataSupport::containsValue(Object$* value) {
	return $nc(this->dataMap)->containsValue(value);
}

$Object* TabularDataSupport::get(Object$* key) {
	return $of(get($cast($ObjectArray, key)));
}

$CompositeData* TabularDataSupport::get($ObjectArray* key) {
	checkKeyType(key);
	return $cast($CompositeData, $nc(this->dataMap)->get($($Arrays::asList(key))));
}

$Object* TabularDataSupport::put(Object$* key, Object$* value) {
	internalPut($cast($CompositeData, value));
	return $of(value);
}

void TabularDataSupport::put($CompositeData* value) {
	internalPut(value);
}

$CompositeData* TabularDataSupport::internalPut($CompositeData* value) {
	$var($List, index, checkValueAndIndex(value));
	return $cast($CompositeData, $nc(this->dataMap)->put(index, value));
}

$Object* TabularDataSupport::remove(Object$* key) {
	return $of(remove($cast($ObjectArray, key)));
}

$CompositeData* TabularDataSupport::remove($ObjectArray* key) {
	checkKeyType(key);
	return $cast($CompositeData, $nc(this->dataMap)->remove($($Arrays::asList(key))));
}

void TabularDataSupport::putAll($Map* t) {
	$useLocalCurrentObjectStackCache();
	if ((t == nullptr) || ($nc(t)->size() == 0)) {
		return;
	}
	$var($CompositeDataArray, values, nullptr);
	try {
		$assign(values, $fcast($CompositeDataArray, $nc($($nc(t)->values()))->toArray($$new($CompositeDataArray, t->size()))));
	} catch ($ArrayStoreException& e) {
		$throwNew($ClassCastException, "Map argument t contains values which are not instances of {@code CompositeData}"_s);
	}
	putAll(values);
}

void TabularDataSupport::putAll($CompositeDataArray* values) {
	$useLocalCurrentObjectStackCache();
	if ((values == nullptr) || ($nc(values)->length == 0)) {
		return;
	}
	$var($List, indexes, $new($ArrayList, $nc(values)->length + 1));
	$var($List, index, nullptr);
	for (int32_t i = 0; i < $nc(values)->length; ++i) {
		$assign(index, checkValueAndIndex(values->get(i)));
		if (indexes->contains(index)) {
			$throwNew($KeyAlreadyExistsException, $$str({"Argument elements values["_s, $$str(i), "] and values["_s, $$str(indexes->indexOf(index)), "] have the same indexes, calculated according to this TabularData instance\'s tabularType."_s}));
		}
		indexes->add(index);
	}
	for (int32_t i = 0; i < $nc(values)->length; ++i) {
		$nc(this->dataMap)->put($(indexes->get(i)), values->get(i));
	}
}

void TabularDataSupport::clear() {
	$nc(this->dataMap)->clear();
}

int32_t TabularDataSupport::size() {
	return $nc(this->dataMap)->size();
}

bool TabularDataSupport::isEmpty() {
	return (this->size() == 0);
}

$Set* TabularDataSupport::keySet() {
	return $nc(this->dataMap)->keySet();
}

$Collection* TabularDataSupport::values() {
	return $cast($Collection, $Util::cast($($nc(this->dataMap)->values())));
}

$Set* TabularDataSupport::entrySet() {
	return $cast($Set, $Util::cast($($nc(this->dataMap)->entrySet())));
}

$Object* TabularDataSupport::clone() {
	$useLocalCurrentObjectStackCache();
	try {
		$var(TabularDataSupport, c, $cast(TabularDataSupport, $TabularData::clone()));
		$set($nc(c), dataMap, $new($HashMap, c->dataMap));
		return $of(c);
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, $(e->toString()), e);
	}
	$shouldNotReachHere();
}

bool TabularDataSupport::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (obj == nullptr) {
		return false;
	}
	$var($TabularData, other, nullptr);
	try {
		$assign(other, $cast($TabularData, obj));
	} catch ($ClassCastException& e) {
		return false;
	}
	if (!$nc($(this->getTabularType()))->equals($($nc(other)->getTabularType()))) {
		return false;
	}
	int32_t var$0 = this->size();
	if (var$0 != $nc(other)->size()) {
		return false;
	}
	{
		$var($Iterator, i$, $nc($($nc(this->dataMap)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($CompositeData, value, $cast($CompositeData, i$->next()));
			{
				if (!$nc(other)->containsValue(value)) {
					return false;
				}
			}
		}
	}
	return true;
}

int32_t TabularDataSupport::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t result = 0;
	result += $nc(this->tabularType)->hashCode();
	{
		$var($Iterator, i$, $nc($(values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, value, i$->next());
			result += $nc($of(value))->hashCode();
		}
	}
	return result;
}

$String* TabularDataSupport::toString() {
	$useLocalCurrentObjectStackCache();
	return $$new($StringBuilder)->append($($of(this)->getClass()->getName()))->append("(tabularType="_s)->append($($nc(this->tabularType)->toString()))->append(",contents="_s)->append($($nc($of(this->dataMap))->toString()))->append(")"_s)->toString();
}

$List* TabularDataSupport::internalCalculateIndex($CompositeData* value) {
	$useLocalCurrentObjectStackCache();
	return $Collections::unmodifiableList($($Arrays::asList($($nc(value)->getAll(this->indexNamesArray)))));
}

void TabularDataSupport::checkKeyType($ObjectArray* key) {
	$useLocalCurrentObjectStackCache();
	if ((key == nullptr) || ($nc(key)->length == 0)) {
		$throwNew($NullPointerException, "Argument key cannot be null or empty."_s);
	}
	if ($nc(key)->length != $nc(this->indexNamesArray)->length) {
		$throwNew($InvalidKeyException, $$str({"Argument key\'s length="_s, $$str(key->length), " is different from the number of item values, which is "_s, $$str($nc(this->indexNamesArray)->length), ", specified for the indexing rows in this TabularData instance."_s}));
	}
	$var($OpenType, keyElementType, nullptr);
	for (int32_t i = 0; i < $nc(key)->length; ++i) {
		$assign(keyElementType, $nc($($nc(this->tabularType)->getRowType()))->getType($nc(this->indexNamesArray)->get(i)));
		if ((key->get(i) != nullptr) && (!$nc(keyElementType)->isValue(key->get(i)))) {
			$throwNew($InvalidKeyException, $$str({"Argument element key["_s, $$str(i), "] is not a value for the open type expected for this element of the index, whose name is \""_s, $nc(this->indexNamesArray)->get(i), "\" and whose open type is "_s, keyElementType}));
		}
	}
}

void TabularDataSupport::checkValueType($CompositeData* value) {
	$useLocalCurrentObjectStackCache();
	if (value == nullptr) {
		$throwNew($NullPointerException, "Argument value cannot be null."_s);
	}
	if (!$nc($($nc(this->tabularType)->getRowType()))->isValue(value)) {
		$var($String, var$1, $$str({"Argument value\'s composite type ["_s, $($nc(value)->getCompositeType()), "] is not assignable to this TabularData instance\'s row type ["_s}));
		$var($String, var$0, $$concat(var$1, $($nc(this->tabularType)->getRowType())));
		$throwNew($InvalidOpenTypeException, $$concat(var$0, "]."));
	}
}

$List* TabularDataSupport::checkValueAndIndex($CompositeData* value) {
	checkValueType(value);
	$var($List, index, internalCalculateIndex(value));
	if ($nc(this->dataMap)->containsKey(index)) {
		$throwNew($KeyAlreadyExistsException, "Argument value\'s index, calculated according to this TabularData instance\'s tabularType, already refers to a value in this table."_s);
	}
	return index;
}

void TabularDataSupport::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$nc(in)->defaultReadObject();
	$var($List, tmpNames, $nc(this->tabularType)->getIndexNames());
	int32_t size = $nc(tmpNames)->size();
	$load($StringArray);
	$nc($($SharedSecrets::getJavaObjectInputStreamAccess()))->checkArray(in, $getClass($StringArray), size);
	$set(this, indexNamesArray, $fcast($StringArray, tmpNames->toArray($$new($StringArray, size))));
}

TabularDataSupport::TabularDataSupport() {
}

$Class* TabularDataSupport::load$($String* name, bool initialize) {
	$loadClass(TabularDataSupport, name, initialize, &_TabularDataSupport_ClassInfo_, allocate$TabularDataSupport);
	return class$;
}

$Class* TabularDataSupport::class$ = nullptr;

		} // openmbean
	} // management
} // javax