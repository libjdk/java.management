#ifndef _com_sun_jmx_mbeanserver_MBeanIntrospector_h_
#define _com_sun_jmx_mbeanserver_MBeanIntrospector_h_
//$ class com.sun.jmx.mbeanserver.MBeanIntrospector
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MBeanAnalyzer;
				class MBeanIntrospector$MBeanInfoMap;
				class MBeanIntrospector$PerInterfaceMap;
				class PerInterface;
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class InvocationTargetException;
			class Method;
			class Type;
		}
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
		class MBeanAttributeInfo;
		class MBeanConstructorInfo;
		class MBeanInfo;
		class MBeanNotificationInfo;
		class MBeanOperationInfo;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class MBeanIntrospector : public ::java::lang::Object {
	$class(MBeanIntrospector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MBeanIntrospector();
	void init$();
	virtual void checkMethod(Object$* m) {}
	bool consistent(Object$* getter, Object$* setter);
	static $Array<::javax::management::MBeanConstructorInfo>* findConstructors($Class* c);
	static $Array<::javax::management::MBeanNotificationInfo>* findNotifications(Object$* moi);
	virtual ::com::sun::jmx::mbeanserver::MBeanAnalyzer* getAnalyzer($Class* mbeanInterface) {return nullptr;}
	virtual ::javax::management::Descriptor* getBasicMBeanDescriptor() {return nullptr;}
	::javax::management::MBeanInfo* getClassMBeanInfo($Class* resourceClass, ::com::sun::jmx::mbeanserver::PerInterface* perInterface);
	virtual $Array<::java::lang::reflect::Type>* getGenericParameterTypes(Object$* m) {return nullptr;}
	virtual ::java::lang::reflect::Type* getGenericReturnType(Object$* m) {return nullptr;}
	virtual ::javax::management::MBeanAttributeInfo* getMBeanAttributeInfo($String* attributeName, Object$* getter, Object$* setter) {return nullptr;}
	virtual ::javax::management::Descriptor* getMBeanDescriptor($Class* resourceClass) {return nullptr;}
	::javax::management::MBeanInfo* getMBeanInfo(Object$* resource, ::com::sun::jmx::mbeanserver::PerInterface* perInterface);
	virtual ::com::sun::jmx::mbeanserver::MBeanIntrospector$MBeanInfoMap* getMBeanInfoMap() {return nullptr;}
	virtual ::javax::management::MBeanOperationInfo* getMBeanOperationInfo($String* operationName, Object$* operation) {return nullptr;}
	::java::util::List* getMethods($Class* mbeanType);
	virtual $String* getName(Object$* m) {return nullptr;}
	::com::sun::jmx::mbeanserver::PerInterface* getPerInterface($Class* mbeanInterface);
	virtual ::com::sun::jmx::mbeanserver::MBeanIntrospector$PerInterfaceMap* getPerInterfaceMap() {return nullptr;}
	virtual $StringArray* getSignature(Object$* m) {return nullptr;}
	$Object* invokeM(Object$* m, Object$* target, $ObjectArray* args, Object$* cookie);
	virtual $Object* invokeM2(Object$* m, Object$* target, $ObjectArray* args, Object$* cookie) {return nullptr;}
	void invokeSetter($String* name, Object$* setter, Object$* target, Object$* arg, Object$* cookie);
	virtual bool isMXBean() {return false;}
	static bool isValidParameter(::java::lang::reflect::Method* m, Object$* value, int32_t paramNo);
	virtual $Object* mFrom(::java::lang::reflect::Method* m) {return nullptr;}
	::javax::management::MBeanInfo* makeInterfaceMBeanInfo($Class* mbeanInterface, ::com::sun::jmx::mbeanserver::MBeanAnalyzer* analyzer);
	void maybeInvalidParameter($String* name, Object$* setter, Object$* arg, Object$* cookie);
	static void unwrapInvocationTargetException(::java::lang::reflect::InvocationTargetException* e);
	virtual bool validParameter(Object$* m, Object$* value, int32_t paramNo, Object$* cookie) {return false;}
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MBeanIntrospector_h_