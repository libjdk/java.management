#ifndef _sun_management_MappedMXBeanType_h_
#define _sun_management_MappedMXBeanType_h_
//$ class sun.management.MappedMXBeanType
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("COMPOSITE_DATA_CLASS")
#undef COMPOSITE_DATA_CLASS
#pragma push_macro("KEY")
#undef KEY
#pragma push_macro("VALUE")
#undef VALUE

namespace java {
	namespace lang {
		namespace reflect {
			class Type;
		}
	}
}
namespace java {
	namespace util {
		class WeakHashMap;
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class OpenType;
		}
	}
}

namespace sun {
	namespace management {

class $export MappedMXBeanType : public ::java::lang::Object {
	$class(MappedMXBeanType, 0, ::java::lang::Object)
public:
	MappedMXBeanType();
	void init$();
	static $String* decapitalize($String* name);
	virtual ::java::lang::reflect::Type* getJavaType() {return nullptr;}
	static ::sun::management::MappedMXBeanType* getMappedType(::java::lang::reflect::Type* t);
	virtual $Class* getMappedTypeClass();
	virtual $String* getName() {return nullptr;}
	virtual ::javax::management::openmbean::OpenType* getOpenType();
	virtual $String* getTypeName();
	virtual bool isBasicType();
	static ::sun::management::MappedMXBeanType* newBasicType($Class* c, ::javax::management::openmbean::OpenType* ot);
	static ::sun::management::MappedMXBeanType* newMappedType(::java::lang::reflect::Type* javaType);
	static $Object* toJavaTypeData(Object$* openData, ::java::lang::reflect::Type* t);
	virtual $Object* toJavaTypeData(Object$* openTypeData) {return nullptr;}
	static ::javax::management::openmbean::OpenType* toOpenType(::java::lang::reflect::Type* t);
	static $Object* toOpenTypeData(Object$* data, ::java::lang::reflect::Type* t);
	virtual $Object* toOpenTypeData(Object$* javaTypeData) {return nullptr;}
	static ::java::util::WeakHashMap* convertedTypes;
	bool isBasicType$ = false;
	::javax::management::openmbean::OpenType* openType = nullptr;
	$Class* mappedTypeClass = nullptr;
	static $String* KEY;
	static $String* VALUE;
	static $StringArray* mapIndexNames;
	static $StringArray* mapItemNames;
	static $Class* COMPOSITE_DATA_CLASS;
	static ::javax::management::openmbean::OpenType* inProgress;
	static $Array<::javax::management::openmbean::OpenType>* simpleTypes;
};

	} // management
} // sun

#pragma pop_macro("COMPOSITE_DATA_CLASS")
#pragma pop_macro("KEY")
#pragma pop_macro("VALUE")

#endif // _sun_management_MappedMXBeanType_h_