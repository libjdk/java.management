#include <sun/management/MappedMXBeanType$EnumMXBeanType.h>

#include <java/io/InvalidObjectException.h>
#include <java/lang/Enum.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/OpenType.h>
#include <javax/management/openmbean/SimpleType.h>
#include <sun/management/MappedMXBeanType.h>
#include <jcpp.h>

#undef STRING

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Type = ::java::lang::reflect::Type;
using $OpenType = ::javax::management::openmbean::OpenType;
using $SimpleType = ::javax::management::openmbean::SimpleType;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;

namespace sun {
	namespace management {

$FieldInfo _MappedMXBeanType$EnumMXBeanType_FieldInfo_[] = {
	{"enumClass", "Ljava/lang/Class;", nullptr, $FINAL, $field(MappedMXBeanType$EnumMXBeanType, enumClass)},
	{}
};

$MethodInfo _MappedMXBeanType$EnumMXBeanType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", 0, $method(static_cast<void(MappedMXBeanType$EnumMXBeanType::*)($Class*)>(&MappedMXBeanType$EnumMXBeanType::init$))},
	{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"toJavaTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.openmbean.OpenDataException,java.io.InvalidObjectException"},
	{"toOpenTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.openmbean.OpenDataException"},
	{}
};

$InnerClassInfo _MappedMXBeanType$EnumMXBeanType_InnerClassesInfo_[] = {
	{"sun.management.MappedMXBeanType$EnumMXBeanType", "sun.management.MappedMXBeanType", "EnumMXBeanType", $STATIC},
	{}
};

$ClassInfo _MappedMXBeanType$EnumMXBeanType_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.MappedMXBeanType$EnumMXBeanType",
	"sun.management.MappedMXBeanType",
	nullptr,
	_MappedMXBeanType$EnumMXBeanType_FieldInfo_,
	_MappedMXBeanType$EnumMXBeanType_MethodInfo_,
	nullptr,
	nullptr,
	_MappedMXBeanType$EnumMXBeanType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.MappedMXBeanType"
};

$Object* allocate$MappedMXBeanType$EnumMXBeanType($Class* clazz) {
	return $of($alloc(MappedMXBeanType$EnumMXBeanType));
}

void MappedMXBeanType$EnumMXBeanType::init$($Class* c) {
	$MappedMXBeanType::init$();
	$set(this, enumClass, c);
	$init($SimpleType);
	$set(this, openType, $SimpleType::STRING);
	$set(this, mappedTypeClass, $String::class$);
}

$Type* MappedMXBeanType$EnumMXBeanType::getJavaType() {
	return this->enumClass;
}

$String* MappedMXBeanType$EnumMXBeanType::getName() {
	return $nc(this->enumClass)->getName();
}

$Object* MappedMXBeanType$EnumMXBeanType::toOpenTypeData(Object$* data) {
	return $of($nc(($cast($Enum, data)))->name());
}

$Object* MappedMXBeanType$EnumMXBeanType::toJavaTypeData(Object$* data) {
	$useLocalCurrentObjectStackCache();
	try {
		return $of($Enum::valueOf(this->enumClass, $cast($String, data)));
	} catch ($IllegalArgumentException& e) {
		$var($InvalidObjectException, ioe, $new($InvalidObjectException, $$str({"Enum constant named "_s, $cast($String, data), " is missing"_s})));
		ioe->initCause(e);
		$throw(ioe);
	}
	$shouldNotReachHere();
}

MappedMXBeanType$EnumMXBeanType::MappedMXBeanType$EnumMXBeanType() {
}

$Class* MappedMXBeanType$EnumMXBeanType::load$($String* name, bool initialize) {
	$loadClass(MappedMXBeanType$EnumMXBeanType, name, initialize, &_MappedMXBeanType$EnumMXBeanType_ClassInfo_, allocate$MappedMXBeanType$EnumMXBeanType);
	return class$;
}

$Class* MappedMXBeanType$EnumMXBeanType::class$ = nullptr;

	} // management
} // sun