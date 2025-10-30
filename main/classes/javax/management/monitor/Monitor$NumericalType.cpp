#include <javax/management/monitor/Monitor$NumericalType.h>

#include <java/lang/Enum.h>
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
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Monitor = ::javax::management::monitor::Monitor;

namespace javax {
	namespace management {
		namespace monitor {

$FieldInfo _Monitor$NumericalType_FieldInfo_[] = {
	{"BYTE", "Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Monitor$NumericalType, BYTE)},
	{"SHORT", "Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Monitor$NumericalType, SHORT)},
	{"INTEGER", "Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Monitor$NumericalType, INTEGER)},
	{"LONG", "Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Monitor$NumericalType, LONG)},
	{"FLOAT", "Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Monitor$NumericalType, FLOAT)},
	{"DOUBLE", "Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Monitor$NumericalType, DOUBLE)},
	{"$VALUES", "[Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Monitor$NumericalType, $VALUES)},
	{}
};

$MethodInfo _Monitor$NumericalType_MethodInfo_[] = {
	{"$values", "()[Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Monitor$NumericalTypeArray*(*)()>(&Monitor$NumericalType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Monitor$NumericalType::*)($String*,int32_t)>(&Monitor$NumericalType::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Monitor$NumericalType*(*)($String*)>(&Monitor$NumericalType::valueOf))},
	{"values", "()[Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Monitor$NumericalTypeArray*(*)()>(&Monitor$NumericalType::values))},
	{}
};

$InnerClassInfo _Monitor$NumericalType_InnerClassesInfo_[] = {
	{"javax.management.monitor.Monitor$NumericalType", "javax.management.monitor.Monitor", "NumericalType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Monitor$NumericalType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"javax.management.monitor.Monitor$NumericalType",
	"java.lang.Enum",
	nullptr,
	_Monitor$NumericalType_FieldInfo_,
	_Monitor$NumericalType_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/management/monitor/Monitor$NumericalType;>;",
	nullptr,
	_Monitor$NumericalType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.monitor.Monitor"
};

$Object* allocate$Monitor$NumericalType($Class* clazz) {
	return $of($alloc(Monitor$NumericalType));
}

Monitor$NumericalType* Monitor$NumericalType::BYTE = nullptr;
Monitor$NumericalType* Monitor$NumericalType::SHORT = nullptr;
Monitor$NumericalType* Monitor$NumericalType::INTEGER = nullptr;
Monitor$NumericalType* Monitor$NumericalType::LONG = nullptr;
Monitor$NumericalType* Monitor$NumericalType::FLOAT = nullptr;
Monitor$NumericalType* Monitor$NumericalType::DOUBLE = nullptr;
$Monitor$NumericalTypeArray* Monitor$NumericalType::$VALUES = nullptr;

$Monitor$NumericalTypeArray* Monitor$NumericalType::$values() {
	$init(Monitor$NumericalType);
	return $new($Monitor$NumericalTypeArray, {
		Monitor$NumericalType::BYTE,
		Monitor$NumericalType::SHORT,
		Monitor$NumericalType::INTEGER,
		Monitor$NumericalType::LONG,
		Monitor$NumericalType::FLOAT,
		Monitor$NumericalType::DOUBLE
	});
}

$Monitor$NumericalTypeArray* Monitor$NumericalType::values() {
	$init(Monitor$NumericalType);
	return $cast($Monitor$NumericalTypeArray, Monitor$NumericalType::$VALUES->clone());
}

Monitor$NumericalType* Monitor$NumericalType::valueOf($String* name) {
	$init(Monitor$NumericalType);
	return $cast(Monitor$NumericalType, $Enum::valueOf(Monitor$NumericalType::class$, name));
}

void Monitor$NumericalType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Monitor$NumericalType($Class* class$) {
	$assignStatic(Monitor$NumericalType::BYTE, $new(Monitor$NumericalType, "BYTE"_s, 0));
	$assignStatic(Monitor$NumericalType::SHORT, $new(Monitor$NumericalType, "SHORT"_s, 1));
	$assignStatic(Monitor$NumericalType::INTEGER, $new(Monitor$NumericalType, "INTEGER"_s, 2));
	$assignStatic(Monitor$NumericalType::LONG, $new(Monitor$NumericalType, "LONG"_s, 3));
	$assignStatic(Monitor$NumericalType::FLOAT, $new(Monitor$NumericalType, "FLOAT"_s, 4));
	$assignStatic(Monitor$NumericalType::DOUBLE, $new(Monitor$NumericalType, "DOUBLE"_s, 5));
	$assignStatic(Monitor$NumericalType::$VALUES, Monitor$NumericalType::$values());
}

Monitor$NumericalType::Monitor$NumericalType() {
}

$Class* Monitor$NumericalType::load$($String* name, bool initialize) {
	$loadClass(Monitor$NumericalType, name, initialize, &_Monitor$NumericalType_ClassInfo_, clinit$Monitor$NumericalType, allocate$Monitor$NumericalType);
	return class$;
}

$Class* Monitor$NumericalType::class$ = nullptr;

		} // monitor
	} // management
} // javax