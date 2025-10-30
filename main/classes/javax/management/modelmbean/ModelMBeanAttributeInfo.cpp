#include <javax/management/modelmbean/ModelMBeanAttributeInfo.h>

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
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanFeatureInfo.h>
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
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Descriptor = ::javax::management::Descriptor;
using $DescriptorAccess = ::javax::management::DescriptorAccess;
using $MBeanAttributeInfo = ::javax::management::MBeanAttributeInfo;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;
using $DescriptorSupport = ::javax::management::modelmbean::DescriptorSupport;

namespace javax {
	namespace management {
		namespace modelmbean {

$FieldInfo _ModelMBeanAttributeInfo_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModelMBeanAttributeInfo, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModelMBeanAttributeInfo, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanAttributeInfo, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanAttributeInfo, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanAttributeInfo, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanAttributeInfo, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ModelMBeanAttributeInfo, compat)},
	{"attrDescriptor", "Ljavax/management/Descriptor;", nullptr, $PRIVATE, $field(ModelMBeanAttributeInfo, attrDescriptor)},
	{"currClass", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanAttributeInfo, currClass)},
	{}
};

$MethodInfo _ModelMBeanAttributeInfo_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanAttributeInfo::*)($String*,$String*,$Method*,$Method*)>(&ModelMBeanAttributeInfo::init$)), "javax.management.IntrospectionException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanAttributeInfo::*)($String*,$String*,$Method*,$Method*,$Descriptor*)>(&ModelMBeanAttributeInfo::init$)), "javax.management.IntrospectionException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZZ)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanAttributeInfo::*)($String*,$String*,$String*,bool,bool,bool)>(&ModelMBeanAttributeInfo::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZZLjavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanAttributeInfo::*)($String*,$String*,$String*,bool,bool,bool,$Descriptor*)>(&ModelMBeanAttributeInfo::init$))},
	{"<init>", "(Ljavax/management/modelmbean/ModelMBeanAttributeInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanAttributeInfo::*)(ModelMBeanAttributeInfo*)>(&ModelMBeanAttributeInfo::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDescriptor", "()Ljavax/management/Descriptor;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ModelMBeanAttributeInfo::*)($ObjectInputStream*)>(&ModelMBeanAttributeInfo::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setDescriptor", "(Ljavax/management/Descriptor;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validDescriptor", "(Ljavax/management/Descriptor;)Ljavax/management/Descriptor;", nullptr, $PRIVATE, $method(static_cast<$Descriptor*(ModelMBeanAttributeInfo::*)($Descriptor*)>(&ModelMBeanAttributeInfo::validDescriptor)), "javax.management.RuntimeOperationsException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ModelMBeanAttributeInfo::*)($ObjectOutputStream*)>(&ModelMBeanAttributeInfo::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _ModelMBeanAttributeInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.modelmbean.ModelMBeanAttributeInfo",
	"javax.management.MBeanAttributeInfo",
	"javax.management.DescriptorAccess",
	_ModelMBeanAttributeInfo_FieldInfo_,
	_ModelMBeanAttributeInfo_MethodInfo_
};

$Object* allocate$ModelMBeanAttributeInfo($Class* clazz) {
	return $of($alloc(ModelMBeanAttributeInfo));
}

bool ModelMBeanAttributeInfo::equals(Object$* o) {
	 return this->$MBeanAttributeInfo::equals(o);
}

int32_t ModelMBeanAttributeInfo::hashCode() {
	 return this->$MBeanAttributeInfo::hashCode();
}

void ModelMBeanAttributeInfo::finalize() {
	this->$MBeanAttributeInfo::finalize();
}

$ObjectStreamFieldArray* ModelMBeanAttributeInfo::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* ModelMBeanAttributeInfo::newSerialPersistentFields = nullptr;
int64_t ModelMBeanAttributeInfo::serialVersionUID = 0;
$ObjectStreamFieldArray* ModelMBeanAttributeInfo::serialPersistentFields = nullptr;
bool ModelMBeanAttributeInfo::compat = false;
$String* ModelMBeanAttributeInfo::currClass = nullptr;

void ModelMBeanAttributeInfo::init$($String* name, $String* description, $Method* getter, $Method* setter) {
	$MBeanAttributeInfo::init$(name, description, getter, setter);
	$set(this, attrDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"ModelMBeanAttributeInfo(String,String,Method,Method) Entry "_s, name}));
	}
	$set(this, attrDescriptor, validDescriptor(nullptr));
}

void ModelMBeanAttributeInfo::init$($String* name, $String* description, $Method* getter, $Method* setter, $Descriptor* descriptor) {
	$MBeanAttributeInfo::init$(name, description, getter, setter);
	$set(this, attrDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"ModelMBeanAttributeInfo(String,String,Method,Method,Descriptor) Entry "_s, name}));
	}
	$set(this, attrDescriptor, validDescriptor(descriptor));
}

void ModelMBeanAttributeInfo::init$($String* name, $String* type, $String* description, bool isReadable, bool isWritable, bool isIs) {
	$useLocalCurrentObjectStackCache();
	$MBeanAttributeInfo::init$(name, type, description, isReadable, isWritable, isIs);
	$set(this, attrDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $(ModelMBeanAttributeInfo::class$->getName()), $$new($ObjectArray, {
			$of("ModelMBeanAttributeInfo(String,String,String,boolean,boolean,boolean)"_s),
			$of("Entry"_s),
			$of(name)
		}));
	}
	$set(this, attrDescriptor, validDescriptor(nullptr));
}

void ModelMBeanAttributeInfo::init$($String* name, $String* type, $String* description, bool isReadable, bool isWritable, bool isIs, $Descriptor* descriptor) {
	$MBeanAttributeInfo::init$(name, type, description, isReadable, isWritable, isIs);
	$set(this, attrDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"ModelMBeanAttributeInfo(String,String,String,boolean,boolean,boolean,Descriptor)Entry "_s, name}));
	}
	$set(this, attrDescriptor, validDescriptor(descriptor));
}

void ModelMBeanAttributeInfo::init$(ModelMBeanAttributeInfo* inInfo) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(inInfo)->getName());
	$var($String, var$1, inInfo->getType());
	$var($String, var$2, inInfo->getDescription());
	bool var$3 = inInfo->isReadable();
	bool var$4 = inInfo->isWritable();
	$MBeanAttributeInfo::init$(var$0, var$1, var$2, var$3, var$4, inInfo->isIs());
	$set(this, attrDescriptor, validDescriptor(nullptr));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "ModelMBeanAttributeInfo(ModelMBeanAttributeInfo) Entry"_s);
	}
	$var($Descriptor, newDesc, $nc(inInfo)->getDescriptor());
	$set(this, attrDescriptor, validDescriptor(newDesc));
}

$Descriptor* ModelMBeanAttributeInfo::getDescriptor() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (this->attrDescriptor == nullptr) {
		$set(this, attrDescriptor, validDescriptor(nullptr));
	}
	return ($cast($Descriptor, $nc(this->attrDescriptor)->clone()));
}

void ModelMBeanAttributeInfo::setDescriptor($Descriptor* inDescriptor) {
	$set(this, attrDescriptor, validDescriptor(inDescriptor));
}

$Object* ModelMBeanAttributeInfo::clone() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	return $of(($new(ModelMBeanAttributeInfo, this)));
}

$String* ModelMBeanAttributeInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$8, $$str({"ModelMBeanAttributeInfo: "_s, $(this->getName()), " ; Description: "_s}));
	$var($String, var$7, $$concat(var$8, $(this->getDescription())));
	$var($String, var$6, $$concat(var$7, " ; Types: "));
	$var($String, var$5, $$concat(var$6, $(this->getType())));
	$var($String, var$4, $$concat(var$5, " ; isReadable: "));
	$var($String, var$3, $$concat(var$4, $$str(this->isReadable())));
	$var($String, var$2, $$concat(var$3, " ; isWritable: "));
	$var($String, var$1, $$concat(var$2, $$str(this->isWritable())));
	$var($String, var$0, $$concat(var$1, " ; Descriptor: "));
	return $concat(var$0, $(this->getDescriptor()));
}

$Descriptor* ModelMBeanAttributeInfo::validDescriptor($Descriptor* in) {
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
		clone->setField("descriptorType"_s, "attribute"_s);
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Defaulting descriptorType to \"attribute\""_s);
	}
	if ($nc(clone)->getFieldValue("displayName"_s) == nullptr) {
		clone->setField("displayName"_s, $(this->getName()));
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Defaulting Descriptor displayName to "_s, $(this->getName())}));
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
	if (!"attribute"_s->equalsIgnoreCase($cast($String, $($nc(clone)->getFieldValue("descriptorType"_s))))) {
		$var($RuntimeException, var$3, static_cast<$RuntimeException*>($new($IllegalArgumentException, "Invalid Descriptor argument"_s)));
		$throwNew($RuntimeOperationsException, var$3, $$str({"The Descriptor \"descriptorType\" field does not match the object described.  Expected: \"attribute\" , was: "_s, $($nc(clone)->getFieldValue("descriptorType"_s))}));
	}
	return clone;
}

void ModelMBeanAttributeInfo::readObject($ObjectInputStream* in) {
	$nc(in)->defaultReadObject();
}

void ModelMBeanAttributeInfo::writeObject($ObjectOutputStream* out) {
	if (ModelMBeanAttributeInfo::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("attrDescriptor"_s, $of(this->attrDescriptor));
		fields->put("currClass"_s, $of(ModelMBeanAttributeInfo::currClass));
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void clinit$ModelMBeanAttributeInfo($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ModelMBeanAttributeInfo::currClass, "ModelMBeanAttributeInfo"_s);
	$beforeCallerSensitive();
	$load($Descriptor);
	$assignStatic(ModelMBeanAttributeInfo::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "attrDescriptor"_s, $Descriptor::class$),
		$$new($ObjectStreamField, "currClass"_s, $String::class$)
	}));
	$assignStatic(ModelMBeanAttributeInfo::newSerialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "attrDescriptor"_s, $Descriptor::class$)}));
	ModelMBeanAttributeInfo::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			ModelMBeanAttributeInfo::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (ModelMBeanAttributeInfo::compat) {
			$assignStatic(ModelMBeanAttributeInfo::serialPersistentFields, ModelMBeanAttributeInfo::oldSerialPersistentFields);
			ModelMBeanAttributeInfo::serialVersionUID = ModelMBeanAttributeInfo::oldSerialVersionUID;
		} else {
			$assignStatic(ModelMBeanAttributeInfo::serialPersistentFields, ModelMBeanAttributeInfo::newSerialPersistentFields);
			ModelMBeanAttributeInfo::serialVersionUID = ModelMBeanAttributeInfo::newSerialVersionUID;
		}
	}
}

ModelMBeanAttributeInfo::ModelMBeanAttributeInfo() {
}

$Class* ModelMBeanAttributeInfo::load$($String* name, bool initialize) {
	$loadClass(ModelMBeanAttributeInfo, name, initialize, &_ModelMBeanAttributeInfo_ClassInfo_, clinit$ModelMBeanAttributeInfo, allocate$ModelMBeanAttributeInfo);
	return class$;
}

$Class* ModelMBeanAttributeInfo::class$ = nullptr;

		} // modelmbean
	} // management
} // javax