#ifndef _javax_management_BadBinaryOpValueExpException_h_
#define _javax_management_BadBinaryOpValueExpException_h_
//$ class javax.management.BadBinaryOpValueExpException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace management {
		class ValueExp;
	}
}

namespace javax {
	namespace management {

class $import BadBinaryOpValueExpException : public ::java::lang::Exception {
	$class(BadBinaryOpValueExpException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	BadBinaryOpValueExpException();
	void init$(::javax::management::ValueExp* exp);
	virtual ::javax::management::ValueExp* getExp();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x4656D7B1D5D8F72B;
	::javax::management::ValueExp* exp = nullptr;
	BadBinaryOpValueExpException(const BadBinaryOpValueExpException& e);
	virtual void throw$() override;
	inline BadBinaryOpValueExpException* operator ->() {
		return (BadBinaryOpValueExpException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_BadBinaryOpValueExpException_h_