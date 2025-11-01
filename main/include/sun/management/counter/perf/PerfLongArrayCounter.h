#ifndef _sun_management_counter_perf_PerfLongArrayCounter_h_
#define _sun_management_counter_perf_PerfLongArrayCounter_h_
//$ class sun.management.counter.perf.PerfLongArrayCounter
//$ extends sun.management.counter.AbstractCounter
//$ implements sun.management.counter.LongArrayCounter

#include <java/lang/Array.h>
#include <sun/management/counter/AbstractCounter.h>
#include <sun/management/counter/LongArrayCounter.h>

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

class $import PerfLongArrayCounter : public ::sun::management::counter::AbstractCounter, public ::sun::management::counter::LongArrayCounter {
	$class(PerfLongArrayCounter, $NO_CLASS_INIT, ::sun::management::counter::AbstractCounter, ::sun::management::counter::LongArrayCounter)
public:
	PerfLongArrayCounter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t getFlags() override;
	virtual $String* getName() override;
	virtual ::sun::management::counter::Units* getUnits() override;
	virtual ::sun::management::counter::Variability* getVariability() override;
	virtual int32_t getVectorLength() override;
	virtual int32_t hashCode() override;
	void init$($String* name, ::sun::management::counter::Units* u, ::sun::management::counter::Variability* v, int32_t flags, int32_t vectorLength, ::java::nio::LongBuffer* lb);
	virtual $Object* getValue() override;
	virtual bool isInternal() override;
	virtual bool isVector() override;
	virtual $longs* longArrayValue() override;
	virtual int64_t longAt(int32_t index) override;
	virtual $String* toString() override;
	virtual $Object* writeReplace();
	::java::nio::LongBuffer* lb = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xDA103CFDCD4771EA;
};

			} // perf
		} // counter
	} // management
} // sun

#endif // _sun_management_counter_perf_PerfLongArrayCounter_h_