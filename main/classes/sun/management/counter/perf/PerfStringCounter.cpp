#include <sun/management/counter/perf/PerfStringCounter.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/charset/Charset.h>
#include <sun/management/counter/Units.h>
#include <sun/management/counter/Variability.h>
#include <sun/management/counter/perf/PerfByteArrayCounter.h>
#include <sun/management/counter/perf/StringCounterSnapshot.h>
#include <jcpp.h>

#undef STRING

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Charset = ::java::nio::charset::Charset;
using $AbstractCounter = ::sun::management::counter::AbstractCounter;
using $StringCounter = ::sun::management::counter::StringCounter;
using $Units = ::sun::management::counter::Units;
using $Variability = ::sun::management::counter::Variability;
using $PerfByteArrayCounter = ::sun::management::counter::perf::PerfByteArrayCounter;
using $StringCounterSnapshot = ::sun::management::counter::perf::StringCounterSnapshot;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

$FieldInfo _PerfStringCounter_FieldInfo_[] = {
	{"defaultCharset", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $STATIC, $staticField(PerfStringCounter, defaultCharset)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfStringCounter, serialVersionUID)},
	{}
};

$MethodInfo _PerfStringCounter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getFlags", "()I", nullptr, $PUBLIC},
	{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getUnits", "()Lsun/management/counter/Units;", nullptr, $PUBLIC},
	{"*getVariability", "()Lsun/management/counter/Variability;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Lsun/management/counter/Variability;ILjava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(PerfStringCounter::*)($String*,$Variability*,int32_t,$ByteBuffer*)>(&PerfStringCounter::init$))},
	{"<init>", "(Ljava/lang/String;Lsun/management/counter/Variability;IILjava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(PerfStringCounter::*)($String*,$Variability*,int32_t,int32_t,$ByteBuffer*)>(&PerfStringCounter::init$))},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getVectorLength", "()I", nullptr, $PUBLIC},
	{"*isInternal", "()Z", nullptr, $PUBLIC},
	{"isVector", "()Z", nullptr, $PUBLIC},
	{"stringValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.ObjectStreamException"},
	{}
};

$ClassInfo _PerfStringCounter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.counter.perf.PerfStringCounter",
	"sun.management.counter.perf.PerfByteArrayCounter",
	"sun.management.counter.StringCounter",
	_PerfStringCounter_FieldInfo_,
	_PerfStringCounter_MethodInfo_
};

$Object* allocate$PerfStringCounter($Class* clazz) {
	return $of($alloc(PerfStringCounter));
}

$String* PerfStringCounter::toString() {
	 return this->$PerfByteArrayCounter::toString();
}

$String* PerfStringCounter::getName() {
	 return this->$PerfByteArrayCounter::getName();
}

$Units* PerfStringCounter::getUnits() {
	 return this->$PerfByteArrayCounter::getUnits();
}

$Variability* PerfStringCounter::getVariability() {
	 return this->$PerfByteArrayCounter::getVariability();
}

bool PerfStringCounter::isInternal() {
	 return this->$PerfByteArrayCounter::isInternal();
}

int32_t PerfStringCounter::getFlags() {
	 return this->$PerfByteArrayCounter::getFlags();
}

int32_t PerfStringCounter::hashCode() {
	 return this->$PerfByteArrayCounter::hashCode();
}

bool PerfStringCounter::equals(Object$* arg0) {
	 return this->$PerfByteArrayCounter::equals(arg0);
}

$Object* PerfStringCounter::clone() {
	 return this->$PerfByteArrayCounter::clone();
}

void PerfStringCounter::finalize() {
	this->$PerfByteArrayCounter::finalize();
}

$Charset* PerfStringCounter::defaultCharset = nullptr;

void PerfStringCounter::init$($String* name, $Variability* v, int32_t flags, $ByteBuffer* bb) {
	PerfStringCounter::init$(name, v, flags, $nc(bb)->limit(), bb);
}

void PerfStringCounter::init$($String* name, $Variability* v, int32_t flags, int32_t maxLength, $ByteBuffer* bb) {
	$init($Units);
	$PerfByteArrayCounter::init$(name, $Units::STRING, v, flags, maxLength, bb);
}

bool PerfStringCounter::isVector() {
	return false;
}

int32_t PerfStringCounter::getVectorLength() {
	return 0;
}

$Object* PerfStringCounter::getValue() {
	return $of(stringValue());
}

$String* PerfStringCounter::stringValue() {
	$useLocalCurrentObjectStackCache();
	$var($String, str, ""_s);
	$var($bytes, b, byteArrayValue());
	if (b == nullptr || $nc(b)->length <= 1) {
		return str;
	}
	int32_t i = 0;
	for (i = 0; i < $nc(b)->length && b->get(i) != (int8_t)0; ++i) {
	}
	return $new($String, b, 0, i, PerfStringCounter::defaultCharset);
}

$Object* PerfStringCounter::writeReplace() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, getName());
	$var($Units, var$1, getUnits());
	$var($Variability, var$2, getVariability());
	int32_t var$3 = getFlags();
	return $of($new($StringCounterSnapshot, var$0, var$1, var$2, var$3, $(stringValue())));
}

void clinit$PerfStringCounter($Class* class$) {
	$assignStatic(PerfStringCounter::defaultCharset, $Charset::defaultCharset());
}

PerfStringCounter::PerfStringCounter() {
}

$Class* PerfStringCounter::load$($String* name, bool initialize) {
	$loadClass(PerfStringCounter, name, initialize, &_PerfStringCounter_ClassInfo_, clinit$PerfStringCounter, allocate$PerfStringCounter);
	return class$;
}

$Class* PerfStringCounter::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun