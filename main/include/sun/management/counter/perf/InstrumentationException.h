#ifndef _sun_management_counter_perf_InstrumentationException_h_
#define _sun_management_counter_perf_InstrumentationException_h_
//$ class sun.management.counter.perf.InstrumentationException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

class $import InstrumentationException : public ::java::lang::RuntimeException {
	$class(InstrumentationException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	InstrumentationException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x6FDB4A79A2E310ED;
	InstrumentationException(const InstrumentationException& e);
	virtual void throw$() override;
	inline InstrumentationException* operator ->() {
		return (InstrumentationException*)throwing$;
	}
};

			} // perf
		} // counter
	} // management
} // sun

#endif // _sun_management_counter_perf_InstrumentationException_h_