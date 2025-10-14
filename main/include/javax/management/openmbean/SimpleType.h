#ifndef _javax_management_openmbean_SimpleType_h_
#define _javax_management_openmbean_SimpleType_h_
//$ class javax.management.openmbean.SimpleType
//$ extends javax.management.openmbean.OpenType

#include <java/lang/Array.h>
#include <javax/management/openmbean/OpenType.h>

#pragma push_macro("BIGDECIMAL")
#undef BIGDECIMAL
#pragma push_macro("BIGINTEGER")
#undef BIGINTEGER
#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("BYTE")
#undef BYTE
#pragma push_macro("CHARACTER")
#undef CHARACTER
#pragma push_macro("DATE")
#undef DATE
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("INTEGER")
#undef INTEGER
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("OBJECTNAME")
#undef OBJECTNAME
#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("STRING")
#undef STRING
#pragma push_macro("VOID")
#undef VOID

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $import SimpleType : public ::javax::management::openmbean::OpenType {
	$class(SimpleType, 0, ::javax::management::openmbean::OpenType)
public:
	SimpleType();
	void init$($Class* valueClass);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual bool isValue(Object$* obj) override;
	$Object* readResolve();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x1EBF4FF8DC657827;
	static ::javax::management::openmbean::SimpleType* VOID;
	static ::javax::management::openmbean::SimpleType* BOOLEAN;
	static ::javax::management::openmbean::SimpleType* CHARACTER;
	static ::javax::management::openmbean::SimpleType* BYTE;
	static ::javax::management::openmbean::SimpleType* SHORT;
	static ::javax::management::openmbean::SimpleType* INTEGER;
	static ::javax::management::openmbean::SimpleType* LONG;
	static ::javax::management::openmbean::SimpleType* FLOAT;
	static ::javax::management::openmbean::SimpleType* DOUBLE;
	static ::javax::management::openmbean::SimpleType* STRING;
	static ::javax::management::openmbean::SimpleType* BIGDECIMAL;
	static ::javax::management::openmbean::SimpleType* BIGINTEGER;
	static ::javax::management::openmbean::SimpleType* DATE;
	static ::javax::management::openmbean::SimpleType* OBJECTNAME;
	static $Array<::javax::management::openmbean::SimpleType>* typeArray;
	::java::lang::Integer* myHashCode = nullptr;
	$String* myToString = nullptr;
	static ::java::util::Map* canonicalTypes;
};

		} // openmbean
	} // management
} // javax

#pragma pop_macro("BIGDECIMAL")
#pragma pop_macro("BIGINTEGER")
#pragma pop_macro("BOOLEAN")
#pragma pop_macro("BYTE")
#pragma pop_macro("CHARACTER")
#pragma pop_macro("DATE")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("FLOAT")
#pragma pop_macro("INTEGER")
#pragma pop_macro("LONG")
#pragma pop_macro("OBJECTNAME")
#pragma pop_macro("SHORT")
#pragma pop_macro("STRING")
#pragma pop_macro("VOID")

#endif // _javax_management_openmbean_SimpleType_h_