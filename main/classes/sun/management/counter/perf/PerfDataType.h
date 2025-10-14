#ifndef _sun_management_counter_perf_PerfDataType_h_
#define _sun_management_counter_perf_PerfDataType_h_
//$ class sun.management.counter.perf.PerfDataType
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("BYTE")
#undef BYTE
#pragma push_macro("CHAR")
#undef CHAR
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("ILLEGAL")
#undef ILLEGAL
#pragma push_macro("INT")
#undef INT
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("SHORT")
#undef SHORT

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

class PerfDataType : public ::java::lang::Object {
	$class(PerfDataType, 0, ::java::lang::Object)
public:
	PerfDataType();
	void init$($String* name, $String* c, int32_t size);
	virtual int8_t byteValue();
	virtual int32_t size();
	static ::sun::management::counter::perf::PerfDataType* toPerfDataType(int8_t type);
	virtual $String* toString() override;
	$String* name = nullptr;
	int8_t value = 0;
	int32_t size$ = 0;
	static ::sun::management::counter::perf::PerfDataType* BOOLEAN;
	static ::sun::management::counter::perf::PerfDataType* CHAR;
	static ::sun::management::counter::perf::PerfDataType* FLOAT;
	static ::sun::management::counter::perf::PerfDataType* DOUBLE;
	static ::sun::management::counter::perf::PerfDataType* BYTE;
	static ::sun::management::counter::perf::PerfDataType* SHORT;
	static ::sun::management::counter::perf::PerfDataType* INT;
	static ::sun::management::counter::perf::PerfDataType* LONG;
	static ::sun::management::counter::perf::PerfDataType* ILLEGAL;
	static $Array<::sun::management::counter::perf::PerfDataType>* basicTypes;
};

			} // perf
		} // counter
	} // management
} // sun

#pragma pop_macro("BOOLEAN")
#pragma pop_macro("BYTE")
#pragma pop_macro("CHAR")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("FLOAT")
#pragma pop_macro("ILLEGAL")
#pragma pop_macro("INT")
#pragma pop_macro("LONG")
#pragma pop_macro("SHORT")

#endif // _sun_management_counter_perf_PerfDataType_h_