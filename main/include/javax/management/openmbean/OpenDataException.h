#ifndef _javax_management_openmbean_OpenDataException_h_
#define _javax_management_openmbean_OpenDataException_h_
//$ class javax.management.openmbean.OpenDataException
//$ extends javax.management.JMException

#include <javax/management/JMException.h>

namespace javax {
	namespace management {
		namespace openmbean {

class $import OpenDataException : public ::javax::management::JMException {
	$class(OpenDataException, $NO_CLASS_INIT, ::javax::management::JMException)
public:
	OpenDataException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x73D40DDDBCF30AEE;
	OpenDataException(const OpenDataException& e);
	virtual void throw$() override;
	inline OpenDataException* operator ->() {
		return (OpenDataException*)throwing$;
	}
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_OpenDataException_h_