#include <sun/management/counter/perf/PerfByteArrayCounter.h>

#include <java/nio/ByteBuffer.h>
#include <sun/management/counter/AbstractCounter.h>
#include <sun/management/counter/Units.h>
#include <sun/management/counter/Variability.h>
#include <sun/management/counter/perf/ByteArrayCounterSnapshot.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AbstractCounter = ::sun::management::counter::AbstractCounter;
using $ByteArrayCounter = ::sun::management::counter::ByteArrayCounter;
using $Units = ::sun::management::counter::Units;
using $Variability = ::sun::management::counter::Variability;
using $ByteArrayCounterSnapshot = ::sun::management::counter::perf::ByteArrayCounterSnapshot;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

$FieldInfo _PerfByteArrayCounter_FieldInfo_[] = {
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(PerfByteArrayCounter, bb)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfByteArrayCounter, serialVersionUID)},
	{}
};

$MethodInfo _PerfByteArrayCounter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getFlags", "()I", nullptr, $PUBLIC},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getUnits", "()Lsun/management/counter/Units;", nullptr, $PUBLIC},
	{"*getVariability", "()Lsun/management/counter/Variability;", nullptr, $PUBLIC},
	{"*getVectorLength", "()I", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Lsun/management/counter/Units;Lsun/management/counter/Variability;IILjava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(PerfByteArrayCounter::*)($String*,$Units*,$Variability*,int32_t,int32_t,$ByteBuffer*)>(&PerfByteArrayCounter::init$))},
	{"byteArrayValue", "()[B", nullptr, $PUBLIC},
	{"byteAt", "(I)B", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*isInternal", "()Z", nullptr, $PUBLIC},
	{"*isVector", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.ObjectStreamException"},
	{}
};

$ClassInfo _PerfByteArrayCounter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.counter.perf.PerfByteArrayCounter",
	"sun.management.counter.AbstractCounter",
	"sun.management.counter.ByteArrayCounter",
	_PerfByteArrayCounter_FieldInfo_,
	_PerfByteArrayCounter_MethodInfo_
};

$Object* allocate$PerfByteArrayCounter($Class* clazz) {
	return $of($alloc(PerfByteArrayCounter));
}

$String* PerfByteArrayCounter::getName() {
	 return this->$AbstractCounter::getName();
}

$Units* PerfByteArrayCounter::getUnits() {
	 return this->$AbstractCounter::getUnits();
}

$Variability* PerfByteArrayCounter::getVariability() {
	 return this->$AbstractCounter::getVariability();
}

bool PerfByteArrayCounter::isVector() {
	 return this->$AbstractCounter::isVector();
}

int32_t PerfByteArrayCounter::getVectorLength() {
	 return this->$AbstractCounter::getVectorLength();
}

bool PerfByteArrayCounter::isInternal() {
	 return this->$AbstractCounter::isInternal();
}

int32_t PerfByteArrayCounter::getFlags() {
	 return this->$AbstractCounter::getFlags();
}

int32_t PerfByteArrayCounter::hashCode() {
	 return this->$AbstractCounter::hashCode();
}

bool PerfByteArrayCounter::equals(Object$* arg0) {
	 return this->$AbstractCounter::equals(arg0);
}

$Object* PerfByteArrayCounter::clone() {
	 return this->$AbstractCounter::clone();
}

void PerfByteArrayCounter::finalize() {
	this->$AbstractCounter::finalize();
}

void PerfByteArrayCounter::init$($String* name, $Units* u, $Variability* v, int32_t flags, int32_t vectorLength, $ByteBuffer* bb) {
	$AbstractCounter::init$(name, u, v, flags, vectorLength);
	$set(this, bb, bb);
}

$Object* PerfByteArrayCounter::getValue() {
	return $of(byteArrayValue());
}

$bytes* PerfByteArrayCounter::byteArrayValue() {
	$nc(this->bb)->position(0);
	$var($bytes, b, $new($bytes, $nc(this->bb)->limit()));
	$nc(this->bb)->get(b);
	return b;
}

int8_t PerfByteArrayCounter::byteAt(int32_t index) {
	$nc(this->bb)->position(index);
	return $nc(this->bb)->get();
}

$String* PerfByteArrayCounter::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $$str({$(getName()), ": "_s}));
	$var($String, var$1, $$concat(var$2, $$new($String, $(byteArrayValue()))));
	$var($String, var$0, $$concat(var$1, " "));
	$var($String, result, $concat(var$0, $(getUnits())));
	if (isInternal()) {
		return $str({result, " [INTERNAL]"_s});
	} else {
		return result;
	}
}

$Object* PerfByteArrayCounter::writeReplace() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, getName());
	$var($Units, var$1, getUnits());
	$var($Variability, var$2, getVariability());
	int32_t var$3 = getFlags();
	int32_t var$4 = getVectorLength();
	return $of($new($ByteArrayCounterSnapshot, var$0, var$1, var$2, var$3, var$4, $(byteArrayValue())));
}

PerfByteArrayCounter::PerfByteArrayCounter() {
}

$Class* PerfByteArrayCounter::load$($String* name, bool initialize) {
	$loadClass(PerfByteArrayCounter, name, initialize, &_PerfByteArrayCounter_ClassInfo_, allocate$PerfByteArrayCounter);
	return class$;
}

$Class* PerfByteArrayCounter::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun