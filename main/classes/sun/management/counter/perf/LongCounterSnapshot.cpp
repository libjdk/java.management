#include <sun/management/counter/perf/LongCounterSnapshot.h>

#include <sun/management/counter/AbstractCounter.h>
#include <sun/management/counter/Units.h>
#include <sun/management/counter/Variability.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCounter = ::sun::management::counter::AbstractCounter;
using $LongCounter = ::sun::management::counter::LongCounter;
using $Units = ::sun::management::counter::Units;
using $Variability = ::sun::management::counter::Variability;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

$FieldInfo _LongCounterSnapshot_FieldInfo_[] = {
	{"value", "J", nullptr, 0, $field(LongCounterSnapshot, value)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LongCounterSnapshot, serialVersionUID)},
	{}
};

$MethodInfo _LongCounterSnapshot_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getFlags", "()I", nullptr, $PUBLIC},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getUnits", "()Lsun/management/counter/Units;", nullptr, $PUBLIC},
	{"*getVariability", "()Lsun/management/counter/Variability;", nullptr, $PUBLIC},
	{"*getVectorLength", "()I", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Lsun/management/counter/Units;Lsun/management/counter/Variability;IJ)V", nullptr, 0, $method(static_cast<void(LongCounterSnapshot::*)($String*,$Units*,$Variability*,int32_t,int64_t)>(&LongCounterSnapshot::init$))},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*isInternal", "()Z", nullptr, $PUBLIC},
	{"*isVector", "()Z", nullptr, $PUBLIC},
	{"longValue", "()J", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LongCounterSnapshot_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.counter.perf.LongCounterSnapshot",
	"sun.management.counter.AbstractCounter",
	"sun.management.counter.LongCounter",
	_LongCounterSnapshot_FieldInfo_,
	_LongCounterSnapshot_MethodInfo_
};

$Object* allocate$LongCounterSnapshot($Class* clazz) {
	return $of($alloc(LongCounterSnapshot));
}

$String* LongCounterSnapshot::getName() {
	 return this->$AbstractCounter::getName();
}

$Units* LongCounterSnapshot::getUnits() {
	 return this->$AbstractCounter::getUnits();
}

$Variability* LongCounterSnapshot::getVariability() {
	 return this->$AbstractCounter::getVariability();
}

bool LongCounterSnapshot::isVector() {
	 return this->$AbstractCounter::isVector();
}

int32_t LongCounterSnapshot::getVectorLength() {
	 return this->$AbstractCounter::getVectorLength();
}

bool LongCounterSnapshot::isInternal() {
	 return this->$AbstractCounter::isInternal();
}

int32_t LongCounterSnapshot::getFlags() {
	 return this->$AbstractCounter::getFlags();
}

$String* LongCounterSnapshot::toString() {
	 return this->$AbstractCounter::toString();
}

int32_t LongCounterSnapshot::hashCode() {
	 return this->$AbstractCounter::hashCode();
}

bool LongCounterSnapshot::equals(Object$* arg0) {
	 return this->$AbstractCounter::equals(arg0);
}

$Object* LongCounterSnapshot::clone() {
	 return this->$AbstractCounter::clone();
}

void LongCounterSnapshot::finalize() {
	this->$AbstractCounter::finalize();
}

void LongCounterSnapshot::init$($String* name, $Units* u, $Variability* v, int32_t flags, int64_t value) {
	$AbstractCounter::init$(name, u, v, flags);
	this->value = value;
}

$Object* LongCounterSnapshot::getValue() {
	return $of($Long::valueOf(this->value));
}

int64_t LongCounterSnapshot::longValue() {
	return this->value;
}

LongCounterSnapshot::LongCounterSnapshot() {
}

$Class* LongCounterSnapshot::load$($String* name, bool initialize) {
	$loadClass(LongCounterSnapshot, name, initialize, &_LongCounterSnapshot_ClassInfo_, allocate$LongCounterSnapshot);
	return class$;
}

$Class* LongCounterSnapshot::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun