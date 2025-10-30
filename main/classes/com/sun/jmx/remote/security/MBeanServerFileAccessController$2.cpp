#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$2.h>

#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef CREATE
#undef READ
#undef UNREGISTER
#undef WRITE

using $MBeanServerFileAccessController$AccessTypeArray = $Array<::com::sun::jmx::remote::security::MBeanServerFileAccessController$AccessType>;
using $MBeanServerFileAccessController = ::com::sun::jmx::remote::security::MBeanServerFileAccessController;
using $MBeanServerFileAccessController$AccessType = ::com::sun::jmx::remote::security::MBeanServerFileAccessController$AccessType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$FieldInfo _MBeanServerFileAccessController$2_FieldInfo_[] = {
	{"$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MBeanServerFileAccessController$2, $SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType)},
	{}
};

$EnclosingMethodInfo _MBeanServerFileAccessController$2_EnclosingMethodInfo_ = {
	"com.sun.jmx.remote.security.MBeanServerFileAccessController",
	nullptr,
	nullptr
};

$InnerClassInfo _MBeanServerFileAccessController$2_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.security.MBeanServerFileAccessController$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _MBeanServerFileAccessController$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.jmx.remote.security.MBeanServerFileAccessController$2",
	"java.lang.Object",
	nullptr,
	_MBeanServerFileAccessController$2_FieldInfo_,
	nullptr,
	nullptr,
	&_MBeanServerFileAccessController$2_EnclosingMethodInfo_,
	_MBeanServerFileAccessController$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.security.MBeanServerFileAccessController"
};

$Object* allocate$MBeanServerFileAccessController$2($Class* clazz) {
	return $of($alloc(MBeanServerFileAccessController$2));
}

$ints* MBeanServerFileAccessController$2::$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType = nullptr;

void clinit$MBeanServerFileAccessController$2($Class* class$) {
	$assignStatic(MBeanServerFileAccessController$2::$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType, $new($ints, $($MBeanServerFileAccessController$AccessType::values())->length));
	{
		try {
			$nc(MBeanServerFileAccessController$2::$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType)->set($MBeanServerFileAccessController$AccessType::READ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MBeanServerFileAccessController$2::$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType)->set($MBeanServerFileAccessController$AccessType::WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MBeanServerFileAccessController$2::$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType)->set($MBeanServerFileAccessController$AccessType::UNREGISTER->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MBeanServerFileAccessController$2::$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType)->set($MBeanServerFileAccessController$AccessType::CREATE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MBeanServerFileAccessController$2::MBeanServerFileAccessController$2() {
}

$Class* MBeanServerFileAccessController$2::load$($String* name, bool initialize) {
	$loadClass(MBeanServerFileAccessController$2, name, initialize, &_MBeanServerFileAccessController$2_ClassInfo_, clinit$MBeanServerFileAccessController$2, allocate$MBeanServerFileAccessController$2);
	return class$;
}

$Class* MBeanServerFileAccessController$2::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com