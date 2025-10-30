#include <sun/management/MappedMXBeanType$GenericArrayMXBeanType.h>

#include <java/lang/ClassNotFoundException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/GenericArrayType.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/ArrayType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/management/MappedMXBeanType$ArrayMXBeanType.h>
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
using $GenericArrayType = ::java::lang::reflect::GenericArrayType;
using $Type = ::java::lang::reflect::Type;
using $ArrayType = ::javax::management::openmbean::ArrayType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;
using $MappedMXBeanType$ArrayMXBeanType = ::sun::management::MappedMXBeanType$ArrayMXBeanType;

namespace sun {
	namespace management {

$FieldInfo _MappedMXBeanType$GenericArrayMXBeanType_FieldInfo_[] = {
	{"gtype", "Ljava/lang/reflect/GenericArrayType;", nullptr, $FINAL, $field(MappedMXBeanType$GenericArrayMXBeanType, gtype)},
	{}
};

$MethodInfo _MappedMXBeanType$GenericArrayMXBeanType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/GenericArrayType;)V", nullptr, 0, $method(static_cast<void(MappedMXBeanType$GenericArrayMXBeanType::*)($GenericArrayType*)>(&MappedMXBeanType$GenericArrayMXBeanType::init$)), "javax.management.openmbean.OpenDataException"},
	{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _MappedMXBeanType$GenericArrayMXBeanType_InnerClassesInfo_[] = {
	{"sun.management.MappedMXBeanType$GenericArrayMXBeanType", "sun.management.MappedMXBeanType", "GenericArrayMXBeanType", $STATIC},
	{"sun.management.MappedMXBeanType$ArrayMXBeanType", "sun.management.MappedMXBeanType", "ArrayMXBeanType", $STATIC},
	{}
};

$ClassInfo _MappedMXBeanType$GenericArrayMXBeanType_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.MappedMXBeanType$GenericArrayMXBeanType",
	"sun.management.MappedMXBeanType$ArrayMXBeanType",
	nullptr,
	_MappedMXBeanType$GenericArrayMXBeanType_FieldInfo_,
	_MappedMXBeanType$GenericArrayMXBeanType_MethodInfo_,
	nullptr,
	nullptr,
	_MappedMXBeanType$GenericArrayMXBeanType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.MappedMXBeanType"
};

$Object* allocate$MappedMXBeanType$GenericArrayMXBeanType($Class* clazz) {
	return $of($alloc(MappedMXBeanType$GenericArrayMXBeanType));
}

void MappedMXBeanType$GenericArrayMXBeanType::init$($GenericArrayType* gat) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$MappedMXBeanType$ArrayMXBeanType::init$();
	$set(this, gtype, gat);
	$set(this, componentType, getMappedType($($nc(gat)->getGenericComponentType())));
	$var($StringBuilder, className, $new($StringBuilder));
	$var($Type, elementType, gat);
	int32_t dim = 0;
	for (dim = 0; $instanceOf($GenericArrayType, elementType); ++dim) {
		className->append(u'[');
		$var($GenericArrayType, et, $cast($GenericArrayType, elementType));
		$assign(elementType, $nc(et)->getGenericComponentType());
	}
	$set(this, baseElementType, getMappedType(elementType));
	if ($instanceOf($Class, elementType) && $nc(($cast($Class, elementType)))->isPrimitive()) {
		$assign(className, $new($StringBuilder, $($nc($of(gat))->toString())));
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

$Type* MappedMXBeanType$GenericArrayMXBeanType::getJavaType() {
	return this->gtype;
}

$String* MappedMXBeanType$GenericArrayMXBeanType::getName() {
	return $nc($of(this->gtype))->toString();
}

MappedMXBeanType$GenericArrayMXBeanType::MappedMXBeanType$GenericArrayMXBeanType() {
}

$Class* MappedMXBeanType$GenericArrayMXBeanType::load$($String* name, bool initialize) {
	$loadClass(MappedMXBeanType$GenericArrayMXBeanType, name, initialize, &_MappedMXBeanType$GenericArrayMXBeanType_ClassInfo_, allocate$MappedMXBeanType$GenericArrayMXBeanType);
	return class$;
}

$Class* MappedMXBeanType$GenericArrayMXBeanType::class$ = nullptr;

	} // management
} // sun