#ifndef _javax_management_BadAttributeValueExpException_h_
#define _javax_management_BadAttributeValueExpException_h_
//$ class javax.management.BadAttributeValueExpException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}

namespace javax {
	namespace management {

class $export BadAttributeValueExpException : public ::java::lang::Exception {
	$class(BadAttributeValueExpException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	BadAttributeValueExpException();
	void init$(Object$* val);
	void readObject(::java::io::ObjectInputStream* ois);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xD4E7DAAB632D4640;
	$String* val = nullptr;
	BadAttributeValueExpException(const BadAttributeValueExpException& e);
	virtual void throw$() override;
	inline BadAttributeValueExpException* operator ->() {
		return (BadAttributeValueExpException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_BadAttributeValueExpException_h_