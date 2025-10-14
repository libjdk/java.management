#ifndef _javax_management_openmbean_OpenMBeanInfo_h_
#define _javax_management_openmbean_OpenMBeanInfo_h_
//$ interface javax.management.openmbean.OpenMBeanInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace management {
		class MBeanAttributeInfo;
		class MBeanConstructorInfo;
		class MBeanNotificationInfo;
		class MBeanOperationInfo;
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $export OpenMBeanInfo : public ::java::lang::Object {
	$interface(OpenMBeanInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool equals(Object$* obj) override;
	virtual $Array<::javax::management::MBeanAttributeInfo>* getAttributes() {return nullptr;}
	virtual $String* getClassName() {return nullptr;}
	virtual $Array<::javax::management::MBeanConstructorInfo>* getConstructors() {return nullptr;}
	virtual $String* getDescription() {return nullptr;}
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotifications() {return nullptr;}
	virtual $Array<::javax::management::MBeanOperationInfo>* getOperations() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_OpenMBeanInfo_h_