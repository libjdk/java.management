#ifndef _sun_management_counter_StringCounter_h_
#define _sun_management_counter_StringCounter_h_
//$ interface sun.management.counter.StringCounter
//$ extends sun.management.counter.Counter

#include <sun/management/counter/Counter.h>

namespace sun {
	namespace management {
		namespace counter {

class $import StringCounter : public ::sun::management::counter::Counter {
	$interface(StringCounter, $NO_CLASS_INIT, ::sun::management::counter::Counter)
public:
	virtual $String* stringValue() {return nullptr;}
};

		} // counter
	} // management
} // sun

#endif // _sun_management_counter_StringCounter_h_