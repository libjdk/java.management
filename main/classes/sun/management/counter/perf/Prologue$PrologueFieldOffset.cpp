#include <sun/management/counter/perf/Prologue$PrologueFieldOffset.h>

#include <sun/management/counter/perf/Prologue.h>
#include <jcpp.h>

#undef ACCESSIBLE
#undef ACCESSIBLE_SIZE
#undef BYTE_ORDER
#undef BYTE_ORDER_SIZE
#undef ENTRY_OFFSET
#undef ENTRY_OFFSET_SIZE
#undef MAGIC
#undef MAGIC_SIZE
#undef MAJOR_SIZE
#undef MAJOR_VERSION
#undef MINOR_SIZE
#undef MINOR_VERSION
#undef MOD_TIMESTAMP
#undef MOD_TIMESTAMP_SIZE
#undef NUM_ENTRIES
#undef NUM_ENTRIES_SIZE
#undef OVERFLOW
#undef OVERFLOW_SIZE
#undef PROLOGUE_2_0_SIZE
#undef SIZEOF_BYTE
#undef SIZEOF_INT
#undef SIZEOF_LONG
#undef USED
#undef USED_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Prologue = ::sun::management::counter::perf::Prologue;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

$FieldInfo _Prologue$PrologueFieldOffset_FieldInfo_[] = {
	{"this$0", "Lsun/management/counter/perf/Prologue;", nullptr, $FINAL | $SYNTHETIC, $field(Prologue$PrologueFieldOffset, this$0)},
	{"SIZEOF_BYTE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, SIZEOF_BYTE)},
	{"SIZEOF_INT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, SIZEOF_INT)},
	{"SIZEOF_LONG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, SIZEOF_LONG)},
	{"MAGIC_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, MAGIC_SIZE)},
	{"BYTE_ORDER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, BYTE_ORDER_SIZE)},
	{"MAJOR_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, MAJOR_SIZE)},
	{"MINOR_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, MINOR_SIZE)},
	{"ACCESSIBLE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, ACCESSIBLE_SIZE)},
	{"USED_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, USED_SIZE)},
	{"OVERFLOW_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, OVERFLOW_SIZE)},
	{"MOD_TIMESTAMP_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, MOD_TIMESTAMP_SIZE)},
	{"ENTRY_OFFSET_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, ENTRY_OFFSET_SIZE)},
	{"NUM_ENTRIES_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, NUM_ENTRIES_SIZE)},
	{"MAGIC", "I", nullptr, $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, MAGIC)},
	{"BYTE_ORDER", "I", nullptr, $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, BYTE_ORDER)},
	{"MAJOR_VERSION", "I", nullptr, $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, MAJOR_VERSION)},
	{"MINOR_VERSION", "I", nullptr, $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, MINOR_VERSION)},
	{"ACCESSIBLE", "I", nullptr, $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, ACCESSIBLE)},
	{"USED", "I", nullptr, $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, USED)},
	{"OVERFLOW", "I", nullptr, $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, OVERFLOW)},
	{"MOD_TIMESTAMP", "I", nullptr, $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, MOD_TIMESTAMP)},
	{"ENTRY_OFFSET", "I", nullptr, $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, ENTRY_OFFSET)},
	{"NUM_ENTRIES", "I", nullptr, $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, NUM_ENTRIES)},
	{"PROLOGUE_2_0_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(Prologue$PrologueFieldOffset, PROLOGUE_2_0_SIZE)},
	{}
};

$MethodInfo _Prologue$PrologueFieldOffset_MethodInfo_[] = {
	{"<init>", "(Lsun/management/counter/perf/Prologue;)V", nullptr, $PRIVATE, $method(static_cast<void(Prologue$PrologueFieldOffset::*)($Prologue*)>(&Prologue$PrologueFieldOffset::init$))},
	{}
};

$InnerClassInfo _Prologue$PrologueFieldOffset_InnerClassesInfo_[] = {
	{"sun.management.counter.perf.Prologue$PrologueFieldOffset", "sun.management.counter.perf.Prologue", "PrologueFieldOffset", $PRIVATE},
	{}
};

$ClassInfo _Prologue$PrologueFieldOffset_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.counter.perf.Prologue$PrologueFieldOffset",
	"java.lang.Object",
	nullptr,
	_Prologue$PrologueFieldOffset_FieldInfo_,
	_Prologue$PrologueFieldOffset_MethodInfo_,
	nullptr,
	nullptr,
	_Prologue$PrologueFieldOffset_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.counter.perf.Prologue"
};

$Object* allocate$Prologue$PrologueFieldOffset($Class* clazz) {
	return $of($alloc(Prologue$PrologueFieldOffset));
}

void Prologue$PrologueFieldOffset::init$($Prologue* this$0) {
	$set(this, this$0, this$0);
}

Prologue$PrologueFieldOffset::Prologue$PrologueFieldOffset() {
}

$Class* Prologue$PrologueFieldOffset::load$($String* name, bool initialize) {
	$loadClass(Prologue$PrologueFieldOffset, name, initialize, &_Prologue$PrologueFieldOffset_ClassInfo_, allocate$Prologue$PrologueFieldOffset);
	return class$;
}

$Class* Prologue$PrologueFieldOffset::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun