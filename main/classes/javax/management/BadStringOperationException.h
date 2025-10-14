#ifndef _javax_management_BadStringOperationException_h_
#define _javax_management_BadStringOperationException_h_
//$ class javax.management.BadStringOperationException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace management {

class $export BadStringOperationException : public ::java::lang::Exception {
	$class(BadStringOperationException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	BadStringOperationException();
	void init$($String* message);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x6C46FCB0436D9694;
	$String* op = nullptr;
	BadStringOperationException(const BadStringOperationException& e);
	BadStringOperationException wrapper$();
	virtual void throwWrapper$() override;
};

	} // management
} // javax

#endif // _javax_management_BadStringOperationException_h_