#ifndef _sun_management_counter_perf_PerfInstrumentation_h_
#define _sun_management_counter_perf_PerfInstrumentation_h_
//$ class sun.management.counter.perf.PerfInstrumentation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class List;
		class SortedMap;
	}
}
namespace sun {
	namespace management {
		namespace counter {
			class Counter;
		}
	}
}
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

class $import PerfInstrumentation : public ::java::lang::Object {
	$class(PerfInstrumentation, 0, ::java::lang::Object)
public:
	PerfInstrumentation();
	void init$(::java::nio::ByteBuffer* b);
	virtual ::java::util::List* findByPattern($String* patternString);
	virtual ::java::util::List* getAllCounters();
	virtual int32_t getMajorVersion();
	virtual int32_t getMinorVersion();
	virtual int64_t getModificationTimeStamp();
	virtual ::sun::management::counter::Counter* getNextCounter();
	virtual bool hasNext();
	virtual void rewind();
	static bool $assertionsDisabled;
	::java::nio::ByteBuffer* buffer = nullptr;
	::sun::management::counter::perf::Prologue* prologue = nullptr;
	int64_t lastModificationTime = 0;
	int64_t lastUsed = 0;
	int32_t nextEntry = 0;
	::java::util::SortedMap* map = nullptr;
};

			} // perf
		} // counter
	} // management
} // sun

#endif // _sun_management_counter_perf_PerfInstrumentation_h_