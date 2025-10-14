#ifndef _sun_management_counter_AbstractCounter$Flags_h_
#define _sun_management_counter_AbstractCounter$Flags_h_
//$ class sun.management.counter.AbstractCounter$Flags
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SUPPORTED")
#undef SUPPORTED

namespace sun {
	namespace management {
		namespace counter {
			class AbstractCounter;
		}
	}
}

namespace sun {
	namespace management {
		namespace counter {

class $import AbstractCounter$Flags : public ::java::lang::Object {
	$class(AbstractCounter$Flags, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AbstractCounter$Flags();
	void init$(::sun::management::counter::AbstractCounter* this$0);
	::sun::management::counter::AbstractCounter* this$0 = nullptr;
	static const int32_t SUPPORTED = 1;
};

		} // counter
	} // management
} // sun

#pragma pop_macro("SUPPORTED")

#endif // _sun_management_counter_AbstractCounter$Flags_h_