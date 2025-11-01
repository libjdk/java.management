#ifndef _javax_management_MBeanOperationInfo_h_
#define _javax_management_MBeanOperationInfo_h_
//$ class javax.management.MBeanOperationInfo
//$ extends javax.management.MBeanFeatureInfo
//$ implements java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <javax/management/MBeanFeatureInfo.h>

#pragma push_macro("ACTION")
#undef ACTION
#pragma push_macro("ACTION_INFO")
#undef ACTION_INFO
#pragma push_macro("INFO")
#undef INFO
#pragma push_macro("NO_OPERATIONS")
#undef NO_OPERATIONS
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace java {
	namespace lang {
		namespace annotation {
			class Annotation;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
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

class $import MBeanOperationInfo : public ::javax::management::MBeanFeatureInfo, public ::java::lang::Cloneable {
	$class(MBeanOperationInfo, 0, ::javax::management::MBeanFeatureInfo, ::java::lang::Cloneable)
public:
	MBeanOperationInfo();
	virtual void finalize() override;
	void init$($String* description, ::java::lang::reflect::Method* method);
	void init$($String* name, $String* description, $Array<::javax::management::MBeanParameterInfo>* signature, $String* type, int32_t impact);
	void init$($String* name, $String* description, $Array<::javax::management::MBeanParameterInfo>* signature, $String* type, int32_t impact, ::javax::management::Descriptor* descriptor);
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	$Array<::javax::management::MBeanParameterInfo>* fastGetSignature();
	virtual int32_t getImpact();
	virtual $String* getReturnType();
	virtual $Array<::javax::management::MBeanParameterInfo>* getSignature();
	virtual int32_t hashCode() override;
	static $Array<::javax::management::MBeanParameterInfo>* methodSignature(::java::lang::reflect::Method* method);
	static $Array<::javax::management::MBeanParameterInfo>* parameters($ClassArray* classes, $Array<::java::lang::annotation::Annotation, 2>* annots);
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0xAA40472295FE839E;
	static $Array<::javax::management::MBeanOperationInfo>* NO_OPERATIONS;
	static const int32_t INFO = 0;
	static const int32_t ACTION = 1;
	static const int32_t ACTION_INFO = 2;
	static const int32_t UNKNOWN = 3;
	$String* type = nullptr;
	$Array<::javax::management::MBeanParameterInfo>* signature = nullptr;
	int32_t impact = 0;
	bool arrayGettersSafe = false;
};

	} // management
} // javax

#pragma pop_macro("ACTION")
#pragma pop_macro("ACTION_INFO")
#pragma pop_macro("INFO")
#pragma pop_macro("NO_OPERATIONS")
#pragma pop_macro("UNKNOWN")

#endif // _javax_management_MBeanOperationInfo_h_