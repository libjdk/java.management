#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$ArrayMapping.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/GenericArrayType.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/ArrayType.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $DefaultMXBeanMappingFactory$NonNullMXBeanMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping;
using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $GenericArrayType = ::java::lang::reflect::GenericArrayType;
using $Type = ::java::lang::reflect::Type;
using $ArrayType = ::javax::management::openmbean::ArrayType;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _DefaultMXBeanMappingFactory$ArrayMapping_FieldInfo_[] = {
	{"elementMapping", "Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$ArrayMapping, elementMapping)},
	{}
};

$MethodInfo _DefaultMXBeanMappingFactory$ArrayMapping_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/ArrayType;Ljava/lang/Class;Lcom/sun/jmx/mbeanserver/MXBeanMapping;)V", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/ArrayType<*>;Ljava/lang/Class<*>;Lcom/sun/jmx/mbeanserver/MXBeanMapping;)V", 0, $method(static_cast<void(DefaultMXBeanMappingFactory$ArrayMapping::*)($Type*,$ArrayType*,$Class*,$MXBeanMapping*)>(&DefaultMXBeanMappingFactory$ArrayMapping::init$))},
	{"checkReconstructible", "()V", nullptr, $PUBLIC, nullptr, "java.io.InvalidObjectException"},
	{"fromNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL, nullptr, "java.io.InvalidObjectException"},
	{"toNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL, nullptr, "javax.management.openmbean.OpenDataException"},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$ArrayMapping_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$ArrayMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "ArrayMapping", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "NonNullMXBeanMapping", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$ArrayMapping_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$ArrayMapping",
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping",
	nullptr,
	_DefaultMXBeanMappingFactory$ArrayMapping_FieldInfo_,
	_DefaultMXBeanMappingFactory$ArrayMapping_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMXBeanMappingFactory$ArrayMapping_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$ArrayMapping($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$ArrayMapping));
}

void DefaultMXBeanMappingFactory$ArrayMapping::init$($Type* targetType, $ArrayType* openArrayType, $Class* openArrayClass, $MXBeanMapping* elementMapping) {
	$DefaultMXBeanMappingFactory$NonNullMXBeanMapping::init$(targetType, openArrayType);
	$set(this, elementMapping, elementMapping);
}

$Object* DefaultMXBeanMappingFactory$ArrayMapping::toNonNullOpenValue(Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, valueArray, $cast($ObjectArray, value));
	int32_t len = $nc(valueArray)->length;
	$var($ObjectArray, openArray, $cast($ObjectArray, $1Array::newInstance($nc(getOpenClass())->getComponentType(), len)));
	for (int32_t i = 0; i < len; ++i) {
		openArray->set(i, $($nc(this->elementMapping)->toOpenValue(valueArray->get(i))));
	}
	return $of(openArray);
}

$Object* DefaultMXBeanMappingFactory$ArrayMapping::fromNonNullOpenValue(Object$* openValue) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, openArray, $cast($ObjectArray, openValue));
	$var($Type, javaType, getJavaType());
	$var($ObjectArray, valueArray, nullptr);
	$var($Type, componentType, nullptr);
	if ($instanceOf($GenericArrayType, javaType)) {
		$assign(componentType, $nc(($cast($GenericArrayType, javaType)))->getGenericComponentType());
	} else if ($instanceOf($Class, javaType) && $nc(($cast($Class, javaType)))->isArray()) {
		$assign(componentType, $nc(($cast($Class, javaType)))->getComponentType());
	} else {
		$throwNew($IllegalArgumentException, $$str({"Not an array: "_s, javaType}));
	}
	$assign(valueArray, $cast($ObjectArray, $1Array::newInstance($cast($Class, componentType), $nc(openArray)->length)));
	for (int32_t i = 0; i < $nc(openArray)->length; ++i) {
		valueArray->set(i, $($nc(this->elementMapping)->fromOpenValue(openArray->get(i))));
	}
	return $of(valueArray);
}

void DefaultMXBeanMappingFactory$ArrayMapping::checkReconstructible() {
	$nc(this->elementMapping)->checkReconstructible();
}

DefaultMXBeanMappingFactory$ArrayMapping::DefaultMXBeanMappingFactory$ArrayMapping() {
}

$Class* DefaultMXBeanMappingFactory$ArrayMapping::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$ArrayMapping, name, initialize, &_DefaultMXBeanMappingFactory$ArrayMapping_ClassInfo_, allocate$DefaultMXBeanMappingFactory$ArrayMapping);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$ArrayMapping::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com