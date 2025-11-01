#ifndef _sun_management_counter_perf_PerfLongCounter_h_
#define _sun_management_counter_perf_PerfLongCounter_h_
//$ class sun.management.counter.perf.PerfLongCounter
//$ extends sun.management.counter.AbstractCounter
//$ implements sun.management.counter.LongCounter

#include <sun/management/counter/AbstractCounter.h>
#include <sun/management/counter/LongCounter.h>

namespace java {
	namespace nio {
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

class $import PerfLongCounter : public ::sun::management::counter::AbstractCounter, public ::sun::management::counter::LongCounter {
	$class(PerfLongCounter, $NO_CLASS_INIT, ::sun::management::counter::AbstractCounter, ::sun::management::counter::LongCounter)
public:
	PerfLongCounter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t getFlags() override;
	virtual $String* getName() override;
	virtual ::sun::management::counter::Units* getUnits() override;
	virtual ::sun::management::counter::Variability* getVariability() override;
	virtual int32_t getVectorLength() override;
	virtual int32_t hashCode() override;
	void init$($String* name, ::sun::management::counter::Units* u, ::sun::management::counter::Variability* v, int32_t flags, ::java::nio::LongBuffer* lb);
	virtual $Object* getValue() override;
	virtual bool isInternal() override;
	virtual bool isVector() override;
	virtual int64_t longValue() override;
	virtual $String* toString() override;
	virtual $Object* writeReplace();
	::java::nio::LongBuffer* lb = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x0BE73445FF6012C4;
};

			} // perf
		} // counter
	} // management
} // sun

#endif // _sun_management_counter_perf_PerfLongCounter_h_