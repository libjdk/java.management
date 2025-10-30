#include <javax/management/Attribute.h>

#include <javax/management/RuntimeOperationsException.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;

namespace javax {
	namespace management {

$FieldInfo _Attribute_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Attribute, serialVersionUID)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Attribute, name)},
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Attribute, value)},
	{}
};

$MethodInfo _Attribute_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Attribute::*)($String*,Object$*)>(&Attribute::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Attribute_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.Attribute",
	"java.lang.Object",
	"java.io.Serializable",
	_Attribute_FieldInfo_,
	_Attribute_MethodInfo_
};

$Object* allocate$Attribute($Class* clazz) {
	return $of($alloc(Attribute));
}

void Attribute::init$($String* name, Object$* value) {
	$set(this, value, nullptr);
	if (name == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Attribute name cannot be null "_s));
	}
	$set(this, name, name);
	$set(this, value, value);
}

$String* Attribute::getName() {
	return this->name;
}

$Object* Attribute::getValue() {
	return $of(this->value);
}

bool Attribute::equals(Object$* object) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(Attribute, object))) {
		return false;
	}
	$var(Attribute, val, $cast(Attribute, object));
	if (this->value == nullptr) {
		if ($nc(val)->getValue() == nullptr) {
			return $nc(this->name)->equals($(val->getName()));
		} else {
			return false;
		}
	}
	bool var$0 = ($nc(this->name)->equals($($nc(val)->getName())));
	return (var$0 && ($nc($of(this->value))->equals($($nc(val)->getValue()))));
}

int32_t Attribute::hashCode() {
	int32_t var$0 = $nc(this->name)->hashCode();
	return var$0 ^ (this->value == nullptr ? 0 : $nc($of(this->value))->hashCode());
}

$String* Attribute::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$(getName()), " = "_s}));
	return $concat(var$0, $(getValue()));
}

Attribute::Attribute() {
}

$Class* Attribute::load$($String* name, bool initialize) {
	$loadClass(Attribute, name, initialize, &_Attribute_ClassInfo_, allocate$Attribute);
	return class$;
}

$Class* Attribute::class$ = nullptr;

	} // management
} // javax