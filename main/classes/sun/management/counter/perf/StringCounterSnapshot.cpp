#include <sun/management/counter/perf/StringCounterSnapshot.h>

#include <sun/management/counter/AbstractCounter.h>
#include <sun/management/counter/Units.h>
#include <sun/management/counter/Variability.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCounter = ::sun::management::counter::AbstractCounter;
using $StringCounter = ::sun::management::counter::StringCounter;
using $Units = ::sun::management::counter::Units;
using $Variability = ::sun::management::counter::Variability;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

$FieldInfo _StringCounterSnapshot_FieldInfo_[] = {
	{"value", "Ljava/lang/String;", nullptr, 0, $field(StringCounterSnapshot, value)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringCounterSnapshot, serialVersionUID)},
	{}
};

$MethodInfo _StringCounterSnapshot_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getFlags", "()I", nullptr, $PUBLIC},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getUnits", "()Lsun/management/counter/Units;", nullptr, $PUBLIC},
	{"*getVariability", "()Lsun/management/counter/Variability;", nullptr, $PUBLIC},
	{"*getVectorLength", "()I", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Lsun/management/counter/Units;Lsun/management/counter/Variability;ILjava/lang/String;)V", nullptr, 0, $method(static_cast<void(StringCounterSnapshot::*)($String*,$Units*,$Variability*,int32_t,$String*)>(&StringCounterSnapshot::init$))},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*isInternal", "()Z", nullptr, $PUBLIC},
	{"*isVector", "()Z", nullptr, $PUBLIC},
	{"stringValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StringCounterSnapshot_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.counter.perf.StringCounterSnapshot",
	"sun.management.counter.AbstractCounter",
	"sun.management.counter.StringCounter",
	_StringCounterSnapshot_FieldInfo_,
	_StringCounterSnapshot_MethodInfo_
};

$Object* allocate$StringCounterSnapshot($Class* clazz) {
	return $of($alloc(StringCounterSnapshot));
}

$String* StringCounterSnapshot::getName() {
	 return this->$AbstractCounter::getName();
}

$Units* StringCounterSnapshot::getUnits() {
	 return this->$AbstractCounter::getUnits();
}

$Variability* StringCounterSnapshot::getVariability() {
	 return this->$AbstractCounter::getVariability();
}

bool StringCounterSnapshot::isVector() {
	 return this->$AbstractCounter::isVector();
}

int32_t StringCounterSnapshot::getVectorLength() {
	 return this->$AbstractCounter::getVectorLength();
}

bool StringCounterSnapshot::isInternal() {
	 return this->$AbstractCounter::isInternal();
}

int32_t StringCounterSnapshot::getFlags() {
	 return this->$AbstractCounter::getFlags();
}

$String* StringCounterSnapshot::toString() {
	 return this->$AbstractCounter::toString();
}

int32_t StringCounterSnapshot::hashCode() {
	 return this->$AbstractCounter::hashCode();
}

bool StringCounterSnapshot::equals(Object$* arg0) {
	 return this->$AbstractCounter::equals(arg0);
}

$Object* StringCounterSnapshot::clone() {
	 return this->$AbstractCounter::clone();
}

void StringCounterSnapshot::finalize() {
	this->$AbstractCounter::finalize();
}

void StringCounterSnapshot::init$($String* name, $Units* u, $Variability* v, int32_t flags, $String* value) {
	$AbstractCounter::init$(name, u, v, flags);
	$set(this, value, value);
}

$Object* StringCounterSnapshot::getValue() {
	return $of(this->value);
}

$String* StringCounterSnapshot::stringValue() {
	return this->value;
}

StringCounterSnapshot::StringCounterSnapshot() {
}

$Class* StringCounterSnapshot::load$($String* name, bool initialize) {
	$loadClass(StringCounterSnapshot, name, initialize, &_StringCounterSnapshot_ClassInfo_, allocate$StringCounterSnapshot);
	return class$;
}

$Class* StringCounterSnapshot::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun