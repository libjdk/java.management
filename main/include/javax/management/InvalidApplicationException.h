#ifndef _javax_management_InvalidApplicationException_h_
#define _javax_management_InvalidApplicationException_h_
//$ class javax.management.InvalidApplicationException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace management {

class $import InvalidApplicationException : public ::java::lang::Exception {
	$class(InvalidApplicationException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	InvalidApplicationException();
	void init$(Object$* val);
	static const int64_t serialVersionUID = (int64_t)0xD5B33FE3EA7C8A8B;
	$Object* val = nullptr;
	InvalidApplicationException(const InvalidApplicationException& e);
	virtual void throw$() override;
	inline InvalidApplicationException* operator ->() {
		return (InvalidApplicationException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_InvalidApplicationException_h_