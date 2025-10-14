#ifndef _javax_management_openmbean_OpenMBeanParameterInfo_h_
#define _javax_management_openmbean_OpenMBeanParameterInfo_h_
//$ interface javax.management.openmbean.OpenMBeanParameterInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Comparable;
	}
}
namespace java {
	namespace util {
		class Set;
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

class $import OpenMBeanParameterInfo : public ::java::lang::Object {
	$interface(OpenMBeanParameterInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool equals(Object$* obj) override;
	virtual $Object* getDefaultValue() {return nullptr;}
	virtual $String* getDescription() {return nullptr;}
	virtual ::java::util::Set* getLegalValues() {return nullptr;}
	virtual ::java::lang::Comparable* getMaxValue() {return nullptr;}
	virtual ::java::lang::Comparable* getMinValue() {return nullptr;}
	virtual $String* getName() {return nullptr;}
	virtual ::javax::management::openmbean::OpenType* getOpenType() {return nullptr;}
	virtual bool hasDefaultValue() {return false;}
	virtual bool hasLegalValues() {return false;}
	virtual bool hasMaxValue() {return false;}
	virtual bool hasMinValue() {return false;}
	virtual int32_t hashCode() override;
	virtual bool isValue(Object$* obj) {return false;}
	virtual $String* toString() override;
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_OpenMBeanParameterInfo_h_