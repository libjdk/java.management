#include <javax/management/modelmbean/ModelMBeanNotificationInfo.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanFeatureInfo.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/RuntimeOperationsException.h>
#include <javax/management/modelmbean/DescriptorSupport.h>
#include <jcpp.h>

#undef MODELMBEAN_LOGGER
#undef TRACE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Descriptor = ::javax::management::Descriptor;
using $DescriptorAccess = ::javax::management::DescriptorAccess;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;
using $DescriptorSupport = ::javax::management::modelmbean::DescriptorSupport;

namespace javax {
	namespace management {
		namespace modelmbean {

$FieldInfo _ModelMBeanNotificationInfo_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModelMBeanNotificationInfo, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModelMBeanNotificationInfo, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanNotificationInfo, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanNotificationInfo, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanNotificationInfo, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanNotificationInfo, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ModelMBeanNotificationInfo, compat)},
	{"notificationDescriptor", "Ljavax/management/Descriptor;", nullptr, $PRIVATE, $field(ModelMBeanNotificationInfo, notificationDescriptor)},
	{"currClass", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanNotificationInfo, currClass)},
	{}
};

$MethodInfo _ModelMBeanNotificationInfo_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanNotificationInfo::*)($StringArray*,$String*,$String*)>(&ModelMBeanNotificationInfo::init$))},
	{"<init>", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanNotificationInfo::*)($StringArray*,$String*,$String*,$Descriptor*)>(&ModelMBeanNotificationInfo::init$))},
	{"<init>", "(Ljavax/management/modelmbean/ModelMBeanNotificationInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanNotificationInfo::*)(ModelMBeanNotificationInfo*)>(&ModelMBeanNotificationInfo::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDescriptor", "()Ljavax/management/Descriptor;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ModelMBeanNotificationInfo::*)($ObjectInputStream*)>(&ModelMBeanNotificationInfo::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setDescriptor", "(Ljavax/management/Descriptor;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validDescriptor", "(Ljavax/management/Descriptor;)Ljavax/management/Descriptor;", nullptr, $PRIVATE, $method(static_cast<$Descriptor*(ModelMBeanNotificationInfo::*)($Descriptor*)>(&ModelMBeanNotificationInfo::validDescriptor)), "javax.management.RuntimeOperationsException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ModelMBeanNotificationInfo::*)($ObjectOutputStream*)>(&ModelMBeanNotificationInfo::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _ModelMBeanNotificationInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.modelmbean.ModelMBeanNotificationInfo",
	"javax.management.MBeanNotificationInfo",
	"javax.management.DescriptorAccess",
	_ModelMBeanNotificationInfo_FieldInfo_,
	_ModelMBeanNotificationInfo_MethodInfo_
};

$Object* allocate$ModelMBeanNotificationInfo($Class* clazz) {
	return $of($alloc(ModelMBeanNotificationInfo));
}

bool ModelMBeanNotificationInfo::equals(Object$* o) {
	 return this->$MBeanNotificationInfo::equals(o);
}

int32_t ModelMBeanNotificationInfo::hashCode() {
	 return this->$MBeanNotificationInfo::hashCode();
}

void ModelMBeanNotificationInfo::finalize() {
	this->$MBeanNotificationInfo::finalize();
}

$ObjectStreamFieldArray* ModelMBeanNotificationInfo::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* ModelMBeanNotificationInfo::newSerialPersistentFields = nullptr;
int64_t ModelMBeanNotificationInfo::serialVersionUID = 0;
$ObjectStreamFieldArray* ModelMBeanNotificationInfo::serialPersistentFields = nullptr;
bool ModelMBeanNotificationInfo::compat = false;
$String* ModelMBeanNotificationInfo::currClass = nullptr;

void ModelMBeanNotificationInfo::init$($StringArray* notifTypes, $String* name, $String* description) {
	ModelMBeanNotificationInfo::init$(notifTypes, name, description, nullptr);
}

void ModelMBeanNotificationInfo::init$($StringArray* notifTypes, $String* name, $String* description, $Descriptor* descriptor) {
	$MBeanNotificationInfo::init$(notifTypes, name, description);
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	$set(this, notificationDescriptor, validDescriptor(descriptor));
}

void ModelMBeanNotificationInfo::init$(ModelMBeanNotificationInfo* inInfo) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, var$0, $nc(inInfo)->getNotifTypes());
	$var($String, var$1, inInfo->getName());
	$var($String, var$2, inInfo->getDescription());
	ModelMBeanNotificationInfo::init$(var$0, var$1, var$2, $(inInfo->getDescriptor()));
}

$Object* ModelMBeanNotificationInfo::clone() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	return $of(($new(ModelMBeanNotificationInfo, this)));
}

$Descriptor* ModelMBeanNotificationInfo::getDescriptor() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (this->notificationDescriptor == nullptr) {
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Descriptor value is null, setting descriptor to default values"_s);
		}
		$set(this, notificationDescriptor, validDescriptor(nullptr));
	}
	return ($cast($Descriptor, $nc(this->notificationDescriptor)->clone()));
}

void ModelMBeanNotificationInfo::setDescriptor($Descriptor* inDescriptor) {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	$set(this, notificationDescriptor, validDescriptor(inDescriptor));
}

$String* ModelMBeanNotificationInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	$var($StringBuilder, retStr, $new($StringBuilder));
	retStr->append("ModelMBeanNotificationInfo: "_s)->append($(this->getName()));
	retStr->append(" ; Description: "_s)->append($(this->getDescription()));
	retStr->append(" ; Descriptor: "_s)->append($($of(this->getDescriptor())));
	retStr->append(" ; Types: "_s);
	$var($StringArray, nTypes, this->getNotifTypes());
	for (int32_t i = 0; i < $nc(nTypes)->length; ++i) {
		if (i > 0) {
			retStr->append(", "_s);
		}
		retStr->append(nTypes->get(i));
	}
	return retStr->toString();
}

$Descriptor* ModelMBeanNotificationInfo::validDescriptor($Descriptor* in) {
	$useLocalCurrentObjectStackCache();
	$var($Descriptor, clone, nullptr);
	bool defaulted = (in == nullptr);
	if (defaulted) {
		$assign(clone, $new($DescriptorSupport));
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Null Descriptor, creating new."_s);
	} else {
		$assign(clone, $cast($Descriptor, $nc(in)->clone()));
	}
	if (defaulted && $nc(clone)->getFieldValue("name"_s) == nullptr) {
		clone->setField("name"_s, $(this->getName()));
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Defaulting Descriptor name to "_s, $(this->getName())}));
	}
	if (defaulted && $nc(clone)->getFieldValue("descriptorType"_s) == nullptr) {
		clone->setField("descriptorType"_s, "notification"_s);
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Defaulting descriptorType to \"notification\""_s);
	}
	if ($nc(clone)->getFieldValue("displayName"_s) == nullptr) {
		clone->setField("displayName"_s, $(this->getName()));
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Defaulting Descriptor displayName to "_s, $(this->getName())}));
	}
	if ($nc(clone)->getFieldValue("severity"_s) == nullptr) {
		clone->setField("severity"_s, "6"_s);
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Defaulting Descriptor severity field to 6"_s);
	}
	if (!$nc(clone)->isValid()) {
		$var($RuntimeException, var$0, static_cast<$RuntimeException*>($new($IllegalArgumentException, "Invalid Descriptor argument"_s)));
		$throwNew($RuntimeOperationsException, var$0, $$str({"The isValid() method of the Descriptor object itself returned false,one or more required fields are invalid. Descriptor:"_s, $($of(clone)->toString())}));
	}
	if (!$nc($(getName()))->equalsIgnoreCase($cast($String, $($nc(clone)->getFieldValue("name"_s))))) {
		$var($RuntimeException, var$1, static_cast<$RuntimeException*>($new($IllegalArgumentException, "Invalid Descriptor argument"_s)));
		$var($String, var$2, $$str({"The Descriptor \"name\" field does not match the object described.  Expected: "_s, $(this->getName()), " , was: "_s}));
		$throwNew($RuntimeOperationsException, var$1, $$concat(var$2, $($nc(clone)->getFieldValue("name"_s))));
	}
	if (!"notification"_s->equalsIgnoreCase($cast($String, $($nc(clone)->getFieldValue("descriptorType"_s))))) {
		$var($RuntimeException, var$3, static_cast<$RuntimeException*>($new($IllegalArgumentException, "Invalid Descriptor argument"_s)));
		$throwNew($RuntimeOperationsException, var$3, $$str({"The Descriptor \"descriptorType\" field does not match the object described.  Expected: \"notification\" , was: "_s, $($nc(clone)->getFieldValue("descriptorType"_s))}));
	}
	return clone;
}

void ModelMBeanNotificationInfo::readObject($ObjectInputStream* in) {
	$nc(in)->defaultReadObject();
}

void ModelMBeanNotificationInfo::writeObject($ObjectOutputStream* out) {
	if (ModelMBeanNotificationInfo::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("notificationDescriptor"_s, $of(this->notificationDescriptor));
		fields->put("currClass"_s, $of(ModelMBeanNotificationInfo::currClass));
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void clinit$ModelMBeanNotificationInfo($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ModelMBeanNotificationInfo::currClass, "ModelMBeanNotificationInfo"_s);
	$beforeCallerSensitive();
	$load($Descriptor);
	$assignStatic(ModelMBeanNotificationInfo::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "notificationDescriptor"_s, $Descriptor::class$),
		$$new($ObjectStreamField, "currClass"_s, $String::class$)
	}));
	$assignStatic(ModelMBeanNotificationInfo::newSerialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "notificationDescriptor"_s, $Descriptor::class$)}));
	ModelMBeanNotificationInfo::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			ModelMBeanNotificationInfo::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (ModelMBeanNotificationInfo::compat) {
			$assignStatic(ModelMBeanNotificationInfo::serialPersistentFields, ModelMBeanNotificationInfo::oldSerialPersistentFields);
			ModelMBeanNotificationInfo::serialVersionUID = ModelMBeanNotificationInfo::oldSerialVersionUID;
		} else {
			$assignStatic(ModelMBeanNotificationInfo::serialPersistentFields, ModelMBeanNotificationInfo::newSerialPersistentFields);
			ModelMBeanNotificationInfo::serialVersionUID = ModelMBeanNotificationInfo::newSerialVersionUID;
		}
	}
}

ModelMBeanNotificationInfo::ModelMBeanNotificationInfo() {
}

$Class* ModelMBeanNotificationInfo::load$($String* name, bool initialize) {
	$loadClass(ModelMBeanNotificationInfo, name, initialize, &_ModelMBeanNotificationInfo_ClassInfo_, clinit$ModelMBeanNotificationInfo, allocate$ModelMBeanNotificationInfo);
	return class$;
}

$Class* ModelMBeanNotificationInfo::class$ = nullptr;

		} // modelmbean
	} // management
} // javax