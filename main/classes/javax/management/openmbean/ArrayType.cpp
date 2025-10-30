#include <javax/management/openmbean/ArrayType.h>

#include <java/lang/reflect/Array.h>
#include <javax/management/JMException.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <javax/management/openmbean/SimpleType.h>
#include <javax/management/openmbean/TabularData.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BYTE
#undef CHARACTER
#undef DOUBLE
#undef FLOAT
#undef INTEGER
#undef LONG
#undef PRIMITIVE_ARRAY_TYPES
#undef PRIMITIVE_OPEN_TYPE_INDEX
#undef PRIMITIVE_TYPE_KEY_INDEX
#undef PRIMITIVE_TYPE_NAME_INDEX
#undef PRIMITIVE_WRAPPER_NAME_INDEX
#undef SHORT
#undef TYPE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $1Array = ::java::lang::reflect::Array;
using $JMException = ::javax::management::JMException;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $SimpleType = ::javax::management::openmbean::SimpleType;
using $TabularData = ::javax::management::openmbean::TabularData;

namespace javax {
	namespace management {
		namespace openmbean {

$FieldInfo _ArrayType_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ArrayType, serialVersionUID)},
	{"dimension", "I", nullptr, $PRIVATE, $field(ArrayType, dimension)},
	{"elementType", "Ljavax/management/openmbean/OpenType;", "Ljavax/management/openmbean/OpenType<*>;", $PRIVATE, $field(ArrayType, elementType)},
	{"primitiveArray", "Z", nullptr, $PRIVATE, $field(ArrayType, primitiveArray)},
	{"myHashCode", "Ljava/lang/Integer;", nullptr, $PRIVATE | $TRANSIENT, $field(ArrayType, myHashCode)},
	{"myToString", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(ArrayType, myToString)},
	{"PRIMITIVE_WRAPPER_NAME_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayType, PRIMITIVE_WRAPPER_NAME_INDEX)},
	{"PRIMITIVE_TYPE_NAME_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayType, PRIMITIVE_TYPE_NAME_INDEX)},
	{"PRIMITIVE_TYPE_KEY_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayType, PRIMITIVE_TYPE_KEY_INDEX)},
	{"PRIMITIVE_OPEN_TYPE_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayType, PRIMITIVE_OPEN_TYPE_INDEX)},
	{"PRIMITIVE_ARRAY_TYPES", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ArrayType, PRIMITIVE_ARRAY_TYPES)},
	{}
};

$MethodInfo _ArrayType_MethodInfo_[] = {
	{"<init>", "(ILjavax/management/openmbean/OpenType;)V", "(ILjavax/management/openmbean/OpenType<*>;)V", $PUBLIC, $method(static_cast<void(ArrayType::*)(int32_t,$OpenType*)>(&ArrayType::init$)), "javax.management.openmbean.OpenDataException"},
	{"<init>", "(Ljavax/management/openmbean/SimpleType;Z)V", "(Ljavax/management/openmbean/SimpleType<*>;Z)V", $PUBLIC, $method(static_cast<void(ArrayType::*)($SimpleType*,bool)>(&ArrayType::init$)), "javax.management.openmbean.OpenDataException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjavax/management/openmbean/OpenType;Z)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjavax/management/openmbean/OpenType<*>;Z)V", 0, $method(static_cast<void(ArrayType::*)($String*,$String*,$String*,int32_t,$OpenType*,bool)>(&ArrayType::init$))},
	{"buildArrayClassName", "(ILjavax/management/openmbean/OpenType;)Ljava/lang/String;", "(ILjavax/management/openmbean/OpenType<*>;)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t,$OpenType*)>(&ArrayType::buildArrayClassName)), "javax.management.openmbean.OpenDataException"},
	{"buildArrayClassName", "(ILjavax/management/openmbean/OpenType;Z)Ljava/lang/String;", "(ILjavax/management/openmbean/OpenType<*>;Z)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t,$OpenType*,bool)>(&ArrayType::buildArrayClassName)), "javax.management.openmbean.OpenDataException"},
	{"buildArrayDescription", "(ILjavax/management/openmbean/OpenType;)Ljava/lang/String;", "(ILjavax/management/openmbean/OpenType<*>;)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t,$OpenType*)>(&ArrayType::buildArrayDescription)), "javax.management.openmbean.OpenDataException"},
	{"buildArrayDescription", "(ILjavax/management/openmbean/OpenType;Z)Ljava/lang/String;", "(ILjavax/management/openmbean/OpenType<*>;Z)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t,$OpenType*,bool)>(&ArrayType::buildArrayDescription)), "javax.management.openmbean.OpenDataException"},
	{"checkElementsType", "([Ljava/lang/Object;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(ArrayType::*)($ObjectArray*,int32_t)>(&ArrayType::checkElementsType))},
	{"convertFromPrimitiveToWrapperTypes", "()Ljavax/management/openmbean/ArrayType;", "<T:Ljava/lang/Object;>()Ljavax/management/openmbean/ArrayType<TT;>;", $PRIVATE, $method(static_cast<ArrayType*(ArrayType::*)()>(&ArrayType::convertFromPrimitiveToWrapperTypes))},
	{"convertFromWrapperToPrimitiveTypes", "()Ljavax/management/openmbean/ArrayType;", "<T:Ljava/lang/Object;>()Ljavax/management/openmbean/ArrayType<TT;>;", $PRIVATE, $method(static_cast<ArrayType*(ArrayType::*)()>(&ArrayType::convertFromWrapperToPrimitiveTypes))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getArrayType", "(Ljavax/management/openmbean/OpenType;)Ljavax/management/openmbean/ArrayType;", "<E:Ljava/lang/Object;>(Ljavax/management/openmbean/OpenType<TE;>;)Ljavax/management/openmbean/ArrayType<[TE;>;", $PUBLIC | $STATIC, $method(static_cast<ArrayType*(*)($OpenType*)>(&ArrayType::getArrayType)), "javax.management.openmbean.OpenDataException"},
	{"getDimension", "()I", nullptr, $PUBLIC},
	{"getElementOpenType", "()Ljavax/management/openmbean/OpenType;", "()Ljavax/management/openmbean/OpenType<*>;", $PUBLIC},
	{"getPrimitiveArrayType", "(Ljava/lang/Class;)Ljavax/management/openmbean/ArrayType;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Ljavax/management/openmbean/ArrayType<TT;>;", $PUBLIC | $STATIC, $method(static_cast<ArrayType*(*)($Class*)>(&ArrayType::getPrimitiveArrayType))},
	{"getPrimitiveOpenType", "(Ljava/lang/String;)Ljavax/management/openmbean/SimpleType;", "(Ljava/lang/String;)Ljavax/management/openmbean/SimpleType<*>;", $STATIC, $method(static_cast<$SimpleType*(*)($String*)>(&ArrayType::getPrimitiveOpenType))},
	{"getPrimitiveTypeKey", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&ArrayType::getPrimitiveTypeKey))},
	{"getPrimitiveTypeName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&ArrayType::getPrimitiveTypeName))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isAssignableFrom", "(Ljavax/management/openmbean/OpenType;)Z", "(Ljavax/management/openmbean/OpenType<*>;)Z", 0},
	{"isPrimitiveArray", "()Z", nullptr, $PUBLIC},
	{"isPrimitiveContentType", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&ArrayType::isPrimitiveContentType))},
	{"isValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(ArrayType::*)()>(&ArrayType::readResolve)), "java.io.ObjectStreamException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(ArrayType::*)()>(&ArrayType::writeReplace)), "java.io.ObjectStreamException"},
	{}
};

$ClassInfo _ArrayType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.openmbean.ArrayType",
	"javax.management.openmbean.OpenType",
	nullptr,
	_ArrayType_FieldInfo_,
	_ArrayType_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljavax/management/openmbean/OpenType<TT;>;"
};

$Object* allocate$ArrayType($Class* clazz) {
	return $of($alloc(ArrayType));
}

$ObjectArray2* ArrayType::PRIMITIVE_ARRAY_TYPES = nullptr;

bool ArrayType::isPrimitiveContentType($String* primitiveKey) {
	$init(ArrayType);
	$useLocalCurrentObjectStackCache();
	{
		$var($ObjectArray2, arr$, ArrayType::PRIMITIVE_ARRAY_TYPES);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ObjectArray, typeDescr, arr$->get(i$));
			{
				if ($nc($of($nc(typeDescr)->get(ArrayType::PRIMITIVE_TYPE_KEY_INDEX)))->equals(primitiveKey)) {
					return true;
				}
			}
		}
	}
	return false;
}

$String* ArrayType::getPrimitiveTypeKey($String* elementClassName) {
	$init(ArrayType);
	$useLocalCurrentObjectStackCache();
	{
		$var($ObjectArray2, arr$, ArrayType::PRIMITIVE_ARRAY_TYPES);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ObjectArray, typeDescr, arr$->get(i$));
			{
				if ($nc(elementClassName)->equals($nc(typeDescr)->get(ArrayType::PRIMITIVE_WRAPPER_NAME_INDEX))) {
					return $cast($String, $nc(typeDescr)->get(ArrayType::PRIMITIVE_TYPE_KEY_INDEX));
				}
			}
		}
	}
	return nullptr;
}

$String* ArrayType::getPrimitiveTypeName($String* elementClassName) {
	$init(ArrayType);
	$useLocalCurrentObjectStackCache();
	{
		$var($ObjectArray2, arr$, ArrayType::PRIMITIVE_ARRAY_TYPES);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ObjectArray, typeDescr, arr$->get(i$));
			{
				if ($nc(elementClassName)->equals($nc(typeDescr)->get(ArrayType::PRIMITIVE_WRAPPER_NAME_INDEX))) {
					return $cast($String, $nc(typeDescr)->get(ArrayType::PRIMITIVE_TYPE_NAME_INDEX));
				}
			}
		}
	}
	return nullptr;
}

$SimpleType* ArrayType::getPrimitiveOpenType($String* primitiveTypeName) {
	$init(ArrayType);
	$useLocalCurrentObjectStackCache();
	{
		$var($ObjectArray2, arr$, ArrayType::PRIMITIVE_ARRAY_TYPES);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ObjectArray, typeDescr, arr$->get(i$));
			{
				if ($nc(primitiveTypeName)->equals($nc(typeDescr)->get(ArrayType::PRIMITIVE_TYPE_NAME_INDEX))) {
					return $cast($SimpleType, $nc(typeDescr)->get(ArrayType::PRIMITIVE_OPEN_TYPE_INDEX));
				}
			}
		}
	}
	return nullptr;
}

void ArrayType::init$(int32_t dimension, $OpenType* elementType) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, buildArrayClassName(dimension, elementType));
	$var($String, var$1, buildArrayClassName(dimension, elementType));
	$OpenType::init$(var$0, var$1, $(buildArrayDescription(dimension, elementType)));
	$set(this, myHashCode, nullptr);
	$set(this, myToString, nullptr);
	if ($nc(elementType)->isArray()) {
		$var(ArrayType, at, $cast(ArrayType, elementType));
		this->dimension = at->getDimension() + dimension;
		$set(this, elementType, at->getElementOpenType());
		this->primitiveArray = at->isPrimitiveArray();
	} else {
		this->dimension = dimension;
		$set(this, elementType, elementType);
		this->primitiveArray = false;
	}
}

void ArrayType::init$($SimpleType* elementType, bool primitiveArray) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, buildArrayClassName(1, elementType, primitiveArray));
	$var($String, var$1, buildArrayClassName(1, elementType, primitiveArray));
	$OpenType::init$(var$0, var$1, $(buildArrayDescription(1, elementType, primitiveArray)), true);
	$set(this, myHashCode, nullptr);
	$set(this, myToString, nullptr);
	this->dimension = 1;
	$set(this, elementType, elementType);
	this->primitiveArray = primitiveArray;
}

void ArrayType::init$($String* className, $String* typeName, $String* description, int32_t dimension, $OpenType* elementType, bool primitiveArray) {
	$OpenType::init$(className, typeName, description, true);
	$set(this, myHashCode, nullptr);
	$set(this, myToString, nullptr);
	this->dimension = dimension;
	$set(this, elementType, elementType);
	this->primitiveArray = primitiveArray;
}

$String* ArrayType::buildArrayClassName(int32_t dimension, $OpenType* elementType) {
	$init(ArrayType);
	bool isPrimitiveArray = false;
	if ($nc(elementType)->isArray()) {
		isPrimitiveArray = $nc(($cast(ArrayType, elementType)))->isPrimitiveArray();
	}
	return buildArrayClassName(dimension, elementType, isPrimitiveArray);
}

$String* ArrayType::buildArrayClassName(int32_t dimension, $OpenType* elementType, bool isPrimitiveArray) {
	$init(ArrayType);
	$useLocalCurrentObjectStackCache();
	if (dimension < 1) {
		$throwNew($IllegalArgumentException, "Value of argument dimension must be greater than 0"_s);
	}
	$var($StringBuilder, result, $new($StringBuilder));
	$var($String, elementClassName, $nc(elementType)->getClassName());
	for (int32_t i = 1; i <= dimension; ++i) {
		result->append(u'[');
	}
	if (elementType->isArray()) {
		result->append(elementClassName);
	} else if (isPrimitiveArray) {
		$var($String, key, getPrimitiveTypeKey(elementClassName));
		if (key == nullptr) {
			$throwNew($OpenDataException, $$str({"Element type is not primitive: "_s, elementClassName}));
		}
		result->append(key);
	} else {
		result->append("L"_s);
		result->append(elementClassName);
		result->append(u';');
	}
	return result->toString();
}

$String* ArrayType::buildArrayDescription(int32_t dimension, $OpenType* elementType) {
	$init(ArrayType);
	bool isPrimitiveArray = false;
	if ($nc(elementType)->isArray()) {
		isPrimitiveArray = $nc(($cast(ArrayType, elementType)))->isPrimitiveArray();
	}
	return buildArrayDescription(dimension, elementType, isPrimitiveArray);
}

$String* ArrayType::buildArrayDescription(int32_t dimension, $OpenType* elementType$renamed, bool isPrimitiveArray) {
	$init(ArrayType);
	$useLocalCurrentObjectStackCache();
	$var($OpenType, elementType, elementType$renamed);
	if ($nc(elementType)->isArray()) {
		$var(ArrayType, at, $cast(ArrayType, elementType));
		dimension += at->getDimension();
		$assign(elementType, at->getElementOpenType());
		isPrimitiveArray = at->isPrimitiveArray();
	}
	$var($StringBuilder, result, $new($StringBuilder));
	result->append(dimension)->append("-dimension array of "_s);
	$var($String, elementClassName, $nc(elementType)->getClassName());
	if (isPrimitiveArray) {
		$var($String, primitiveType, getPrimitiveTypeName(elementClassName));
		if (primitiveType == nullptr) {
			$throwNew($OpenDataException, $$str({"Element is not a primitive type: "_s, elementClassName}));
		}
		result->append(primitiveType);
	} else {
		result->append(elementClassName);
	}
	return result->toString();
}

int32_t ArrayType::getDimension() {
	return this->dimension;
}

$OpenType* ArrayType::getElementOpenType() {
	return this->elementType;
}

bool ArrayType::isPrimitiveArray() {
	return this->primitiveArray;
}

bool ArrayType::isValue(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (obj == nullptr) {
		return false;
	}
	$Class* objClass = $nc($of(obj))->getClass();
	$var($String, objClassName, $nc(objClass)->getName());
	if (!objClass->isArray()) {
		return false;
	}
	if ($nc($(this->getClassName()))->equals(objClassName)) {
		return true;
	}
	$load($TabularData);
	bool var$0 = ($nc($($nc(this->elementType)->getClassName()))->equals($($TabularData::class$->getName())));
	$load($CompositeData);
	if (var$0 || ($nc($($nc(this->elementType)->getClassName()))->equals($($CompositeData::class$->getName())))) {
		bool isTabular = ($nc($($nc(this->elementType)->getClassName()))->equals($($TabularData::class$->getName())));
		$var($ints, dims, $new($ints, getDimension()));
		$Class* elementClass = isTabular ? $TabularData::class$ : $CompositeData::class$;
		$Class* targetClass = $of($($1Array::newInstance(elementClass, dims)))->getClass();
		if (!$nc(targetClass)->isAssignableFrom(objClass)) {
			return false;
		}
		if (!checkElementsType($cast($ObjectArray, obj), this->dimension)) {
			return false;
		}
		return true;
	}
	return false;
}

bool ArrayType::checkElementsType($ObjectArray* x_dim_Array, int32_t dim) {
	$useLocalCurrentObjectStackCache();
	if (dim > 1) {
		for (int32_t i = 0; i < $nc(x_dim_Array)->length; ++i) {
			if (!checkElementsType($cast($ObjectArray, x_dim_Array->get(i)), dim - 1)) {
				return false;
			}
		}
		return true;
	} else {
		for (int32_t i = 0; i < $nc(x_dim_Array)->length; ++i) {
			if ((x_dim_Array->get(i) != nullptr) && (!$nc($(this->getElementOpenType()))->isValue(x_dim_Array->get(i)))) {
				return false;
			}
		}
		return true;
	}
}

bool ArrayType::isAssignableFrom($OpenType* ot) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(ArrayType, ot))) {
		return false;
	}
	$var(ArrayType, at, $cast(ArrayType, ot));
	int32_t var$2 = $nc(at)->getDimension();
	bool var$1 = var$2 == getDimension();
	if (var$1) {
		bool var$3 = at->isPrimitiveArray();
		var$1 = var$3 == isPrimitiveArray();
	}
	bool var$0 = var$1;
	return (var$0 && $nc($(at->getElementOpenType()))->isAssignableFrom($(getElementOpenType())));
}

bool ArrayType::equals(Object$* obj) {
	if (obj == nullptr) {
		return false;
	}
	if (!($instanceOf(ArrayType, obj))) {
		return false;
	}
	$var(ArrayType, other, $cast(ArrayType, obj));
	if (this->dimension != $nc(other)->dimension) {
		return false;
	}
	if (!$nc(this->elementType)->equals($nc(other)->elementType)) {
		return false;
	}
	return this->primitiveArray == $nc(other)->primitiveArray;
}

int32_t ArrayType::hashCode() {
	if (this->myHashCode == nullptr) {
		int32_t value = 0;
		value += this->dimension;
		value += $nc(this->elementType)->hashCode();
		value += $nc($($Boolean::valueOf(this->primitiveArray)))->hashCode();
		$set(this, myHashCode, $Integer::valueOf(value));
	}
	return $nc(this->myHashCode)->intValue();
}

$String* ArrayType::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->myToString == nullptr) {
		$var($String, var$7, $$str({$($of(this)->getClass()->getName()), "(name="_s}));
		$var($String, var$6, $$concat(var$7, $(getTypeName())));
		$var($String, var$5, $$concat(var$6, ",dimension="));
		$var($String, var$4, $$concat(var$5, $$str(this->dimension)));
		$var($String, var$3, $$concat(var$4, ",elementType="));
		$var($String, var$2, $$concat(var$3, this->elementType));
		$var($String, var$1, $$concat(var$2, ",primitiveArray="));
		$var($String, var$0, $$concat(var$1, $$str(this->primitiveArray)));
		$set(this, myToString, $concat(var$0, ")"));
	}
	return this->myToString;
}

ArrayType* ArrayType::getArrayType($OpenType* elementType) {
	$init(ArrayType);
	return $new(ArrayType, 1, elementType);
}

ArrayType* ArrayType::getPrimitiveArrayType($Class* arrayClass) {
	$init(ArrayType);
	$useLocalCurrentObjectStackCache();
	if (!$nc(arrayClass)->isArray()) {
		$throwNew($IllegalArgumentException, "arrayClass must be an array"_s);
	}
	int32_t n = 1;
	$Class* componentType = $nc(arrayClass)->getComponentType();
	while ($nc(componentType)->isArray()) {
		++n;
		componentType = componentType->getComponentType();
	}
	$var($String, componentTypeName, $nc(componentType)->getName());
	if (!componentType->isPrimitive()) {
		$throwNew($IllegalArgumentException, "component type of the array must be a primitive type"_s);
	}
	$var($SimpleType, simpleType, getPrimitiveOpenType(componentTypeName));
	try {
		$var(ArrayType, at, $new(ArrayType, simpleType, true));
		if (n > 1) {
			$assign(at, $new(ArrayType, n - 1, static_cast<$OpenType*>(at)));
		}
		return at;
	} catch ($OpenDataException& e) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$Object* ArrayType::readResolve() {
	if (this->primitiveArray) {
		return $of(convertFromWrapperToPrimitiveTypes());
	} else {
		return $of(this);
	}
}

ArrayType* ArrayType::convertFromWrapperToPrimitiveTypes() {
	$useLocalCurrentObjectStackCache();
	$var($String, cn, getClassName());
	$var($String, tn, getTypeName());
	$var($String, d, getDescription());
	{
		$var($ObjectArray2, arr$, ArrayType::PRIMITIVE_ARRAY_TYPES);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ObjectArray, typeDescr, arr$->get(i$));
			{
				if ($nc(cn)->indexOf($cast($String, $nc(typeDescr)->get(ArrayType::PRIMITIVE_WRAPPER_NAME_INDEX))) != -1) {
					$assign(cn, cn->replaceFirst($$str({"L"_s, $nc(typeDescr)->get(ArrayType::PRIMITIVE_WRAPPER_NAME_INDEX), ";"_s}), $cast($String, typeDescr->get(ArrayType::PRIMITIVE_TYPE_KEY_INDEX))));
					$assign(tn, $nc(tn)->replaceFirst($$str({"L"_s, $nc(typeDescr)->get(ArrayType::PRIMITIVE_WRAPPER_NAME_INDEX), ";"_s}), $cast($String, typeDescr->get(ArrayType::PRIMITIVE_TYPE_KEY_INDEX))));
					$assign(d, $nc(d)->replaceFirst($cast($String, $nc(typeDescr)->get(ArrayType::PRIMITIVE_WRAPPER_NAME_INDEX)), $cast($String, typeDescr->get(ArrayType::PRIMITIVE_TYPE_NAME_INDEX))));
					break;
				}
			}
		}
	}
	return $new(ArrayType, cn, tn, d, this->dimension, this->elementType, this->primitiveArray);
}

$Object* ArrayType::writeReplace() {
	if (this->primitiveArray) {
		return $of(convertFromPrimitiveToWrapperTypes());
	} else {
		return $of(this);
	}
}

ArrayType* ArrayType::convertFromPrimitiveToWrapperTypes() {
	$useLocalCurrentObjectStackCache();
	$var($String, cn, getClassName());
	$var($String, tn, getTypeName());
	$var($String, d, getDescription());
	{
		$var($ObjectArray2, arr$, ArrayType::PRIMITIVE_ARRAY_TYPES);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ObjectArray, typeDescr, arr$->get(i$));
			{
				if ($nc(cn)->indexOf($cast($String, $nc(typeDescr)->get(ArrayType::PRIMITIVE_TYPE_KEY_INDEX))) != -1) {
					$assign(cn, cn->replaceFirst($cast($String, $nc(typeDescr)->get(ArrayType::PRIMITIVE_TYPE_KEY_INDEX)), $$str({"L"_s, typeDescr->get(ArrayType::PRIMITIVE_WRAPPER_NAME_INDEX), ";"_s})));
					$assign(tn, $nc(tn)->replaceFirst($cast($String, $nc(typeDescr)->get(ArrayType::PRIMITIVE_TYPE_KEY_INDEX)), $$str({"L"_s, typeDescr->get(ArrayType::PRIMITIVE_WRAPPER_NAME_INDEX), ";"_s})));
					$assign(d, $nc(d)->replaceFirst($cast($String, $nc(typeDescr)->get(ArrayType::PRIMITIVE_TYPE_NAME_INDEX)), $cast($String, typeDescr->get(ArrayType::PRIMITIVE_WRAPPER_NAME_INDEX))));
					break;
				}
			}
		}
	}
	return $new(ArrayType, cn, tn, d, this->dimension, this->elementType, this->primitiveArray);
}

void clinit$ArrayType($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$load($Boolean);
	$init($Boolean);
	$init($SimpleType);
	$load($Character);
	$init($Character);
	$load($Byte);
	$init($Byte);
	$load($Short);
	$init($Short);
	$load($Integer);
	$init($Integer);
	$load($Long);
	$init($Long);
	$load($Float);
	$init($Float);
	$load($Double);
	$init($Double);
	$assignStatic(ArrayType::PRIMITIVE_ARRAY_TYPES, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$($of($Boolean::class$->getName())),
			$($of($nc($Boolean::TYPE)->getName())),
			$of("Z"_s),
			$of($SimpleType::BOOLEAN)
		}),
		$$new($ObjectArray, {
			$($of($Character::class$->getName())),
			$($of($nc($Character::TYPE)->getName())),
			$of("C"_s),
			$of($SimpleType::CHARACTER)
		}),
		$$new($ObjectArray, {
			$($of($Byte::class$->getName())),
			$($of($nc($Byte::TYPE)->getName())),
			$of("B"_s),
			$of($SimpleType::BYTE)
		}),
		$$new($ObjectArray, {
			$($of($Short::class$->getName())),
			$($of($nc($Short::TYPE)->getName())),
			$of("S"_s),
			$of($SimpleType::SHORT)
		}),
		$$new($ObjectArray, {
			$($of($Integer::class$->getName())),
			$($of($nc($Integer::TYPE)->getName())),
			$of("I"_s),
			$of($SimpleType::INTEGER)
		}),
		$$new($ObjectArray, {
			$($of($Long::class$->getName())),
			$($of($nc($Long::TYPE)->getName())),
			$of("J"_s),
			$of($SimpleType::LONG)
		}),
		$$new($ObjectArray, {
			$($of($Float::class$->getName())),
			$($of($nc($Float::TYPE)->getName())),
			$of("F"_s),
			$of($SimpleType::FLOAT)
		}),
		$$new($ObjectArray, {
			$($of($Double::class$->getName())),
			$($of($nc($Double::TYPE)->getName())),
			$of("D"_s),
			$of($SimpleType::DOUBLE)
		})
	}));
}

ArrayType::ArrayType() {
}

$Class* ArrayType::load$($String* name, bool initialize) {
	$loadClass(ArrayType, name, initialize, &_ArrayType_ClassInfo_, clinit$ArrayType, allocate$ArrayType);
	return class$;
}

$Class* ArrayType::class$ = nullptr;

		} // openmbean
	} // management
} // javax