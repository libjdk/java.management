#ifndef _javax_management_openmbean_ArrayType_h_
#define _javax_management_openmbean_ArrayType_h_
//$ class javax.management.openmbean.ArrayType
//$ extends javax.management.openmbean.OpenType

#include <java/lang/Array.h>
#include <javax/management/openmbean/OpenType.h>

#pragma push_macro("PRIMITIVE_ARRAY_TYPES")
#undef PRIMITIVE_ARRAY_TYPES
#pragma push_macro("PRIMITIVE_OPEN_TYPE_INDEX")
#undef PRIMITIVE_OPEN_TYPE_INDEX
#pragma push_macro("PRIMITIVE_TYPE_KEY_INDEX")
#undef PRIMITIVE_TYPE_KEY_INDEX
#pragma push_macro("PRIMITIVE_TYPE_NAME_INDEX")
#undef PRIMITIVE_TYPE_NAME_INDEX
#pragma push_macro("PRIMITIVE_WRAPPER_NAME_INDEX")
#undef PRIMITIVE_WRAPPER_NAME_INDEX

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class SimpleType;
		}
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $import ArrayType : public ::javax::management::openmbean::OpenType {
	$class(ArrayType, 0, ::javax::management::openmbean::OpenType)
public:
	ArrayType();
	void init$(int32_t dimension, ::javax::management::openmbean::OpenType* elementType);
	void init$(::javax::management::openmbean::SimpleType* elementType, bool primitiveArray);
	void init$($String* className, $String* typeName, $String* description, int32_t dimension, ::javax::management::openmbean::OpenType* elementType, bool primitiveArray);
	static $String* buildArrayClassName(int32_t dimension, ::javax::management::openmbean::OpenType* elementType);
	static $String* buildArrayClassName(int32_t dimension, ::javax::management::openmbean::OpenType* elementType, bool isPrimitiveArray);
	static $String* buildArrayDescription(int32_t dimension, ::javax::management::openmbean::OpenType* elementType);
	static $String* buildArrayDescription(int32_t dimension, ::javax::management::openmbean::OpenType* elementType, bool isPrimitiveArray);
	bool checkElementsType($ObjectArray* x_dim_Array, int32_t dim);
	::javax::management::openmbean::ArrayType* convertFromPrimitiveToWrapperTypes();
	::javax::management::openmbean::ArrayType* convertFromWrapperToPrimitiveTypes();
	virtual bool equals(Object$* obj) override;
	static ::javax::management::openmbean::ArrayType* getArrayType(::javax::management::openmbean::OpenType* elementType);
	virtual int32_t getDimension();
	virtual ::javax::management::openmbean::OpenType* getElementOpenType();
	static ::javax::management::openmbean::ArrayType* getPrimitiveArrayType($Class* arrayClass);
	static ::javax::management::openmbean::SimpleType* getPrimitiveOpenType($String* primitiveTypeName);
	static $String* getPrimitiveTypeKey($String* elementClassName);
	static $String* getPrimitiveTypeName($String* elementClassName);
	virtual int32_t hashCode() override;
	virtual bool isAssignableFrom(::javax::management::openmbean::OpenType* ot) override;
	virtual bool isPrimitiveArray();
	static bool isPrimitiveContentType($String* primitiveKey);
	virtual bool isValue(Object$* obj) override;
	$Object* readResolve();
	virtual $String* toString() override;
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x09FFBEF62721878A;
	int32_t dimension = 0;
	::javax::management::openmbean::OpenType* elementType = nullptr;
	bool primitiveArray = false;
	::java::lang::Integer* myHashCode = nullptr;
	$String* myToString = nullptr;
	static const int32_t PRIMITIVE_WRAPPER_NAME_INDEX = 0;
	static const int32_t PRIMITIVE_TYPE_NAME_INDEX = 1;
	static const int32_t PRIMITIVE_TYPE_KEY_INDEX = 2;
	static const int32_t PRIMITIVE_OPEN_TYPE_INDEX = 3;
	static $Array<::java::lang::Object, 2>* PRIMITIVE_ARRAY_TYPES;
};

		} // openmbean
	} // management
} // javax

#pragma pop_macro("PRIMITIVE_ARRAY_TYPES")
#pragma pop_macro("PRIMITIVE_OPEN_TYPE_INDEX")
#pragma pop_macro("PRIMITIVE_TYPE_KEY_INDEX")
#pragma pop_macro("PRIMITIVE_TYPE_NAME_INDEX")
#pragma pop_macro("PRIMITIVE_WRAPPER_NAME_INDEX")

#endif // _javax_management_openmbean_ArrayType_h_