#include <javax/management/monitor/CounterMonitor$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/management/monitor/CounterMonitor.h>
#include <javax/management/monitor/Monitor$NumericalType.h>
#include <javax/management/monitor/Monitor.h>
#include <jcpp.h>

#undef BYTE
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
using $CounterMonitor = ::javax::management::monitor::CounterMonitor;
using $Monitor = ::javax::management::monitor::Monitor;
using $Monitor$NumericalType = ::javax::management::monitor::Monitor$NumericalType;

namespace javax {
	namespace management {
		namespace monitor {

$FieldInfo _CounterMonitor$1_FieldInfo_[] = {
	{"$SwitchMap$javax$management$monitor$Monitor$NumericalType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CounterMonitor$1, $SwitchMap$javax$management$monitor$Monitor$NumericalType)},
	{}
};

$EnclosingMethodInfo _CounterMonitor$1_EnclosingMethodInfo_ = {
	"javax.management.monitor.CounterMonitor",
	nullptr,
	nullptr
};

$InnerClassInfo _CounterMonitor$1_InnerClassesInfo_[] = {
	{"javax.management.monitor.CounterMonitor$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _CounterMonitor$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.management.monitor.CounterMonitor$1",
	"java.lang.Object",
	nullptr,
	_CounterMonitor$1_FieldInfo_,
	nullptr,
	nullptr,
	&_CounterMonitor$1_EnclosingMethodInfo_,
	_CounterMonitor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.monitor.CounterMonitor"
};

$Object* allocate$CounterMonitor$1($Class* clazz) {
	return $of($alloc(CounterMonitor$1));
}

$ints* CounterMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType = nullptr;

void clinit$CounterMonitor$1($Class* class$) {
	$assignStatic(CounterMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType, $new($ints, $($Monitor$NumericalType::values())->length));
	{
		try {
			$nc(CounterMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::INTEGER->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CounterMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::BYTE->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CounterMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CounterMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType)->set($Monitor$NumericalType::LONG->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

CounterMonitor$1::CounterMonitor$1() {
}

$Class* CounterMonitor$1::load$($String* name, bool initialize) {
	$loadClass(CounterMonitor$1, name, initialize, &_CounterMonitor$1_ClassInfo_, clinit$CounterMonitor$1, allocate$CounterMonitor$1);
	return class$;
}

$Class* CounterMonitor$1::class$ = nullptr;

		} // monitor
	} // management
} // javax