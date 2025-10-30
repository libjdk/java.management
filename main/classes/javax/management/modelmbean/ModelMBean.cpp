#include <javax/management/modelmbean/ModelMBean.h>

#include <javax/management/DynamicMBean.h>
#include <javax/management/modelmbean/ModelMBeanInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DynamicMBean = ::javax::management::DynamicMBean;
using $PersistentMBean = ::javax::management::PersistentMBean;
using $ModelMBeanInfo = ::javax::management::modelmbean::ModelMBeanInfo;
using $ModelMBeanNotificationBroadcaster = ::javax::management::modelmbean::ModelMBeanNotificationBroadcaster;

namespace javax {
	namespace management {
		namespace modelmbean {

$MethodInfo _ModelMBean_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"setManagedResource", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException,javax.management.InstanceNotFoundException,javax.management.modelmbean.InvalidTargetObjectTypeException"},
	{"setModelMBeanInfo", "(Ljavax/management/modelmbean/ModelMBeanInfo;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ModelMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.modelmbean.ModelMBean",
	nullptr,
	"javax.management.DynamicMBean,javax.management.PersistentMBean,javax.management.modelmbean.ModelMBeanNotificationBroadcaster",
	nullptr,
	_ModelMBean_MethodInfo_
};

$Object* allocate$ModelMBean($Class* clazz) {
	return $of($alloc(ModelMBean));
}

int32_t ModelMBean::hashCode() {
	 return this->$DynamicMBean::hashCode();
}

bool ModelMBean::equals(Object$* arg0) {
	 return this->$DynamicMBean::equals(arg0);
}

$Object* ModelMBean::clone() {
	 return this->$DynamicMBean::clone();
}

$String* ModelMBean::toString() {
	 return this->$DynamicMBean::toString();
}

void ModelMBean::finalize() {
	this->$DynamicMBean::finalize();
}

$Class* ModelMBean::load$($String* name, bool initialize) {
	$loadClass(ModelMBean, name, initialize, &_ModelMBean_ClassInfo_, allocate$ModelMBean);
	return class$;
}

$Class* ModelMBean::class$ = nullptr;

		} // modelmbean
	} // management
} // javax