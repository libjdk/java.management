#ifndef _javax_management_modelmbean_ModelMBean_h_
#define _javax_management_modelmbean_ModelMBean_h_
//$ interface javax.management.modelmbean.ModelMBean
//$ extends javax.management.DynamicMBean,javax.management.PersistentMBean,javax.management.modelmbean.ModelMBeanNotificationBroadcaster

#include <javax/management/DynamicMBean.h>
#include <javax/management/PersistentMBean.h>
#include <javax/management/modelmbean/ModelMBeanNotificationBroadcaster.h>

namespace javax {
	namespace management {
		namespace modelmbean {
			class ModelMBeanInfo;
		}
	}
}

namespace javax {
	namespace management {
		namespace modelmbean {

class $export ModelMBean : public ::javax::management::DynamicMBean, public ::javax::management::PersistentMBean, public ::javax::management::modelmbean::ModelMBeanNotificationBroadcaster {
	$interface(ModelMBean, $NO_CLASS_INIT, ::javax::management::DynamicMBean, ::javax::management::PersistentMBean, ::javax::management::modelmbean::ModelMBeanNotificationBroadcaster)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual void setManagedResource(Object$* mr, $String* mr_type) {}
	virtual void setModelMBeanInfo(::javax::management::modelmbean::ModelMBeanInfo* inModelMBeanInfo) {}
	virtual $String* toString() override;
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_ModelMBean_h_