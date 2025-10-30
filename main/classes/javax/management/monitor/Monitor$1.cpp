#include <javax/management/monitor/Monitor$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <javax/management/monitor/Monitor$NumericalType.h>
#include <javax/management/monitor/Monitor.h>
#include <jcpp.h>

#undef BYTE
#undef DOUBLE
#undef FLOAT
#undef INTEGER
#undef LONG
#undef SHORT

using $Monitor$NumericalTypeArray = $Array<::javax::management::monitor::Monitor$NumericalType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Monitor = ::javax::management::monitor::Monitor;
using $Monitor$NumericalType = ::javax::management::monitor::Monitor$NumericalType;

namespace javax {
	namespace management {
		namespace monitor {

$FieldInfo _Monitor$1_FieldInfo_[] = {
	{"$SwitchMap$javax$management$monitor$Monitor$NumericalType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Monitor$1, $SwitchMap$javax$management$monitor$Monitor$NumericalType)},
	{}
};

$EnclosingMethodInfo _Monitor$1_EnclosingMethodInfo_ = {
	"javax.management.monitor.Monitor",
	nullptr,
	nullptr
};

$InnerClassInfo _Monitor$1_InnerClassesInfo_[] = {
	{"javax.management.monitor.Monitor$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Monitor$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.management.monitor.Monitor$1",
	"java.lang.Object",
	nullptr,
	_Monitor$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Monitor$1_EnclosingMethodInfo_,
	_Monitor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.monitor.Monitor"
};

$Object* allocate$Monitor$1($Class* clazz) {
	return $of($alloc(Monitor$1));
}

$ints* Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType = nullptr;

void clinit$Monitor$1($Class* class$) {
	$assignStatic(Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType, $new($ints, $($Monitor$NumericalType::values())->length));
	{
		try {
			$nc(Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::BYTE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::SHORT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::INTEGER->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::LONG->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::FLOAT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::DOUBLE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Monitor$1::Monitor$1() {
}

$Class* Monitor$1::load$($String* name, bool initialize) {
	$loadClass(Monitor$1, name, initialize, &_Monitor$1_ClassInfo_, clinit$Monitor$1, allocate$Monitor$1);
	return class$;
}

$Class* Monitor$1::class$ = nullptr;

		} // monitor
	} // management
} // javax