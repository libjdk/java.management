#ifndef _javax_management_openmbean_OpenType_h_
#define _javax_management_openmbean_OpenType_h_
//$ class javax.management.openmbean.OpenType
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("ALLOWED_CLASSNAMES")
#undef ALLOWED_CLASSNAMES
#pragma push_macro("ALLOWED_CLASSNAMES_LIST")
#undef ALLOWED_CLASSNAMES_LIST

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace management {
		class Descriptor;
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $export OpenType : public ::java::io::Serializable {
	$class(OpenType, 0, ::java::io::Serializable)
public:
	OpenType();
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	void init$($String* className, $String* typeName, $String* description);
	void init$($String* className, $String* typeName, $String* description, bool isArray);
	void checkClassNameOverride();
	virtual $String* getClassName();
	virtual $String* getDescription();
	virtual ::javax::management::Descriptor* getDescriptor();
	virtual $String* getTypeName();
	virtual bool isArray();
	virtual bool isAssignableFrom(::javax::management::openmbean::OpenType* ot);
	virtual bool isValue(Object$* obj) {return false;}
	static bool overridesGetClassName($Class* c);
	void readObject(::java::io::ObjectInputStream* in);
	virtual $String* safeGetClassName();
	virtual $String* toString() override;
	static $String* valid($String* argName, $String* argValue);
	static $String* validClassName($String* className);
	static const int64_t serialVersionUID = (int64_t)0x80641A91E9EADE3C;
	static ::java::util::List* ALLOWED_CLASSNAMES_LIST;
	static $StringArray* ALLOWED_CLASSNAMES;
	$String* className = nullptr;
	$String* description = nullptr;
	$String* typeName = nullptr;
	bool isArray$ = false;
	::javax::management::Descriptor* descriptor = nullptr;
};

		} // openmbean
	} // management
} // javax

#pragma pop_macro("ALLOWED_CLASSNAMES")
#pragma pop_macro("ALLOWED_CLASSNAMES_LIST")

#endif // _javax_management_openmbean_OpenType_h_