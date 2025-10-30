#include <sun/management/counter/Units.h>

#include <jcpp.h>

#undef BYTES
#undef EVENTS
#undef HERTZ
#undef INVALID
#undef NONE
#undef NUNITS
#undef STRING
#undef TICKS

using $UnitsArray = $Array<::sun::management::counter::Units>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace management {
		namespace counter {

$FieldInfo _Units_FieldInfo_[] = {
	{"NUNITS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Units, NUNITS)},
	{"map", "[Lsun/management/counter/Units;", nullptr, $PRIVATE | $STATIC, $staticField(Units, map)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Units, name)},
	{"value", "I", nullptr, $PRIVATE | $FINAL, $field(Units, value)},
	{"INVALID", "Lsun/management/counter/Units;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Units, INVALID)},
	{"NONE", "Lsun/management/counter/Units;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Units, NONE)},
	{"BYTES", "Lsun/management/counter/Units;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Units, BYTES)},
	{"TICKS", "Lsun/management/counter/Units;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Units, TICKS)},
	{"EVENTS", "Lsun/management/counter/Units;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Units, EVENTS)},
	{"STRING", "Lsun/management/counter/Units;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Units, STRING)},
	{"HERTZ", "Lsun/management/counter/Units;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Units, HERTZ)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Units, serialVersionUID)},
	{}
};

$MethodInfo _Units_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Units::*)($String*,int32_t)>(&Units::init$))},
	{"intValue", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toUnits", "(I)Lsun/management/counter/Units;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Units*(*)(int32_t)>(&Units::toUnits))},
	{}
};

$ClassInfo _Units_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.counter.Units",
	"java.lang.Object",
	"java.io.Serializable",
	_Units_FieldInfo_,
	_Units_MethodInfo_
};

$Object* allocate$Units($Class* clazz) {
	return $of($alloc(Units));
}

$UnitsArray* Units::map = nullptr;
Units* Units::INVALID = nullptr;
Units* Units::NONE = nullptr;
Units* Units::BYTES = nullptr;
Units* Units::TICKS = nullptr;
Units* Units::EVENTS = nullptr;
Units* Units::STRING = nullptr;
Units* Units::HERTZ = nullptr;

$String* Units::toString() {
	return this->name;
}

int32_t Units::intValue() {
	return this->value;
}

Units* Units::toUnits(int32_t value) {
	$init(Units);
	if (value < 0 || value >= $nc(Units::map)->length || $nc(Units::map)->get(value) == nullptr) {
		return Units::INVALID;
	}
	return $nc(Units::map)->get(value);
}

void Units::init$($String* name, int32_t value) {
	$set(this, name, name);
	this->value = value;
	$nc(Units::map)->set(value, this);
}

void clinit$Units($Class* class$) {
	$assignStatic(Units::map, $new($UnitsArray, Units::NUNITS));
	$assignStatic(Units::INVALID, $new(Units, "Invalid"_s, 0));
	$assignStatic(Units::NONE, $new(Units, "None"_s, 1));
	$assignStatic(Units::BYTES, $new(Units, "Bytes"_s, 2));
	$assignStatic(Units::TICKS, $new(Units, "Ticks"_s, 3));
	$assignStatic(Units::EVENTS, $new(Units, "Events"_s, 4));
	$assignStatic(Units::STRING, $new(Units, "String"_s, 5));
	$assignStatic(Units::HERTZ, $new(Units, "Hertz"_s, 6));
}

Units::Units() {
}

$Class* Units::load$($String* name, bool initialize) {
	$loadClass(Units, name, initialize, &_Units_ClassInfo_, clinit$Units, allocate$Units);
	return class$;
}

$Class* Units::class$ = nullptr;

		} // counter
	} // management
} // sun