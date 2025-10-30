#include <sun/management/counter/perf/PerfDataEntry.h>

#include <java/io/IOException.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/LongBuffer.h>
#include <sun/management/counter/Units.h>
#include <sun/management/counter/Variability.h>
#include <sun/management/counter/perf/InstrumentationException.h>
#include <sun/management/counter/perf/PerfDataEntry$EntryFieldOffset.h>
#include <sun/management/counter/perf/PerfDataType.h>
#include <jcpp.h>

#undef DATA_OFFSET
#undef DATA_TYPE
#undef DATA_UNIT
#undef DATA_VAR
#undef FLAGS
#undef INVALID
#undef NAME_OFFSET
#undef VECTOR_LENGTH

using $IOException = ::java::io::IOException;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $LongBuffer = ::java::nio::LongBuffer;
using $Units = ::sun::management::counter::Units;
using $Variability = ::sun::management::counter::Variability;
using $InstrumentationException = ::sun::management::counter::perf::InstrumentationException;
using $PerfDataEntry$EntryFieldOffset = ::sun::management::counter::perf::PerfDataEntry$EntryFieldOffset;
using $PerfDataType = ::sun::management::counter::perf::PerfDataType;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

$FieldInfo _PerfDataEntry_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PerfDataEntry, $assertionsDisabled)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PerfDataEntry, name$)},
	{"entryStart", "I", nullptr, $PRIVATE, $field(PerfDataEntry, entryStart)},
	{"entryLength", "I", nullptr, $PRIVATE, $field(PerfDataEntry, entryLength)},
	{"vectorLength", "I", nullptr, $PRIVATE, $field(PerfDataEntry, vectorLength$)},
	{"dataType", "Lsun/management/counter/perf/PerfDataType;", nullptr, $PRIVATE, $field(PerfDataEntry, dataType)},
	{"flags", "I", nullptr, $PRIVATE, $field(PerfDataEntry, flags$)},
	{"unit", "Lsun/management/counter/Units;", nullptr, $PRIVATE, $field(PerfDataEntry, unit)},
	{"variability", "Lsun/management/counter/Variability;", nullptr, $PRIVATE, $field(PerfDataEntry, variability$)},
	{"dataOffset", "I", nullptr, $PRIVATE, $field(PerfDataEntry, dataOffset)},
	{"dataSize", "I", nullptr, $PRIVATE, $field(PerfDataEntry, dataSize)},
	{"data", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(PerfDataEntry, data)},
	{}
};

$MethodInfo _PerfDataEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(PerfDataEntry::*)($ByteBuffer*)>(&PerfDataEntry::init$))},
	{"byteData", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"flags", "()I", nullptr, $PUBLIC},
	{"longData", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"type", "()Lsun/management/counter/perf/PerfDataType;", nullptr, $PUBLIC},
	{"units", "()Lsun/management/counter/Units;", nullptr, $PUBLIC},
	{"variability", "()Lsun/management/counter/Variability;", nullptr, $PUBLIC},
	{"vectorLength", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PerfDataEntry_InnerClassesInfo_[] = {
	{"sun.management.counter.perf.PerfDataEntry$EntryFieldOffset", "sun.management.counter.perf.PerfDataEntry", "EntryFieldOffset", $PRIVATE},
	{}
};

$ClassInfo _PerfDataEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.counter.perf.PerfDataEntry",
	"java.lang.Object",
	nullptr,
	_PerfDataEntry_FieldInfo_,
	_PerfDataEntry_MethodInfo_,
	nullptr,
	nullptr,
	_PerfDataEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.management.counter.perf.PerfDataEntry$EntryFieldOffset"
};

$Object* allocate$PerfDataEntry($Class* clazz) {
	return $of($alloc(PerfDataEntry));
}

bool PerfDataEntry::$assertionsDisabled = false;

void PerfDataEntry::init$($ByteBuffer* b) {
	$useLocalCurrentObjectStackCache();
	this->entryStart = $nc(b)->position();
	this->entryLength = b->getInt();
	if (this->entryLength <= 0 || this->entryLength > b->limit()) {
		$throwNew($InstrumentationException, $$str({"Invalid entry length:  entryLength = "_s, $$str(this->entryLength)}));
	}
	if ((this->entryStart + this->entryLength) > b->limit()) {
		$throwNew($InstrumentationException, $$str({"Entry extends beyond end of buffer:  entryStart = "_s, $$str(this->entryStart), " entryLength = "_s, $$str(this->entryLength), " buffer limit = "_s, $$str(b->limit())}));
	}
	b->position(this->entryStart + $PerfDataEntry$EntryFieldOffset::NAME_OFFSET);
	int32_t nameOffset = b->getInt();
	if ((this->entryStart + nameOffset) > b->limit()) {
		$throwNew($InstrumentationException, $$str({"Invalid name offset:  entryStart = "_s, $$str(this->entryStart), " nameOffset = "_s, $$str(nameOffset), " buffer limit = "_s, $$str(b->limit())}));
	}
	b->position(this->entryStart + $PerfDataEntry$EntryFieldOffset::VECTOR_LENGTH);
	this->vectorLength$ = b->getInt();
	b->position(this->entryStart + $PerfDataEntry$EntryFieldOffset::DATA_TYPE);
	$set(this, dataType, $PerfDataType::toPerfDataType(b->get()));
	b->position(this->entryStart + $PerfDataEntry$EntryFieldOffset::FLAGS);
	this->flags$ = b->get();
	b->position(this->entryStart + $PerfDataEntry$EntryFieldOffset::DATA_UNIT);
	$set(this, unit, $Units::toUnits(b->get()));
	b->position(this->entryStart + $PerfDataEntry$EntryFieldOffset::DATA_VAR);
	$set(this, variability$, $Variability::toVariability(b->get()));
	b->position(this->entryStart + $PerfDataEntry$EntryFieldOffset::DATA_OFFSET);
	this->dataOffset = b->getInt();
	b->position(this->entryStart + nameOffset);
	int32_t nameLength = 0;
	int8_t c = 0;
	for (; (c = b->get()) != (int8_t)0; ++nameLength) {
	}
	$var($bytes, symbolBytes, $new($bytes, nameLength));
	b->position(this->entryStart + nameOffset);
	for (int32_t i = 0; i < nameLength; ++i) {
		symbolBytes->set(i, b->get());
	}
	try {
		$set(this, name$, $new($String, symbolBytes, "UTF-8"_s));
	} catch ($UnsupportedEncodingException& e) {
		$throwNew($InternalError, $(e->getMessage()), e);
	}
	if (this->variability$ == $Variability::INVALID) {
		$throwNew($InstrumentationException, $$str({"Invalid variability attribute: name = "_s, this->name$}));
	}
	if (this->unit == $Units::INVALID) {
		$throwNew($InstrumentationException, $$str({"Invalid units attribute:  name = "_s, this->name$}));
	}
	if (this->vectorLength$ > 0) {
		this->dataSize = this->vectorLength$ * $nc(this->dataType)->size();
	} else {
		this->dataSize = $nc(this->dataType)->size();
	}
	if ((this->entryStart + this->dataOffset + this->dataSize) > b->limit()) {
		$throwNew($InstrumentationException, $$str({"Data extends beyond end of buffer:  entryStart = "_s, $$str(this->entryStart), " dataOffset = "_s, $$str(this->dataOffset), " dataSize = "_s, $$str(this->dataSize), " buffer limit = "_s, $$str(b->limit())}));
	}
	b->position(this->entryStart + this->dataOffset);
	$set(this, data, b->slice());
	$nc(this->data)->order($(b->order()));
	$nc(this->data)->limit(this->dataSize);
}

int32_t PerfDataEntry::size() {
	return this->entryLength;
}

$String* PerfDataEntry::name() {
	return this->name$;
}

$PerfDataType* PerfDataEntry::type() {
	return this->dataType;
}

$Units* PerfDataEntry::units() {
	return this->unit;
}

int32_t PerfDataEntry::flags() {
	return this->flags$;
}

int32_t PerfDataEntry::vectorLength() {
	return this->vectorLength$;
}

$Variability* PerfDataEntry::variability() {
	return this->variability$;
}

$ByteBuffer* PerfDataEntry::byteData() {
	$nc(this->data)->position(0);
	bool var$0 = !PerfDataEntry::$assertionsDisabled;
	if (var$0) {
		int32_t var$1 = $nc(this->data)->remaining();
		var$0 = !(var$1 == vectorLength());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	return $nc(this->data)->duplicate();
}

$LongBuffer* PerfDataEntry::longData() {
	$var($LongBuffer, lb, $nc(this->data)->asLongBuffer());
	return lb;
}

void clinit$PerfDataEntry($Class* class$) {
	PerfDataEntry::$assertionsDisabled = !PerfDataEntry::class$->desiredAssertionStatus();
}

PerfDataEntry::PerfDataEntry() {
}

$Class* PerfDataEntry::load$($String* name, bool initialize) {
	$loadClass(PerfDataEntry, name, initialize, &_PerfDataEntry_ClassInfo_, clinit$PerfDataEntry, allocate$PerfDataEntry);
	return class$;
}

$Class* PerfDataEntry::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun