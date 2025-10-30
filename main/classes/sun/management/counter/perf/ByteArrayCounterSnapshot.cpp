#include <sun/management/counter/perf/ByteArrayCounterSnapshot.h>

#include <sun/management/counter/AbstractCounter.h>
#include <sun/management/counter/Units.h>
#include <sun/management/counter/Variability.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCounter = ::sun::management::counter::AbstractCounter;
using $ByteArrayCounter = ::sun::management::counter::ByteArrayCounter;
using $Units = ::sun::management::counter::Units;
using $Variability = ::sun::management::counter::Variability;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

$FieldInfo _ByteArrayCounterSnapshot_FieldInfo_[] = {
	{"value", "[B", nullptr, 0, $field(ByteArrayCounterSnapshot, value)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ByteArrayCounterSnapshot, serialVersionUID)},
	{}
};

$MethodInfo _ByteArrayCounterSnapshot_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getFlags", "()I", nullptr, $PUBLIC},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getUnits", "()Lsun/management/counter/Units;", nullptr, $PUBLIC},
	{"*getVariability", "()Lsun/management/counter/Variability;", nullptr, $PUBLIC},
	{"*getVectorLength", "()I", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Lsun/management/counter/Units;Lsun/management/counter/Variability;II[B)V", nullptr, 0, $method(static_cast<void(ByteArrayCounterSnapshot::*)($String*,$Units*,$Variability*,int32_t,int32_t,$bytes*)>(&ByteArrayCounterSnapshot::init$))},
	{"byteArrayValue", "()[B", nullptr, $PUBLIC},
	{"byteAt", "(I)B", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*isVector", "()Z", nullptr, $PUBLIC},
	{"*isInternal", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteArrayCounterSnapshot_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.counter.perf.ByteArrayCounterSnapshot",
	"sun.management.counter.AbstractCounter",
	"sun.management.counter.ByteArrayCounter",
	_ByteArrayCounterSnapshot_FieldInfo_,
	_ByteArrayCounterSnapshot_MethodInfo_
};

$Object* allocate$ByteArrayCounterSnapshot($Class* clazz) {
	return $of($alloc(ByteArrayCounterSnapshot));
}

$String* ByteArrayCounterSnapshot::getName() {
	 return this->$AbstractCounter::getName();
}

$Units* ByteArrayCounterSnapshot::getUnits() {
	 return this->$AbstractCounter::getUnits();
}

$Variability* ByteArrayCounterSnapshot::getVariability() {
	 return this->$AbstractCounter::getVariability();
}

bool ByteArrayCounterSnapshot::isVector() {
	 return this->$AbstractCounter::isVector();
}

int32_t ByteArrayCounterSnapshot::getVectorLength() {
	 return this->$AbstractCounter::getVectorLength();
}

bool ByteArrayCounterSnapshot::isInternal() {
	 return this->$AbstractCounter::isInternal();
}

int32_t ByteArrayCounterSnapshot::getFlags() {
	 return this->$AbstractCounter::getFlags();
}

$String* ByteArrayCounterSnapshot::toString() {
	 return this->$AbstractCounter::toString();
}

int32_t ByteArrayCounterSnapshot::hashCode() {
	 return this->$AbstractCounter::hashCode();
}

bool ByteArrayCounterSnapshot::equals(Object$* arg0) {
	 return this->$AbstractCounter::equals(arg0);
}

$Object* ByteArrayCounterSnapshot::clone() {
	 return this->$AbstractCounter::clone();
}

void ByteArrayCounterSnapshot::finalize() {
	this->$AbstractCounter::finalize();
}

void ByteArrayCounterSnapshot::init$($String* name, $Units* u, $Variability* v, int32_t flags, int32_t vectorLength, $bytes* value) {
	$AbstractCounter::init$(name, u, v, flags, vectorLength);
	$set(this, value, value);
}

$Object* ByteArrayCounterSnapshot::getValue() {
	return $of(this->value);
}

$bytes* ByteArrayCounterSnapshot::byteArrayValue() {
	return this->value;
}

int8_t ByteArrayCounterSnapshot::byteAt(int32_t index) {
	return $nc(this->value)->get(index);
}

ByteArrayCounterSnapshot::ByteArrayCounterSnapshot() {
}

$Class* ByteArrayCounterSnapshot::load$($String* name, bool initialize) {
	$loadClass(ByteArrayCounterSnapshot, name, initialize, &_ByteArrayCounterSnapshot_ClassInfo_, allocate$ByteArrayCounterSnapshot);
	return class$;
}

$Class* ByteArrayCounterSnapshot::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun