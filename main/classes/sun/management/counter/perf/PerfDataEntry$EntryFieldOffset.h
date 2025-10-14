#ifndef _sun_management_counter_perf_PerfDataEntry$EntryFieldOffset_h_
#define _sun_management_counter_perf_PerfDataEntry$EntryFieldOffset_h_
//$ class sun.management.counter.perf.PerfDataEntry$EntryFieldOffset
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DATA_OFFSET")
#undef DATA_OFFSET
#pragma push_macro("DATA_OFFSET_SIZE")
#undef DATA_OFFSET_SIZE
#pragma push_macro("DATA_TYPE")
#undef DATA_TYPE
#pragma push_macro("DATA_TYPE_SIZE")
#undef DATA_TYPE_SIZE
#pragma push_macro("DATA_UNIT")
#undef DATA_UNIT
#pragma push_macro("DATA_UNIT_SIZE")
#undef DATA_UNIT_SIZE
#pragma push_macro("DATA_VAR")
#undef DATA_VAR
#pragma push_macro("DATA_VAR_SIZE")
#undef DATA_VAR_SIZE
#pragma push_macro("ENTRY_LENGTH")
#undef ENTRY_LENGTH
#pragma push_macro("ENTRY_LENGTH_SIZE")
#undef ENTRY_LENGTH_SIZE
#pragma push_macro("FLAGS")
#undef FLAGS
#pragma push_macro("FLAGS_SIZE")
#undef FLAGS_SIZE
#pragma push_macro("NAME_OFFSET")
#undef NAME_OFFSET
#pragma push_macro("NAME_OFFSET_SIZE")
#undef NAME_OFFSET_SIZE
#pragma push_macro("SIZEOF_BYTE")
#undef SIZEOF_BYTE
#pragma push_macro("SIZEOF_INT")
#undef SIZEOF_INT
#pragma push_macro("SIZEOF_LONG")
#undef SIZEOF_LONG
#pragma push_macro("VECTOR_LENGTH")
#undef VECTOR_LENGTH
#pragma push_macro("VECTOR_LENGTH_SIZE")
#undef VECTOR_LENGTH_SIZE

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {
				class PerfDataEntry;
			}
		}
	}
}

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

class PerfDataEntry$EntryFieldOffset : public ::java::lang::Object {
	$class(PerfDataEntry$EntryFieldOffset, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PerfDataEntry$EntryFieldOffset();
	void init$(::sun::management::counter::perf::PerfDataEntry* this$0);
	::sun::management::counter::perf::PerfDataEntry* this$0 = nullptr;
	static const int32_t SIZEOF_BYTE = 1;
	static const int32_t SIZEOF_INT = 4;
	static const int32_t SIZEOF_LONG = 8;
	static const int32_t ENTRY_LENGTH_SIZE = SIZEOF_INT;
	static const int32_t NAME_OFFSET_SIZE = SIZEOF_INT;
	static const int32_t VECTOR_LENGTH_SIZE = SIZEOF_INT;
	static const int32_t DATA_TYPE_SIZE = SIZEOF_BYTE;
	static const int32_t FLAGS_SIZE = SIZEOF_BYTE;
	static const int32_t DATA_UNIT_SIZE = SIZEOF_BYTE;
	static const int32_t DATA_VAR_SIZE = SIZEOF_BYTE;
	static const int32_t DATA_OFFSET_SIZE = SIZEOF_INT;
	static const int32_t ENTRY_LENGTH = 0;
	static const int32_t NAME_OFFSET = 4; // ENTRY_LENGTH + ENTRY_LENGTH_SIZE
	static const int32_t VECTOR_LENGTH = 8; // NAME_OFFSET + NAME_OFFSET_SIZE
	static const int32_t DATA_TYPE = 12; // VECTOR_LENGTH + VECTOR_LENGTH_SIZE
	static const int32_t FLAGS = 13; // DATA_TYPE + DATA_TYPE_SIZE
	static const int32_t DATA_UNIT = 14; // FLAGS + FLAGS_SIZE
	static const int32_t DATA_VAR = 15; // DATA_UNIT + DATA_UNIT_SIZE
	static const int32_t DATA_OFFSET = 16; // DATA_VAR + DATA_VAR_SIZE
};

			} // perf
		} // counter
	} // management
} // sun

#pragma pop_macro("DATA_OFFSET")
#pragma pop_macro("DATA_OFFSET_SIZE")
#pragma pop_macro("DATA_TYPE")
#pragma pop_macro("DATA_TYPE_SIZE")
#pragma pop_macro("DATA_UNIT")
#pragma pop_macro("DATA_UNIT_SIZE")
#pragma pop_macro("DATA_VAR")
#pragma pop_macro("DATA_VAR_SIZE")
#pragma pop_macro("ENTRY_LENGTH")
#pragma pop_macro("ENTRY_LENGTH_SIZE")
#pragma pop_macro("FLAGS")
#pragma pop_macro("FLAGS_SIZE")
#pragma pop_macro("NAME_OFFSET")
#pragma pop_macro("NAME_OFFSET_SIZE")
#pragma pop_macro("SIZEOF_BYTE")
#pragma pop_macro("SIZEOF_INT")
#pragma pop_macro("SIZEOF_LONG")
#pragma pop_macro("VECTOR_LENGTH")
#pragma pop_macro("VECTOR_LENGTH_SIZE")

#endif // _sun_management_counter_perf_PerfDataEntry$EntryFieldOffset_h_