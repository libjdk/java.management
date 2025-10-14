#ifndef _sun_management_counter_LongCounter_h_
#define _sun_management_counter_LongCounter_h_
//$ interface sun.management.counter.LongCounter
//$ extends sun.management.counter.Counter

#include <sun/management/counter/Counter.h>

namespace sun {
	namespace management {
		namespace counter {

class $import LongCounter : public ::sun::management::counter::Counter {
	$interface(LongCounter, $NO_CLASS_INIT, ::sun::management::counter::Counter)
public:
	virtual int64_t longValue() {return 0;}
};

		} // counter
	} // management
} // sun

#endif // _sun_management_counter_LongCounter_h_