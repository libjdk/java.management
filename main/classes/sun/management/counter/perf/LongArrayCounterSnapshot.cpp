#include <sun/management/counter/perf/LongArrayCounterSnapshot.h>

#include <sun/management/counter/AbstractCounter.h>
#include <sun/management/counter/Units.h>
#include <sun/management/counter/Variability.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCounter = ::sun::management::counter::AbstractCounter;
using $LongArrayCounter = ::sun::management::counter::LongArrayCounter;
using $Units = ::sun::management::counter::Units;
using $Variability = ::sun::management::counter::Variability;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

$FieldInfo _LongArrayCounterSnapshot_FieldInfo_[] = {
	{"value", "[J", nullptr, 0, $field(LongArrayCounterSnapshot, value)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LongArrayCounterSnapshot, serialVersionUID)},
	{}
};

$MethodInfo _LongArrayCounterSnapshot_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getFlags", "()I", nullptr, $PUBLIC},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getUnits", "()Lsun/management/counter/Units;", nullptr, $PUBLIC},
	{"*getVariability", "()Lsun/management/counter/Variability;", nullptr, $PUBLIC},
	{"*getVectorLength", "()I", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Lsun/management/counter/Units;Lsun/management/counter/Variability;II[J)V", nullptr, 0, $method(static_cast<void(LongArrayCounterSnapshot::*)($String*,$Units*,$Variability*,int32_t,int32_t,$longs*)>(&LongArrayCounterSnapshot::init$))},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*isInternal", "()Z", nullptr, $PUBLIC},
	{"*isVector", "()Z", nullptr, $PUBLIC},
	{"longArrayValue", "()[J", nullptr, $PUBLIC},
	{"longAt", "(I)J", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LongArrayCounterSnapshot_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.counter.perf.LongArrayCounterSnapshot",
	"sun.management.counter.AbstractCounter",
	"sun.management.counter.LongArrayCounter",
	_LongArrayCounterSnapshot_FieldInfo_,
	_LongArrayCounterSnapshot_MethodInfo_
};

$Object* allocate$LongArrayCounterSnapshot($Class* clazz) {
	return $of($alloc(LongArrayCounterSnapshot));
}

$String* LongArrayCounterSnapshot::getName() {
	 return this->$AbstractCounter::getName();
}

$Units* LongArrayCounterSnapshot::getUnits() {
	 return this->$AbstractCounter::getUnits();
}

$Variability* LongArrayCounterSnapshot::getVariability() {
	 return this->$AbstractCounter::getVariability();
}

bool LongArrayCounterSnapshot::isVector() {
	 return this->$AbstractCounter::isVector();
}

int32_t LongArrayCounterSnapshot::getVectorLength() {
	 return this->$AbstractCounter::getVectorLength();
}

bool LongArrayCounterSnapshot::isInternal() {
	 return this->$AbstractCounter::isInternal();
}

int32_t LongArrayCounterSnapshot::getFlags() {
	 return this->$AbstractCounter::getFlags();
}

$String* LongArrayCounterSnapshot::toString() {
	 return this->$AbstractCounter::toString();
}

int32_t LongArrayCounterSnapshot::hashCode() {
	 return this->$AbstractCounter::hashCode();
}

bool LongArrayCounterSnapshot::equals(Object$* arg0) {
	 return this->$AbstractCounter::equals(arg0);
}

$Object* LongArrayCounterSnapshot::clone() {
	 return this->$AbstractCounter::clone();
}

void LongArrayCounterSnapshot::finalize() {
	this->$AbstractCounter::finalize();
}

void LongArrayCounterSnapshot::init$($String* name, $Units* u, $Variability* v, int32_t flags, int32_t vectorLength, $longs* value) {
	$AbstractCounter::init$(name, u, v, flags, vectorLength);
	$set(this, value, value);
}

$Object* LongArrayCounterSnapshot::getValue() {
	return $of(this->value);
}

$longs* LongArrayCounterSnapshot::longArrayValue() {
	return this->value;
}

int64_t LongArrayCounterSnapshot::longAt(int32_t index) {
	return $nc(this->value)->get(index);
}

LongArrayCounterSnapshot::LongArrayCounterSnapshot() {
}

$Class* LongArrayCounterSnapshot::load$($String* name, bool initialize) {
	$loadClass(LongArrayCounterSnapshot, name, initialize, &_LongArrayCounterSnapshot_ClassInfo_, allocate$LongArrayCounterSnapshot);
	return class$;
}

$Class* LongArrayCounterSnapshot::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun