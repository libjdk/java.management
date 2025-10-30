#include <sun/management/counter/perf/PerfLongArrayCounter.h>

#include <java/nio/LongBuffer.h>
#include <sun/management/counter/AbstractCounter.h>
#include <sun/management/counter/Units.h>
#include <sun/management/counter/Variability.h>
#include <sun/management/counter/perf/LongArrayCounterSnapshot.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $LongBuffer = ::java::nio::LongBuffer;
using $AbstractCounter = ::sun::management::counter::AbstractCounter;
using $LongArrayCounter = ::sun::management::counter::LongArrayCounter;
using $Units = ::sun::management::counter::Units;
using $Variability = ::sun::management::counter::Variability;
using $LongArrayCounterSnapshot = ::sun::management::counter::perf::LongArrayCounterSnapshot;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

$FieldInfo _PerfLongArrayCounter_FieldInfo_[] = {
	{"lb", "Ljava/nio/LongBuffer;", nullptr, 0, $field(PerfLongArrayCounter, lb)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfLongArrayCounter, serialVersionUID)},
	{}
};

$MethodInfo _PerfLongArrayCounter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getFlags", "()I", nullptr, $PUBLIC},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getUnits", "()Lsun/management/counter/Units;", nullptr, $PUBLIC},
	{"*getVariability", "()Lsun/management/counter/Variability;", nullptr, $PUBLIC},
	{"*getVectorLength", "()I", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Lsun/management/counter/Units;Lsun/management/counter/Variability;IILjava/nio/LongBuffer;)V", nullptr, 0, $method(static_cast<void(PerfLongArrayCounter::*)($String*,$Units*,$Variability*,int32_t,int32_t,$LongBuffer*)>(&PerfLongArrayCounter::init$))},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*isInternal", "()Z", nullptr, $PUBLIC},
	{"*isVector", "()Z", nullptr, $PUBLIC},
	{"longArrayValue", "()[J", nullptr, $PUBLIC},
	{"longAt", "(I)J", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.ObjectStreamException"},
	{}
};

$ClassInfo _PerfLongArrayCounter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.counter.perf.PerfLongArrayCounter",
	"sun.management.counter.AbstractCounter",
	"sun.management.counter.LongArrayCounter",
	_PerfLongArrayCounter_FieldInfo_,
	_PerfLongArrayCounter_MethodInfo_
};

$Object* allocate$PerfLongArrayCounter($Class* clazz) {
	return $of($alloc(PerfLongArrayCounter));
}

$String* PerfLongArrayCounter::getName() {
	 return this->$AbstractCounter::getName();
}

$Units* PerfLongArrayCounter::getUnits() {
	 return this->$AbstractCounter::getUnits();
}

$Variability* PerfLongArrayCounter::getVariability() {
	 return this->$AbstractCounter::getVariability();
}

bool PerfLongArrayCounter::isVector() {
	 return this->$AbstractCounter::isVector();
}

int32_t PerfLongArrayCounter::getVectorLength() {
	 return this->$AbstractCounter::getVectorLength();
}

bool PerfLongArrayCounter::isInternal() {
	 return this->$AbstractCounter::isInternal();
}

int32_t PerfLongArrayCounter::getFlags() {
	 return this->$AbstractCounter::getFlags();
}

$String* PerfLongArrayCounter::toString() {
	 return this->$AbstractCounter::toString();
}

int32_t PerfLongArrayCounter::hashCode() {
	 return this->$AbstractCounter::hashCode();
}

bool PerfLongArrayCounter::equals(Object$* arg0) {
	 return this->$AbstractCounter::equals(arg0);
}

$Object* PerfLongArrayCounter::clone() {
	 return this->$AbstractCounter::clone();
}

void PerfLongArrayCounter::finalize() {
	this->$AbstractCounter::finalize();
}

void PerfLongArrayCounter::init$($String* name, $Units* u, $Variability* v, int32_t flags, int32_t vectorLength, $LongBuffer* lb) {
	$AbstractCounter::init$(name, u, v, flags, vectorLength);
	$set(this, lb, lb);
}

$Object* PerfLongArrayCounter::getValue() {
	return $of(longArrayValue());
}

$longs* PerfLongArrayCounter::longArrayValue() {
	$nc(this->lb)->position(0);
	$var($longs, l, $new($longs, $nc(this->lb)->limit()));
	$nc(this->lb)->get(l);
	return l;
}

int64_t PerfLongArrayCounter::longAt(int32_t index) {
	$nc(this->lb)->position(index);
	return $nc(this->lb)->get();
}

$Object* PerfLongArrayCounter::writeReplace() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, getName());
	$var($Units, var$1, getUnits());
	$var($Variability, var$2, getVariability());
	int32_t var$3 = getFlags();
	int32_t var$4 = getVectorLength();
	return $of($new($LongArrayCounterSnapshot, var$0, var$1, var$2, var$3, var$4, $(longArrayValue())));
}

PerfLongArrayCounter::PerfLongArrayCounter() {
}

$Class* PerfLongArrayCounter::load$($String* name, bool initialize) {
	$loadClass(PerfLongArrayCounter, name, initialize, &_PerfLongArrayCounter_ClassInfo_, allocate$PerfLongArrayCounter);
	return class$;
}

$Class* PerfLongArrayCounter::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun