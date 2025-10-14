#ifndef _javax_management_MBeanServerDelegateMBean_h_
#define _javax_management_MBeanServerDelegateMBean_h_
//$ interface javax.management.MBeanServerDelegateMBean
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace management {

class $import MBeanServerDelegateMBean : public ::java::lang::Object {
	$interface(MBeanServerDelegateMBean, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getImplementationName() {return nullptr;}
	virtual $String* getImplementationVendor() {return nullptr;}
	virtual $String* getImplementationVersion() {return nullptr;}
	virtual $String* getMBeanServerId() {return nullptr;}
	virtual $String* getSpecificationName() {return nullptr;}
	virtual $String* getSpecificationVendor() {return nullptr;}
	virtual $String* getSpecificationVersion() {return nullptr;}
};

	} // management
} // javax

#endif // _javax_management_MBeanServerDelegateMBean_h_