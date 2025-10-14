#ifndef _javax_management_openmbean_OpenMBeanAttributeInfo_h_
#define _javax_management_openmbean_OpenMBeanAttributeInfo_h_
//$ interface javax.management.openmbean.OpenMBeanAttributeInfo
//$ extends javax.management.openmbean.OpenMBeanParameterInfo

#include <javax/management/openmbean/OpenMBeanParameterInfo.h>

namespace javax {
	namespace management {
		namespace openmbean {

class $import OpenMBeanAttributeInfo : public ::javax::management::openmbean::OpenMBeanParameterInfo {
	$interface(OpenMBeanAttributeInfo, $NO_CLASS_INIT, ::javax::management::openmbean::OpenMBeanParameterInfo)
public:
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual bool isIs() {return false;}
	virtual bool isReadable() {return false;}
	virtual bool isWritable() {return false;}
	virtual $String* toString() override;
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_OpenMBeanAttributeInfo_h_