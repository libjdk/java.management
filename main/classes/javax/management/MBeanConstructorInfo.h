#ifndef _javax_management_MBeanConstructorInfo_h_
#define _javax_management_MBeanConstructorInfo_h_
//$ class javax.management.MBeanConstructorInfo
//$ extends javax.management.MBeanFeatureInfo
//$ implements java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <javax/management/MBeanFeatureInfo.h>

#pragma push_macro("NO_CONSTRUCTORS")
#undef NO_CONSTRUCTORS

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
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

class $export MBeanConstructorInfo : public ::javax::management::MBeanFeatureInfo, public ::java::lang::Cloneable {
	$class(MBeanConstructorInfo, 0, ::javax::management::MBeanFeatureInfo, ::java::lang::Cloneable)
public:
	MBeanConstructorInfo();
	virtual void finalize() override;
	void init$($String* description, ::java::lang::reflect::Constructor* constructor);
	void init$($String* name, $String* description, $Array<::javax::management::MBeanParameterInfo>* signature);
	void init$($String* name, $String* description, $Array<::javax::management::MBeanParameterInfo>* signature, ::javax::management::Descriptor* descriptor);
	virtual $Object* clone() override;
	static $Array<::javax::management::MBeanParameterInfo>* constructorSignature(::java::lang::reflect::Constructor* cn);
	virtual bool equals(Object$* o) override;
	$Array<::javax::management::MBeanParameterInfo>* fastGetSignature();
	virtual $Array<::javax::management::MBeanParameterInfo>* getSignature();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x3D88B27899C4304B;
	static $Array<::javax::management::MBeanConstructorInfo>* NO_CONSTRUCTORS;
	bool arrayGettersSafe = false;
	$Array<::javax::management::MBeanParameterInfo>* signature = nullptr;
};

	} // management
} // javax

#pragma pop_macro("NO_CONSTRUCTORS")

#endif // _javax_management_MBeanConstructorInfo_h_