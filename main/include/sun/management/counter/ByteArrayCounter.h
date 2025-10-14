#ifndef _sun_management_counter_ByteArrayCounter_h_
#define _sun_management_counter_ByteArrayCounter_h_
//$ interface sun.management.counter.ByteArrayCounter
//$ extends sun.management.counter.Counter

#include <java/lang/Array.h>
#include <sun/management/counter/Counter.h>

namespace sun {
	namespace management {
		namespace counter {

class $import ByteArrayCounter : public ::sun::management::counter::Counter {
	$interface(ByteArrayCounter, $NO_CLASS_INIT, ::sun::management::counter::Counter)
public:
	virtual $bytes* byteArrayValue() {return nullptr;}
	virtual int8_t byteAt(int32_t index) {return 0;}
};

		} // counter
	} // management
} // sun

#endif // _sun_management_counter_ByteArrayCounter_h_