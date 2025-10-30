#include <javax/management/ImmutableDescriptor.h>

#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/io/InvalidObjectException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Array.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/NavigableMap.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/TreeMap.h>
#include <javax/management/Descriptor.h>
#include <javax/management/RuntimeOperationsException.h>
#include <jcpp.h>

#undef CASE_INSENSITIVE_ORDER
#undef EMPTY_DESCRIPTOR

using $DescriptorArray = $Array<::javax::management::Descriptor>;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $1Array = ::java::lang::reflect::Array;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $NavigableMap = ::java::util::NavigableMap;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $TreeMap = ::java::util::TreeMap;
using $Descriptor = ::javax::management::Descriptor;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;

namespace javax {
	namespace management {

$FieldInfo _ImmutableDescriptor_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImmutableDescriptor, serialVersionUID)},
	{"names", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ImmutableDescriptor, names)},
	{"values", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ImmutableDescriptor, values)},
	{"hashCode", "I", nullptr, $PRIVATE | $TRANSIENT, $field(ImmutableDescriptor, hashCode$)},
	{"EMPTY_DESCRIPTOR", "Ljavax/management/ImmutableDescriptor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ImmutableDescriptor, EMPTY_DESCRIPTOR)},
	{}
};

$MethodInfo _ImmutableDescriptor_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(ImmutableDescriptor::*)($StringArray*,$ObjectArray*)>(&ImmutableDescriptor::init$))},
	{"<init>", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(ImmutableDescriptor::*)($StringArray*)>(&ImmutableDescriptor::init$))},
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;*>;)V", $PUBLIC, $method(static_cast<void(ImmutableDescriptor::*)($Map*)>(&ImmutableDescriptor::init$))},
	{"checkIllegalFieldName", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&ImmutableDescriptor::checkIllegalFieldName))},
	{"clone", "()Ljavax/management/Descriptor;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"fieldIndex", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ImmutableDescriptor::*)($String*)>(&ImmutableDescriptor::fieldIndex))},
	{"findNonEmpty", "([Ljavax/management/Descriptor;I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($DescriptorArray*,int32_t)>(&ImmutableDescriptor::findNonEmpty))},
	{"getFieldNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getFieldValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"getFieldValues", "([Ljava/lang/String;)[Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT},
	{"getFields", "()[Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"illegal", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&ImmutableDescriptor::illegal))},
	{"isEmpty", "(Ljavax/management/Descriptor;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Descriptor*)>(&ImmutableDescriptor::isEmpty))},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{"makeMap", "([Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/SortedMap;", "([Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/SortedMap<Ljava/lang/String;*>;", $PRIVATE | $STATIC, $method(static_cast<$SortedMap*(*)($StringArray*,$ObjectArray*)>(&ImmutableDescriptor::makeMap))},
	{"makeMap", "([Ljava/lang/String;)Ljava/util/SortedMap;", "([Ljava/lang/String;)Ljava/util/SortedMap<Ljava/lang/String;*>;", $PRIVATE | $STATIC, $method(static_cast<$SortedMap*(*)($StringArray*)>(&ImmutableDescriptor::makeMap))},
	{"nonNullDescriptor", "(Ljavax/management/Descriptor;)Ljavax/management/Descriptor;", nullptr, $STATIC, $method(static_cast<$Descriptor*(*)($Descriptor*)>(&ImmutableDescriptor::nonNullDescriptor))},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(ImmutableDescriptor::*)()>(&ImmutableDescriptor::readResolve)), "java.io.InvalidObjectException"},
	{"removeField", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL},
	{"setField", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL, nullptr, "javax.management.RuntimeOperationsException"},
	{"setFields", "([Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL, nullptr, "javax.management.RuntimeOperationsException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"union", "([Ljavax/management/Descriptor;)Ljavax/management/ImmutableDescriptor;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<ImmutableDescriptor*(*)($DescriptorArray*)>(&ImmutableDescriptor::union$))},
	{"unsupported", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ImmutableDescriptor::unsupported))},
	{}
};

$ClassInfo _ImmutableDescriptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.ImmutableDescriptor",
	"java.lang.Object",
	"javax.management.Descriptor",
	_ImmutableDescriptor_FieldInfo_,
	_ImmutableDescriptor_MethodInfo_
};

$Object* allocate$ImmutableDescriptor($Class* clazz) {
	return $of($alloc(ImmutableDescriptor));
}

ImmutableDescriptor* ImmutableDescriptor::EMPTY_DESCRIPTOR = nullptr;

void ImmutableDescriptor::init$($StringArray* fieldNames, $ObjectArray* fieldValues) {
	ImmutableDescriptor::init$($(static_cast<$Map*>(makeMap(fieldNames, fieldValues))));
}

void ImmutableDescriptor::init$($StringArray* fields) {
	ImmutableDescriptor::init$($(static_cast<$Map*>(makeMap(fields))));
}

void ImmutableDescriptor::init$($Map* fields) {
	$useLocalCurrentObjectStackCache();
	this->hashCode$ = -1;
	if (fields == nullptr) {
		$throwNew($IllegalArgumentException, "Null Map"_s);
	}
	$var($SortedMap, map, $new($TreeMap, $String::CASE_INSENSITIVE_ORDER));
	{
		$var($Iterator, i$, $nc($($nc(fields)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($String, name, $cast($String, $nc(entry)->getKey()));
				if (name == nullptr || $nc(name)->isEmpty()) {
					$throwNew($IllegalArgumentException, "Empty or null field name"_s);
				}
				if (map->containsKey(name)) {
					$throwNew($IllegalArgumentException, $$str({"Duplicate name: "_s, name}));
				}
				map->put(name, $(entry->getValue()));
			}
		}
	}
	int32_t size = map->size();
	$set(this, names, $fcast($StringArray, $nc($(map->keySet()))->toArray($$new($StringArray, size))));
	$set(this, values, $nc($(map->values()))->toArray($$new($ObjectArray, size)));
}

$Object* ImmutableDescriptor::readResolve() {
	$useLocalCurrentObjectStackCache();
	bool bad = false;
	if (this->names == nullptr || this->values == nullptr || $nc(this->names)->length != $nc(this->values)->length) {
		bad = true;
	}
	if (!bad) {
		if ($nc(this->names)->length == 0 && $of(this)->getClass() == ImmutableDescriptor::class$) {
			return $of(ImmutableDescriptor::EMPTY_DESCRIPTOR);
		}
		$var($Comparator, compare, $String::CASE_INSENSITIVE_ORDER);
		$var($String, lastName, ""_s);
		for (int32_t i = 0; i < $nc(this->names)->length; ++i) {
			if ($nc(this->names)->get(i) == nullptr || $nc(compare)->compare(lastName, $nc(this->names)->get(i)) >= 0) {
				bad = true;
				break;
			}
			$assign(lastName, $nc(this->names)->get(i));
		}
	}
	if (bad) {
		$throwNew($InvalidObjectException, "Bad names or values"_s);
	}
	return $of(this);
}

$SortedMap* ImmutableDescriptor::makeMap($StringArray* fieldNames, $ObjectArray* fieldValues) {
	$init(ImmutableDescriptor);
	$useLocalCurrentObjectStackCache();
	if (fieldNames == nullptr || fieldValues == nullptr) {
		$throwNew($IllegalArgumentException, "Null array parameter"_s);
	}
	if ($nc(fieldNames)->length != $nc(fieldValues)->length) {
		$throwNew($IllegalArgumentException, "Different size arrays"_s);
	}
	$var($SortedMap, map, $new($TreeMap, $String::CASE_INSENSITIVE_ORDER));
	for (int32_t i = 0; i < $nc(fieldNames)->length; ++i) {
		$var($String, name, fieldNames->get(i));
		if (name == nullptr || $nc(name)->isEmpty()) {
			$throwNew($IllegalArgumentException, "Empty or null field name"_s);
		}
		$var($Object, old, map->put(name, $nc(fieldValues)->get(i)));
		if (old != nullptr) {
			$throwNew($IllegalArgumentException, $$str({"Duplicate field name: "_s, name}));
		}
	}
	return map;
}

$SortedMap* ImmutableDescriptor::makeMap($StringArray* fields) {
	$init(ImmutableDescriptor);
	$useLocalCurrentObjectStackCache();
	if (fields == nullptr) {
		$throwNew($IllegalArgumentException, "Null fields parameter"_s);
	}
	$var($StringArray, fieldNames, $new($StringArray, $nc(fields)->length));
	$var($StringArray, fieldValues, $new($StringArray, fields->length));
	for (int32_t i = 0; i < fields->length; ++i) {
		$var($String, field, fields->get(i));
		int32_t eq = $nc(field)->indexOf((int32_t)u'=');
		if (eq < 0) {
			$throwNew($IllegalArgumentException, $$str({"Missing = character: "_s, field}));
		}
		fieldNames->set(i, $(field->substring(0, eq)));
		fieldValues->set(i, $(field->substring(eq + 1)));
	}
	return makeMap(fieldNames, fieldValues);
}

ImmutableDescriptor* ImmutableDescriptor::union$($DescriptorArray* descriptors) {
	$init(ImmutableDescriptor);
	$useLocalCurrentObjectStackCache();
	int32_t index = findNonEmpty(descriptors, 0);
	if (index < 0) {
		return ImmutableDescriptor::EMPTY_DESCRIPTOR;
	}
	if ($instanceOf(ImmutableDescriptor, $nc(descriptors)->get(index)) && findNonEmpty(descriptors, index + 1) < 0) {
		return $cast(ImmutableDescriptor, descriptors->get(index));
	}
	$var($Map, map, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap, $String::CASE_INSENSITIVE_ORDER))));
	$var(ImmutableDescriptor, biggestImmutable, ImmutableDescriptor::EMPTY_DESCRIPTOR);
	{
		$var($DescriptorArray, arr$, descriptors);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Descriptor, d, arr$->get(i$));
			{
				if (d != nullptr) {
					$var($StringArray, names, nullptr);
					if ($instanceOf(ImmutableDescriptor, d)) {
						$var(ImmutableDescriptor, id, $cast(ImmutableDescriptor, d));
						$assign(names, id->names);
						if ($of(id)->getClass() == ImmutableDescriptor::class$ && $nc(names)->length > $nc($nc(biggestImmutable)->names)->length) {
							$assign(biggestImmutable, id);
						}
					} else {
						$assign(names, d->getFieldNames());
					}
					{
						$var($StringArray, arr$, names);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($String, n, arr$->get(i$));
							{
								$var($Object, v, d->getFieldValue(n));
								$var($Object, old, map->put(n, v));
								if (old != nullptr) {
									bool equal = false;
									if ($of(old)->getClass()->isArray()) {
										equal = $Arrays::deepEquals($$new($ObjectArray, {old}), $$new($ObjectArray, {v}));
									} else {
										equal = $of(old)->equals(v);
									}
									if (!equal) {
										$var($String, msg, $str({"Inconsistent values for descriptor field "_s, n, ": "_s, old, " :: "_s, v}));
										$throwNew($IllegalArgumentException, msg);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if ($nc($nc(biggestImmutable)->names)->length == map->size()) {
		return biggestImmutable;
	}
	return $new(ImmutableDescriptor, map);
}

bool ImmutableDescriptor::isEmpty($Descriptor* d) {
	$init(ImmutableDescriptor);
	if (d == nullptr) {
		return true;
	} else if ($instanceOf(ImmutableDescriptor, d)) {
		return $nc($nc(($cast(ImmutableDescriptor, d)))->names)->length == 0;
	} else {
		return ($nc($($nc(d)->getFieldNames()))->length == 0);
	}
}

int32_t ImmutableDescriptor::findNonEmpty($DescriptorArray* ds, int32_t start) {
	$init(ImmutableDescriptor);
	for (int32_t i = start; i < $nc(ds)->length; ++i) {
		if (!isEmpty(ds->get(i))) {
			return i;
		}
	}
	return -1;
}

int32_t ImmutableDescriptor::fieldIndex($String* name) {
	return $Arrays::binarySearch(this->names, name, $String::CASE_INSENSITIVE_ORDER);
}

$Object* ImmutableDescriptor::getFieldValue($String* fieldName) {
	$useLocalCurrentObjectStackCache();
	checkIllegalFieldName(fieldName);
	int32_t i = fieldIndex(fieldName);
	if (i < 0) {
		return $of(nullptr);
	}
	$var($Object0, v, $nc(this->values)->get(i));
	if (v == nullptr || !$nc($of(v))->getClass()->isArray()) {
		return $of(v);
	}
	if ($instanceOf($ObjectArray, v)) {
		return $of($nc(($cast($ObjectArray, v)))->clone());
	}
	int32_t len = $1Array::getLength(v);
	$var($Object, a, $1Array::newInstance($nc($of(v))->getClass()->getComponentType(), len));
	$System::arraycopy(v, 0, a, 0, len);
	return $of(a);
}

$StringArray* ImmutableDescriptor::getFields() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, result, $new($StringArray, $nc(this->names)->length));
	for (int32_t i = 0; i < result->length; ++i) {
		$var($Object, value, $nc(this->values)->get(i));
		if (value == nullptr) {
			$assign(value, ""_s);
		} else if (!($instanceOf($String, value))) {
			$assign(value, $str({"("_s, value, ")"_s}));
		}
		result->set(i, $$str({$nc(this->names)->get(i), "="_s, value}));
	}
	return result;
}

$ObjectArray* ImmutableDescriptor::getFieldValues($StringArray* fieldNames) {
	$useLocalCurrentObjectStackCache();
	if (fieldNames == nullptr) {
		return $cast($ObjectArray, $nc(this->values)->clone());
	}
	$var($ObjectArray, result, $new($ObjectArray, $nc(fieldNames)->length));
	for (int32_t i = 0; i < fieldNames->length; ++i) {
		$var($String, name, fieldNames->get(i));
		if (name != nullptr && !name->isEmpty()) {
			result->set(i, $(getFieldValue(name)));
		}
	}
	return result;
}

$StringArray* ImmutableDescriptor::getFieldNames() {
	return $cast($StringArray, $nc(this->names)->clone());
}

bool ImmutableDescriptor::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf($Descriptor, o))) {
		return false;
	}
	$var($StringArray, onames, nullptr);
	if ($instanceOf(ImmutableDescriptor, o)) {
		$assign(onames, $nc(($cast(ImmutableDescriptor, o)))->names);
	} else {
		$assign(onames, $nc(($cast($Descriptor, o)))->getFieldNames());
		$Arrays::sort(onames, $String::CASE_INSENSITIVE_ORDER);
	}
	if ($nc(this->names)->length != $nc(onames)->length) {
		return false;
	}
	for (int32_t i = 0; i < $nc(this->names)->length; ++i) {
		if (!$nc($nc(this->names)->get(i))->equalsIgnoreCase($nc(onames)->get(i))) {
			return false;
		}
	}
	$var($ObjectArray, ovalues, nullptr);
	if ($instanceOf(ImmutableDescriptor, o)) {
		$assign(ovalues, $nc(($cast(ImmutableDescriptor, o)))->values);
	} else {
		$assign(ovalues, $nc(($cast($Descriptor, o)))->getFieldValues(onames));
	}
	return $Arrays::deepEquals(this->values, ovalues);
}

int32_t ImmutableDescriptor::hashCode() {
	if (this->hashCode$ == -1) {
		this->hashCode$ = $Util::hashCode(this->names, this->values);
	}
	return this->hashCode$;
}

$String* ImmutableDescriptor::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, "{"_s));
	for (int32_t i = 0; i < $nc(this->names)->length; ++i) {
		if (i > 0) {
			sb->append(", "_s);
		}
		sb->append($nc(this->names)->get(i))->append("="_s);
		$var($Object, v, $nc(this->values)->get(i));
		if (v != nullptr && $of(v)->getClass()->isArray()) {
			$var($String, s, $Arrays::deepToString($$new($ObjectArray, {v})));
			$assign(s, $nc(s)->substring(1, s->length() - 1));
			$assign(v, s);
		}
		sb->append($($String::valueOf(v)));
	}
	return sb->append("}"_s)->toString();
}

bool ImmutableDescriptor::isValid() {
	return true;
}

$Object* ImmutableDescriptor::clone() {
	return $of(this);
}

void ImmutableDescriptor::setFields($StringArray* fieldNames, $ObjectArray* fieldValues) {
	if (fieldNames == nullptr || fieldValues == nullptr) {
		illegal("Null argument"_s);
	}
	if ($nc(fieldNames)->length != $nc(fieldValues)->length) {
		illegal("Different array sizes"_s);
	}
	for (int32_t i = 0; i < $nc(fieldNames)->length; ++i) {
		checkIllegalFieldName(fieldNames->get(i));
	}
	for (int32_t i = 0; i < $nc(fieldNames)->length; ++i) {
		setField(fieldNames->get(i), $nc(fieldValues)->get(i));
	}
}

void ImmutableDescriptor::setField($String* fieldName, Object$* fieldValue) {
	checkIllegalFieldName(fieldName);
	int32_t i = fieldIndex(fieldName);
	if (i < 0) {
		unsupported();
	}
	$var($Object0, value, $nc(this->values)->get(i));
	if ((value == nullptr) ? (fieldValue != nullptr) : !$nc($of(value))->equals(fieldValue)) {
		unsupported();
	}
}

void ImmutableDescriptor::removeField($String* fieldName) {
	if (fieldName != nullptr && fieldIndex(fieldName) >= 0) {
		unsupported();
	}
}

$Descriptor* ImmutableDescriptor::nonNullDescriptor($Descriptor* d) {
	$init(ImmutableDescriptor);
	if (d == nullptr) {
		return ImmutableDescriptor::EMPTY_DESCRIPTOR;
	} else {
		return d;
	}
}

void ImmutableDescriptor::checkIllegalFieldName($String* name) {
	$init(ImmutableDescriptor);
	if (name == nullptr || $nc(name)->isEmpty()) {
		illegal("Null or empty field name"_s);
	}
}

void ImmutableDescriptor::unsupported() {
	$init(ImmutableDescriptor);
	$var($UnsupportedOperationException, uoe, $new($UnsupportedOperationException, "Descriptor is read-only"_s));
	$throwNew($RuntimeOperationsException, uoe);
}

void ImmutableDescriptor::illegal($String* message) {
	$init(ImmutableDescriptor);
	$var($IllegalArgumentException, iae, $new($IllegalArgumentException, message));
	$throwNew($RuntimeOperationsException, iae);
}

void clinit$ImmutableDescriptor($Class* class$) {
	$assignStatic(ImmutableDescriptor::EMPTY_DESCRIPTOR, $new(ImmutableDescriptor, $$new($StringArray, 0)));
}

ImmutableDescriptor::ImmutableDescriptor() {
}

$Class* ImmutableDescriptor::load$($String* name, bool initialize) {
	$loadClass(ImmutableDescriptor, name, initialize, &_ImmutableDescriptor_ClassInfo_, clinit$ImmutableDescriptor, allocate$ImmutableDescriptor);
	return class$;
}

$Class* ImmutableDescriptor::class$ = nullptr;

	} // management
} // javax