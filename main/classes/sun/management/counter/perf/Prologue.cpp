#include <sun/management/counter/perf/Prologue.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <sun/management/counter/perf/InstrumentationException.h>
#include <sun/management/counter/perf/Prologue$PrologueFieldOffset.h>
#include <jcpp.h>

#undef ACCESSIBLE
#undef BIG_ENDIAN
#undef BYTE_ORDER
#undef ENTRY_OFFSET
#undef LITTLE_ENDIAN
#undef MAGIC
#undef MAJOR_VERSION
#undef MINOR_VERSION
#undef MOD_TIMESTAMP
#undef NUM_ENTRIES
#undef OVERFLOW
#undef PERFDATA_BIG_ENDIAN
#undef PERFDATA_LITTLE_ENDIAN
#undef PERFDATA_MAGIC
#undef PROLOGUE_2_0_SIZE
#undef USED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $InstrumentationException = ::sun::management::counter::perf::InstrumentationException;
using $Prologue$PrologueFieldOffset = ::sun::management::counter::perf::Prologue$PrologueFieldOffset;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

$FieldInfo _Prologue_FieldInfo_[] = {
	{"PERFDATA_BIG_ENDIAN", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue, PERFDATA_BIG_ENDIAN)},
	{"PERFDATA_LITTLE_ENDIAN", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue, PERFDATA_LITTLE_ENDIAN)},
	{"PERFDATA_MAGIC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue, PERFDATA_MAGIC)},
	{"header", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(Prologue, header)},
	{"magic", "I", nullptr, $PRIVATE, $field(Prologue, magic)},
	{}
};

$MethodInfo _Prologue_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(Prologue::*)($ByteBuffer*)>(&Prologue::init$))},
	{"getByteOrder", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"getEntryOffset", "()I", nullptr, $PUBLIC},
	{"getMagic", "()I", nullptr, $PUBLIC},
	{"getMajorVersion", "()I", nullptr, $PUBLIC},
	{"getMinorVersion", "()I", nullptr, $PUBLIC},
	{"getModificationTimeStamp", "()J", nullptr, $PUBLIC},
	{"getNumEntries", "()I", nullptr, $PUBLIC},
	{"getOverflow", "()I", nullptr, $PUBLIC},
	{"getUsed", "()I", nullptr, $PUBLIC},
	{"isAccessible", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Prologue_InnerClassesInfo_[] = {
	{"sun.management.counter.perf.Prologue$PrologueFieldOffset", "sun.management.counter.perf.Prologue", "PrologueFieldOffset", $PRIVATE},
	{}
};

$ClassInfo _Prologue_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.counter.perf.Prologue",
	"java.lang.Object",
	nullptr,
	_Prologue_FieldInfo_,
	_Prologue_MethodInfo_,
	nullptr,
	nullptr,
	_Prologue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.management.counter.perf.Prologue$PrologueFieldOffset"
};

$Object* allocate$Prologue($Class* clazz) {
	return $of($alloc(Prologue));
}

void Prologue::init$($ByteBuffer* b) {
	$useLocalCurrentObjectStackCache();
	$set(this, header, $nc(b)->duplicate());
	$init($ByteOrder);
	$nc(this->header)->order($ByteOrder::BIG_ENDIAN);
	$nc(this->header)->position($Prologue$PrologueFieldOffset::MAGIC);
	this->magic = $nc(this->header)->getInt();
	if (this->magic != Prologue::PERFDATA_MAGIC) {
		$throwNew($InstrumentationException, $$str({"Bad Magic: "_s, $($Integer::toHexString(getMagic()))}));
	}
	$nc(this->header)->order($(getByteOrder()));
	int32_t major = getMajorVersion();
	int32_t minor = getMinorVersion();
	if (major < 2) {
		$throwNew($InstrumentationException, $$str({"Unsupported version: "_s, $$str(major), "."_s, $$str(minor)}));
	}
	$nc(this->header)->limit($Prologue$PrologueFieldOffset::PROLOGUE_2_0_SIZE);
}

int32_t Prologue::getMagic() {
	return this->magic;
}

int32_t Prologue::getMajorVersion() {
	$nc(this->header)->position($Prologue$PrologueFieldOffset::MAJOR_VERSION);
	return (int32_t)$nc(this->header)->get();
}

int32_t Prologue::getMinorVersion() {
	$nc(this->header)->position($Prologue$PrologueFieldOffset::MINOR_VERSION);
	return (int32_t)$nc(this->header)->get();
}

$ByteOrder* Prologue::getByteOrder() {
	$nc(this->header)->position($Prologue$PrologueFieldOffset::BYTE_ORDER);
	int8_t byte_order = $nc(this->header)->get();
	if (byte_order == Prologue::PERFDATA_BIG_ENDIAN) {
		$init($ByteOrder);
		return $ByteOrder::BIG_ENDIAN;
	} else {
		$init($ByteOrder);
		return $ByteOrder::LITTLE_ENDIAN;
	}
}

int32_t Prologue::getEntryOffset() {
	$nc(this->header)->position($Prologue$PrologueFieldOffset::ENTRY_OFFSET);
	return $nc(this->header)->getInt();
}

int32_t Prologue::getUsed() {
	$nc(this->header)->position($Prologue$PrologueFieldOffset::USED);
	return $nc(this->header)->getInt();
}

int32_t Prologue::getOverflow() {
	$nc(this->header)->position($Prologue$PrologueFieldOffset::OVERFLOW);
	return $nc(this->header)->getInt();
}

int64_t Prologue::getModificationTimeStamp() {
	$nc(this->header)->position($Prologue$PrologueFieldOffset::MOD_TIMESTAMP);
	return $nc(this->header)->getLong();
}

int32_t Prologue::getNumEntries() {
	$nc(this->header)->position($Prologue$PrologueFieldOffset::NUM_ENTRIES);
	return $nc(this->header)->getInt();
}

bool Prologue::isAccessible() {
	$nc(this->header)->position($Prologue$PrologueFieldOffset::ACCESSIBLE);
	int8_t b = $nc(this->header)->get();
	return (b == 0 ? false : true);
}

Prologue::Prologue() {
}

$Class* Prologue::load$($String* name, bool initialize) {
	$loadClass(Prologue, name, initialize, &_Prologue_ClassInfo_, allocate$Prologue);
	return class$;
}

$Class* Prologue::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun