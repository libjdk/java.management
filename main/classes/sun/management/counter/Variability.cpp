#include <sun/management/counter/Variability.h>

#include <jcpp.h>

#undef CONSTANT
#undef INVALID
#undef MONOTONIC
#undef NATTRIBUTES
#undef VARIABLE

using $VariabilityArray = $Array<::sun::management::counter::Variability>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace management {
		namespace counter {

$FieldInfo _Variability_FieldInfo_[] = {
	{"NATTRIBUTES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Variability, NATTRIBUTES)},
	{"map", "[Lsun/management/counter/Variability;", nullptr, $PRIVATE | $STATIC, $staticField(Variability, map)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Variability, name)},
	{"value", "I", nullptr, $PRIVATE, $field(Variability, value)},
	{"INVALID", "Lsun/management/counter/Variability;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Variability, INVALID)},
	{"CONSTANT", "Lsun/management/counter/Variability;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Variability, CONSTANT)},
	{"MONOTONIC", "Lsun/management/counter/Variability;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Variability, MONOTONIC)},
	{"VARIABLE", "Lsun/management/counter/Variability;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Variability, VARIABLE)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Variability, serialVersionUID)},
	{}
};

$MethodInfo _Variability_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Variability::*)($String*,int32_t)>(&Variability::init$))},
	{"intValue", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toVariability", "(I)Lsun/management/counter/Variability;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Variability*(*)(int32_t)>(&Variability::toVariability))},
	{}
};

$ClassInfo _Variability_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.counter.Variability",
	"java.lang.Object",
	"java.io.Serializable",
	_Variability_FieldInfo_,
	_Variability_MethodInfo_
};

$Object* allocate$Variability($Class* clazz) {
	return $of($alloc(Variability));
}

$VariabilityArray* Variability::map = nullptr;
Variability* Variability::INVALID = nullptr;
Variability* Variability::CONSTANT = nullptr;
Variability* Variability::MONOTONIC = nullptr;
Variability* Variability::VARIABLE = nullptr;

$String* Variability::toString() {
	return this->name;
}

int32_t Variability::intValue() {
	return this->value;
}

Variability* Variability::toVariability(int32_t value) {
	$init(Variability);
	if (value < 0 || value >= $nc(Variability::map)->length || $nc(Variability::map)->get(value) == nullptr) {
		return Variability::INVALID;
	}
	return $nc(Variability::map)->get(value);
}

void Variability::init$($String* name, int32_t value) {
	$set(this, name, name);
	this->value = value;
	$nc(Variability::map)->set(value, this);
}

void clinit$Variability($Class* class$) {
	$assignStatic(Variability::map, $new($VariabilityArray, Variability::NATTRIBUTES));
	$assignStatic(Variability::INVALID, $new(Variability, "Invalid"_s, 0));
	$assignStatic(Variability::CONSTANT, $new(Variability, "Constant"_s, 1));
	$assignStatic(Variability::MONOTONIC, $new(Variability, "Monotonic"_s, 2));
	$assignStatic(Variability::VARIABLE, $new(Variability, "Variable"_s, 3));
}

Variability::Variability() {
}

$Class* Variability::load$($String* name, bool initialize) {
	$loadClass(Variability, name, initialize, &_Variability_ClassInfo_, clinit$Variability, allocate$Variability);
	return class$;
}

$Class* Variability::class$ = nullptr;

		} // counter
	} // management
} // sun