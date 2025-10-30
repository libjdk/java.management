#include <sun/management/counter/perf/PerfDataEntry$EntryFieldOffset.h>

#include <sun/management/counter/perf/PerfDataEntry.h>
#include <jcpp.h>

#undef DATA_OFFSET
#undef DATA_OFFSET_SIZE
#undef DATA_TYPE
#undef DATA_TYPE_SIZE
#undef DATA_UNIT
#undef DATA_UNIT_SIZE
#undef DATA_VAR
#undef DATA_VAR_SIZE
#undef ENTRY_LENGTH
#undef ENTRY_LENGTH_SIZE
#undef FLAGS
#undef FLAGS_SIZE
#undef NAME_OFFSET
#undef NAME_OFFSET_SIZE
#undef SIZEOF_BYTE
#undef SIZEOF_INT
#undef SIZEOF_LONG
#undef VECTOR_LENGTH
#undef VECTOR_LENGTH_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PerfDataEntry = ::sun::management::counter::perf::PerfDataEntry;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

$FieldInfo _PerfDataEntry$EntryFieldOffset_FieldInfo_[] = {
	{"this$0", "Lsun/management/counter/perf/PerfDataEntry;", nullptr, $FINAL | $SYNTHETIC, $field(PerfDataEntry$EntryFieldOffset, this$0)},
	{"SIZEOF_BYTE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, SIZEOF_BYTE)},
	{"SIZEOF_INT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, SIZEOF_INT)},
	{"SIZEOF_LONG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, SIZEOF_LONG)},
	{"ENTRY_LENGTH_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, ENTRY_LENGTH_SIZE)},
	{"NAME_OFFSET_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, NAME_OFFSET_SIZE)},
	{"VECTOR_LENGTH_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, VECTOR_LENGTH_SIZE)},
	{"DATA_TYPE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, DATA_TYPE_SIZE)},
	{"FLAGS_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, FLAGS_SIZE)},
	{"DATA_UNIT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, DATA_UNIT_SIZE)},
	{"DATA_VAR_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, DATA_VAR_SIZE)},
	{"DATA_OFFSET_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, DATA_OFFSET_SIZE)},
	{"ENTRY_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, ENTRY_LENGTH)},
	{"NAME_OFFSET", "I", nullptr, $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, NAME_OFFSET)},
	{"VECTOR_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, VECTOR_LENGTH)},
	{"DATA_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, DATA_TYPE)},
	{"FLAGS", "I", nullptr, $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, FLAGS)},
	{"DATA_UNIT", "I", nullptr, $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, DATA_UNIT)},
	{"DATA_VAR", "I", nullptr, $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, DATA_VAR)},
	{"DATA_OFFSET", "I", nullptr, $STATIC | $FINAL, $constField(PerfDataEntry$EntryFieldOffset, DATA_OFFSET)},
	{}
};

$MethodInfo _PerfDataEntry$EntryFieldOffset_MethodInfo_[] = {
	{"<init>", "(Lsun/management/counter/perf/PerfDataEntry;)V", nullptr, $PRIVATE, $method(static_cast<void(PerfDataEntry$EntryFieldOffset::*)($PerfDataEntry*)>(&PerfDataEntry$EntryFieldOffset::init$))},
	{}
};

$InnerClassInfo _PerfDataEntry$EntryFieldOffset_InnerClassesInfo_[] = {
	{"sun.management.counter.perf.PerfDataEntry$EntryFieldOffset", "sun.management.counter.perf.PerfDataEntry", "EntryFieldOffset", $PRIVATE},
	{}
};

$ClassInfo _PerfDataEntry$EntryFieldOffset_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.counter.perf.PerfDataEntry$EntryFieldOffset",
	"java.lang.Object",
	nullptr,
	_PerfDataEntry$EntryFieldOffset_FieldInfo_,
	_PerfDataEntry$EntryFieldOffset_MethodInfo_,
	nullptr,
	nullptr,
	_PerfDataEntry$EntryFieldOffset_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.counter.perf.PerfDataEntry"
};

$Object* allocate$PerfDataEntry$EntryFieldOffset($Class* clazz) {
	return $of($alloc(PerfDataEntry$EntryFieldOffset));
}

void PerfDataEntry$EntryFieldOffset::init$($PerfDataEntry* this$0) {
	$set(this, this$0, this$0);
}

PerfDataEntry$EntryFieldOffset::PerfDataEntry$EntryFieldOffset() {
}

$Class* PerfDataEntry$EntryFieldOffset::load$($String* name, bool initialize) {
	$loadClass(PerfDataEntry$EntryFieldOffset, name, initialize, &_PerfDataEntry$EntryFieldOffset_ClassInfo_, allocate$PerfDataEntry$EntryFieldOffset);
	return class$;
}

$Class* PerfDataEntry$EntryFieldOffset::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun