#ifndef _javax_management_StandardMBean_h_
#define _javax_management_StandardMBean_h_
//$ class javax.management.StandardMBean
//$ extends javax.management.DynamicMBean
//$ implements javax.management.MBeanRegistration

#include <java/lang/Array.h>
#include <javax/management/DynamicMBean.h>
#include <javax/management/MBeanRegistration.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class DescriptorCache;
				class MBeanSupport;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace management {
		class Attribute;
		class AttributeList;
		class Descriptor;
		class MBeanAttributeInfo;
		class MBeanConstructorInfo;
		class MBeanFeatureInfo;
		class MBeanInfo;
		class MBeanNotificationInfo;
		class MBeanOperationInfo;
		class MBeanParameterInfo;
		class MBeanServer;
		class ObjectName;
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class OpenMBeanParameterInfo;
		}
	}
}

namespace javax {
	namespace management {

class $import StandardMBean : public ::javax::management::DynamicMBean, public ::javax::management::MBeanRegistration {
	$class(StandardMBean, 0, ::javax::management::DynamicMBean, ::javax::management::MBeanRegistration)
public:
	StandardMBean();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(Object$* implementation, $Class* mbeanInterface);
	void init$($Class* mbeanInterface);
	void init$(Object$* implementation, $Class* mbeanInterface, bool isMXBean);
	void init$($Class* mbeanInterface, bool isMXBean);
	virtual void cacheMBeanInfo(::javax::management::MBeanInfo* info);
	void construct(Object$* implementation, $Class* mbeanInterface, bool nullImplementationAllowed, bool isMXBean);
	static ::javax::management::MBeanParameterInfo* customize(::javax::management::MBeanParameterInfo* pi, $String* name, $String* description);
	static ::javax::management::MBeanConstructorInfo* customize(::javax::management::MBeanConstructorInfo* ci, $String* description, $Array<::javax::management::MBeanParameterInfo>* signature);
	static ::javax::management::MBeanOperationInfo* customize(::javax::management::MBeanOperationInfo* oi, $String* description, $Array<::javax::management::MBeanParameterInfo>* signature, int32_t impact);
	static ::javax::management::MBeanAttributeInfo* customize(::javax::management::MBeanAttributeInfo* ai, $String* description);
	static bool equal(Object$* a, Object$* b);
	virtual $Object* getAttribute($String* attribute) override;
	virtual ::javax::management::AttributeList* getAttributes($StringArray* attributes) override;
	$Array<::javax::management::MBeanAttributeInfo>* getAttributes(::javax::management::MBeanInfo* info);
	virtual ::javax::management::MBeanInfo* getCachedMBeanInfo();
	virtual $String* getClassName(::javax::management::MBeanInfo* info);
	virtual $Array<::javax::management::MBeanConstructorInfo>* getConstructors($Array<::javax::management::MBeanConstructorInfo>* ctors, Object$* impl);
	$Array<::javax::management::MBeanConstructorInfo>* getConstructors(::javax::management::MBeanInfo* info, Object$* impl);
	virtual $String* getDescription(::javax::management::MBeanInfo* info);
	virtual $String* getDescription(::javax::management::MBeanFeatureInfo* info);
	virtual $String* getDescription(::javax::management::MBeanAttributeInfo* info);
	virtual $String* getDescription(::javax::management::MBeanConstructorInfo* info);
	virtual $String* getDescription(::javax::management::MBeanConstructorInfo* ctor, ::javax::management::MBeanParameterInfo* param, int32_t sequence);
	virtual $String* getDescription(::javax::management::MBeanOperationInfo* info);
	virtual $String* getDescription(::javax::management::MBeanOperationInfo* op, ::javax::management::MBeanParameterInfo* param, int32_t sequence);
	virtual ::javax::management::Descriptor* getDescriptor(::javax::management::MBeanInfo* info, bool immutableInfo);
	virtual int32_t getImpact(::javax::management::MBeanOperationInfo* info);
	virtual $Object* getImplementation();
	virtual $Class* getImplementationClass();
	virtual ::javax::management::MBeanInfo* getMBeanInfo() override;
	$Class* getMBeanInterface();
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotifications(::javax::management::MBeanInfo* info);
	$Array<::javax::management::MBeanOperationInfo>* getOperations(::javax::management::MBeanInfo* info);
	virtual $String* getParameterName(::javax::management::MBeanConstructorInfo* ctor, ::javax::management::MBeanParameterInfo* param, int32_t sequence);
	virtual $String* getParameterName(::javax::management::MBeanOperationInfo* op, ::javax::management::MBeanParameterInfo* param, int32_t sequence);
	static bool identicalArrays($ObjectArray* a, $ObjectArray* b);
	static bool immutableInfo($Class* subclass);
	virtual $Object* invoke($String* actionName, $ObjectArray* params, $StringArray* signature) override;
	bool isMXBean();
	static bool overrides($Class* subclass, $Class* superclass, $String* name, $ClassArray* params);
	static $Array<::javax::management::openmbean::OpenMBeanParameterInfo>* paramsToOpenParams($Array<::javax::management::MBeanParameterInfo>* params);
	virtual void postDeregister() override;
	virtual void postRegister(::java::lang::Boolean* registrationDone) override;
	virtual void preDeregister() override;
	virtual ::javax::management::ObjectName* preRegister(::javax::management::MBeanServer* server, ::javax::management::ObjectName* name) override;
	virtual void setAttribute(::javax::management::Attribute* attribute) override;
	virtual ::javax::management::AttributeList* setAttributes(::javax::management::AttributeList* attributes) override;
	virtual void setImplementation(Object$* implementation);
	virtual $String* toString() override;
	static ::com::sun::jmx::mbeanserver::DescriptorCache* descriptors;
	$volatile(::com::sun::jmx::mbeanserver::MBeanSupport*) mbean = nullptr;
	$volatile(::javax::management::MBeanInfo*) cachedMBeanInfo = nullptr;
	static ::java::util::Map* mbeanInfoSafeMap;
};

	} // management
} // javax

#endif // _javax_management_StandardMBean_h_