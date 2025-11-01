#ifndef _javax_management_openmbean_OpenMBeanAttributeInfoSupport_h_
#define _javax_management_openmbean_OpenMBeanAttributeInfoSupport_h_
//$ class javax.management.openmbean.OpenMBeanAttributeInfoSupport
//$ extends javax.management.MBeanAttributeInfo
//$ implements javax.management.openmbean.OpenMBeanAttributeInfo

#include <java/lang/Array.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/openmbean/OpenMBeanAttributeInfo.h>

namespace java {
	namespace lang {
		class Comparable;
		class Integer;
	}
}
namespace java {
	namespace util {
		class Set;
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
			class OpenMBeanParameterInfo;
			class OpenType;
		}
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $import OpenMBeanAttributeInfoSupport : public ::javax::management::MBeanAttributeInfo, public ::javax::management::openmbean::OpenMBeanAttributeInfo {
	$class(OpenMBeanAttributeInfoSupport, $NO_CLASS_INIT, ::javax::management::MBeanAttributeInfo, ::javax::management::openmbean::OpenMBeanAttributeInfo)
public:
	OpenMBeanAttributeInfoSupport();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual $String* getDescription() override;
	virtual $String* getName() override;
	void init$($String* name, $String* description, ::javax::management::openmbean::OpenType* openType, bool isReadable, bool isWritable, bool isIs);
	void init$($String* name, $String* description, ::javax::management::openmbean::OpenType* openType, bool isReadable, bool isWritable, bool isIs, ::javax::management::Descriptor* descriptor);
	void init$($String* name, $String* description, ::javax::management::openmbean::OpenType* openType, bool isReadable, bool isWritable, bool isIs, Object$* defaultValue);
	void init$($String* name, $String* description, ::javax::management::openmbean::OpenType* openType, bool isReadable, bool isWritable, bool isIs, Object$* defaultValue, $ObjectArray* legalValues);
	void init$($String* name, $String* description, ::javax::management::openmbean::OpenType* openType, bool isReadable, bool isWritable, bool isIs, Object$* defaultValue, ::java::lang::Comparable* minValue, ::java::lang::Comparable* maxValue);
	void init$($String* name, $String* description, ::javax::management::openmbean::OpenType* openType, bool isReadable, bool isWritable, bool isIs, Object$* defaultValue, $ObjectArray* legalValues, ::java::lang::Comparable* minValue, ::java::lang::Comparable* maxValue);
	static $Object* cast(Object$* x);
	static void check(::javax::management::openmbean::OpenMBeanParameterInfo* info);
	static ::java::lang::Comparable* comparableValueFrom(::javax::management::Descriptor* d, $String* name, ::javax::management::openmbean::OpenType* openType);
	static int32_t compare(Object$* x, Object$* y);
	static $Object* convertFrom(Object$* x, ::javax::management::openmbean::OpenType* openType);
	static $Object* convertFromString($String* s, ::javax::management::openmbean::OpenType* openType);
	static $Object* convertFromStringArray(Object$* x, ::javax::management::openmbean::OpenType* openType);
	static $Object* convertFromStrings(Object$* x, ::javax::management::openmbean::OpenType* openType);
	static bool equal(::javax::management::openmbean::OpenMBeanParameterInfo* x1, ::javax::management::openmbean::OpenMBeanParameterInfo* x2);
	virtual bool equals(Object$* obj) override;
	virtual $Object* getDefaultValue() override;
	virtual ::java::util::Set* getLegalValues() override;
	virtual ::java::lang::Comparable* getMaxValue() override;
	virtual ::java::lang::Comparable* getMinValue() override;
	virtual ::javax::management::openmbean::OpenType* getOpenType() override;
	virtual bool hasDefaultValue() override;
	virtual bool hasLegalValues() override;
	virtual bool hasMaxValue() override;
	virtual bool hasMinValue() override;
	virtual int32_t hashCode() override;
	static int32_t hashCode(::javax::management::openmbean::OpenMBeanParameterInfo* info);
	virtual bool isIs() override;
	virtual bool isReadable() override;
	virtual bool isValue(Object$* obj) override;
	static bool isValue(::javax::management::openmbean::OpenMBeanParameterInfo* info, Object$* obj);
	virtual bool isWritable() override;
	static ::javax::management::Descriptor* makeDescriptor(::javax::management::openmbean::OpenType* openType, Object$* defaultValue, $ObjectArray* legalValues, ::java::lang::Comparable* minValue, ::java::lang::Comparable* maxValue);
	static ::javax::management::Descriptor* makeDescriptor(::javax::management::openmbean::OpenType* openType, Object$* defaultValue, ::java::util::Set* legalValues, ::java::lang::Comparable* minValue, ::java::lang::Comparable* maxValue);
	$Object* readResolve();
	virtual $String* toString() override;
	static $String* toString(::javax::management::openmbean::OpenMBeanParameterInfo* info);
	static $Object* valueFrom(::javax::management::Descriptor* d, $String* name, ::javax::management::openmbean::OpenType* openType);
	static ::java::util::Set* valuesFrom(::javax::management::Descriptor* d, $String* name, ::javax::management::openmbean::OpenType* openType);
	static const int64_t serialVersionUID = (int64_t)0xBC742D2DE488B107;
	::javax::management::openmbean::OpenType* openType = nullptr;
	$Object* defaultValue = nullptr;
	::java::util::Set* legalValues = nullptr;
	::java::lang::Comparable* minValue = nullptr;
	::java::lang::Comparable* maxValue = nullptr;
	::java::lang::Integer* myHashCode = nullptr;
	$String* myToString = nullptr;
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_OpenMBeanAttributeInfoSupport_h_