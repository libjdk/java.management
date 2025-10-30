#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Type = ::java::lang::reflect::Type;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _MXBeanMapping_FieldInfo_[] = {
	{"javaType", "Ljava/lang/reflect/Type;", nullptr, $PRIVATE | $FINAL, $field(MXBeanMapping, javaType)},
	{"openType", "Ljavax/management/openmbean/OpenType;", "Ljavax/management/openmbean/OpenType<*>;", $PRIVATE | $FINAL, $field(MXBeanMapping, openType)},
	{"openClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(MXBeanMapping, openClass)},
	{}
};

$MethodInfo _MXBeanMapping_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/OpenType;)V", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/OpenType<*>;)V", $PROTECTED, $method(static_cast<void(MXBeanMapping::*)($Type*,$OpenType*)>(&MXBeanMapping::init$))},
	{"checkReconstructible", "()V", nullptr, $PUBLIC, nullptr, "java.io.InvalidObjectException"},
	{"fromOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.InvalidObjectException"},
	{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Type*(MXBeanMapping::*)()>(&MXBeanMapping::getJavaType))},
	{"getOpenClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $FINAL, $method(static_cast<$Class*(MXBeanMapping::*)()>(&MXBeanMapping::getOpenClass))},
	{"getOpenType", "()Ljavax/management/openmbean/OpenType;", "()Ljavax/management/openmbean/OpenType<*>;", $PUBLIC | $FINAL, $method(static_cast<$OpenType*(MXBeanMapping::*)()>(&MXBeanMapping::getOpenType))},
	{"makeOpenClass", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/OpenType;)Ljava/lang/Class;", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/OpenType<*>;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($Type*,$OpenType*)>(&MXBeanMapping::makeOpenClass))},
	{"toOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.openmbean.OpenDataException"},
	{}
};

$ClassInfo _MXBeanMapping_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jmx.mbeanserver.MXBeanMapping",
	"java.lang.Object",
	nullptr,
	_MXBeanMapping_FieldInfo_,
	_MXBeanMapping_MethodInfo_
};

$Object* allocate$MXBeanMapping($Class* clazz) {
	return $of($alloc(MXBeanMapping));
}

void MXBeanMapping::init$($Type* javaType, $OpenType* openType) {
	if (javaType == nullptr || openType == nullptr) {
		$throwNew($NullPointerException, "Null argument"_s);
	}
	$set(this, javaType, javaType);
	$set(this, openType, openType);
	$set(this, openClass, makeOpenClass(javaType, openType));
}

$Type* MXBeanMapping::getJavaType() {
	return this->javaType;
}

$OpenType* MXBeanMapping::getOpenType() {
	return this->openType;
}

$Class* MXBeanMapping::getOpenClass() {
	return this->openClass;
}

$Class* MXBeanMapping::makeOpenClass($Type* javaType, $OpenType* openType) {
	$load(MXBeanMapping);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($instanceOf($Class, javaType) && $nc(($cast($Class, javaType)))->isPrimitive()) {
		return $cast($Class, javaType);
	}
	try {
		$var($String, className, $nc(openType)->getClassName());
		return $Class::forName(className, false, $(MXBeanMapping::class$->getClassLoader()));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void MXBeanMapping::checkReconstructible() {
}

MXBeanMapping::MXBeanMapping() {
}

$Class* MXBeanMapping::load$($String* name, bool initialize) {
	$loadClass(MXBeanMapping, name, initialize, &_MXBeanMapping_ClassInfo_, allocate$MXBeanMapping);
	return class$;
}

$Class* MXBeanMapping::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com