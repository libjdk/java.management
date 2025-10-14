#ifndef _javax_management_Attribute_h_
#define _javax_management_Attribute_h_
//$ class javax.management.Attribute
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace javax {
	namespace management {

class $import Attribute : public ::java::io::Serializable {
	$class(Attribute, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	Attribute();
	void init$($String* name, Object$* value);
	virtual bool equals(Object$* object) override;
	virtual $String* getName();
	virtual $Object* getValue();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x2279B907538B3B0E;
	$String* name = nullptr;
	$Object* value = nullptr;
};

	} // management
} // javax

#endif // _javax_management_Attribute_h_