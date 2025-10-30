#ifndef _javax_management_openmbean_InvalidOpenTypeException_h_
#define _javax_management_openmbean_InvalidOpenTypeException_h_
//$ class javax.management.openmbean.InvalidOpenTypeException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace javax {
	namespace management {
		namespace openmbean {

class $import InvalidOpenTypeException : public ::java::lang::IllegalArgumentException {
	$class(InvalidOpenTypeException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	InvalidOpenTypeException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xD89FD714E8F6A392;
	InvalidOpenTypeException(const InvalidOpenTypeException& e);
	virtual void throw$() override;
	inline InvalidOpenTypeException* operator ->() {
		return (InvalidOpenTypeException*)throwing$;
	}
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_InvalidOpenTypeException_h_