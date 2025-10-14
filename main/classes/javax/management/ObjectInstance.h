#ifndef _javax_management_ObjectInstance_h_
#define _javax_management_ObjectInstance_h_
//$ class javax.management.ObjectInstance
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace javax {
	namespace management {

class $export ObjectInstance : public ::java::io::Serializable {
	$class(ObjectInstance, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	ObjectInstance();
	void init$($String* objectName, $String* className);
	void init$(::javax::management::ObjectName* objectName, $String* className);
	virtual bool equals(Object$* object) override;
	virtual $String* getClassName();
	virtual ::javax::management::ObjectName* getObjectName();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xC71A0ACFAD287B76;
	::javax::management::ObjectName* name = nullptr;
	$String* className = nullptr;
};

	} // management
} // javax

#endif // _javax_management_ObjectInstance_h_