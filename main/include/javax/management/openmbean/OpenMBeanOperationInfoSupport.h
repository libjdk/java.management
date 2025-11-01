#ifndef _javax_management_openmbean_OpenMBeanOperationInfoSupport_h_
#define _javax_management_openmbean_OpenMBeanOperationInfoSupport_h_
//$ class javax.management.openmbean.OpenMBeanOperationInfoSupport
//$ extends javax.management.MBeanOperationInfo
//$ implements javax.management.openmbean.OpenMBeanOperationInfo

#include <java/lang/Array.h>
#include <javax/management/MBeanOperationInfo.h>
#include <javax/management/openmbean/OpenMBeanOperationInfo.h>

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
			class OpenType;
		}
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $import OpenMBeanOperationInfoSupport : public ::javax::management::MBeanOperationInfo, public ::javax::management::openmbean::OpenMBeanOperationInfo {
	$class(OpenMBeanOperationInfoSupport, $NO_CLASS_INIT, ::javax::management::MBeanOperationInfo, ::javax::management::openmbean::OpenMBeanOperationInfo)
public:
	OpenMBeanOperationInfoSupport();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual $String* getDescription() override;
	virtual int32_t getImpact() override;
	virtual $String* getName() override;
	virtual $String* getReturnType() override;
	virtual $Array<::javax::management::MBeanParameterInfo>* getSignature() override;
	void init$($String* name, $String* description, $Array<::javax::management::openmbean::OpenMBeanParameterInfo>* signature, ::javax::management::openmbean::OpenType* returnOpenType, int32_t impact);
	void init$($String* name, $String* description, $Array<::javax::management::openmbean::OpenMBeanParameterInfo>* signature, ::javax::management::openmbean::OpenType* returnOpenType, int32_t impact, ::javax::management::Descriptor* descriptor);
	static $Array<::javax::management::MBeanParameterInfo>* arrayCopyCast($Array<::javax::management::openmbean::OpenMBeanParameterInfo>* src);
	static $Array<::javax::management::openmbean::OpenMBeanParameterInfo>* arrayCopyCast($Array<::javax::management::MBeanParameterInfo>* src);
	virtual bool equals(Object$* obj) override;
	virtual ::javax::management::openmbean::OpenType* getReturnOpenType() override;
	virtual int32_t hashCode() override;
	$Object* readResolve();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x45586973C8032216;
	::javax::management::openmbean::OpenType* returnOpenType = nullptr;
	::java::lang::Integer* myHashCode = nullptr;
	$String* myToString = nullptr;
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_OpenMBeanOperationInfoSupport_h_