#ifndef _sun_management_counter_perf_StringCounterSnapshot_h_
#define _sun_management_counter_perf_StringCounterSnapshot_h_
//$ class sun.management.counter.perf.StringCounterSnapshot
//$ extends sun.management.counter.AbstractCounter
//$ implements sun.management.counter.StringCounter

#include <sun/management/counter/AbstractCounter.h>
#include <sun/management/counter/StringCounter.h>

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

class StringCounterSnapshot : public ::sun::management::counter::AbstractCounter, public ::sun::management::counter::StringCounter {
	$class(StringCounterSnapshot, $NO_CLASS_INIT, ::sun::management::counter::AbstractCounter, ::sun::management::counter::StringCounter)
public:
	StringCounterSnapshot();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t getFlags() override;
	virtual $String* getName() override;
	virtual ::sun::management::counter::Units* getUnits() override;
	virtual ::sun::management::counter::Variability* getVariability() override;
	virtual int32_t getVectorLength() override;
	virtual int32_t hashCode() override;
	void init$($String* name, ::sun::management::counter::Units* u, ::sun::management::counter::Variability* v, int32_t flags, $String* value);
	virtual $Object* getValue() override;
	virtual bool isInternal() override;
	virtual bool isVector() override;
	virtual $String* stringValue() override;
	virtual $String* toString() override;
	$String* value = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x0FB8F223279597C2;
};

			} // perf
		} // counter
	} // management
} // sun

#endif // _sun_management_counter_perf_StringCounterSnapshot_h_