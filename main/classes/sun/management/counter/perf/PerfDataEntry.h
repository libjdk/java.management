#ifndef _sun_management_counter_perf_PerfDataEntry_h_
#define _sun_management_counter_perf_PerfDataEntry_h_
//$ class sun.management.counter.perf.PerfDataEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class LongBuffer;
	}
}
namespace sun {
	namespace management {
		namespace counter {
			class Units;
			class Variability;
		}
	}
}
namespace sun {
	namespace management {
		namespace counter {
			namespace perf {
				class PerfDataType;
			}
		}
	}
}

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

class PerfDataEntry : public ::java::lang::Object {
	$class(PerfDataEntry, 0, ::java::lang::Object)
public:
	PerfDataEntry();
	void init$(::java::nio::ByteBuffer* b);
	virtual ::java::nio::ByteBuffer* byteData();
	virtual int32_t flags();
	virtual ::java::nio::LongBuffer* longData();
	virtual $String* name();
	virtual int32_t size();
	virtual ::sun::management::counter::perf::PerfDataType* type();
	virtual ::sun::management::counter::Units* units();
	virtual ::sun::management::counter::Variability* variability();
	virtual int32_t vectorLength();
	static bool $assertionsDisabled;
	$String* name$ = nullptr;
	int32_t entryStart = 0;
	int32_t entryLength = 0;
	int32_t vectorLength$ = 0;
	::sun::management::counter::perf::PerfDataType* dataType = nullptr;
	int32_t flags$ = 0;
	::sun::management::counter::Units* unit = nullptr;
	::sun::management::counter::Variability* variability$ = nullptr;
	int32_t dataOffset = 0;
	int32_t dataSize = 0;
	::java::nio::ByteBuffer* data = nullptr;
};

			} // perf
		} // counter
	} // management
} // sun

#endif // _sun_management_counter_perf_PerfDataEntry_h_