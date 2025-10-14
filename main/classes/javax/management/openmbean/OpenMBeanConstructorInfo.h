#ifndef _javax_management_openmbean_OpenMBeanConstructorInfo_h_
#define _javax_management_openmbean_OpenMBeanConstructorInfo_h_
//$ interface javax.management.openmbean.OpenMBeanConstructorInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace management {
		class MBeanParameterInfo;
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $export OpenMBeanConstructorInfo : public ::java::lang::Object {
	$interface(OpenMBeanConstructorInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool equals(Object$* obj) override;
	virtual $String* getDescription() {return nullptr;}
	virtual $String* getName() {return nullptr;}
	virtual $Array<::javax::management::MBeanParameterInfo>* getSignature() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_OpenMBeanConstructorInfo_h_