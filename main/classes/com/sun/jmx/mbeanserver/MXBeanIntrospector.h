#ifndef _com_sun_jmx_mbeanserver_MXBeanIntrospector_h_
#define _com_sun_jmx_mbeanserver_MXBeanIntrospector_h_
//$ class com.sun.jmx.mbeanserver.MXBeanIntrospector
//$ extends com.sun.jmx.mbeanserver.MBeanIntrospector

#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class ConvertingMethod;
				class MBeanAnalyzer;
				class MBeanIntrospector$MBeanInfoMap;
				class MBeanIntrospector$PerInterfaceMap;
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
			class Type;
		}
	}
}
namespace javax {
	namespace management {
		class Descriptor;
		class MBeanAttributeInfo;
		class MBeanOperationInfo;
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class OpenType;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class MXBeanIntrospector : public ::com::sun::jmx::mbeanserver::MBeanIntrospector {
	$class(MXBeanIntrospector, 0, ::com::sun::jmx::mbeanserver::MBeanIntrospector)
public:
	MXBeanIntrospector();
	void init$();
	static bool canUseOpenInfo(::java::lang::reflect::Type* type);
	virtual void checkMethod(::com::sun::jmx::mbeanserver::ConvertingMethod* m);
	virtual void checkMethod(Object$* m) override;
	virtual ::com::sun::jmx::mbeanserver::MBeanAnalyzer* getAnalyzer($Class* mbeanInterface) override;
	virtual ::javax::management::Descriptor* getBasicMBeanDescriptor() override;
	virtual $Array<::java::lang::reflect::Type>* getGenericParameterTypes(::com::sun::jmx::mbeanserver::ConvertingMethod* m);
	virtual $Array<::java::lang::reflect::Type>* getGenericParameterTypes(Object$* m) override;
	virtual ::java::lang::reflect::Type* getGenericReturnType(::com::sun::jmx::mbeanserver::ConvertingMethod* m);
	virtual ::java::lang::reflect::Type* getGenericReturnType(Object$* m) override;
	static ::com::sun::jmx::mbeanserver::MXBeanIntrospector* getInstance();
	virtual ::javax::management::MBeanAttributeInfo* getMBeanAttributeInfo($String* attributeName, ::com::sun::jmx::mbeanserver::ConvertingMethod* getter, ::com::sun::jmx::mbeanserver::ConvertingMethod* setter);
	virtual ::javax::management::MBeanAttributeInfo* getMBeanAttributeInfo($String* attributeName, Object$* getter, Object$* setter) override;
	virtual ::javax::management::Descriptor* getMBeanDescriptor($Class* resourceClass) override;
	virtual ::com::sun::jmx::mbeanserver::MBeanIntrospector$MBeanInfoMap* getMBeanInfoMap() override;
	virtual ::javax::management::MBeanOperationInfo* getMBeanOperationInfo($String* operationName, ::com::sun::jmx::mbeanserver::ConvertingMethod* operation);
	virtual ::javax::management::MBeanOperationInfo* getMBeanOperationInfo($String* operationName, Object$* operation) override;
	virtual $String* getName(::com::sun::jmx::mbeanserver::ConvertingMethod* m);
	virtual $String* getName(Object$* m) override;
	virtual ::com::sun::jmx::mbeanserver::MBeanIntrospector$PerInterfaceMap* getPerInterfaceMap() override;
	virtual $StringArray* getSignature(::com::sun::jmx::mbeanserver::ConvertingMethod* m);
	virtual $StringArray* getSignature(Object$* m) override;
	virtual $Object* invokeM2(::com::sun::jmx::mbeanserver::ConvertingMethod* m, Object$* target, $ObjectArray* args, Object$* cookie);
	virtual $Object* invokeM2(Object$* m, Object$* target, $ObjectArray* args, Object$* cookie) override;
	virtual bool isMXBean() override;
	virtual $Object* mFrom(::java::lang::reflect::Method* m) override;
	static $String* originalTypeString(::java::lang::reflect::Type* type);
	static ::javax::management::Descriptor* typeDescriptor(::javax::management::openmbean::OpenType* openType, ::java::lang::reflect::Type* originalType);
	static $String* typeName(::java::lang::reflect::Type* type);
	virtual bool validParameter(::com::sun::jmx::mbeanserver::ConvertingMethod* m, Object$* value, int32_t paramNo, Object$* cookie);
	virtual bool validParameter(Object$* m, Object$* value, int32_t paramNo, Object$* cookie) override;
	static ::com::sun::jmx::mbeanserver::MXBeanIntrospector* instance;
	::com::sun::jmx::mbeanserver::MBeanIntrospector$PerInterfaceMap* perInterfaceMap = nullptr;
	static ::com::sun::jmx::mbeanserver::MBeanIntrospector$MBeanInfoMap* mbeanInfoMap;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MXBeanIntrospector_h_