#include <javax/management/monitor/GaugeMonitor$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <javax/management/monitor/GaugeMonitor.h>
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
using $GaugeMonitor = ::javax::management::monitor::GaugeMonitor;
using $Monitor = ::javax::management::monitor::Monitor;
using $Monitor$NumericalType = ::javax::management::monitor::Monitor$NumericalType;

namespace javax {
	namespace management {
		namespace monitor {

$FieldInfo _GaugeMonitor$1_FieldInfo_[] = {
	{"$SwitchMap$javax$management$monitor$Monitor$NumericalType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GaugeMonitor$1, $SwitchMap$javax$management$monitor$Monitor$NumericalType)},
	{}
};

$EnclosingMethodInfo _GaugeMonitor$1_EnclosingMethodInfo_ = {
	"javax.management.monitor.GaugeMonitor",
	nullptr,
	nullptr
};

$InnerClassInfo _GaugeMonitor$1_InnerClassesInfo_[] = {
	{"javax.management.monitor.GaugeMonitor$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _GaugeMonitor$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.management.monitor.GaugeMonitor$1",
	"java.lang.Object",
	nullptr,
	_GaugeMonitor$1_FieldInfo_,
	nullptr,
	nullptr,
	&_GaugeMonitor$1_EnclosingMethodInfo_,
	_GaugeMonitor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.monitor.GaugeMonitor"
};

$Object* allocate$GaugeMonitor$1($Class* clazz) {
	return $of($alloc(GaugeMonitor$1));
}

$ints* GaugeMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType = nullptr;

void clinit$GaugeMonitor$1($Class* class$) {
	$assignStatic(GaugeMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType, $new($ints, $($Monitor$NumericalType::values())->length));
	{
		try {
			$nc(GaugeMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::INTEGER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GaugeMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::BYTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GaugeMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GaugeMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::LONG->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GaugeMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::FLOAT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GaugeMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::DOUBLE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

GaugeMonitor$1::GaugeMonitor$1() {
}

$Class* GaugeMonitor$1::load$($String* name, bool initialize) {
	$loadClass(GaugeMonitor$1, name, initialize, &_GaugeMonitor$1_ClassInfo_, clinit$GaugeMonitor$1, allocate$GaugeMonitor$1);
	return class$;
}

$Class* GaugeMonitor$1::class$ = nullptr;

		} // monitor
	} // management
} // javax