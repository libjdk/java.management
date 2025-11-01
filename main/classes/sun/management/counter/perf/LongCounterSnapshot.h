#ifndef _sun_management_counter_perf_LongCounterSnapshot_h_
#define _sun_management_counter_perf_LongCounterSnapshot_h_
//$ class sun.management.counter.perf.LongCounterSnapshot
//$ extends sun.management.counter.AbstractCounter
//$ implements sun.management.counter.LongCounter

#include <sun/management/counter/AbstractCounter.h>
#include <sun/management/counter/LongCounter.h>

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

class LongCounterSnapshot : public ::sun::management::counter::AbstractCounter, public ::sun::management::counter::LongCounter {
	$class(LongCounterSnapshot, $NO_CLASS_INIT, ::sun::management::counter::AbstractCounter, ::sun::management::counter::LongCounter)
public:
	LongCounterSnapshot();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t getFlags() override;
	virtual $String* getName() override;
	virtual ::sun::management::counter::Units* getUnits() override;
	virtual ::sun::management::counter::Variability* getVariability() override;
	virtual int32_t getVectorLength() override;
	virtual int32_t hashCode() override;
	void init$($String* name, ::sun::management::counter::Units* u, ::sun::management::counter::Variability* v, int32_t flags, int64_t value);
	virtual $Object* getValue() override;
	virtual bool isInternal() override;
	virtual bool isVector() override;
	virtual int64_t longValue() override;
	virtual $String* toString() override;
	int64_t value = 0;
	static const int64_t serialVersionUID = (int64_t)0x1C8236191A1D1E7E;
};

			} // perf
		} // counter
	} // management
} // sun

#endif // _sun_management_counter_perf_LongCounterSnapshot_h_