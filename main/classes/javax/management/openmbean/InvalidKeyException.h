#ifndef _javax_management_openmbean_InvalidKeyException_h_
#define _javax_management_openmbean_InvalidKeyException_h_
//$ class javax.management.openmbean.InvalidKeyException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace javax {
	namespace management {
		namespace openmbean {

class $export InvalidKeyException : public ::java::lang::IllegalArgumentException {
	$class(InvalidKeyException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	InvalidKeyException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x3A9F9EAD99F5188E;
	InvalidKeyException(const InvalidKeyException& e);
	virtual void throw$() override;
	inline InvalidKeyException* operator ->() {
		return (InvalidKeyException*)throwing$;
	}
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_InvalidKeyException_h_