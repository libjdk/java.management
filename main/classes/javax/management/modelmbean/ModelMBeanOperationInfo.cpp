#include <javax/management/modelmbean/ModelMBeanOperationInfo.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanOperationInfo.h>
#include <javax/management/MBeanParameterInfo.h>
#include <javax/management/RuntimeOperationsException.h>
#include <javax/management/modelmbean/DescriptorSupport.h>
#include <jcpp.h>

#undef MODELMBEAN_LOGGER
#undef TRACE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $MBeanParameterInfoArray = $Array<::javax::management::MBeanParameterInfo>;
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
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Descriptor = ::javax::management::Descriptor;
using $DescriptorAccess = ::javax::management::DescriptorAccess;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;
using $MBeanOperationInfo = ::javax::management::MBeanOperationInfo;
using $MBeanParameterInfo = ::javax::management::MBeanParameterInfo;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;
using $DescriptorSupport = ::javax::management::modelmbean::DescriptorSupport;

namespace javax {
	namespace management {
		namespace modelmbean {

$FieldInfo _ModelMBeanOperationInfo_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModelMBeanOperationInfo, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModelMBeanOperationInfo, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanOperationInfo, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanOperationInfo, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanOperationInfo, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanOperationInfo, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ModelMBeanOperationInfo, compat)},
	{"operationDescriptor", "Ljavax/management/Descriptor;", nullptr, $PRIVATE, $field(ModelMBeanOperationInfo, operationDescriptor)},
	{"currClass", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanOperationInfo, currClass)},
	{}
};

$MethodInfo _ModelMBeanOperationInfo_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanOperationInfo::*)($String*,$Method*)>(&ModelMBeanOperationInfo::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/reflect/Method;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanOperationInfo::*)($String*,$Method*,$Descriptor*)>(&ModelMBeanOperationInfo::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/MBeanParameterInfo;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanOperationInfo::*)($String*,$String*,$MBeanParameterInfoArray*,$String*,int32_t)>(&ModelMBeanOperationInfo::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/MBeanParameterInfo;Ljava/lang/String;ILjavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanOperationInfo::*)($String*,$String*,$MBeanParameterInfoArray*,$String*,int32_t,$Descriptor*)>(&ModelMBeanOperationInfo::init$))},
	{"<init>", "(Ljavax/management/modelmbean/ModelMBeanOperationInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanOperationInfo::*)(ModelMBeanOperationInfo*)>(&ModelMBeanOperationInfo::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDescriptor", "()Ljavax/management/Descriptor;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ModelMBeanOperationInfo::*)($ObjectInputStream*)>(&ModelMBeanOperationInfo::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setDescriptor", "(Ljavax/management/Descriptor;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validDescriptor", "(Ljavax/management/Descriptor;)Ljavax/management/Descriptor;", nullptr, $PRIVATE, $method(static_cast<$Descriptor*(ModelMBeanOperationInfo::*)($Descriptor*)>(&ModelMBeanOperationInfo::validDescriptor)), "javax.management.RuntimeOperationsException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ModelMBeanOperationInfo::*)($ObjectOutputStream*)>(&ModelMBeanOperationInfo::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _ModelMBeanOperationInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.modelmbean.ModelMBeanOperationInfo",
	"javax.management.MBeanOperationInfo",
	"javax.management.DescriptorAccess",
	_ModelMBeanOperationInfo_FieldInfo_,
	_ModelMBeanOperationInfo_MethodInfo_
};

$Object* allocate$ModelMBeanOperationInfo($Class* clazz) {
	return $of($alloc(ModelMBeanOperationInfo));
}

bool ModelMBeanOperationInfo::equals(Object$* o) {
	 return this->$MBeanOperationInfo::equals(o);
}

int32_t ModelMBeanOperationInfo::hashCode() {
	 return this->$MBeanOperationInfo::hashCode();
}

void ModelMBeanOperationInfo::finalize() {
	this->$MBeanOperationInfo::finalize();
}

$ObjectStreamFieldArray* ModelMBeanOperationInfo::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* ModelMBeanOperationInfo::newSerialPersistentFields = nullptr;
int64_t ModelMBeanOperationInfo::serialVersionUID = 0;
$ObjectStreamFieldArray* ModelMBeanOperationInfo::serialPersistentFields = nullptr;
bool ModelMBeanOperationInfo::compat = false;
$String* ModelMBeanOperationInfo::currClass = nullptr;

void ModelMBeanOperationInfo::init$($String* description, $Method* operationMethod) {
	$MBeanOperationInfo::init$(description, operationMethod);
	$set(this, operationDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "ModelMBeanOperationInfo(String,Method) Entry"_s);
	}
	$set(this, operationDescriptor, validDescriptor(nullptr));
}

void ModelMBeanOperationInfo::init$($String* description, $Method* operationMethod, $Descriptor* descriptor) {
	$MBeanOperationInfo::init$(description, operationMethod);
	$set(this, operationDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "ModelMBeanOperationInfo(String,Method,Descriptor) Entry"_s);
	}
	$set(this, operationDescriptor, validDescriptor(descriptor));
}

void ModelMBeanOperationInfo::init$($String* name, $String* description, $MBeanParameterInfoArray* signature, $String* type, int32_t impact) {
	$MBeanOperationInfo::init$(name, description, signature, type, impact);
	$set(this, operationDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "ModelMBeanOperationInfo(String,String,MBeanParameterInfo[],String,int) Entry"_s);
	}
	$set(this, operationDescriptor, validDescriptor(nullptr));
}

void ModelMBeanOperationInfo::init$($String* name, $String* description, $MBeanParameterInfoArray* signature, $String* type, int32_t impact, $Descriptor* descriptor) {
	$MBeanOperationInfo::init$(name, description, signature, type, impact);
	$set(this, operationDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "ModelMBeanOperationInfo(String,String,MBeanParameterInfo[],String,int,Descriptor) Entry"_s);
	}
	$set(this, operationDescriptor, validDescriptor(descriptor));
}

void ModelMBeanOperationInfo::init$(ModelMBeanOperationInfo* inInfo) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(inInfo)->getName());
	$var($String, var$1, inInfo->getDescription());
	$var($MBeanParameterInfoArray, var$2, inInfo->getSignature());
	$var($String, var$3, inInfo->getReturnType());
	$MBeanOperationInfo::init$(var$0, var$1, var$2, var$3, inInfo->getImpact());
	$set(this, operationDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "ModelMBeanOperationInfo(ModelMBeanOperationInfo)Entry"_s);
	}
	$var($Descriptor, newDesc, $nc(inInfo)->getDescriptor());
	$set(this, operationDescriptor, validDescriptor(newDesc));
}

$Object* ModelMBeanOperationInfo::clone() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	return $of(($new(ModelMBeanOperationInfo, this)));
}

$Descriptor* ModelMBeanOperationInfo::getDescriptor() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (this->operationDescriptor == nullptr) {
		$set(this, operationDescriptor, validDescriptor(nullptr));
	}
	return ($cast($Descriptor, $nc(this->operationDescriptor)->clone()));
}

void ModelMBeanOperationInfo::setDescriptor($Descriptor* inDescriptor) {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	$set(this, operationDescriptor, validDescriptor(inDescriptor));
}

$String* ModelMBeanOperationInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	$var($String, var$5, $$str({"ModelMBeanOperationInfo: "_s, $(this->getName()), " ; Description: "_s}));
	$var($String, var$4, $$concat(var$5, $(this->getDescription())));
	$var($String, var$3, $$concat(var$4, " ; Descriptor: "));
	$var($String, var$2, $$concat(var$3, $(this->getDescriptor())));
	$var($String, var$1, $$concat(var$2, " ; ReturnType: "));
	$var($String, var$0, $$concat(var$1, $(this->getReturnType())));
	$var($String, retStr, $concat(var$0, " ; Signature: "));
	$var($MBeanParameterInfoArray, pTypes, this->getSignature());
	for (int32_t i = 0; i < $nc(pTypes)->length; ++i) {
		$assign(retStr, $nc(retStr)->concat($$str({$($nc((pTypes->get(i)))->getType()), ", "_s})));
	}
	return retStr;
}

$Descriptor* ModelMBeanOperationInfo::validDescriptor($Descriptor* in) {
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
		clone->setField("descriptorType"_s, "operation"_s);
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Defaulting descriptorType to \"operation\""_s);
	}
	if ($nc(clone)->getFieldValue("displayName"_s) == nullptr) {
		clone->setField("displayName"_s, $(this->getName()));
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Defaulting Descriptor displayName to "_s, $(this->getName())}));
	}
	if ($nc(clone)->getFieldValue("role"_s) == nullptr) {
		clone->setField("role"_s, "operation"_s);
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Defaulting Descriptor role field to \"operation\""_s);
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
	if (!"operation"_s->equalsIgnoreCase($cast($String, $($nc(clone)->getFieldValue("descriptorType"_s))))) {
		$var($RuntimeException, var$3, static_cast<$RuntimeException*>($new($IllegalArgumentException, "Invalid Descriptor argument"_s)));
		$throwNew($RuntimeOperationsException, var$3, $$str({"The Descriptor \"descriptorType\" field does not match the object described.  Expected: \"operation\" , was: "_s, $($nc(clone)->getFieldValue("descriptorType"_s))}));
	}
	$var($String, role, $cast($String, $nc(clone)->getFieldValue("role"_s)));
	bool var$5 = $nc(role)->equalsIgnoreCase("operation"_s);
	bool var$4 = var$5 || $nc(role)->equalsIgnoreCase("setter"_s);
	if (!(var$4 || $nc(role)->equalsIgnoreCase("getter"_s))) {
		$var($RuntimeException, var$6, static_cast<$RuntimeException*>($new($IllegalArgumentException, "Invalid Descriptor argument"_s)));
		$throwNew($RuntimeOperationsException, var$6, $$str({"The Descriptor \"role\" field does not match the object described.  Expected: \"operation\", \"setter\", or \"getter\" , was: "_s, $(clone->getFieldValue("role"_s))}));
	}
	$var($Object, targetValue, clone->getFieldValue("targetType"_s));
	if (targetValue != nullptr) {
		if (!($instanceOf($String, targetValue))) {
			$var($RuntimeException, var$7, static_cast<$RuntimeException*>($new($IllegalArgumentException, "Invalid Descriptor argument"_s)));
			$throwNew($RuntimeOperationsException, var$7, $$str({"The Descriptor field \"targetValue\" is invalid class.  Expected: java.lang.String,  was: "_s, $($of(targetValue)->getClass()->getName())}));
		}
	}
	return clone;
}

void ModelMBeanOperationInfo::readObject($ObjectInputStream* in) {
	$nc(in)->defaultReadObject();
}

void ModelMBeanOperationInfo::writeObject($ObjectOutputStream* out) {
	if (ModelMBeanOperationInfo::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("operationDescriptor"_s, $of(this->operationDescriptor));
		fields->put("currClass"_s, $of(ModelMBeanOperationInfo::currClass));
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void clinit$ModelMBeanOperationInfo($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ModelMBeanOperationInfo::currClass, "ModelMBeanOperationInfo"_s);
	$beforeCallerSensitive();
	$load($Descriptor);
	$assignStatic(ModelMBeanOperationInfo::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "operationDescriptor"_s, $Descriptor::class$),
		$$new($ObjectStreamField, "currClass"_s, $String::class$)
	}));
	$assignStatic(ModelMBeanOperationInfo::newSerialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "operationDescriptor"_s, $Descriptor::class$)}));
	ModelMBeanOperationInfo::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			ModelMBeanOperationInfo::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (ModelMBeanOperationInfo::compat) {
			$assignStatic(ModelMBeanOperationInfo::serialPersistentFields, ModelMBeanOperationInfo::oldSerialPersistentFields);
			ModelMBeanOperationInfo::serialVersionUID = ModelMBeanOperationInfo::oldSerialVersionUID;
		} else {
			$assignStatic(ModelMBeanOperationInfo::serialPersistentFields, ModelMBeanOperationInfo::newSerialPersistentFields);
			ModelMBeanOperationInfo::serialVersionUID = ModelMBeanOperationInfo::newSerialVersionUID;
		}
	}
}

ModelMBeanOperationInfo::ModelMBeanOperationInfo() {
}

$Class* ModelMBeanOperationInfo::load$($String* name, bool initialize) {
	$loadClass(ModelMBeanOperationInfo, name, initialize, &_ModelMBeanOperationInfo_ClassInfo_, clinit$ModelMBeanOperationInfo, allocate$ModelMBeanOperationInfo);
	return class$;
}

$Class* ModelMBeanOperationInfo::class$ = nullptr;

		} // modelmbean
	} // management
} // javax