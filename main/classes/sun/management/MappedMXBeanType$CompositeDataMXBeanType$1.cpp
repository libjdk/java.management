#include <sun/management/MappedMXBeanType$CompositeDataMXBeanType$1.h>

#include <java/lang/reflect/Method.h>
#include <sun/management/MappedMXBeanType$CompositeDataMXBeanType.h>
#include <sun/management/MappedMXBeanType.h>
#include <jcpp.h>

#undef COMPOSITE_DATA_CLASS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;
using $MappedMXBeanType$CompositeDataMXBeanType = ::sun::management::MappedMXBeanType$CompositeDataMXBeanType;

namespace sun {
	namespace management {

$FieldInfo _MappedMXBeanType$CompositeDataMXBeanType$1_FieldInfo_[] = {
	{"this$0", "Lsun/management/MappedMXBeanType$CompositeDataMXBeanType;", nullptr, $FINAL | $SYNTHETIC, $field(MappedMXBeanType$CompositeDataMXBeanType$1, this$0)},
	{}
};

$MethodInfo _MappedMXBeanType$CompositeDataMXBeanType$1_MethodInfo_[] = {
	{"<init>", "(Lsun/management/MappedMXBeanType$CompositeDataMXBeanType;)V", nullptr, 0, $method(static_cast<void(MappedMXBeanType$CompositeDataMXBeanType$1::*)($MappedMXBeanType$CompositeDataMXBeanType*)>(&MappedMXBeanType$CompositeDataMXBeanType$1::init$))},
	{"run", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, nullptr, "java.lang.NoSuchMethodException"},
	{}
};

$EnclosingMethodInfo _MappedMXBeanType$CompositeDataMXBeanType$1_EnclosingMethodInfo_ = {
	"sun.management.MappedMXBeanType$CompositeDataMXBeanType",
	"<init>",
	"(Ljava/lang/Class;)V"
};

$InnerClassInfo _MappedMXBeanType$CompositeDataMXBeanType$1_InnerClassesInfo_[] = {
	{"sun.management.MappedMXBeanType$CompositeDataMXBeanType", "sun.management.MappedMXBeanType", "CompositeDataMXBeanType", $STATIC},
	{"sun.management.MappedMXBeanType$CompositeDataMXBeanType$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MappedMXBeanType$CompositeDataMXBeanType$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.MappedMXBeanType$CompositeDataMXBeanType$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_MappedMXBeanType$CompositeDataMXBeanType$1_FieldInfo_,
	_MappedMXBeanType$CompositeDataMXBeanType$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/reflect/Method;>;",
	&_MappedMXBeanType$CompositeDataMXBeanType$1_EnclosingMethodInfo_,
	_MappedMXBeanType$CompositeDataMXBeanType$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.MappedMXBeanType"
};

$Object* allocate$MappedMXBeanType$CompositeDataMXBeanType$1($Class* clazz) {
	return $of($alloc(MappedMXBeanType$CompositeDataMXBeanType$1));
}

void MappedMXBeanType$CompositeDataMXBeanType$1::init$($MappedMXBeanType$CompositeDataMXBeanType* this$0) {
	$set(this, this$0, this$0);
}

$Object* MappedMXBeanType$CompositeDataMXBeanType$1::run() {
	$beforeCallerSensitive();
	$init($MappedMXBeanType);
	return $of($nc(this->this$0->javaClass)->getMethod("from"_s, $$new($ClassArray, {$MappedMXBeanType::COMPOSITE_DATA_CLASS})));
}

MappedMXBeanType$CompositeDataMXBeanType$1::MappedMXBeanType$CompositeDataMXBeanType$1() {
}

$Class* MappedMXBeanType$CompositeDataMXBeanType$1::load$($String* name, bool initialize) {
	$loadClass(MappedMXBeanType$CompositeDataMXBeanType$1, name, initialize, &_MappedMXBeanType$CompositeDataMXBeanType$1_ClassInfo_, allocate$MappedMXBeanType$CompositeDataMXBeanType$1);
	return class$;
}

$Class* MappedMXBeanType$CompositeDataMXBeanType$1::class$ = nullptr;

	} // management
} // sun