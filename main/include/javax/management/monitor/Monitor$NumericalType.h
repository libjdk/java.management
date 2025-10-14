#ifndef _javax_management_monitor_Monitor$NumericalType_h_
#define _javax_management_monitor_Monitor$NumericalType_h_
//$ class javax.management.monitor.Monitor$NumericalType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BYTE")
#undef BYTE
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("INTEGER")
#undef INTEGER
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("SHORT")
#undef SHORT

namespace javax {
	namespace management {
		namespace monitor {

class $import Monitor$NumericalType : public ::java::lang::Enum {
	$class(Monitor$NumericalType, 0, ::java::lang::Enum)
public:
	Monitor$NumericalType();
	static $Array<::javax::management::monitor::Monitor$NumericalType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::management::monitor::Monitor$NumericalType* valueOf($String* name);
	static $Array<::javax::management::monitor::Monitor$NumericalType>* values();
	static ::javax::management::monitor::Monitor$NumericalType* BYTE;
	static ::javax::management::monitor::Monitor$NumericalType* SHORT;
	static ::javax::management::monitor::Monitor$NumericalType* INTEGER;
	static ::javax::management::monitor::Monitor$NumericalType* LONG;
	static ::javax::management::monitor::Monitor$NumericalType* FLOAT;
	static ::javax::management::monitor::Monitor$NumericalType* DOUBLE;
	static $Array<::javax::management::monitor::Monitor$NumericalType>* $VALUES;
};

		} // monitor
	} // management
} // javax

#pragma pop_macro("BYTE")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("FLOAT")
#pragma pop_macro("INTEGER")
#pragma pop_macro("LONG")
#pragma pop_macro("SHORT")

#endif // _javax_management_monitor_Monitor$NumericalType_h_