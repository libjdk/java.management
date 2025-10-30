#include <javax/management/openmbean/SimpleType.h>

#include <java/io/InvalidObjectException.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/util/AbstractMap.h>
#include <java/util/Date.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/management/ObjectName.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

#undef BIGDECIMAL
#undef BIGINTEGER
#undef BOOLEAN
#undef BYTE
#undef CHARACTER
#undef DATE
#undef DOUBLE
#undef FLOAT
#undef INTEGER
#undef LONG
#undef OBJECTNAME
#undef SHORT
#undef STRING
#undef VOID

using $SimpleTypeArray = $Array<::javax::management::openmbean::SimpleType>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Void = ::java::lang::Void;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $AbstractMap = ::java::util::AbstractMap;
using $Date = ::java::util::Date;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $ObjectName = ::javax::management::ObjectName;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace javax {
	namespace management {
		namespace openmbean {

$FieldInfo _SimpleType_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SimpleType, serialVersionUID)},
	{"VOID", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, VOID)},
	{"BOOLEAN", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Boolean;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, BOOLEAN)},
	{"CHARACTER", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Character;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, CHARACTER)},
	{"BYTE", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Byte;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, BYTE)},
	{"SHORT", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Short;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, SHORT)},
	{"INTEGER", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, INTEGER)},
	{"LONG", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Long;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, LONG)},
	{"FLOAT", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Float;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, FLOAT)},
	{"DOUBLE", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/Double;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, DOUBLE)},
	{"STRING", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/lang/String;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, STRING)},
	{"BIGDECIMAL", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/math/BigDecimal;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, BIGDECIMAL)},
	{"BIGINTEGER", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/math/BigInteger;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, BIGINTEGER)},
	{"DATE", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljava/util/Date;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, DATE)},
	{"OBJECTNAME", "Ljavax/management/openmbean/SimpleType;", "Ljavax/management/openmbean/SimpleType<Ljavax/management/ObjectName;>;", $PUBLIC | $STATIC | $FINAL, $staticField(SimpleType, OBJECTNAME)},
	{"typeArray", "[Ljavax/management/openmbean/SimpleType;", "[Ljavax/management/openmbean/SimpleType<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(SimpleType, typeArray)},
	{"myHashCode", "Ljava/lang/Integer;", nullptr, $PRIVATE | $TRANSIENT, $field(SimpleType, myHashCode)},
	{"myToString", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(SimpleType, myToString)},
	{"canonicalTypes", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/management/openmbean/SimpleType<*>;Ljavax/management/openmbean/SimpleType<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SimpleType, canonicalTypes)},
	{}
};

$MethodInfo _SimpleType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<TT;>;)V", $PRIVATE, $method(static_cast<void(SimpleType::*)($Class*)>(&SimpleType::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(SimpleType::*)()>(&SimpleType::readResolve)), "java.io.ObjectStreamException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SimpleType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.management.openmbean.SimpleType",
	"javax.management.openmbean.OpenType",
	nullptr,
	_SimpleType_FieldInfo_,
	_SimpleType_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljavax/management/openmbean/OpenType<TT;>;"
};

$Object* allocate$SimpleType($Class* clazz) {
	return $of($alloc(SimpleType));
}

SimpleType* SimpleType::VOID = nullptr;
SimpleType* SimpleType::BOOLEAN = nullptr;
SimpleType* SimpleType::CHARACTER = nullptr;
SimpleType* SimpleType::BYTE = nullptr;
SimpleType* SimpleType::SHORT = nullptr;
SimpleType* SimpleType::INTEGER = nullptr;
SimpleType* SimpleType::LONG = nullptr;
SimpleType* SimpleType::FLOAT = nullptr;
SimpleType* SimpleType::DOUBLE = nullptr;
SimpleType* SimpleType::STRING = nullptr;
SimpleType* SimpleType::BIGDECIMAL = nullptr;
SimpleType* SimpleType::BIGINTEGER = nullptr;
SimpleType* SimpleType::DATE = nullptr;
SimpleType* SimpleType::OBJECTNAME = nullptr;
$SimpleTypeArray* SimpleType::typeArray = nullptr;
$Map* SimpleType::canonicalTypes = nullptr;

void SimpleType::init$($Class* valueClass) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(valueClass)->getName());
	$var($String, var$1, valueClass->getName());
	$OpenType::init$(var$0, var$1, $(valueClass->getName()), false);
	$set(this, myHashCode, nullptr);
	$set(this, myToString, nullptr);
}

bool SimpleType::isValue(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (obj == nullptr) {
		return false;
	}
	return $nc($(this->getClassName()))->equals($($nc($of(obj))->getClass()->getName()));
}

bool SimpleType::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(SimpleType, obj))) {
		return false;
	}
	$var(SimpleType, other, $cast(SimpleType, obj));
	return $nc($(this->getClassName()))->equals($($nc(other)->getClassName()));
}

int32_t SimpleType::hashCode() {
	if (this->myHashCode == nullptr) {
		$set(this, myHashCode, $Integer::valueOf($nc($(this->getClassName()))->hashCode()));
	}
	return $nc(this->myHashCode)->intValue();
}

$String* SimpleType::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->myToString == nullptr) {
		$var($String, var$1, $$str({$($of(this)->getClass()->getName()), "(name="_s}));
		$var($String, var$0, $$concat(var$1, $(getTypeName())));
		$set(this, myToString, $concat(var$0, ")"));
	}
	return this->myToString;
}

$Object* SimpleType::readResolve() {
	$useLocalCurrentObjectStackCache();
	$var(SimpleType, canonical, $cast(SimpleType, $nc(SimpleType::canonicalTypes)->get(this)));
	if (canonical == nullptr) {
		$throwNew($InvalidObjectException, $$str({"Invalid SimpleType: "_s, this}));
	}
	return $of(canonical);
}

void clinit$SimpleType($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$load($Void);
	$assignStatic(SimpleType::VOID, $new(SimpleType, $Void::class$));
	$load($Boolean);
	$assignStatic(SimpleType::BOOLEAN, $new(SimpleType, $Boolean::class$));
	$load($Character);
	$assignStatic(SimpleType::CHARACTER, $new(SimpleType, $Character::class$));
	$load($Byte);
	$assignStatic(SimpleType::BYTE, $new(SimpleType, $Byte::class$));
	$load($Short);
	$assignStatic(SimpleType::SHORT, $new(SimpleType, $Short::class$));
	$load($Integer);
	$assignStatic(SimpleType::INTEGER, $new(SimpleType, $Integer::class$));
	$load($Long);
	$assignStatic(SimpleType::LONG, $new(SimpleType, $Long::class$));
	$load($Float);
	$assignStatic(SimpleType::FLOAT, $new(SimpleType, $Float::class$));
	$load($Double);
	$assignStatic(SimpleType::DOUBLE, $new(SimpleType, $Double::class$));
	$assignStatic(SimpleType::STRING, $new(SimpleType, $String::class$));
	$load($BigDecimal);
	$assignStatic(SimpleType::BIGDECIMAL, $new(SimpleType, $BigDecimal::class$));
	$load($BigInteger);
	$assignStatic(SimpleType::BIGINTEGER, $new(SimpleType, $BigInteger::class$));
	$load($Date);
	$assignStatic(SimpleType::DATE, $new(SimpleType, $Date::class$));
	$load($ObjectName);
	$assignStatic(SimpleType::OBJECTNAME, $new(SimpleType, $ObjectName::class$));
	$assignStatic(SimpleType::typeArray, $new($SimpleTypeArray, {
		SimpleType::VOID,
		SimpleType::BOOLEAN,
		SimpleType::CHARACTER,
		SimpleType::BYTE,
		SimpleType::SHORT,
		SimpleType::INTEGER,
		SimpleType::LONG,
		SimpleType::FLOAT,
		SimpleType::DOUBLE,
		SimpleType::STRING,
		SimpleType::BIGDECIMAL,
		SimpleType::BIGINTEGER,
		SimpleType::DATE,
		SimpleType::OBJECTNAME
	}));
	$assignStatic(SimpleType::canonicalTypes, $new($HashMap));
	{
		for (int32_t i = 0; i < $nc(SimpleType::typeArray)->length; ++i) {
			$var(SimpleType, type, $nc(SimpleType::typeArray)->get(i));
			$nc(SimpleType::canonicalTypes)->put(type, type);
		}
	}
}

SimpleType::SimpleType() {
}

$Class* SimpleType::load$($String* name, bool initialize) {
	$loadClass(SimpleType, name, initialize, &_SimpleType_ClassInfo_, clinit$SimpleType, allocate$SimpleType);
	return class$;
}

$Class* SimpleType::class$ = nullptr;

		} // openmbean
	} // management
} // javax