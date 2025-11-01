#ifndef _javax_management_MBeanAttributeInfo_h_
#define _javax_management_MBeanAttributeInfo_h_
//$ class javax.management.MBeanAttributeInfo
//$ extends javax.management.MBeanFeatureInfo
//$ implements java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <javax/management/MBeanFeatureInfo.h>

#pragma push_macro("NO_ATTRIBUTES")
#undef NO_ATTRIBUTES

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
	}
}

namespace javax {
	namespace management {

class $export MBeanAttributeInfo : public ::javax::management::MBeanFeatureInfo, public ::java::lang::Cloneable {
	$class(MBeanAttributeInfo, 0, ::javax::management::MBeanFeatureInfo, ::java::lang::Cloneable)
public:
	MBeanAttributeInfo();
	virtual void finalize() override;
	void init$($String* name, $String* type, $String* description, bool isReadable, bool isWritable, bool isIs);
	void init$($String* name, $String* type, $String* description, bool isReadable, bool isWritable, bool isIs, ::javax::management::Descriptor* descriptor);
	void init$($String* name, $String* description, ::java::lang::reflect::Method* getter, ::java::lang::reflect::Method* setter);
	static $String* attributeType(::java::lang::reflect::Method* getter, ::java::lang::reflect::Method* setter);
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual $String* getType();
	virtual int32_t hashCode() override;
	virtual bool isIs();
	static bool isIs(::java::lang::reflect::Method* getter);
	virtual bool isReadable();
	virtual bool isWritable();
	virtual $String* toString() override;
	static int64_t serialVersionUID;
	static $Array<::javax::management::MBeanAttributeInfo>* NO_ATTRIBUTES;
	$String* attributeType$ = nullptr;
	bool isWrite = false;
	bool isRead = false;
	bool is = false;
};

	} // management
} // javax

#pragma pop_macro("NO_ATTRIBUTES")

#endif // _javax_management_MBeanAttributeInfo_h_