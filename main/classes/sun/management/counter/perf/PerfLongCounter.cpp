#include <sun/management/counter/perf/PerfLongCounter.h>

#include <java/nio/LongBuffer.h>
#include <sun/management/counter/AbstractCounter.h>
#include <sun/management/counter/Units.h>
#include <sun/management/counter/Variability.h>
#include <sun/management/counter/perf/LongCounterSnapshot.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongBuffer = ::java::nio::LongBuffer;
using $AbstractCounter = ::sun::management::counter::AbstractCounter;
using $LongCounter = ::sun::management::counter::LongCounter;
using $Units = ::sun::management::counter::Units;
using $Variability = ::sun::management::counter::Variability;
using $LongCounterSnapshot = ::sun::management::counter::perf::LongCounterSnapshot;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

$FieldInfo _PerfLongCounter_FieldInfo_[] = {
	{"lb", "Ljava/nio/LongBuffer;", nullptr, 0, $field(PerfLongCounter, lb)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfLongCounter, serialVersionUID)},
	{}
};

$MethodInfo _PerfLongCounter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getFlags", "()I", nullptr, $PUBLIC},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getUnits", "()Lsun/management/counter/Units;", nullptr, $PUBLIC},
	{"*getVariability", "()Lsun/management/counter/Variability;", nullptr, $PUBLIC},
	{"*getVectorLength", "()I", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Lsun/management/counter/Units;Lsun/management/counter/Variability;ILjava/nio/LongBuffer;)V", nullptr, 0, $method(static_cast<void(PerfLongCounter::*)($String*,$Units*,$Variability*,int32_t,$LongBuffer*)>(&PerfLongCounter::init$))},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*isInternal", "()Z", nullptr, $PUBLIC},
	{"*isVector", "()Z", nullptr, $PUBLIC},
	{"longValue", "()J", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.ObjectStreamException"},
	{}
};

$ClassInfo _PerfLongCounter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.counter.perf.PerfLongCounter",
	"sun.management.counter.AbstractCounter",
	"sun.management.counter.LongCounter",
	_PerfLongCounter_FieldInfo_,
	_PerfLongCounter_MethodInfo_
};

$Object* allocate$PerfLongCounter($Class* clazz) {
	return $of($alloc(PerfLongCounter));
}

$String* PerfLongCounter::getName() {
	 return this->$AbstractCounter::getName();
}

$Units* PerfLongCounter::getUnits() {
	 return this->$AbstractCounter::getUnits();
}

$Variability* PerfLongCounter::getVariability() {
	 return this->$AbstractCounter::getVariability();
}

bool PerfLongCounter::isVector() {
	 return this->$AbstractCounter::isVector();
}

int32_t PerfLongCounter::getVectorLength() {
	 return this->$AbstractCounter::getVectorLength();
}

bool PerfLongCounter::isInternal() {
	 return this->$AbstractCounter::isInternal();
}

int32_t PerfLongCounter::getFlags() {
	 return this->$AbstractCounter::getFlags();
}

$String* PerfLongCounter::toString() {
	 return this->$AbstractCounter::toString();
}

int32_t PerfLongCounter::hashCode() {
	 return this->$AbstractCounter::hashCode();
}

bool PerfLongCounter::equals(Object$* arg0) {
	 return this->$AbstractCounter::equals(arg0);
}

$Object* PerfLongCounter::clone() {
	 return this->$AbstractCounter::clone();
}

void PerfLongCounter::finalize() {
	this->$AbstractCounter::finalize();
}

void PerfLongCounter::init$($String* name, $Units* u, $Variability* v, int32_t flags, $LongBuffer* lb) {
	$AbstractCounter::init$(name, u, v, flags);
	$set(this, lb, lb);
}

$Object* PerfLongCounter::getValue() {
	return $of($Long::valueOf($nc(this->lb)->get(0)));
}

int64_t PerfLongCounter::longValue() {
	return $nc(this->lb)->get(0);
}

$Object* PerfLongCounter::writeReplace() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, getName());
	$var($Units, var$1, getUnits());
	$var($Variability, var$2, getVariability());
	int32_t var$3 = getFlags();
	return $of($new($LongCounterSnapshot, var$0, var$1, var$2, var$3, longValue()));
}

PerfLongCounter::PerfLongCounter() {
}

$Class* PerfLongCounter::load$($String* name, bool initialize) {
	$loadClass(PerfLongCounter, name, initialize, &_PerfLongCounter_ClassInfo_, allocate$PerfLongCounter);
	return class$;
}

$Class* PerfLongCounter::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun