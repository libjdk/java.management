#include <sun/management/LazyCompositeData.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/management/openmbean/ArrayType.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenType.h>
#include <javax/management/openmbean/TabularType.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $ArrayType = ::javax::management::openmbean::ArrayType;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $OpenType = ::javax::management::openmbean::OpenType;
using $TabularType = ::javax::management::openmbean::TabularType;

namespace sun {
	namespace management {

class LazyCompositeData$$Lambda$lambda$isTypeMatched$0 : public $Predicate {
	$class(LazyCompositeData$$Lambda$lambda$isTypeMatched$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($CompositeType* type1, $CompositeType* type2) {
		$set(this, type1, type1);
		$set(this, type2, type2);
	}
	virtual bool test(Object$* item) override {
		 return LazyCompositeData::lambda$isTypeMatched$0(type1, type2, $cast($String, item));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LazyCompositeData$$Lambda$lambda$isTypeMatched$0>());
	}
	$CompositeType* type1 = nullptr;
	$CompositeType* type2 = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LazyCompositeData$$Lambda$lambda$isTypeMatched$0::fieldInfos[3] = {
	{"type1", "Ljavax/management/openmbean/CompositeType;", nullptr, $PUBLIC, $field(LazyCompositeData$$Lambda$lambda$isTypeMatched$0, type1)},
	{"type2", "Ljavax/management/openmbean/CompositeType;", nullptr, $PUBLIC, $field(LazyCompositeData$$Lambda$lambda$isTypeMatched$0, type2)},
	{}
};
$MethodInfo LazyCompositeData$$Lambda$lambda$isTypeMatched$0::methodInfos[3] = {
	{"<init>", "(Ljavax/management/openmbean/CompositeType;Ljavax/management/openmbean/CompositeType;)V", nullptr, $PUBLIC, $method(static_cast<void(LazyCompositeData$$Lambda$lambda$isTypeMatched$0::*)($CompositeType*,$CompositeType*)>(&LazyCompositeData$$Lambda$lambda$isTypeMatched$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo LazyCompositeData$$Lambda$lambda$isTypeMatched$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.management.LazyCompositeData$$Lambda$lambda$isTypeMatched$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* LazyCompositeData$$Lambda$lambda$isTypeMatched$0::load$($String* name, bool initialize) {
	$loadClass(LazyCompositeData$$Lambda$lambda$isTypeMatched$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LazyCompositeData$$Lambda$lambda$isTypeMatched$0::class$ = nullptr;

$FieldInfo _LazyCompositeData_FieldInfo_[] = {
	{"compositeData", "Ljavax/management/openmbean/CompositeData;", nullptr, $PRIVATE, $field(LazyCompositeData, compositeData$)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LazyCompositeData, serialVersionUID)},
	{}
};

$MethodInfo _LazyCompositeData_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LazyCompositeData::*)()>(&LazyCompositeData::init$))},
	{"compositeData", "()Ljavax/management/openmbean/CompositeData;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$CompositeData*(LazyCompositeData::*)()>(&LazyCompositeData::compositeData))},
	{"containsKey", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAll", "([Ljava/lang/String;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getBoolean", "(Ljavax/management/openmbean/CompositeData;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($CompositeData*,$String*)>(&LazyCompositeData::getBoolean))},
	{"getCompositeData", "()Ljavax/management/openmbean/CompositeData;", nullptr, $PROTECTED | $ABSTRACT},
	{"getCompositeType", "()Ljavax/management/openmbean/CompositeType;", nullptr, $PUBLIC},
	{"getInt", "(Ljavax/management/openmbean/CompositeData;Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($CompositeData*,$String*)>(&LazyCompositeData::getInt))},
	{"getLong", "(Ljavax/management/openmbean/CompositeData;Ljava/lang/String;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($CompositeData*,$String*)>(&LazyCompositeData::getLong))},
	{"getString", "(Ljavax/management/openmbean/CompositeData;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($CompositeData*,$String*)>(&LazyCompositeData::getString))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isTypeMatched", "(Ljavax/management/openmbean/CompositeType;Ljavax/management/openmbean/CompositeType;)Z", nullptr, $PROTECTED | $STATIC, $method(static_cast<bool(*)($CompositeType*,$CompositeType*)>(&LazyCompositeData::isTypeMatched))},
	{"isTypeMatched", "(Ljavax/management/openmbean/TabularType;Ljavax/management/openmbean/TabularType;)Z", nullptr, $PROTECTED | $STATIC, $method(static_cast<bool(*)($TabularType*,$TabularType*)>(&LazyCompositeData::isTypeMatched))},
	{"isTypeMatched", "(Ljavax/management/openmbean/ArrayType;Ljavax/management/openmbean/ArrayType;)Z", "(Ljavax/management/openmbean/ArrayType<*>;Ljavax/management/openmbean/ArrayType<*>;)Z", $PROTECTED | $STATIC, $method(static_cast<bool(*)($ArrayType*,$ArrayType*)>(&LazyCompositeData::isTypeMatched))},
	{"isTypeMatched", "(Ljavax/management/openmbean/OpenType;Ljavax/management/openmbean/OpenType;)Z", "(Ljavax/management/openmbean/OpenType<*>;Ljavax/management/openmbean/OpenType<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($OpenType*,$OpenType*)>(&LazyCompositeData::isTypeMatched))},
	{"lambda$isTypeMatched$0", "(Ljavax/management/openmbean/CompositeType;Ljavax/management/openmbean/CompositeType;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($CompositeType*,$CompositeType*,$String*)>(&LazyCompositeData::lambda$isTypeMatched$0))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<*>;", $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.ObjectStreamException"},
	{}
};

$ClassInfo _LazyCompositeData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.management.LazyCompositeData",
	"java.lang.Object",
	"javax.management.openmbean.CompositeData,java.io.Serializable",
	_LazyCompositeData_FieldInfo_,
	_LazyCompositeData_MethodInfo_
};

$Object* allocate$LazyCompositeData($Class* clazz) {
	return $of($alloc(LazyCompositeData));
}

$Object* LazyCompositeData::clone() {
	 return this->$CompositeData::clone();
}

void LazyCompositeData::finalize() {
	this->$CompositeData::finalize();
}

void LazyCompositeData::init$() {
}

bool LazyCompositeData::containsKey($String* key) {
	return $nc($(compositeData()))->containsKey(key);
}

bool LazyCompositeData::containsValue(Object$* value) {
	return $nc($(compositeData()))->containsValue(value);
}

bool LazyCompositeData::equals(Object$* obj) {
	return $nc($(compositeData()))->equals(obj);
}

$Object* LazyCompositeData::get($String* key) {
	return $of($nc($(compositeData()))->get(key));
}

$ObjectArray* LazyCompositeData::getAll($StringArray* keys) {
	return $nc($(compositeData()))->getAll(keys);
}

$CompositeType* LazyCompositeData::getCompositeType() {
	return $nc($(compositeData()))->getCompositeType();
}

int32_t LazyCompositeData::hashCode() {
	return $nc($(compositeData()))->hashCode();
}

$String* LazyCompositeData::toString() {
	return $nc($(compositeData()))->toString();
}

$Collection* LazyCompositeData::values() {
	return $nc($(compositeData()))->values();
}

$CompositeData* LazyCompositeData::compositeData() {
	$synchronized(this) {
		if (this->compositeData$ != nullptr) {
			return this->compositeData$;
		}
		$set(this, compositeData$, getCompositeData());
		return this->compositeData$;
	}
}

$Object* LazyCompositeData::writeReplace() {
	return $of(compositeData());
}

$String* LazyCompositeData::getString($CompositeData* cd, $String* itemName) {
	$init(LazyCompositeData);
	if (cd == nullptr) {
		$throwNew($IllegalArgumentException, "Null CompositeData"_s);
	}
	return $cast($String, $nc(cd)->get(itemName));
}

bool LazyCompositeData::getBoolean($CompositeData* cd, $String* itemName) {
	$init(LazyCompositeData);
	if (cd == nullptr) {
		$throwNew($IllegalArgumentException, "Null CompositeData"_s);
	}
	return $nc(($cast($Boolean, $($nc(cd)->get(itemName)))))->booleanValue();
}

int64_t LazyCompositeData::getLong($CompositeData* cd, $String* itemName) {
	$init(LazyCompositeData);
	if (cd == nullptr) {
		$throwNew($IllegalArgumentException, "Null CompositeData"_s);
	}
	return $nc(($cast($Long, $($nc(cd)->get(itemName)))))->longValue();
}

int32_t LazyCompositeData::getInt($CompositeData* cd, $String* itemName) {
	$init(LazyCompositeData);
	if (cd == nullptr) {
		$throwNew($IllegalArgumentException, "Null CompositeData"_s);
	}
	return $nc(($cast($Integer, $($nc(cd)->get(itemName)))))->intValue();
}

bool LazyCompositeData::isTypeMatched($CompositeType* type1, $CompositeType* type2) {
	$init(LazyCompositeData);
	$useLocalCurrentObjectStackCache();
	if (type1 == type2) {
		return true;
	}
	$var($Set, allItems, $nc(type1)->keySet());
	if (!$nc($($nc(type2)->keySet()))->containsAll(allItems)) {
		return false;
	}
	return $nc($($nc(allItems)->stream()))->allMatch(static_cast<$Predicate*>($$new(LazyCompositeData$$Lambda$lambda$isTypeMatched$0, type1, type2)));
}

bool LazyCompositeData::isTypeMatched($TabularType* type1, $TabularType* type2) {
	$init(LazyCompositeData);
	$useLocalCurrentObjectStackCache();
	if (type1 == type2) {
		return true;
	}
	$var($List, list1, $nc(type1)->getIndexNames());
	$var($List, list2, $nc(type2)->getIndexNames());
	if (!$nc(list1)->equals(list2)) {
		return false;
	}
	$var($CompositeType, var$0, type1->getRowType());
	return isTypeMatched(var$0, $(type2->getRowType()));
}

bool LazyCompositeData::isTypeMatched($ArrayType* type1, $ArrayType* type2) {
	$init(LazyCompositeData);
	$useLocalCurrentObjectStackCache();
	if (type1 == type2) {
		return true;
	}
	int32_t dim1 = $nc(type1)->getDimension();
	int32_t dim2 = $nc(type2)->getDimension();
	if (dim1 != dim2) {
		return false;
	}
	$var($OpenType, var$0, type1->getElementOpenType());
	return isTypeMatched(var$0, $(type2->getElementOpenType()));
}

bool LazyCompositeData::isTypeMatched($OpenType* ot1, $OpenType* ot2) {
	$init(LazyCompositeData);
	if ($instanceOf($CompositeType, ot1)) {
		if (!($instanceOf($CompositeType, ot2))) {
			return false;
		}
		if (!isTypeMatched($cast($CompositeType, ot1), $cast($CompositeType, ot2))) {
			return false;
		}
	} else if ($instanceOf($TabularType, ot1)) {
		if (!($instanceOf($TabularType, ot2))) {
			return false;
		}
		if (!isTypeMatched($cast($TabularType, ot1), $cast($TabularType, ot2))) {
			return false;
		}
	} else if ($instanceOf($ArrayType, ot1)) {
		if (!($instanceOf($ArrayType, ot2))) {
			return false;
		}
		if (!isTypeMatched($cast($ArrayType, ot1), $cast($ArrayType, ot2))) {
			return false;
		}
	} else if (!$nc(ot1)->equals(ot2)) {
		return false;
	}
	return true;
}

bool LazyCompositeData::lambda$isTypeMatched$0($CompositeType* type1, $CompositeType* type2, $String* item) {
	$init(LazyCompositeData);
	$useLocalCurrentObjectStackCache();
	$var($OpenType, var$0, $nc(type1)->getType(item));
	return isTypeMatched(var$0, $($nc(type2)->getType(item)));
}

LazyCompositeData::LazyCompositeData() {
}

$Class* LazyCompositeData::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LazyCompositeData$$Lambda$lambda$isTypeMatched$0::classInfo$.name)) {
			return LazyCompositeData$$Lambda$lambda$isTypeMatched$0::load$(name, initialize);
		}
	}
	$loadClass(LazyCompositeData, name, initialize, &_LazyCompositeData_ClassInfo_, allocate$LazyCompositeData);
	return class$;
}

$Class* LazyCompositeData::class$ = nullptr;

	} // management
} // sun