#ifndef _javax_management_openmbean_OpenMBeanOperationInfo_h_
#define _javax_management_openmbean_OpenMBeanOperationInfo_h_
//$ interface javax.management.openmbean.OpenMBeanOperationInfo
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
			class OpenType;
		}
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $import OpenMBeanOperationInfo : public ::java::lang::Object {
	$interface(OpenMBeanOperationInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool equals(Object$* obj) override;
	virtual $String* getDescription() {return nullptr;}
	virtual int32_t getImpact() {return 0;}
	virtual $String* getName() {return nullptr;}
	virtual ::javax::management::openmbean::OpenType* getReturnOpenType() {return nullptr;}
	virtual $String* getReturnType() {return nullptr;}
	virtual $Array<::javax::management::MBeanParameterInfo>* getSignature() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_OpenMBeanOperationInfo_h_