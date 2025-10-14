#ifndef _sun_management_counter_Counter_h_
#define _sun_management_counter_Counter_h_
//$ interface sun.management.counter.Counter
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

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

class $export Counter : public ::java::io::Serializable {
	$interface(Counter, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	virtual int32_t getFlags() {return 0;}
	virtual $String* getName() {return nullptr;}
	virtual ::sun::management::counter::Units* getUnits() {return nullptr;}
	virtual $Object* getValue() {return nullptr;}
	virtual ::sun::management::counter::Variability* getVariability() {return nullptr;}
	virtual int32_t getVectorLength() {return 0;}
	virtual bool isInternal() {return false;}
	virtual bool isVector() {return false;}
};

		} // counter
	} // management
} // sun

#endif // _sun_management_counter_Counter_h_