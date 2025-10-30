#include <sun/management/VMManagementImpl$1.h>

#include <sun/management/VMManagementImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $VMManagementImpl = ::sun::management::VMManagementImpl;

namespace sun {
	namespace management {

$FieldInfo _VMManagementImpl$1_FieldInfo_[] = {
	{"this$0", "Lsun/management/VMManagementImpl;", nullptr, $FINAL | $SYNTHETIC, $field(VMManagementImpl$1, this$0)},
	{}
};

$MethodInfo _VMManagementImpl$1_MethodInfo_[] = {
	{"<init>", "(Lsun/management/VMManagementImpl;)V", nullptr, 0, $method(static_cast<void(VMManagementImpl$1::*)($VMManagementImpl*)>(&VMManagementImpl$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _VMManagementImpl$1_EnclosingMethodInfo_ = {
	"sun.management.VMManagementImpl",
	"getCompilerName",
	"()Ljava/lang/String;"
};

$InnerClassInfo _VMManagementImpl$1_InnerClassesInfo_[] = {
	{"sun.management.VMManagementImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _VMManagementImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.VMManagementImpl$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_VMManagementImpl$1_FieldInfo_,
	_VMManagementImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_VMManagementImpl$1_EnclosingMethodInfo_,
	_VMManagementImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.VMManagementImpl"
};

$Object* allocate$VMManagementImpl$1($Class* clazz) {
	return $of($alloc(VMManagementImpl$1));
}

void VMManagementImpl$1::init$($VMManagementImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* VMManagementImpl$1::run() {
	return $of($System::getProperty("sun.management.compiler"_s));
}

VMManagementImpl$1::VMManagementImpl$1() {
}

$Class* VMManagementImpl$1::load$($String* name, bool initialize) {
	$loadClass(VMManagementImpl$1, name, initialize, &_VMManagementImpl$1_ClassInfo_, allocate$VMManagementImpl$1);
	return class$;
}

$Class* VMManagementImpl$1::class$ = nullptr;

	} // management
} // sun