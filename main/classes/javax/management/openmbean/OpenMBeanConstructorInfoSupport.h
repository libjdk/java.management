#ifndef _javax_management_openmbean_OpenMBeanConstructorInfoSupport_h_
#define _javax_management_openmbean_OpenMBeanConstructorInfoSupport_h_
//$ class javax.management.openmbean.OpenMBeanConstructorInfoSupport
//$ extends javax.management.MBeanConstructorInfo
//$ implements javax.management.openmbean.OpenMBeanConstructorInfo

#include <java/lang/Array.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/openmbean/OpenMBeanConstructorInfo.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace javax {
	namespace management {
		class Descriptor;
		class MBeanParameterInfo;
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class OpenMBeanParameterInfo;
		}
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $export OpenMBeanConstructorInfoSupport : public ::javax::management::MBeanConstructorInfo, public ::javax::management::openmbean::OpenMBeanConstructorInfo {
	$class(OpenMBeanConstructorInfoSupport, $NO_CLASS_INIT, ::javax::management::MBeanConstructorInfo, ::javax::management::openmbean::OpenMBeanConstructorInfo)
public:
	OpenMBeanConstructorInfoSupport();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual $String* getDescription() override;
	virtual $String* getName() override;
	virtual $Array<::javax::management::MBeanParameterInfo>* getSignature() override;
	void init$($String* name, $String* description, $Array<::javax::management::openmbean::OpenMBeanParameterInfo>* signature);
	void init$($String* name, $String* description, $Array<::javax::management::openmbean::OpenMBeanParameterInfo>* signature, ::javax::management::Descriptor* descriptor);
	static $Array<::javax::management::MBeanParameterInfo>* arrayCopyCast($Array<::javax::management::openmbean::OpenMBeanParameterInfo>* src);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xC2EE7DB2CC667AF5;
	::java::lang::Integer* myHashCode = nullptr;
	$String* myToString = nullptr;
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_OpenMBeanConstructorInfoSupport_h_