#ifndef _sun_management_counter_perf_Prologue$PrologueFieldOffset_h_
#define _sun_management_counter_perf_Prologue$PrologueFieldOffset_h_
//$ class sun.management.counter.perf.Prologue$PrologueFieldOffset
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ACCESSIBLE")
#undef ACCESSIBLE
#pragma push_macro("ACCESSIBLE_SIZE")
#undef ACCESSIBLE_SIZE
#pragma push_macro("BYTE_ORDER")
#undef BYTE_ORDER
#pragma push_macro("BYTE_ORDER_SIZE")
#undef BYTE_ORDER_SIZE
#pragma push_macro("ENTRY_OFFSET")
#undef ENTRY_OFFSET
#pragma push_macro("ENTRY_OFFSET_SIZE")
#undef ENTRY_OFFSET_SIZE
#pragma push_macro("MAGIC")
#undef MAGIC
#pragma push_macro("MAGIC_SIZE")
#undef MAGIC_SIZE
#pragma push_macro("MAJOR_SIZE")
#undef MAJOR_SIZE
#pragma push_macro("MAJOR_VERSION")
#undef MAJOR_VERSION
#pragma push_macro("MINOR_SIZE")
#undef MINOR_SIZE
#pragma push_macro("MINOR_VERSION")
#undef MINOR_VERSION
#pragma push_macro("MOD_TIMESTAMP")
#undef MOD_TIMESTAMP
#pragma push_macro("MOD_TIMESTAMP_SIZE")
#undef MOD_TIMESTAMP_SIZE
#pragma push_macro("NUM_ENTRIES")
#undef NUM_ENTRIES
#pragma push_macro("NUM_ENTRIES_SIZE")
#undef NUM_ENTRIES_SIZE
#pragma push_macro("OVERFLOW")
#undef OVERFLOW
#pragma push_macro("OVERFLOW_SIZE")
#undef OVERFLOW_SIZE
#pragma push_macro("PROLOGUE_2_0_SIZE")
#undef PROLOGUE_2_0_SIZE
#pragma push_macro("SIZEOF_BYTE")
#undef SIZEOF_BYTE
#pragma push_macro("SIZEOF_INT")
#undef SIZEOF_INT
#pragma push_macro("SIZEOF_LONG")
#undef SIZEOF_LONG
#pragma push_macro("USED")
#undef USED
#pragma push_macro("USED_SIZE")
#undef USED_SIZE

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {
				class Prologue;
			}
		}
	}
}

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

class Prologue$PrologueFieldOffset : public ::java::lang::Object {
	$class(Prologue$PrologueFieldOffset, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Prologue$PrologueFieldOffset();
	void init$(::sun::management::counter::perf::Prologue* this$0);
	::sun::management::counter::perf::Prologue* this$0 = nullptr;
	static const int32_t SIZEOF_BYTE = 1;
	static const int32_t SIZEOF_INT = 4;
	static const int32_t SIZEOF_LONG = 8;
	static const int32_t MAGIC_SIZE = SIZEOF_INT;
	static const int32_t BYTE_ORDER_SIZE = SIZEOF_BYTE;
	static const int32_t MAJOR_SIZE = SIZEOF_BYTE;
	static const int32_t MINOR_SIZE = SIZEOF_BYTE;
	static const int32_t ACCESSIBLE_SIZE = SIZEOF_BYTE;
	static const int32_t USED_SIZE = SIZEOF_INT;
	static const int32_t OVERFLOW_SIZE = SIZEOF_INT;
	static const int32_t MOD_TIMESTAMP_SIZE = SIZEOF_LONG;
	static const int32_t ENTRY_OFFSET_SIZE = SIZEOF_INT;
	static const int32_t NUM_ENTRIES_SIZE = SIZEOF_INT;
	static const int32_t MAGIC = 0;
	static const int32_t BYTE_ORDER = 4; // MAGIC + MAGIC_SIZE
	static const int32_t MAJOR_VERSION = 5; // BYTE_ORDER + BYTE_ORDER_SIZE
	static const int32_t MINOR_VERSION = 6; // MAJOR_VERSION + MAJOR_SIZE
	static const int32_t ACCESSIBLE = 7; // MINOR_VERSION + MINOR_SIZE
	static const int32_t USED = 8; // ACCESSIBLE + ACCESSIBLE_SIZE
	static const int32_t OVERFLOW = 12; // USED + USED_SIZE
	static const int32_t MOD_TIMESTAMP = 16; // OVERFLOW + OVERFLOW_SIZE
	static const int32_t ENTRY_OFFSET = 24; // MOD_TIMESTAMP + MOD_TIMESTAMP_SIZE
	static const int32_t NUM_ENTRIES = 28; // ENTRY_OFFSET + ENTRY_OFFSET_SIZE
	static const int32_t PROLOGUE_2_0_SIZE = 32; // NUM_ENTRIES + NUM_ENTRIES_SIZE
};

			} // perf
		} // counter
	} // management
} // sun

#pragma pop_macro("ACCESSIBLE")
#pragma pop_macro("ACCESSIBLE_SIZE")
#pragma pop_macro("BYTE_ORDER")
#pragma pop_macro("BYTE_ORDER_SIZE")
#pragma pop_macro("ENTRY_OFFSET")
#pragma pop_macro("ENTRY_OFFSET_SIZE")
#pragma pop_macro("MAGIC")
#pragma pop_macro("MAGIC_SIZE")
#pragma pop_macro("MAJOR_SIZE")
#pragma pop_macro("MAJOR_VERSION")
#pragma pop_macro("MINOR_SIZE")
#pragma pop_macro("MINOR_VERSION")
#pragma pop_macro("MOD_TIMESTAMP")
#pragma pop_macro("MOD_TIMESTAMP_SIZE")
#pragma pop_macro("NUM_ENTRIES")
#pragma pop_macro("NUM_ENTRIES_SIZE")
#pragma pop_macro("OVERFLOW")
#pragma pop_macro("OVERFLOW_SIZE")
#pragma pop_macro("PROLOGUE_2_0_SIZE")
#pragma pop_macro("SIZEOF_BYTE")
#pragma pop_macro("SIZEOF_INT")
#pragma pop_macro("SIZEOF_LONG")
#pragma pop_macro("USED")
#pragma pop_macro("USED_SIZE")

#endif // _sun_management_counter_perf_Prologue$PrologueFieldOffset_h_