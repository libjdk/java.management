#include <sun/management/MappedMXBeanType$BasicMXBeanType.h>

#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/management/MappedMXBeanType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $OpenType = ::javax::management::openmbean::OpenType;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;

namespace sun {
	namespace management {

$FieldInfo _MappedMXBeanType$BasicMXBeanType_FieldInfo_[] = {
	{"basicType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(MappedMXBeanType$BasicMXBeanType, basicType)},
	{}
};

$MethodInfo _MappedMXBeanType$BasicMXBeanType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljavax/management/openmbean/OpenType;)V", "(Ljava/lang/Class<*>;Ljavax/management/openmbean/OpenType<*>;)V", 0, $method(static_cast<void(MappedMXBeanType$BasicMXBeanType::*)($Class*,$OpenType*)>(&MappedMXBeanType$BasicMXBeanType::init$))},
	{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"toJavaTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.openmbean.OpenDataException,java.io.InvalidObjectException"},
	{"toOpenTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.openmbean.OpenDataException"},
	{}
};

$InnerClassInfo _MappedMXBeanType$BasicMXBeanType_InnerClassesInfo_[] = {
	{"sun.management.MappedMXBeanType$BasicMXBeanType", "sun.management.MappedMXBeanType", "BasicMXBeanType", $STATIC},
	{}
};

$ClassInfo _MappedMXBeanType$BasicMXBeanType_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.MappedMXBeanType$BasicMXBeanType",
	"sun.management.MappedMXBeanType",
	nullptr,
	_MappedMXBeanType$BasicMXBeanType_FieldInfo_,
	_MappedMXBeanType$BasicMXBeanType_MethodInfo_,
	nullptr,
	nullptr,
	_MappedMXBeanType$BasicMXBeanType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.MappedMXBeanType"
};

$Object* allocate$MappedMXBeanType$BasicMXBeanType($Class* clazz) {
	return $of($alloc(MappedMXBeanType$BasicMXBeanType));
}

void MappedMXBeanType$BasicMXBeanType::init$($Class* c, $OpenType* openType) {
	$MappedMXBeanType::init$();
	$set(this, basicType, c);
	$set(this, openType, openType);
	$set(this, mappedTypeClass, c);
	this->isBasicType$ = true;
}

$Type* MappedMXBeanType$BasicMXBeanType::getJavaType() {
	return this->basicType;
}

$String* MappedMXBeanType$BasicMXBeanType::getName() {
	return $nc(this->basicType)->getName();
}

$Object* MappedMXBeanType$BasicMXBeanType::toOpenTypeData(Object$* data) {
	return $of(data);
}

$Object* MappedMXBeanType$BasicMXBeanType::toJavaTypeData(Object$* data) {
	return $of(data);
}

MappedMXBeanType$BasicMXBeanType::MappedMXBeanType$BasicMXBeanType() {
}

$Class* MappedMXBeanType$BasicMXBeanType::load$($String* name, bool initialize) {
	$loadClass(MappedMXBeanType$BasicMXBeanType, name, initialize, &_MappedMXBeanType$BasicMXBeanType_ClassInfo_, allocate$MappedMXBeanType$BasicMXBeanType);
	return class$;
}

$Class* MappedMXBeanType$BasicMXBeanType::class$ = nullptr;

	} // management
} // sun