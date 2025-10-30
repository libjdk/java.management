#include <sun/management/MappedMXBeanType$CompositeDataMXBeanType$2.h>

#include <java/lang/reflect/Method.h>
#include <sun/management/MappedMXBeanType$CompositeDataMXBeanType.h>
#include <jcpp.h>

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MappedMXBeanType$CompositeDataMXBeanType = ::sun::management::MappedMXBeanType$CompositeDataMXBeanType;

namespace sun {
	namespace management {

$FieldInfo _MappedMXBeanType$CompositeDataMXBeanType$2_FieldInfo_[] = {
	{"this$0", "Lsun/management/MappedMXBeanType$CompositeDataMXBeanType;", nullptr, $FINAL | $SYNTHETIC, $field(MappedMXBeanType$CompositeDataMXBeanType$2, this$0)},
	{}
};

$MethodInfo _MappedMXBeanType$CompositeDataMXBeanType$2_MethodInfo_[] = {
	{"<init>", "(Lsun/management/MappedMXBeanType$CompositeDataMXBeanType;)V", nullptr, 0, $method(static_cast<void(MappedMXBeanType$CompositeDataMXBeanType$2::*)($MappedMXBeanType$CompositeDataMXBeanType*)>(&MappedMXBeanType$CompositeDataMXBeanType$2::init$))},
	{"run", "()[Ljava/lang/reflect/Method;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MappedMXBeanType$CompositeDataMXBeanType$2_EnclosingMethodInfo_ = {
	"sun.management.MappedMXBeanType$CompositeDataMXBeanType",
	"<init>",
	"(Ljava/lang/Class;)V"
};

$InnerClassInfo _MappedMXBeanType$CompositeDataMXBeanType$2_InnerClassesInfo_[] = {
	{"sun.management.MappedMXBeanType$CompositeDataMXBeanType", "sun.management.MappedMXBeanType", "CompositeDataMXBeanType", $STATIC},
	{"sun.management.MappedMXBeanType$CompositeDataMXBeanType$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MappedMXBeanType$CompositeDataMXBeanType$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.MappedMXBeanType$CompositeDataMXBeanType$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_MappedMXBeanType$CompositeDataMXBeanType$2_FieldInfo_,
	_MappedMXBeanType$CompositeDataMXBeanType$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<[Ljava/lang/reflect/Method;>;",
	&_MappedMXBeanType$CompositeDataMXBeanType$2_EnclosingMethodInfo_,
	_MappedMXBeanType$CompositeDataMXBeanType$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.MappedMXBeanType"
};

$Object* allocate$MappedMXBeanType$CompositeDataMXBeanType$2($Class* clazz) {
	return $of($alloc(MappedMXBeanType$CompositeDataMXBeanType$2));
}

void MappedMXBeanType$CompositeDataMXBeanType$2::init$($MappedMXBeanType$CompositeDataMXBeanType* this$0) {
	$set(this, this$0, this$0);
}

$Object* MappedMXBeanType$CompositeDataMXBeanType$2::run() {
	$beforeCallerSensitive();
	return $of($nc(this->this$0->javaClass)->getMethods());
}

MappedMXBeanType$CompositeDataMXBeanType$2::MappedMXBeanType$CompositeDataMXBeanType$2() {
}

$Class* MappedMXBeanType$CompositeDataMXBeanType$2::load$($String* name, bool initialize) {
	$loadClass(MappedMXBeanType$CompositeDataMXBeanType$2, name, initialize, &_MappedMXBeanType$CompositeDataMXBeanType$2_ClassInfo_, allocate$MappedMXBeanType$CompositeDataMXBeanType$2);
	return class$;
}

$Class* MappedMXBeanType$CompositeDataMXBeanType$2::class$ = nullptr;

	} // management
} // sun