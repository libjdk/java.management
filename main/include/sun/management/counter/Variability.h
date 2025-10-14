#ifndef _sun_management_counter_Variability_h_
#define _sun_management_counter_Variability_h_
//$ class sun.management.counter.Variability
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("CONSTANT")
#undef CONSTANT
#pragma push_macro("INVALID")
#undef INVALID
#pragma push_macro("MONOTONIC")
#undef MONOTONIC
#pragma push_macro("NATTRIBUTES")
#undef NATTRIBUTES
#pragma push_macro("VARIABLE")
#undef VARIABLE

namespace sun {
	namespace management {
		namespace counter {

class $import Variability : public ::java::io::Serializable {
	$class(Variability, 0, ::java::io::Serializable)
public:
	Variability();
	void init$($String* name, int32_t value);
	virtual int32_t intValue();
	virtual $String* toString() override;
	static ::sun::management::counter::Variability* toVariability(int32_t value);
	static const int32_t NATTRIBUTES = 4;
	static $Array<::sun::management::counter::Variability>* map;
	$String* name = nullptr;
	int32_t value = 0;
	static ::sun::management::counter::Variability* INVALID;
	static ::sun::management::counter::Variability* CONSTANT;
	static ::sun::management::counter::Variability* MONOTONIC;
	static ::sun::management::counter::Variability* VARIABLE;
	static const int64_t serialVersionUID = (int64_t)0x6109C59A2636DD85;
};

		} // counter
	} // management
} // sun

#pragma pop_macro("CONSTANT")
#pragma pop_macro("INVALID")
#pragma pop_macro("MONOTONIC")
#pragma pop_macro("NATTRIBUTES")
#pragma pop_macro("VARIABLE")

#endif // _sun_management_counter_Variability_h_