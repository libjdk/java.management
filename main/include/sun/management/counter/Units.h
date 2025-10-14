#ifndef _sun_management_counter_Units_h_
#define _sun_management_counter_Units_h_
//$ class sun.management.counter.Units
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("BYTES")
#undef BYTES
#pragma push_macro("EVENTS")
#undef EVENTS
#pragma push_macro("HERTZ")
#undef HERTZ
#pragma push_macro("INVALID")
#undef INVALID
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("NUNITS")
#undef NUNITS
#pragma push_macro("STRING")
#undef STRING
#pragma push_macro("TICKS")
#undef TICKS

namespace sun {
	namespace management {
		namespace counter {

class $import Units : public ::java::io::Serializable {
	$class(Units, 0, ::java::io::Serializable)
public:
	Units();
	void init$($String* name, int32_t value);
	virtual int32_t intValue();
	virtual $String* toString() override;
	static ::sun::management::counter::Units* toUnits(int32_t value);
	static const int32_t NUNITS = 8;
	static $Array<::sun::management::counter::Units>* map;
	$String* name = nullptr;
	int32_t value = 0;
	static ::sun::management::counter::Units* INVALID;
	static ::sun::management::counter::Units* NONE;
	static ::sun::management::counter::Units* BYTES;
	static ::sun::management::counter::Units* TICKS;
	static ::sun::management::counter::Units* EVENTS;
	static ::sun::management::counter::Units* STRING;
	static ::sun::management::counter::Units* HERTZ;
	static const int64_t serialVersionUID = (int64_t)0x6109C59A2636DD85;
};

		} // counter
	} // management
} // sun

#pragma pop_macro("BYTES")
#pragma pop_macro("EVENTS")
#pragma pop_macro("HERTZ")
#pragma pop_macro("INVALID")
#pragma pop_macro("NONE")
#pragma pop_macro("NUNITS")
#pragma pop_macro("STRING")
#pragma pop_macro("TICKS")

#endif // _sun_management_counter_Units_h_