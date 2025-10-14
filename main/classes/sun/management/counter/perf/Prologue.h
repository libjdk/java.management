#ifndef _sun_management_counter_perf_Prologue_h_
#define _sun_management_counter_perf_Prologue_h_
//$ class sun.management.counter.perf.Prologue
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PERFDATA_BIG_ENDIAN")
#undef PERFDATA_BIG_ENDIAN
#pragma push_macro("PERFDATA_LITTLE_ENDIAN")
#undef PERFDATA_LITTLE_ENDIAN
#pragma push_macro("PERFDATA_MAGIC")
#undef PERFDATA_MAGIC

namespace java {
	namespace nio {
		class ByteBuffer;
		class ByteOrder;
	}
}

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

class Prologue : public ::java::lang::Object {
	$class(Prologue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Prologue();
	void init$(::java::nio::ByteBuffer* b);
	virtual ::java::nio::ByteOrder* getByteOrder();
	virtual int32_t getEntryOffset();
	virtual int32_t getMagic();
	virtual int32_t getMajorVersion();
	virtual int32_t getMinorVersion();
	virtual int64_t getModificationTimeStamp();
	virtual int32_t getNumEntries();
	virtual int32_t getOverflow();
	virtual int32_t getUsed();
	virtual bool isAccessible();
	static const int8_t PERFDATA_BIG_ENDIAN = 0;
	static const int8_t PERFDATA_LITTLE_ENDIAN = 1;
	static const int32_t PERFDATA_MAGIC = 0xCAFEC0C0;
	::java::nio::ByteBuffer* header = nullptr;
	int32_t magic = 0;
};

			} // perf
		} // counter
	} // management
} // sun

#pragma pop_macro("PERFDATA_BIG_ENDIAN")
#pragma pop_macro("PERFDATA_LITTLE_ENDIAN")
#pragma pop_macro("PERFDATA_MAGIC")

#endif // _sun_management_counter_perf_Prologue_h_