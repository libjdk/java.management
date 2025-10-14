#ifndef _sun_management_counter_AbstractCounter_h_
#define _sun_management_counter_AbstractCounter_h_
//$ class sun.management.counter.AbstractCounter
//$ extends sun.management.counter.Counter

#include <sun/management/counter/Counter.h>

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

class $import AbstractCounter : public ::sun::management::counter::Counter {
	$class(AbstractCounter, $NO_CLASS_INIT, ::sun::management::counter::Counter)
public:
	AbstractCounter();
	virtual $Object* getValue() override {return nullptr;}
	void init$($String* name, ::sun::management::counter::Units* units, ::sun::management::counter::Variability* variability, int32_t flags, int32_t vectorLength);
	void init$($String* name, ::sun::management::counter::Units* units, ::sun::management::counter::Variability* variability, int32_t flags);
	virtual int32_t getFlags() override;
	virtual $String* getName() override;
	virtual ::sun::management::counter::Units* getUnits() override;
	virtual ::sun::management::counter::Variability* getVariability() override;
	virtual int32_t getVectorLength() override;
	virtual bool isInternal() override;
	virtual bool isVector() override;
	virtual $String* toString() override;
	$String* name = nullptr;
	::sun::management::counter::Units* units = nullptr;
	::sun::management::counter::Variability* variability = nullptr;
	int32_t flags = 0;
	int32_t vectorLength = 0;
	static const int64_t serialVersionUID = (int64_t)0x6109C59A2636DD85;
};

		} // counter
	} // management
} // sun

#endif // _sun_management_counter_AbstractCounter_h_