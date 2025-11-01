#ifndef _javax_management_openmbean_OpenMBeanParameterInfoSupport_h_
#define _javax_management_openmbean_OpenMBeanParameterInfoSupport_h_
//$ class javax.management.openmbean.OpenMBeanParameterInfoSupport
//$ extends javax.management.MBeanParameterInfo
//$ implements javax.management.openmbean.OpenMBeanParameterInfo

#include <java/lang/Array.h>
#include <javax/management/MBeanParameterInfo.h>
#include <javax/management/openmbean/OpenMBeanParameterInfo.h>

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
			class OpenType;
		}
	}
}

namespace javax {
	namespace management {
		namespace openmbean {

class $export OpenMBeanParameterInfoSupport : public ::javax::management::MBeanParameterInfo, public ::javax::management::openmbean::OpenMBeanParameterInfo {
	$class(OpenMBeanParameterInfoSupport, $NO_CLASS_INIT, ::javax::management::MBeanParameterInfo, ::javax::management::openmbean::OpenMBeanParameterInfo)
public:
	OpenMBeanParameterInfoSupport();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual $String* getDescription() override;
	virtual $String* getName() override;
	void init$($String* name, $String* description, ::javax::management::openmbean::OpenType* openType);
	void init$($String* name, $String* description, ::javax::management::openmbean::OpenType* openType, ::javax::management::Descriptor* descriptor);
	void init$($String* name, $String* description, ::javax::management::openmbean::OpenType* openType, Object$* defaultValue);
	void init$($String* name, $String* description, ::javax::management::openmbean::OpenType* openType, Object$* defaultValue, $ObjectArray* legalValues);
	void init$($String* name, $String* description, ::javax::management::openmbean::OpenType* openType, Object$* defaultValue, ::java::lang::Comparable* minValue, ::java::lang::Comparable* maxValue);
	void init$($String* name, $String* description, ::javax::management::openmbean::OpenType* openType, Object$* defaultValue, $ObjectArray* legalValues, ::java::lang::Comparable* minValue, ::java::lang::Comparable* maxValue);
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
	virtual bool isValue(Object$* obj) override;
	$Object* readResolve();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x9B980E7C6FABB98E;
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

#endif // _javax_management_openmbean_OpenMBeanParameterInfoSupport_h_