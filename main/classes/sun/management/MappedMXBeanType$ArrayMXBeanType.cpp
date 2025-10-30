#include <sun/management/MappedMXBeanType$ArrayMXBeanType.h>

#include <java/lang/ClassNotFoundException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/ArrayType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/management/MappedMXBeanType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $1Array = ::java::lang::reflect::Array;
using $Type = ::java::lang::reflect::Type;
using $ArrayType = ::javax::management::openmbean::ArrayType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;

namespace sun {
	namespace management {

$FieldInfo _MappedMXBeanType$ArrayMXBeanType_FieldInfo_[] = {
	{"arrayClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(MappedMXBeanType$ArrayMXBeanType, arrayClass)},
	{"componentType", "Lsun/management/MappedMXBeanType;", nullptr, $PROTECTED, $field(MappedMXBeanType$ArrayMXBeanType, componentType)},
	{"baseElementType", "Lsun/management/MappedMXBeanType;", nullptr, $PROTECTED, $field(MappedMXBeanType$ArrayMXBeanType, baseElementType)},
	{}
};

$MethodInfo _MappedMXBeanType$ArrayMXBeanType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", 0, $method(static_cast<void(MappedMXBeanType$ArrayMXBeanType::*)($Class*)>(&MappedMXBeanType$ArrayMXBeanType::init$)), "javax.management.openmbean.OpenDataException"},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(MappedMXBeanType$ArrayMXBeanType::*)()>(&MappedMXBeanType$ArrayMXBeanType::init$))},
	{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"toJavaTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.openmbean.OpenDataException,java.io.InvalidObjectException"},
	{"toOpenTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.openmbean.OpenDataException"},
	{}
};

$InnerClassInfo _MappedMXBeanType$ArrayMXBeanType_InnerClassesInfo_[] = {
	{"sun.management.MappedMXBeanType$ArrayMXBeanType", "sun.management.MappedMXBeanType", "ArrayMXBeanType", $STATIC},
	{}
};

$ClassInfo _MappedMXBeanType$ArrayMXBeanType_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.MappedMXBeanType$ArrayMXBeanType",
	"sun.management.MappedMXBeanType",
	nullptr,
	_MappedMXBeanType$ArrayMXBeanType_FieldInfo_,
	_MappedMXBeanType$ArrayMXBeanType_MethodInfo_,
	nullptr,
	nullptr,
	_MappedMXBeanType$ArrayMXBeanType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.MappedMXBeanType"
};

$Object* allocate$MappedMXBeanType$ArrayMXBeanType($Class* clazz) {
	return $of($alloc(MappedMXBeanType$ArrayMXBeanType));
}

void MappedMXBeanType$ArrayMXBeanType::init$($Class* c) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$MappedMXBeanType::init$();
	$set(this, arrayClass, c);
	$set(this, componentType, getMappedType($nc(c)->getComponentType()));
	$var($StringBuilder, className, $new($StringBuilder));
	$Class* et = c;
	int32_t dim = 0;
	for (dim = 0; $nc(et)->isArray(); ++dim) {
		className->append(u'[');
		et = et->getComponentType();
	}
	$set(this, baseElementType, getMappedType(et));
	if ($nc(et)->isPrimitive()) {
		$assign(className, $new($StringBuilder, $($nc(c)->getName())));
	} else {
		className->append(u'L')->append($($nc(this->baseElementType)->getTypeName()))->append(u';');
	}
	try {
		$set(this, mappedTypeClass, $Class::forName($(className->toString())));
	} catch ($ClassNotFoundException& e) {
		$var($OpenDataException, ode, $new($OpenDataException, "Cannot obtain array class"_s));
		ode->initCause(e);
		$throw(ode);
	}
	$set(this, openType, $new($ArrayType, dim, $($nc(this->baseElementType)->getOpenType())));
}

void MappedMXBeanType$ArrayMXBeanType::init$() {
	$MappedMXBeanType::init$();
	$set(this, arrayClass, nullptr);
}

$Type* MappedMXBeanType$ArrayMXBeanType::getJavaType() {
	return this->arrayClass;
}

$String* MappedMXBeanType$ArrayMXBeanType::getName() {
	return $nc(this->arrayClass)->getName();
}

$Object* MappedMXBeanType$ArrayMXBeanType::toOpenTypeData(Object$* data) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->baseElementType)->isBasicType()) {
		return $of(data);
	}
	$var($ObjectArray, array, $cast($ObjectArray, data));
	$var($ObjectArray, openArray, $cast($ObjectArray, $1Array::newInstance($nc(this->componentType)->getMappedTypeClass(), $nc(array)->length)));
	int32_t i = 0;
	{
		$var($ObjectArray, arr$, array);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				if (o == nullptr) {
					openArray->set(i, nullptr);
				} else {
					openArray->set(i, $($nc(this->componentType)->toOpenTypeData(o)));
				}
				++i;
			}
		}
	}
	return $of(openArray);
}

$Object* MappedMXBeanType$ArrayMXBeanType::toJavaTypeData(Object$* data) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->baseElementType)->isBasicType()) {
		return $of(data);
	}
	$var($ObjectArray, openArray, $cast($ObjectArray, data));
	$var($ObjectArray, array, $cast($ObjectArray, $1Array::newInstance($cast($Class, $($nc(this->componentType)->getJavaType())), $nc(openArray)->length)));
	int32_t i = 0;
	{
		$var($ObjectArray, arr$, openArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				if (o == nullptr) {
					array->set(i, nullptr);
				} else {
					array->set(i, $($nc(this->componentType)->toJavaTypeData(o)));
				}
				++i;
			}
		}
	}
	return $of(array);
}

MappedMXBeanType$ArrayMXBeanType::MappedMXBeanType$ArrayMXBeanType() {
}

$Class* MappedMXBeanType$ArrayMXBeanType::load$($String* name, bool initialize) {
	$loadClass(MappedMXBeanType$ArrayMXBeanType, name, initialize, &_MappedMXBeanType$ArrayMXBeanType_ClassInfo_, allocate$MappedMXBeanType$ArrayMXBeanType);
	return class$;
}

$Class* MappedMXBeanType$ArrayMXBeanType::class$ = nullptr;

	} // management
} // sun