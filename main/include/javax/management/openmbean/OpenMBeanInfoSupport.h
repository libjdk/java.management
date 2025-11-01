#ifndef _javax_management_openmbean_OpenMBeanInfoSupport_h_
#define _javax_management_openmbean_OpenMBeanInfoSupport_h_
//$ class javax.management.openmbean.OpenMBeanInfoSupport
//$ extends javax.management.MBeanInfo
//$ implements javax.management.openmbean.OpenMBeanInfo

#include <java/lang/Array.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/openmbean/OpenMBeanInfo.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace javax {
	namespace management {
		class Descriptor;
		class MBeanAttributeInfo;
		class MBeanConstructorInfo;
		class MBeanNotificationInfo;
		class MBeanOperationInfo;
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class OpenMBeanAttributeInfo;
			class OpenMBeanConstructorInfo;
			class OpenMBeanOperationInfo;
		}
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $import OpenMBeanInfoSupport : public ::javax::management::MBeanInfo, public ::javax::management::openmbean::OpenMBeanInfo {
	$class(OpenMBeanInfoSupport, $NO_CLASS_INIT, ::javax::management::MBeanInfo, ::javax::management::openmbean::OpenMBeanInfo)
public:
	OpenMBeanInfoSupport();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual $Array<::javax::management::MBeanAttributeInfo>* getAttributes() override;
	virtual $String* getClassName() override;
	virtual $Array<::javax::management::MBeanConstructorInfo>* getConstructors() override;
	virtual $String* getDescription() override;
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotifications() override;
	virtual $Array<::javax::management::MBeanOperationInfo>* getOperations() override;
	void init$($String* className, $String* description, $Array<::javax::management::openmbean::OpenMBeanAttributeInfo>* openAttributes, $Array<::javax::management::openmbean::OpenMBeanConstructorInfo>* openConstructors, $Array<::javax::management::openmbean::OpenMBeanOperationInfo>* openOperations, $Array<::javax::management::MBeanNotificationInfo>* notifications);
	void init$($String* className, $String* description, $Array<::javax::management::openmbean::OpenMBeanAttributeInfo>* openAttributes, $Array<::javax::management::openmbean::OpenMBeanConstructorInfo>* openConstructors, $Array<::javax::management::openmbean::OpenMBeanOperationInfo>* openOperations, $Array<::javax::management::MBeanNotificationInfo>* notifications, ::javax::management::Descriptor* descriptor);
	static int32_t arraySetHash($ObjectArray* a);
	static $Array<::javax::management::MBeanAttributeInfo>* attributeArray($Array<::javax::management::openmbean::OpenMBeanAttributeInfo>* src);
	static $Array<::javax::management::MBeanConstructorInfo>* constructorArray($Array<::javax::management::openmbean::OpenMBeanConstructorInfo>* src);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	static $Array<::javax::management::MBeanOperationInfo>* operationArray($Array<::javax::management::openmbean::OpenMBeanOperationInfo>* src);
	static bool sameArrayContents($ObjectArray* a1, $ObjectArray* a2);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x3C5C288F26447504;
	::java::lang::Integer* myHashCode = nullptr;
	$String* myToString = nullptr;
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_OpenMBeanInfoSupport_h_