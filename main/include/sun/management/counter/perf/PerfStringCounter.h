#ifndef _sun_management_counter_perf_PerfStringCounter_h_
#define _sun_management_counter_perf_PerfStringCounter_h_
//$ class sun.management.counter.perf.PerfStringCounter
//$ extends sun.management.counter.perf.PerfByteArrayCounter
//$ implements sun.management.counter.StringCounter

#include <sun/management/counter/StringCounter.h>
#include <sun/management/counter/perf/PerfByteArrayCounter.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace sun {
	namespace management {
		namespace counter {
			class Variability;
		}
	}
}

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

class $import PerfStringCounter : public ::sun::management::counter::perf::PerfByteArrayCounter, public ::sun::management::counter::StringCounter {
	$class(PerfStringCounter, 0, ::sun::management::counter::perf::PerfByteArrayCounter, ::sun::management::counter::StringCounter)
public:
	PerfStringCounter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t getFlags() override;
	virtual $String* getName() override;
	virtual ::sun::management::counter::Units* getUnits() override;
	virtual ::sun::management::counter::Variability* getVariability() override;
	virtual int32_t hashCode() override;
	virtual bool isInternal() override;
	void init$($String* name, ::sun::management::counter::Variability* v, int32_t flags, ::java::nio::ByteBuffer* bb);
	void init$($String* name, ::sun::management::counter::Variability* v, int32_t flags, int32_t maxLength, ::java::nio::ByteBuffer* bb);
	virtual $Object* getValue() override;
	virtual int32_t getVectorLength() override;
	virtual bool isVector() override;
	virtual $String* stringValue() override;
	virtual $String* toString() override;
	virtual $Object* writeReplace() override;
	static ::java::nio::charset::Charset* defaultCharset;
	static const int64_t serialVersionUID = (int64_t)0x5E68CDB969603BA4;
};

			} // perf
		} // counter
	} // management
} // sun

#endif // _sun_management_counter_perf_PerfStringCounter_h_