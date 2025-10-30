#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$EnumMapping.h>

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <java/io/InvalidObjectException.h>
#include <java/lang/Enum.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/OpenType.h>
#include <javax/management/openmbean/SimpleType.h>
#include <jcpp.h>

#undef STRING

using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $DefaultMXBeanMappingFactory$NonNullMXBeanMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Type = ::java::lang::reflect::Type;
using $OpenType = ::javax::management::openmbean::OpenType;
using $SimpleType = ::javax::management::openmbean::SimpleType;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _DefaultMXBeanMappingFactory$EnumMapping_FieldInfo_[] = {
	{"enumClass", "Ljava/lang/Class;", "Ljava/lang/Class<TT;>;", $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$EnumMapping, enumClass)},
	{}
};

$MethodInfo _DefaultMXBeanMappingFactory$EnumMapping_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<TT;>;)V", 0, $method(static_cast<void(DefaultMXBeanMappingFactory$EnumMapping::*)($Class*)>(&DefaultMXBeanMappingFactory$EnumMapping::init$))},
	{"fromNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Enum;", "(Ljava/lang/Object;)TT;", $FINAL, nullptr, "java.io.InvalidObjectException"},
	{"toNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL},
	{}
};

$InnerClassInfo _DefaultMXBeanMappingFactory$EnumMapping_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$EnumMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "EnumMapping", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "NonNullMXBeanMapping", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultMXBeanMappingFactory$EnumMapping_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$EnumMapping",
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping",
	nullptr,
	_DefaultMXBeanMappingFactory$EnumMapping_FieldInfo_,
	_DefaultMXBeanMappingFactory$EnumMapping_MethodInfo_,
	"<T:Ljava/lang/Enum<TT;>;>Lcom/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping;",
	nullptr,
	_DefaultMXBeanMappingFactory$EnumMapping_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
};

$Object* allocate$DefaultMXBeanMappingFactory$EnumMapping($Class* clazz) {
	return $of($alloc(DefaultMXBeanMappingFactory$EnumMapping));
}

void DefaultMXBeanMappingFactory$EnumMapping::init$($Class* enumClass) {
	$init($SimpleType);
	$DefaultMXBeanMappingFactory$NonNullMXBeanMapping::init$(enumClass, $SimpleType::STRING);
	$set(this, enumClass, enumClass);
}

$Object* DefaultMXBeanMappingFactory$EnumMapping::toNonNullOpenValue(Object$* value) {
	return $of($nc(($cast($Enum, value)))->name());
}

$Object* DefaultMXBeanMappingFactory$EnumMapping::fromNonNullOpenValue(Object$* value) {
	$useLocalCurrentObjectStackCache();
	try {
		return $of($Enum::valueOf(this->enumClass, $cast($String, value)));
	} catch ($Exception& e) {
		$throw($($DefaultMXBeanMappingFactory::invalidObjectException($$str({"Cannot convert to enum: "_s, value}), e)));
	}
	$shouldNotReachHere();
}

DefaultMXBeanMappingFactory$EnumMapping::DefaultMXBeanMappingFactory$EnumMapping() {
}

$Class* DefaultMXBeanMappingFactory$EnumMapping::load$($String* name, bool initialize) {
	$loadClass(DefaultMXBeanMappingFactory$EnumMapping, name, initialize, &_DefaultMXBeanMappingFactory$EnumMapping_ClassInfo_, allocate$DefaultMXBeanMappingFactory$EnumMapping);
	return class$;
}

$Class* DefaultMXBeanMappingFactory$EnumMapping::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com