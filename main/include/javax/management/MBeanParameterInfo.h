#ifndef _javax_management_MBeanParameterInfo_h_
#define _javax_management_MBeanParameterInfo_h_
//$ class javax.management.MBeanParameterInfo
//$ extends javax.management.MBeanFeatureInfo
//$ implements java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <javax/management/MBeanFeatureInfo.h>

#pragma push_macro("NO_PARAMS")
#undef NO_PARAMS

namespace javax {
	namespace management {
		class Descriptor;
	}
}

namespace javax {
	namespace management {

class $import MBeanParameterInfo : public ::javax::management::MBeanFeatureInfo, public ::java::lang::Cloneable {
	$class(MBeanParameterInfo, 0, ::javax::management::MBeanFeatureInfo, ::java::lang::Cloneable)
public:
	MBeanParameterInfo();
	virtual void finalize() override;
	void init$($String* name, $String* type, $String* description);
	void init$($String* name, $String* type, $String* description, ::javax::management::Descriptor* descriptor);
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual $String* getType();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x6725F5ACD97B3602;
	static $Array<::javax::management::MBeanParameterInfo>* NO_PARAMS;
	$String* type = nullptr;
};

	} // management
} // javax

#pragma pop_macro("NO_PARAMS")

#endif // _javax_management_MBeanParameterInfo_h_