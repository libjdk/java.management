#ifndef _sun_management_counter_LongArrayCounter_h_
#define _sun_management_counter_LongArrayCounter_h_
//$ interface sun.management.counter.LongArrayCounter
//$ extends sun.management.counter.Counter

#include <java/lang/Array.h>
#include <sun/management/counter/Counter.h>

namespace sun {
	namespace management {
		namespace counter {

class $import LongArrayCounter : public ::sun::management::counter::Counter {
	$interface(LongArrayCounter, $NO_CLASS_INIT, ::sun::management::counter::Counter)
public:
	virtual $longs* longArrayValue() {return nullptr;}
	virtual int64_t longAt(int32_t index) {return 0;}
};

		} // counter
	} // management
} // sun

#endif // _sun_management_counter_LongArrayCounter_h_