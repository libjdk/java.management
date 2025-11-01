#ifndef _sun_management_counter_perf_ByteArrayCounterSnapshot_h_
#define _sun_management_counter_perf_ByteArrayCounterSnapshot_h_
//$ class sun.management.counter.perf.ByteArrayCounterSnapshot
//$ extends sun.management.counter.AbstractCounter
//$ implements sun.management.counter.ByteArrayCounter

#include <java/lang/Array.h>
#include <sun/management/counter/AbstractCounter.h>
#include <sun/management/counter/ByteArrayCounter.h>

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

class ByteArrayCounterSnapshot : public ::sun::management::counter::AbstractCounter, public ::sun::management::counter::ByteArrayCounter {
	$class(ByteArrayCounterSnapshot, $NO_CLASS_INIT, ::sun::management::counter::AbstractCounter, ::sun::management::counter::ByteArrayCounter)
public:
	ByteArrayCounterSnapshot();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t getFlags() override;
	virtual $String* getName() override;
	virtual ::sun::management::counter::Units* getUnits() override;
	virtual ::sun::management::counter::Variability* getVariability() override;
	virtual int32_t getVectorLength() override;
	virtual int32_t hashCode() override;
	void init$($String* name, ::sun::management::counter::Units* u, ::sun::management::counter::Variability* v, int32_t flags, int32_t vectorLength, $bytes* value);
	virtual $bytes* byteArrayValue() override;
	virtual int8_t byteAt(int32_t index) override;
	virtual $Object* getValue() override;
	virtual bool isInternal() override;
	virtual bool isVector() override;
	virtual $String* toString() override;
	$bytes* value = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x140CEFFF337A4E43;
};

			} // perf
		} // counter
	} // management
} // sun

#endif // _sun_management_counter_perf_ByteArrayCounterSnapshot_h_