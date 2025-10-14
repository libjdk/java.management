#ifndef _com_sun_jmx_mbeanserver_StandardMBeanIntrospector_h_
#define _com_sun_jmx_mbeanserver_StandardMBeanIntrospector_h_
//$ class com.sun.jmx.mbeanserver.StandardMBeanIntrospector
//$ extends com.sun.jmx.mbeanserver.MBeanIntrospector

#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
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
namespace java {
	namespace util {
		class WeakHashMap;
	}
}
namespace javax {
	namespace management {
		class Descriptor;
		class MBeanAttributeInfo;
		class MBeanOperationInfo;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class StandardMBeanIntrospector : public ::com::sun::jmx::mbeanserver::MBeanIntrospector {
	$class(StandardMBeanIntrospector, 0, ::com::sun::jmx::mbeanserver::MBeanIntrospector)
public:
	StandardMBeanIntrospector();
	void init$();
	virtual void checkMethod(::java::lang::reflect::Method* m);
	virtual void checkMethod(Object$* m) override;
	virtual ::com::sun::jmx::mbeanserver::MBeanAnalyzer* getAnalyzer($Class* mbeanInterface) override;
	virtual ::javax::management::Descriptor* getBasicMBeanDescriptor() override;
	virtual $Array<::java::lang::reflect::Type>* getGenericParameterTypes(::java::lang::reflect::Method* m);
	virtual $Array<::java::lang::reflect::Type>* getGenericParameterTypes(Object$* m) override;
	virtual ::java::lang::reflect::Type* getGenericReturnType(::java::lang::reflect::Method* m);
	virtual ::java::lang::reflect::Type* getGenericReturnType(Object$* m) override;
	static ::com::sun::jmx::mbeanserver::StandardMBeanIntrospector* getInstance();
	virtual ::javax::management::MBeanAttributeInfo* getMBeanAttributeInfo($String* attributeName, ::java::lang::reflect::Method* getter, ::java::lang::reflect::Method* setter);
	virtual ::javax::management::MBeanAttributeInfo* getMBeanAttributeInfo($String* attributeName, Object$* getter, Object$* setter) override;
	virtual ::javax::management::Descriptor* getMBeanDescriptor($Class* resourceClass) override;
	virtual ::com::sun::jmx::mbeanserver::MBeanIntrospector$MBeanInfoMap* getMBeanInfoMap() override;
	virtual ::javax::management::MBeanOperationInfo* getMBeanOperationInfo($String* operationName, ::java::lang::reflect::Method* operation);
	virtual ::javax::management::MBeanOperationInfo* getMBeanOperationInfo($String* operationName, Object$* operation) override;
	virtual $String* getName(::java::lang::reflect::Method* m);
	virtual $String* getName(Object$* m) override;
	virtual ::com::sun::jmx::mbeanserver::MBeanIntrospector$PerInterfaceMap* getPerInterfaceMap() override;
	virtual $StringArray* getSignature(::java::lang::reflect::Method* m);
	virtual $StringArray* getSignature(Object$* m) override;
	virtual $Object* invokeM2(::java::lang::reflect::Method* m, Object$* target, $ObjectArray* args, Object$* cookie);
	virtual $Object* invokeM2(Object$* m, Object$* target, $ObjectArray* args, Object$* cookie) override;
	static bool isDefinitelyImmutableInfo($Class* implClass);
	virtual bool isMXBean() override;
	virtual $Object* mFrom(::java::lang::reflect::Method* m) override;
	virtual bool validParameter(::java::lang::reflect::Method* m, Object$* value, int32_t paramNo, Object$* cookie);
	virtual bool validParameter(Object$* m, Object$* value, int32_t paramNo, Object$* cookie) override;
	static ::com::sun::jmx::mbeanserver::StandardMBeanIntrospector* instance;
	static ::java::util::WeakHashMap* definitelyImmutable;
	static ::com::sun::jmx::mbeanserver::MBeanIntrospector$PerInterfaceMap* perInterfaceMap;
	static ::com::sun::jmx::mbeanserver::MBeanIntrospector$MBeanInfoMap* mbeanInfoMap;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_StandardMBeanIntrospector_h_