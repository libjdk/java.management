#include <javax/management/modelmbean/ModelMBeanConstructorInfo.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/reflect/Constructor.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanConstructorInfo.h>
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
using $Constructor = ::java::lang::reflect::Constructor;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Descriptor = ::javax::management::Descriptor;
using $DescriptorAccess = ::javax::management::DescriptorAccess;
using $MBeanConstructorInfo = ::javax::management::MBeanConstructorInfo;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;
using $MBeanParameterInfo = ::javax::management::MBeanParameterInfo;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;
using $DescriptorSupport = ::javax::management::modelmbean::DescriptorSupport;

namespace javax {
	namespace management {
		namespace modelmbean {

$FieldInfo _ModelMBeanConstructorInfo_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModelMBeanConstructorInfo, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModelMBeanConstructorInfo, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanConstructorInfo, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanConstructorInfo, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanConstructorInfo, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanConstructorInfo, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ModelMBeanConstructorInfo, compat)},
	{"consDescriptor", "Ljavax/management/Descriptor;", nullptr, $PRIVATE, $field(ModelMBeanConstructorInfo, consDescriptor)},
	{"currClass", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanConstructorInfo, currClass)},
	{}
};

$MethodInfo _ModelMBeanConstructorInfo_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/lang/reflect/Constructor;)V", "(Ljava/lang/String;Ljava/lang/reflect/Constructor<*>;)V", $PUBLIC, $method(static_cast<void(ModelMBeanConstructorInfo::*)($String*,$Constructor*)>(&ModelMBeanConstructorInfo::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/reflect/Constructor;Ljavax/management/Descriptor;)V", "(Ljava/lang/String;Ljava/lang/reflect/Constructor<*>;Ljavax/management/Descriptor;)V", $PUBLIC, $method(static_cast<void(ModelMBeanConstructorInfo::*)($String*,$Constructor*,$Descriptor*)>(&ModelMBeanConstructorInfo::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/MBeanParameterInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanConstructorInfo::*)($String*,$String*,$MBeanParameterInfoArray*)>(&ModelMBeanConstructorInfo::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/MBeanParameterInfo;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanConstructorInfo::*)($String*,$String*,$MBeanParameterInfoArray*,$Descriptor*)>(&ModelMBeanConstructorInfo::init$))},
	{"<init>", "(Ljavax/management/modelmbean/ModelMBeanConstructorInfo;)V", nullptr, 0, $method(static_cast<void(ModelMBeanConstructorInfo::*)(ModelMBeanConstructorInfo*)>(&ModelMBeanConstructorInfo::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDescriptor", "()Ljavax/management/Descriptor;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ModelMBeanConstructorInfo::*)($ObjectInputStream*)>(&ModelMBeanConstructorInfo::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setDescriptor", "(Ljavax/management/Descriptor;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validDescriptor", "(Ljavax/management/Descriptor;)Ljavax/management/Descriptor;", nullptr, $PRIVATE, $method(static_cast<$Descriptor*(ModelMBeanConstructorInfo::*)($Descriptor*)>(&ModelMBeanConstructorInfo::validDescriptor)), "javax.management.RuntimeOperationsException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ModelMBeanConstructorInfo::*)($ObjectOutputStream*)>(&ModelMBeanConstructorInfo::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _ModelMBeanConstructorInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.modelmbean.ModelMBeanConstructorInfo",
	"javax.management.MBeanConstructorInfo",
	"javax.management.DescriptorAccess",
	_ModelMBeanConstructorInfo_FieldInfo_,
	_ModelMBeanConstructorInfo_MethodInfo_
};

$Object* allocate$ModelMBeanConstructorInfo($Class* clazz) {
	return $of($alloc(ModelMBeanConstructorInfo));
}

bool ModelMBeanConstructorInfo::equals(Object$* o) {
	 return this->$MBeanConstructorInfo::equals(o);
}

int32_t ModelMBeanConstructorInfo::hashCode() {
	 return this->$MBeanConstructorInfo::hashCode();
}

void ModelMBeanConstructorInfo::finalize() {
	this->$MBeanConstructorInfo::finalize();
}

$ObjectStreamFieldArray* ModelMBeanConstructorInfo::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* ModelMBeanConstructorInfo::newSerialPersistentFields = nullptr;
int64_t ModelMBeanConstructorInfo::serialVersionUID = 0;
$ObjectStreamFieldArray* ModelMBeanConstructorInfo::serialPersistentFields = nullptr;
bool ModelMBeanConstructorInfo::compat = false;
$String* ModelMBeanConstructorInfo::currClass = nullptr;

void ModelMBeanConstructorInfo::init$($String* description, $Constructor* constructorMethod) {
	$MBeanConstructorInfo::init$(description, constructorMethod);
	$set(this, consDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "ModelMBeanConstructorInfo(String,Constructor) Entry"_s);
	}
	$set(this, consDescriptor, validDescriptor(nullptr));
}

void ModelMBeanConstructorInfo::init$($String* description, $Constructor* constructorMethod, $Descriptor* descriptor) {
	$MBeanConstructorInfo::init$(description, constructorMethod);
	$set(this, consDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "ModelMBeanConstructorInfo(String,Constructor,Descriptor) Entry"_s);
	}
	$set(this, consDescriptor, validDescriptor(descriptor));
}

void ModelMBeanConstructorInfo::init$($String* name, $String* description, $MBeanParameterInfoArray* signature) {
	$MBeanConstructorInfo::init$(name, description, signature);
	$set(this, consDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "ModelMBeanConstructorInfo(String,String,MBeanParameterInfo[]) Entry"_s);
	}
	$set(this, consDescriptor, validDescriptor(nullptr));
}

void ModelMBeanConstructorInfo::init$($String* name, $String* description, $MBeanParameterInfoArray* signature, $Descriptor* descriptor) {
	$MBeanConstructorInfo::init$(name, description, signature);
	$set(this, consDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "ModelMBeanConstructorInfo(String,String,MBeanParameterInfo[],Descriptor) Entry"_s);
	}
	$set(this, consDescriptor, validDescriptor(descriptor));
}

void ModelMBeanConstructorInfo::init$(ModelMBeanConstructorInfo* old) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(old)->getName());
	$var($String, var$1, old->getDescription());
	$MBeanConstructorInfo::init$(var$0, var$1, $(old->getSignature()));
	$set(this, consDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "ModelMBeanConstructorInfo(ModelMBeanConstructorInfo) Entry"_s);
	}
	$set(this, consDescriptor, validDescriptor(this->consDescriptor));
}

$Object* ModelMBeanConstructorInfo::clone() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	return $of(($new(ModelMBeanConstructorInfo, this)));
}

$Descriptor* ModelMBeanConstructorInfo::getDescriptor() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (this->consDescriptor == nullptr) {
		$set(this, consDescriptor, validDescriptor(nullptr));
	}
	return ($cast($Descriptor, $nc(this->consDescriptor)->clone()));
}

void ModelMBeanConstructorInfo::setDescriptor($Descriptor* inDescriptor) {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	$set(this, consDescriptor, validDescriptor(inDescriptor));
}

$String* ModelMBeanConstructorInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	$var($String, var$3, $$str({"ModelMBeanConstructorInfo: "_s, $(this->getName()), " ; Description: "_s}));
	$var($String, var$2, $$concat(var$3, $(this->getDescription())));
	$var($String, var$1, $$concat(var$2, " ; Descriptor: "));
	$var($String, var$0, $$concat(var$1, $(this->getDescriptor())));
	$var($String, retStr, $concat(var$0, " ; Signature: "));
	$var($MBeanParameterInfoArray, pTypes, this->getSignature());
	for (int32_t i = 0; i < $nc(pTypes)->length; ++i) {
		$assign(retStr, $nc(retStr)->concat($$str({$($nc((pTypes->get(i)))->getType()), ", "_s})));
	}
	return retStr;
}

$Descriptor* ModelMBeanConstructorInfo::validDescriptor($Descriptor* in) {
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
		clone->setField("role"_s, "constructor"_s);
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Defaulting Descriptor role field to \"constructor\""_s);
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
	if (!$nc(($cast($String, $($nc(clone)->getFieldValue("role"_s)))))->equalsIgnoreCase("constructor"_s)) {
		$var($RuntimeException, var$4, static_cast<$RuntimeException*>($new($IllegalArgumentException, "Invalid Descriptor argument"_s)));
		$throwNew($RuntimeOperationsException, var$4, $$str({"The Descriptor \"role\" field does not match the object described.  Expected: \"constructor\" , was: "_s, $(clone->getFieldValue("role"_s))}));
	}
	return clone;
}

void ModelMBeanConstructorInfo::readObject($ObjectInputStream* in) {
	$nc(in)->defaultReadObject();
}

void ModelMBeanConstructorInfo::writeObject($ObjectOutputStream* out) {
	if (ModelMBeanConstructorInfo::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("consDescriptor"_s, $of(this->consDescriptor));
		fields->put("currClass"_s, $of(ModelMBeanConstructorInfo::currClass));
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void clinit$ModelMBeanConstructorInfo($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ModelMBeanConstructorInfo::currClass, "ModelMBeanConstructorInfo"_s);
	$beforeCallerSensitive();
	$load($Descriptor);
	$assignStatic(ModelMBeanConstructorInfo::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "consDescriptor"_s, $Descriptor::class$),
		$$new($ObjectStreamField, "currClass"_s, $String::class$)
	}));
	$assignStatic(ModelMBeanConstructorInfo::newSerialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "consDescriptor"_s, $Descriptor::class$)}));
	ModelMBeanConstructorInfo::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			ModelMBeanConstructorInfo::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (ModelMBeanConstructorInfo::compat) {
			$assignStatic(ModelMBeanConstructorInfo::serialPersistentFields, ModelMBeanConstructorInfo::oldSerialPersistentFields);
			ModelMBeanConstructorInfo::serialVersionUID = ModelMBeanConstructorInfo::oldSerialVersionUID;
		} else {
			$assignStatic(ModelMBeanConstructorInfo::serialPersistentFields, ModelMBeanConstructorInfo::newSerialPersistentFields);
			ModelMBeanConstructorInfo::serialVersionUID = ModelMBeanConstructorInfo::newSerialVersionUID;
		}
	}
}

ModelMBeanConstructorInfo::ModelMBeanConstructorInfo() {
}

$Class* ModelMBeanConstructorInfo::load$($String* name, bool initialize) {
	$loadClass(ModelMBeanConstructorInfo, name, initialize, &_ModelMBeanConstructorInfo_ClassInfo_, clinit$ModelMBeanConstructorInfo, allocate$ModelMBeanConstructorInfo);
	return class$;
}

$Class* ModelMBeanConstructorInfo::class$ = nullptr;

		} // modelmbean
	} // management
} // javax