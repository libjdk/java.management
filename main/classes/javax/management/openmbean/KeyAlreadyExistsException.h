#ifndef _javax_management_openmbean_KeyAlreadyExistsException_h_
#define _javax_management_openmbean_KeyAlreadyExistsException_h_
//$ class javax.management.openmbean.KeyAlreadyExistsException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace javax {
	namespace management {
		namespace openmbean {

class $export KeyAlreadyExistsException : public ::java::lang::IllegalArgumentException {
	$class(KeyAlreadyExistsException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	KeyAlreadyExistsException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x199B68BDCD90E532;
	KeyAlreadyExistsException(const KeyAlreadyExistsException& e);
	virtual void throw$() override;
	inline KeyAlreadyExistsException* operator ->() {
		return (KeyAlreadyExistsException*)throwing$;
	}
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_KeyAlreadyExistsException_h_