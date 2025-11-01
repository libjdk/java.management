#ifndef _javax_management_Descriptor_h_
#define _javax_management_Descriptor_h_
//$ interface javax.management.Descriptor
//$ extends java.io.Serializable,java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace javax {
	namespace management {

class $import Descriptor : public ::java::io::Serializable, public ::java::lang::Cloneable {
	$interface(Descriptor, $NO_CLASS_INIT, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $StringArray* getFieldNames() {return nullptr;}
	virtual $Object* getFieldValue($String* fieldName) {return nullptr;}
	virtual $ObjectArray* getFieldValues($StringArray* fieldNames) {return nullptr;}
	virtual $StringArray* getFields() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual bool isValid() {return false;}
	virtual void removeField($String* fieldName) {}
	virtual void setField($String* fieldName, Object$* fieldValue) {}
	virtual void setFields($StringArray* fieldNames, $ObjectArray* fieldValues) {}
	virtual $String* toString() override;
};

	} // management
} // javax

#endif // _javax_management_Descriptor_h_