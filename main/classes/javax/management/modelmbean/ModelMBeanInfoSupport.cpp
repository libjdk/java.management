#include <javax/management/modelmbean/ModelMBeanInfoSupport.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/io/Serializable.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/function/Supplier.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/MBeanException.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <javax/management/RuntimeOperationsException.h>
#include <javax/management/modelmbean/DescriptorSupport.h>
#include <javax/management/modelmbean/ModelMBeanAttributeInfo.h>
#include <javax/management/modelmbean/ModelMBeanConstructorInfo.h>
#include <javax/management/modelmbean/ModelMBeanInfo.h>
#include <javax/management/modelmbean/ModelMBeanNotificationInfo.h>
#include <javax/management/modelmbean/ModelMBeanOperationInfo.h>
#include <jcpp.h>

#undef ALL
#undef ATTR
#undef CONS
#undef MMB
#undef MODELMBEAN_LOGGER
#undef NOTF
#undef NO_ATTRIBUTES
#undef NO_CONSTRUCTORS
#undef NO_NOTIFICATIONS
#undef NO_OPERATIONS
#undef OPER
#undef TRACE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $DescriptorArray = $Array<::javax::management::Descriptor>;
using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $MBeanConstructorInfoArray = $Array<::javax::management::MBeanConstructorInfo>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $MBeanOperationInfoArray = $Array<::javax::management::MBeanOperationInfo>;
using $ModelMBeanAttributeInfoArray = $Array<::javax::management::modelmbean::ModelMBeanAttributeInfo>;
using $ModelMBeanConstructorInfoArray = $Array<::javax::management::modelmbean::ModelMBeanConstructorInfo>;
using $ModelMBeanNotificationInfoArray = $Array<::javax::management::modelmbean::ModelMBeanNotificationInfo>;
using $ModelMBeanOperationInfoArray = $Array<::javax::management::modelmbean::ModelMBeanOperationInfo>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Supplier = ::java::util::function::Supplier;
using $Descriptor = ::javax::management::Descriptor;
using $MBeanAttributeInfo = ::javax::management::MBeanAttributeInfo;
using $MBeanConstructorInfo = ::javax::management::MBeanConstructorInfo;
using $MBeanException = ::javax::management::MBeanException;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $MBeanOperationInfo = ::javax::management::MBeanOperationInfo;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;
using $DescriptorSupport = ::javax::management::modelmbean::DescriptorSupport;
using $ModelMBeanAttributeInfo = ::javax::management::modelmbean::ModelMBeanAttributeInfo;
using $ModelMBeanConstructorInfo = ::javax::management::modelmbean::ModelMBeanConstructorInfo;
using $ModelMBeanInfo = ::javax::management::modelmbean::ModelMBeanInfo;
using $ModelMBeanNotificationInfo = ::javax::management::modelmbean::ModelMBeanNotificationInfo;
using $ModelMBeanOperationInfo = ::javax::management::modelmbean::ModelMBeanOperationInfo;

namespace javax {
	namespace management {
		namespace modelmbean {

class ModelMBeanInfoSupport$$Lambda$toString : public $Supplier {
	$class(ModelMBeanInfoSupport$$Lambda$toString, $NO_CLASS_INIT, $Supplier)
public:
	void init$($StringBuilder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModelMBeanInfoSupport$$Lambda$toString>());
	}
	$StringBuilder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ModelMBeanInfoSupport$$Lambda$toString::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModelMBeanInfoSupport$$Lambda$toString, inst$)},
	{}
};
$MethodInfo ModelMBeanInfoSupport$$Lambda$toString::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanInfoSupport$$Lambda$toString::*)($StringBuilder*)>(&ModelMBeanInfoSupport$$Lambda$toString::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModelMBeanInfoSupport$$Lambda$toString::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.management.modelmbean.ModelMBeanInfoSupport$$Lambda$toString",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* ModelMBeanInfoSupport$$Lambda$toString::load$($String* name, bool initialize) {
	$loadClass(ModelMBeanInfoSupport$$Lambda$toString, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModelMBeanInfoSupport$$Lambda$toString::class$ = nullptr;

$FieldInfo _ModelMBeanInfoSupport_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModelMBeanInfoSupport, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModelMBeanInfoSupport, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanInfoSupport, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanInfoSupport, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanInfoSupport, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanInfoSupport, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ModelMBeanInfoSupport, compat)},
	{"modelMBeanDescriptor", "Ljavax/management/Descriptor;", nullptr, $PRIVATE, $field(ModelMBeanInfoSupport, modelMBeanDescriptor)},
	{"modelMBeanAttributes", "[Ljavax/management/MBeanAttributeInfo;", nullptr, $PRIVATE, $field(ModelMBeanInfoSupport, modelMBeanAttributes)},
	{"modelMBeanConstructors", "[Ljavax/management/MBeanConstructorInfo;", nullptr, $PRIVATE, $field(ModelMBeanInfoSupport, modelMBeanConstructors)},
	{"modelMBeanNotifications", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE, $field(ModelMBeanInfoSupport, modelMBeanNotifications)},
	{"modelMBeanOperations", "[Ljavax/management/MBeanOperationInfo;", nullptr, $PRIVATE, $field(ModelMBeanInfoSupport, modelMBeanOperations)},
	{"ATTR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanInfoSupport, ATTR)},
	{"OPER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanInfoSupport, OPER)},
	{"NOTF", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanInfoSupport, NOTF)},
	{"CONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanInfoSupport, CONS)},
	{"MMB", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanInfoSupport, MMB)},
	{"ALL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanInfoSupport, ALL)},
	{"currClass", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanInfoSupport, currClass)},
	{"NO_ATTRIBUTES", "[Ljavax/management/modelmbean/ModelMBeanAttributeInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanInfoSupport, NO_ATTRIBUTES)},
	{"NO_CONSTRUCTORS", "[Ljavax/management/modelmbean/ModelMBeanConstructorInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanInfoSupport, NO_CONSTRUCTORS)},
	{"NO_NOTIFICATIONS", "[Ljavax/management/modelmbean/ModelMBeanNotificationInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanInfoSupport, NO_NOTIFICATIONS)},
	{"NO_OPERATIONS", "[Ljavax/management/modelmbean/ModelMBeanOperationInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModelMBeanInfoSupport, NO_OPERATIONS)},
	{}
};

$MethodInfo _ModelMBeanInfoSupport_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAttributes", "()[Ljavax/management/MBeanAttributeInfo;", nullptr, $PUBLIC},
	{"*getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getConstructors", "()[Ljavax/management/MBeanConstructorInfo;", nullptr, $PUBLIC},
	{"*getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNotifications", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC},
	{"*getOperations", "()[Ljavax/management/MBeanOperationInfo;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljavax/management/modelmbean/ModelMBeanInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanInfoSupport::*)($ModelMBeanInfo*)>(&ModelMBeanInfoSupport::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/modelmbean/ModelMBeanAttributeInfo;[Ljavax/management/modelmbean/ModelMBeanConstructorInfo;[Ljavax/management/modelmbean/ModelMBeanOperationInfo;[Ljavax/management/modelmbean/ModelMBeanNotificationInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanInfoSupport::*)($String*,$String*,$ModelMBeanAttributeInfoArray*,$ModelMBeanConstructorInfoArray*,$ModelMBeanOperationInfoArray*,$ModelMBeanNotificationInfoArray*)>(&ModelMBeanInfoSupport::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/management/modelmbean/ModelMBeanAttributeInfo;[Ljavax/management/modelmbean/ModelMBeanConstructorInfo;[Ljavax/management/modelmbean/ModelMBeanOperationInfo;[Ljavax/management/modelmbean/ModelMBeanNotificationInfo;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMBeanInfoSupport::*)($String*,$String*,$ModelMBeanAttributeInfoArray*,$ModelMBeanConstructorInfoArray*,$ModelMBeanOperationInfoArray*,$ModelMBeanNotificationInfoArray*,$Descriptor*)>(&ModelMBeanInfoSupport::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/String;)Ljavax/management/modelmbean/ModelMBeanAttributeInfo;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"getConstructor", "(Ljava/lang/String;)Ljavax/management/modelmbean/ModelMBeanConstructorInfo;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"getDescriptor", "(Ljava/lang/String;)Ljavax/management/Descriptor;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"getDescriptor", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/management/Descriptor;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"getDescriptor", "()Ljavax/management/Descriptor;", nullptr, $PUBLIC},
	{"getDescriptors", "(Ljava/lang/String;)[Ljavax/management/Descriptor;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"getMBeanDescriptor", "()Ljavax/management/Descriptor;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException"},
	{"getMBeanDescriptorNoException", "()Ljavax/management/Descriptor;", nullptr, $PRIVATE, $method(static_cast<$Descriptor*(ModelMBeanInfoSupport::*)()>(&ModelMBeanInfoSupport::getMBeanDescriptorNoException))},
	{"getNotification", "(Ljava/lang/String;)Ljavax/management/modelmbean/ModelMBeanNotificationInfo;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"getOperation", "(Ljava/lang/String;)Ljavax/management/modelmbean/ModelMBeanOperationInfo;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ModelMBeanInfoSupport::*)($ObjectInputStream*)>(&ModelMBeanInfoSupport::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setDescriptor", "(Ljavax/management/Descriptor;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"setDescriptors", "([Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"setMBeanDescriptor", "(Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validDescriptor", "(Ljavax/management/Descriptor;)Ljavax/management/Descriptor;", nullptr, $PRIVATE, $method(static_cast<$Descriptor*(ModelMBeanInfoSupport::*)($Descriptor*)>(&ModelMBeanInfoSupport::validDescriptor)), "javax.management.RuntimeOperationsException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ModelMBeanInfoSupport::*)($ObjectOutputStream*)>(&ModelMBeanInfoSupport::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _ModelMBeanInfoSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.modelmbean.ModelMBeanInfoSupport",
	"javax.management.MBeanInfo",
	"javax.management.modelmbean.ModelMBeanInfo",
	_ModelMBeanInfoSupport_FieldInfo_,
	_ModelMBeanInfoSupport_MethodInfo_
};

$Object* allocate$ModelMBeanInfoSupport($Class* clazz) {
	return $of($alloc(ModelMBeanInfoSupport));
}

$String* ModelMBeanInfoSupport::getClassName() {
	 return this->$MBeanInfo::getClassName();
}

$String* ModelMBeanInfoSupport::getDescription() {
	 return this->$MBeanInfo::getDescription();
}

$MBeanAttributeInfoArray* ModelMBeanInfoSupport::getAttributes() {
	 return this->$MBeanInfo::getAttributes();
}

$MBeanOperationInfoArray* ModelMBeanInfoSupport::getOperations() {
	 return this->$MBeanInfo::getOperations();
}

$MBeanConstructorInfoArray* ModelMBeanInfoSupport::getConstructors() {
	 return this->$MBeanInfo::getConstructors();
}

$MBeanNotificationInfoArray* ModelMBeanInfoSupport::getNotifications() {
	 return this->$MBeanInfo::getNotifications();
}

$String* ModelMBeanInfoSupport::toString() {
	 return this->$MBeanInfo::toString();
}

bool ModelMBeanInfoSupport::equals(Object$* o) {
	 return this->$MBeanInfo::equals(o);
}

int32_t ModelMBeanInfoSupport::hashCode() {
	 return this->$MBeanInfo::hashCode();
}

void ModelMBeanInfoSupport::finalize() {
	this->$MBeanInfo::finalize();
}

$ObjectStreamFieldArray* ModelMBeanInfoSupport::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* ModelMBeanInfoSupport::newSerialPersistentFields = nullptr;
int64_t ModelMBeanInfoSupport::serialVersionUID = 0;
$ObjectStreamFieldArray* ModelMBeanInfoSupport::serialPersistentFields = nullptr;
bool ModelMBeanInfoSupport::compat = false;
$String* ModelMBeanInfoSupport::ATTR = nullptr;
$String* ModelMBeanInfoSupport::OPER = nullptr;
$String* ModelMBeanInfoSupport::NOTF = nullptr;
$String* ModelMBeanInfoSupport::CONS = nullptr;
$String* ModelMBeanInfoSupport::MMB = nullptr;
$String* ModelMBeanInfoSupport::ALL = nullptr;
$String* ModelMBeanInfoSupport::currClass = nullptr;
$ModelMBeanAttributeInfoArray* ModelMBeanInfoSupport::NO_ATTRIBUTES = nullptr;
$ModelMBeanConstructorInfoArray* ModelMBeanInfoSupport::NO_CONSTRUCTORS = nullptr;
$ModelMBeanNotificationInfoArray* ModelMBeanInfoSupport::NO_NOTIFICATIONS = nullptr;
$ModelMBeanOperationInfoArray* ModelMBeanInfoSupport::NO_OPERATIONS = nullptr;

void ModelMBeanInfoSupport::init$($ModelMBeanInfo* mbi) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(mbi)->getClassName());
	$var($String, var$1, mbi->getDescription());
	$var($MBeanAttributeInfoArray, var$2, mbi->getAttributes());
	$var($MBeanConstructorInfoArray, var$3, mbi->getConstructors());
	$var($MBeanOperationInfoArray, var$4, mbi->getOperations());
	$MBeanInfo::init$(var$0, var$1, var$2, var$3, var$4, $(mbi->getNotifications()));
	$set(this, modelMBeanDescriptor, nullptr);
	$set(this, modelMBeanAttributes, $nc(mbi)->getAttributes());
	$set(this, modelMBeanConstructors, mbi->getConstructors());
	$set(this, modelMBeanOperations, mbi->getOperations());
	$set(this, modelMBeanNotifications, mbi->getNotifications());
	try {
		$var($Descriptor, mbeandescriptor, mbi->getMBeanDescriptor());
		$set(this, modelMBeanDescriptor, validDescriptor(mbeandescriptor));
	} catch ($MBeanException& mbe) {
		$set(this, modelMBeanDescriptor, validDescriptor(nullptr));
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "ModelMBeanInfo(ModelMBeanInfo) Could not get a valid modelMBeanDescriptor, setting a default Descriptor"_s);
		}
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

void ModelMBeanInfoSupport::init$($String* className, $String* description, $ModelMBeanAttributeInfoArray* attributes, $ModelMBeanConstructorInfoArray* constructors, $ModelMBeanOperationInfoArray* operations, $ModelMBeanNotificationInfoArray* notifications) {
	ModelMBeanInfoSupport::init$(className, description, attributes, constructors, operations, notifications, nullptr);
}

void ModelMBeanInfoSupport::init$($String* className, $String* description, $ModelMBeanAttributeInfoArray* attributes, $ModelMBeanConstructorInfoArray* constructors, $ModelMBeanOperationInfoArray* operations, $ModelMBeanNotificationInfoArray* notifications, $Descriptor* mbeandescriptor) {
	$MBeanInfo::init$(className, description, (attributes != nullptr) ? $fcast($MBeanAttributeInfoArray, attributes) : $fcast($MBeanAttributeInfoArray, ModelMBeanInfoSupport::NO_ATTRIBUTES), (constructors != nullptr) ? $fcast($MBeanConstructorInfoArray, constructors) : $fcast($MBeanConstructorInfoArray, ModelMBeanInfoSupport::NO_CONSTRUCTORS), (operations != nullptr) ? $fcast($MBeanOperationInfoArray, operations) : $fcast($MBeanOperationInfoArray, ModelMBeanInfoSupport::NO_OPERATIONS), (notifications != nullptr) ? $fcast($MBeanNotificationInfoArray, notifications) : $fcast($MBeanNotificationInfoArray, ModelMBeanInfoSupport::NO_NOTIFICATIONS));
	$set(this, modelMBeanDescriptor, nullptr);
	$set(this, modelMBeanAttributes, $fcast($MBeanAttributeInfoArray, attributes));
	$set(this, modelMBeanConstructors, $fcast($MBeanConstructorInfoArray, constructors));
	$set(this, modelMBeanOperations, $fcast($MBeanOperationInfoArray, operations));
	$set(this, modelMBeanNotifications, $fcast($MBeanNotificationInfoArray, notifications));
	$set(this, modelMBeanDescriptor, validDescriptor(mbeandescriptor));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "ModelMBeanInfoSupport(String,String,ModelMBeanAttributeInfo[],ModelMBeanConstructorInfo[],ModelMBeanOperationInfo[],ModelMBeanNotificationInfo[],Descriptor) Exit"_s);
	}
}

$Object* ModelMBeanInfoSupport::clone() {
	return $of(($new(ModelMBeanInfoSupport, this)));
}

$DescriptorArray* ModelMBeanInfoSupport::getDescriptors($String* inDescriptorType$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, inDescriptorType, inDescriptorType$renamed);
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if ((inDescriptorType == nullptr) || ($nc(inDescriptorType)->isEmpty())) {
		$assign(inDescriptorType, "all"_s);
	}
	$var($DescriptorArray, retList, nullptr);
	if ($nc(inDescriptorType)->equalsIgnoreCase(ModelMBeanInfoSupport::MMB)) {
		$assign(retList, $new($DescriptorArray, {this->modelMBeanDescriptor}));
	} else if (inDescriptorType->equalsIgnoreCase(ModelMBeanInfoSupport::ATTR)) {
		$var($MBeanAttributeInfoArray, attrList, this->modelMBeanAttributes);
		int32_t numAttrs = 0;
		if (attrList != nullptr) {
			numAttrs = attrList->length;
		}
		$assign(retList, $new($DescriptorArray, numAttrs));
		for (int32_t i = 0; i < numAttrs; ++i) {
			retList->set(i, ($($nc(($cast($ModelMBeanAttributeInfo, $nc(attrList)->get(i))))->getDescriptor())));
		}
	} else if (inDescriptorType->equalsIgnoreCase(ModelMBeanInfoSupport::OPER)) {
		$var($MBeanOperationInfoArray, operList, this->modelMBeanOperations);
		int32_t numOpers = 0;
		if (operList != nullptr) {
			numOpers = operList->length;
		}
		$assign(retList, $new($DescriptorArray, numOpers));
		for (int32_t i = 0; i < numOpers; ++i) {
			retList->set(i, ($($nc(($cast($ModelMBeanOperationInfo, $nc(operList)->get(i))))->getDescriptor())));
		}
	} else if (inDescriptorType->equalsIgnoreCase(ModelMBeanInfoSupport::CONS)) {
		$var($MBeanConstructorInfoArray, consList, this->modelMBeanConstructors);
		int32_t numCons = 0;
		if (consList != nullptr) {
			numCons = consList->length;
		}
		$assign(retList, $new($DescriptorArray, numCons));
		for (int32_t i = 0; i < numCons; ++i) {
			retList->set(i, ($($nc(($cast($ModelMBeanConstructorInfo, $nc(consList)->get(i))))->getDescriptor())));
		}
	} else if (inDescriptorType->equalsIgnoreCase(ModelMBeanInfoSupport::NOTF)) {
		$var($MBeanNotificationInfoArray, notifList, this->modelMBeanNotifications);
		int32_t numNotifs = 0;
		if (notifList != nullptr) {
			numNotifs = notifList->length;
		}
		$assign(retList, $new($DescriptorArray, numNotifs));
		for (int32_t i = 0; i < numNotifs; ++i) {
			retList->set(i, ($($nc(($cast($ModelMBeanNotificationInfo, $nc(notifList)->get(i))))->getDescriptor())));
		}
	} else if (inDescriptorType->equalsIgnoreCase(ModelMBeanInfoSupport::ALL)) {
		$var($MBeanAttributeInfoArray, attrList, this->modelMBeanAttributes);
		int32_t numAttrs = 0;
		if (attrList != nullptr) {
			numAttrs = attrList->length;
		}
		$var($MBeanOperationInfoArray, operList, this->modelMBeanOperations);
		int32_t numOpers = 0;
		if (operList != nullptr) {
			numOpers = operList->length;
		}
		$var($MBeanConstructorInfoArray, consList, this->modelMBeanConstructors);
		int32_t numCons = 0;
		if (consList != nullptr) {
			numCons = consList->length;
		}
		$var($MBeanNotificationInfoArray, notifList, this->modelMBeanNotifications);
		int32_t numNotifs = 0;
		if (notifList != nullptr) {
			numNotifs = notifList->length;
		}
		int32_t count = numAttrs + numCons + numOpers + numNotifs + 1;
		$assign(retList, $new($DescriptorArray, count));
		retList->set(count - 1, this->modelMBeanDescriptor);
		int32_t j = 0;
		for (int32_t i = 0; i < numAttrs; ++i) {
			retList->set(j, ($($nc(($cast($ModelMBeanAttributeInfo, $nc(attrList)->get(i))))->getDescriptor())));
			++j;
		}
		for (int32_t i = 0; i < numCons; ++i) {
			retList->set(j, ($($nc(($cast($ModelMBeanConstructorInfo, $nc(consList)->get(i))))->getDescriptor())));
			++j;
		}
		for (int32_t i = 0; i < numOpers; ++i) {
			retList->set(j, ($($nc(($cast($ModelMBeanOperationInfo, $nc(operList)->get(i))))->getDescriptor())));
			++j;
		}
		for (int32_t i = 0; i < numNotifs; ++i) {
			retList->set(j, ($($nc(($cast($ModelMBeanNotificationInfo, $nc(notifList)->get(i))))->getDescriptor())));
			++j;
		}
	} else {
		$var($IllegalArgumentException, iae, $new($IllegalArgumentException, "Descriptor Type is invalid"_s));
		$var($String, msg, "Exception occurred trying to find the descriptors of the MBean"_s);
		$throwNew($RuntimeOperationsException, iae, msg);
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
	return retList;
}

void ModelMBeanInfoSupport::setDescriptors($DescriptorArray* inDescriptors) {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (inDescriptors == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Descriptor list is invalid"_s), "Exception occurred trying to set the descriptors of the MBeanInfo"_s);
	}
	if ($nc(inDescriptors)->length == 0) {
		return;
	}
	for (int32_t j = 0; j < $nc(inDescriptors)->length; ++j) {
		setDescriptor(inDescriptors->get(j), nullptr);
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

$Descriptor* ModelMBeanInfoSupport::getDescriptor($String* inDescriptorName) {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	return (getDescriptor(inDescriptorName, nullptr));
}

$Descriptor* ModelMBeanInfoSupport::getDescriptor($String* inDescriptorName, $String* inDescriptorType) {
	$useLocalCurrentObjectStackCache();
	if (inDescriptorName == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Descriptor is invalid"_s), "Exception occurred trying to set the descriptors of the MBeanInfo"_s);
	}
	if ($nc(ModelMBeanInfoSupport::MMB)->equalsIgnoreCase(inDescriptorType)) {
		return $cast($Descriptor, $nc(this->modelMBeanDescriptor)->clone());
	}
	if ($nc(ModelMBeanInfoSupport::ATTR)->equalsIgnoreCase(inDescriptorType) || inDescriptorType == nullptr) {
		$var($ModelMBeanAttributeInfo, attr, getAttribute(inDescriptorName));
		if (attr != nullptr) {
			return attr->getDescriptor();
		}
		if (inDescriptorType != nullptr) {
			return nullptr;
		}
	}
	if ($nc(ModelMBeanInfoSupport::OPER)->equalsIgnoreCase(inDescriptorType) || inDescriptorType == nullptr) {
		$var($ModelMBeanOperationInfo, oper, getOperation(inDescriptorName));
		if (oper != nullptr) {
			return oper->getDescriptor();
		}
		if (inDescriptorType != nullptr) {
			return nullptr;
		}
	}
	if ($nc(ModelMBeanInfoSupport::CONS)->equalsIgnoreCase(inDescriptorType) || inDescriptorType == nullptr) {
		$var($ModelMBeanConstructorInfo, oper, getConstructor(inDescriptorName));
		if (oper != nullptr) {
			return oper->getDescriptor();
		}
		if (inDescriptorType != nullptr) {
			return nullptr;
		}
	}
	if ($nc(ModelMBeanInfoSupport::NOTF)->equalsIgnoreCase(inDescriptorType) || inDescriptorType == nullptr) {
		$var($ModelMBeanNotificationInfo, notif, getNotification(inDescriptorName));
		if (notif != nullptr) {
			return notif->getDescriptor();
		}
		if (inDescriptorType != nullptr) {
			return nullptr;
		}
	}
	if (inDescriptorType == nullptr) {
		return nullptr;
	}
	$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Descriptor Type is invalid"_s), "Exception occurred trying to find the descriptors of the MBean"_s);
}

void ModelMBeanInfoSupport::setDescriptor($Descriptor* inDescriptor$renamed, $String* inDescriptorType$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, inDescriptorType, inDescriptorType$renamed);
	$var($Descriptor, inDescriptor, inDescriptor$renamed);
	$var($String, excMsg, "Exception occurred trying to set the descriptors of the MBean"_s);
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (inDescriptor == nullptr) {
		$assign(inDescriptor, $new($DescriptorSupport));
	}
	if ((inDescriptorType == nullptr) || ($nc(inDescriptorType)->isEmpty())) {
		$assign(inDescriptorType, $cast($String, $nc(inDescriptor)->getFieldValue("descriptorType"_s)));
		if (inDescriptorType == nullptr) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"descriptorType null in both String parameter and Descriptor, defaulting to "_s, ModelMBeanInfoSupport::MMB}));
			$assign(inDescriptorType, ModelMBeanInfoSupport::MMB);
		}
	}
	$var($String, inDescriptorName, $cast($String, $nc(inDescriptor)->getFieldValue("name"_s)));
	if (inDescriptorName == nullptr) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"descriptor name null, defaulting to "_s, $(this->getClassName())}));
		$assign(inDescriptorName, this->getClassName());
	}
	bool found = false;
	if ($nc(inDescriptorType)->equalsIgnoreCase(ModelMBeanInfoSupport::MMB)) {
		setMBeanDescriptor(inDescriptor);
		found = true;
	} else if (inDescriptorType->equalsIgnoreCase(ModelMBeanInfoSupport::ATTR)) {
		$var($MBeanAttributeInfoArray, attrList, this->modelMBeanAttributes);
		int32_t numAttrs = 0;
		if (attrList != nullptr) {
			numAttrs = attrList->length;
		}
		for (int32_t i = 0; i < numAttrs; ++i) {
			if ($nc(inDescriptorName)->equals($($nc($nc(attrList)->get(i))->getName()))) {
				found = true;
				$var($ModelMBeanAttributeInfo, mmbai, $cast($ModelMBeanAttributeInfo, $nc(attrList)->get(i)));
				$nc(mmbai)->setDescriptor(inDescriptor);
				if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
					$var($StringBuilder, strb, $$new($StringBuilder)->append("Setting descriptor to "_s)->append($of(inDescriptor))->append("\t\n local: AttributeInfo descriptor is "_s)->append($($of(mmbai->getDescriptor())))->append("\t\n modelMBeanInfo: AttributeInfo descriptor is "_s)->append($($of(this->getDescriptor(inDescriptorName, "attribute"_s)))));
					$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(ModelMBeanInfoSupport$$Lambda$toString, static_cast<$StringBuilder*>(strb))));
				}
			}
		}
	} else if (inDescriptorType->equalsIgnoreCase(ModelMBeanInfoSupport::OPER)) {
		$var($MBeanOperationInfoArray, operList, this->modelMBeanOperations);
		int32_t numOpers = 0;
		if (operList != nullptr) {
			numOpers = operList->length;
		}
		for (int32_t i = 0; i < numOpers; ++i) {
			if ($nc(inDescriptorName)->equals($($nc($nc(operList)->get(i))->getName()))) {
				found = true;
				$var($ModelMBeanOperationInfo, mmboi, $cast($ModelMBeanOperationInfo, $nc(operList)->get(i)));
				$nc(mmboi)->setDescriptor(inDescriptor);
			}
		}
	} else if (inDescriptorType->equalsIgnoreCase(ModelMBeanInfoSupport::CONS)) {
		$var($MBeanConstructorInfoArray, consList, this->modelMBeanConstructors);
		int32_t numCons = 0;
		if (consList != nullptr) {
			numCons = consList->length;
		}
		for (int32_t i = 0; i < numCons; ++i) {
			if ($nc(inDescriptorName)->equals($($nc($nc(consList)->get(i))->getName()))) {
				found = true;
				$var($ModelMBeanConstructorInfo, mmbci, $cast($ModelMBeanConstructorInfo, $nc(consList)->get(i)));
				$nc(mmbci)->setDescriptor(inDescriptor);
			}
		}
	} else if (inDescriptorType->equalsIgnoreCase(ModelMBeanInfoSupport::NOTF)) {
		$var($MBeanNotificationInfoArray, notifList, this->modelMBeanNotifications);
		int32_t numNotifs = 0;
		if (notifList != nullptr) {
			numNotifs = notifList->length;
		}
		for (int32_t i = 0; i < numNotifs; ++i) {
			if ($nc(inDescriptorName)->equals($($nc($nc(notifList)->get(i))->getName()))) {
				found = true;
				$var($ModelMBeanNotificationInfo, mmbni, $cast($ModelMBeanNotificationInfo, $nc(notifList)->get(i)));
				$nc(mmbni)->setDescriptor(inDescriptor);
			}
		}
	} else {
		$var($RuntimeException, iae, $new($IllegalArgumentException, $$str({"Invalid descriptor type: "_s, inDescriptorType})));
		$throwNew($RuntimeOperationsException, iae, excMsg);
	}
	if (!found) {
		$var($RuntimeException, iae, $new($IllegalArgumentException, $$str({"Descriptor name is invalid: type="_s, inDescriptorType, "; name="_s, inDescriptorName})));
		$throwNew($RuntimeOperationsException, iae, excMsg);
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

$ModelMBeanAttributeInfo* ModelMBeanInfoSupport::getAttribute($String* inName) {
	$useLocalCurrentObjectStackCache();
	$var($ModelMBeanAttributeInfo, retInfo, nullptr);
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (inName == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Attribute Name is null"_s), "Exception occurred trying to get the ModelMBeanAttributeInfo of the MBean"_s);
	}
	$var($MBeanAttributeInfoArray, attrList, this->modelMBeanAttributes);
	int32_t numAttrs = 0;
	if (attrList != nullptr) {
		numAttrs = attrList->length;
	}
	for (int32_t i = 0; (i < numAttrs) && (retInfo == nullptr); ++i) {
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$var($StringBuilder, strb, $$new($StringBuilder)->append("\t\n this.getAttributes() MBeanAttributeInfo Array "_s)->append(i)->append(":"_s)->append($($of($nc(($cast($ModelMBeanAttributeInfo, $nc(attrList)->get(i))))->getDescriptor())))->append("\t\n this.modelMBeanAttributes MBeanAttributeInfo Array "_s)->append(i)->append(":"_s)->append($($of($nc(($cast($ModelMBeanAttributeInfo, $nc(this->modelMBeanAttributes)->get(i))))->getDescriptor()))));
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(ModelMBeanInfoSupport$$Lambda$toString, static_cast<$StringBuilder*>(strb))));
		}
		if ($nc(inName)->equals($($nc($nc(attrList)->get(i))->getName()))) {
			$assign(retInfo, $cast($ModelMBeanAttributeInfo, $nc($nc(attrList)->get(i))->clone()));
		}
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
	return retInfo;
}

$ModelMBeanOperationInfo* ModelMBeanInfoSupport::getOperation($String* inName) {
	$useLocalCurrentObjectStackCache();
	$var($ModelMBeanOperationInfo, retInfo, nullptr);
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (inName == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "inName is null"_s), "Exception occurred trying to get the ModelMBeanOperationInfo of the MBean"_s);
	}
	$var($MBeanOperationInfoArray, operList, this->modelMBeanOperations);
	int32_t numOpers = 0;
	if (operList != nullptr) {
		numOpers = operList->length;
	}
	for (int32_t i = 0; (i < numOpers) && (retInfo == nullptr); ++i) {
		if ($nc(inName)->equals($($nc($nc(operList)->get(i))->getName()))) {
			$assign(retInfo, $cast($ModelMBeanOperationInfo, $nc($nc(operList)->get(i))->clone()));
		}
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
	return retInfo;
}

$ModelMBeanConstructorInfo* ModelMBeanInfoSupport::getConstructor($String* inName) {
	$useLocalCurrentObjectStackCache();
	$var($ModelMBeanConstructorInfo, retInfo, nullptr);
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (inName == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Constructor name is null"_s), "Exception occurred trying to get the ModelMBeanConstructorInfo of the MBean"_s);
	}
	$var($MBeanConstructorInfoArray, consList, this->modelMBeanConstructors);
	int32_t numCons = 0;
	if (consList != nullptr) {
		numCons = consList->length;
	}
	for (int32_t i = 0; (i < numCons) && (retInfo == nullptr); ++i) {
		if ($nc(inName)->equals($($nc($nc(consList)->get(i))->getName()))) {
			$assign(retInfo, $cast($ModelMBeanConstructorInfo, $nc($nc(consList)->get(i))->clone()));
		}
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
	return retInfo;
}

$ModelMBeanNotificationInfo* ModelMBeanInfoSupport::getNotification($String* inName) {
	$useLocalCurrentObjectStackCache();
	$var($ModelMBeanNotificationInfo, retInfo, nullptr);
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (inName == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Notification name is null"_s), "Exception occurred trying to get the ModelMBeanNotificationInfo of the MBean"_s);
	}
	$var($MBeanNotificationInfoArray, notifList, this->modelMBeanNotifications);
	int32_t numNotifs = 0;
	if (notifList != nullptr) {
		numNotifs = notifList->length;
	}
	for (int32_t i = 0; (i < numNotifs) && (retInfo == nullptr); ++i) {
		if ($nc(inName)->equals($($nc($nc(notifList)->get(i))->getName()))) {
			$assign(retInfo, $cast($ModelMBeanNotificationInfo, $nc($nc(notifList)->get(i))->clone()));
		}
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
	return retInfo;
}

$Descriptor* ModelMBeanInfoSupport::getDescriptor() {
	return getMBeanDescriptorNoException();
}

$Descriptor* ModelMBeanInfoSupport::getMBeanDescriptor() {
	return getMBeanDescriptorNoException();
}

$Descriptor* ModelMBeanInfoSupport::getMBeanDescriptorNoException() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (this->modelMBeanDescriptor == nullptr) {
		$set(this, modelMBeanDescriptor, validDescriptor(nullptr));
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Exit, returning: "_s, this->modelMBeanDescriptor}));
	}
	return $cast($Descriptor, $nc(this->modelMBeanDescriptor)->clone());
}

void ModelMBeanInfoSupport::setMBeanDescriptor($Descriptor* inMBeanDescriptor) {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	$set(this, modelMBeanDescriptor, validDescriptor(inMBeanDescriptor));
}

$Descriptor* ModelMBeanInfoSupport::validDescriptor($Descriptor* in) {
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
		clone->setField("name"_s, $(this->getClassName()));
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Defaulting Descriptor name to "_s, $(this->getClassName())}));
	}
	if (defaulted && $nc(clone)->getFieldValue("descriptorType"_s) == nullptr) {
		clone->setField("descriptorType"_s, ModelMBeanInfoSupport::MMB);
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Defaulting descriptorType to \""_s, ModelMBeanInfoSupport::MMB, "\""_s}));
	}
	if ($nc(clone)->getFieldValue("displayName"_s) == nullptr) {
		clone->setField("displayName"_s, $(this->getClassName()));
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Defaulting Descriptor displayName to "_s, $(this->getClassName())}));
	}
	if ($nc(clone)->getFieldValue("persistPolicy"_s) == nullptr) {
		clone->setField("persistPolicy"_s, "never"_s);
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Defaulting Descriptor persistPolicy to \"never\""_s);
	}
	if ($nc(clone)->getFieldValue("log"_s) == nullptr) {
		clone->setField("log"_s, "F"_s);
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Defaulting Descriptor \"log\" field to \"F\""_s);
	}
	if ($nc(clone)->getFieldValue("visibility"_s) == nullptr) {
		clone->setField("visibility"_s, "1"_s);
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Defaulting Descriptor visibility to 1"_s);
	}
	if (!$nc(clone)->isValid()) {
		$var($RuntimeException, var$0, static_cast<$RuntimeException*>($new($IllegalArgumentException, "Invalid Descriptor argument"_s)));
		$throwNew($RuntimeOperationsException, var$0, $$str({"The isValid() method of the Descriptor object itself returned false,one or more required fields are invalid. Descriptor:"_s, $($of(clone)->toString())}));
	}
	if (!$nc(($cast($String, $($nc(clone)->getFieldValue("descriptorType"_s)))))->equalsIgnoreCase(ModelMBeanInfoSupport::MMB)) {
		$var($RuntimeException, var$1, static_cast<$RuntimeException*>($new($IllegalArgumentException, "Invalid Descriptor argument"_s)));
		$throwNew($RuntimeOperationsException, var$1, $$str({"The Descriptor \"descriptorType\" field does not match the object described.  Expected: "_s, ModelMBeanInfoSupport::MMB, " , was: "_s, $(clone->getFieldValue("descriptorType"_s))}));
	}
	return clone;
}

void ModelMBeanInfoSupport::readObject($ObjectInputStream* in) {
	if (ModelMBeanInfoSupport::compat) {
		$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
		$set(this, modelMBeanDescriptor, $cast($Descriptor, $nc(fields)->get("modelMBeanDescriptor"_s, ($Object*)nullptr)));
		if (fields->defaulted("modelMBeanDescriptor"_s)) {
			$throwNew($NullPointerException, "modelMBeanDescriptor"_s);
		}
		$set(this, modelMBeanAttributes, $cast($MBeanAttributeInfoArray, fields->get("mmbAttributes"_s, ($Object*)nullptr)));
		if (fields->defaulted("mmbAttributes"_s)) {
			$throwNew($NullPointerException, "mmbAttributes"_s);
		}
		$set(this, modelMBeanConstructors, $cast($MBeanConstructorInfoArray, fields->get("mmbConstructors"_s, ($Object*)nullptr)));
		if (fields->defaulted("mmbConstructors"_s)) {
			$throwNew($NullPointerException, "mmbConstructors"_s);
		}
		$set(this, modelMBeanNotifications, $cast($MBeanNotificationInfoArray, fields->get("mmbNotifications"_s, ($Object*)nullptr)));
		if (fields->defaulted("mmbNotifications"_s)) {
			$throwNew($NullPointerException, "mmbNotifications"_s);
		}
		$set(this, modelMBeanOperations, $cast($MBeanOperationInfoArray, fields->get("mmbOperations"_s, ($Object*)nullptr)));
		if (fields->defaulted("mmbOperations"_s)) {
			$throwNew($NullPointerException, "mmbOperations"_s);
		}
	} else {
		$nc(in)->defaultReadObject();
	}
}

void ModelMBeanInfoSupport::writeObject($ObjectOutputStream* out) {
	if (ModelMBeanInfoSupport::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("modelMBeanDescriptor"_s, $of(this->modelMBeanDescriptor));
		fields->put("mmbAttributes"_s, $of(this->modelMBeanAttributes));
		fields->put("mmbConstructors"_s, $of(this->modelMBeanConstructors));
		fields->put("mmbNotifications"_s, $of(this->modelMBeanNotifications));
		fields->put("mmbOperations"_s, $of(this->modelMBeanOperations));
		fields->put("currClass"_s, $of(ModelMBeanInfoSupport::currClass));
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void clinit$ModelMBeanInfoSupport($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ModelMBeanInfoSupport::ATTR, "attribute"_s);
	$assignStatic(ModelMBeanInfoSupport::OPER, "operation"_s);
	$assignStatic(ModelMBeanInfoSupport::NOTF, "notification"_s);
	$assignStatic(ModelMBeanInfoSupport::CONS, "constructor"_s);
	$assignStatic(ModelMBeanInfoSupport::MMB, "mbean"_s);
	$assignStatic(ModelMBeanInfoSupport::ALL, "all"_s);
	$assignStatic(ModelMBeanInfoSupport::currClass, "ModelMBeanInfoSupport"_s);
	$beforeCallerSensitive();
	$load($Descriptor);
	$load($MBeanAttributeInfoArray);
	$load($MBeanConstructorInfoArray);
	$load($MBeanNotificationInfoArray);
	$load($MBeanOperationInfoArray);
	$assignStatic(ModelMBeanInfoSupport::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "modelMBeanDescriptor"_s, $Descriptor::class$),
		$$new($ObjectStreamField, "mmbAttributes"_s, $getClass($MBeanAttributeInfoArray)),
		$$new($ObjectStreamField, "mmbConstructors"_s, $getClass($MBeanConstructorInfoArray)),
		$$new($ObjectStreamField, "mmbNotifications"_s, $getClass($MBeanNotificationInfoArray)),
		$$new($ObjectStreamField, "mmbOperations"_s, $getClass($MBeanOperationInfoArray)),
		$$new($ObjectStreamField, "currClass"_s, $String::class$)
	}));
	$assignStatic(ModelMBeanInfoSupport::newSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "modelMBeanDescriptor"_s, $Descriptor::class$),
		$$new($ObjectStreamField, "modelMBeanAttributes"_s, $getClass($MBeanAttributeInfoArray)),
		$$new($ObjectStreamField, "modelMBeanConstructors"_s, $getClass($MBeanConstructorInfoArray)),
		$$new($ObjectStreamField, "modelMBeanNotifications"_s, $getClass($MBeanNotificationInfoArray)),
		$$new($ObjectStreamField, "modelMBeanOperations"_s, $getClass($MBeanOperationInfoArray))
	}));
	ModelMBeanInfoSupport::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			ModelMBeanInfoSupport::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (ModelMBeanInfoSupport::compat) {
			$assignStatic(ModelMBeanInfoSupport::serialPersistentFields, ModelMBeanInfoSupport::oldSerialPersistentFields);
			ModelMBeanInfoSupport::serialVersionUID = ModelMBeanInfoSupport::oldSerialVersionUID;
		} else {
			$assignStatic(ModelMBeanInfoSupport::serialPersistentFields, ModelMBeanInfoSupport::newSerialPersistentFields);
			ModelMBeanInfoSupport::serialVersionUID = ModelMBeanInfoSupport::newSerialVersionUID;
		}
	}
	$assignStatic(ModelMBeanInfoSupport::NO_ATTRIBUTES, $new($ModelMBeanAttributeInfoArray, 0));
	$assignStatic(ModelMBeanInfoSupport::NO_CONSTRUCTORS, $new($ModelMBeanConstructorInfoArray, 0));
	$assignStatic(ModelMBeanInfoSupport::NO_NOTIFICATIONS, $new($ModelMBeanNotificationInfoArray, 0));
	$assignStatic(ModelMBeanInfoSupport::NO_OPERATIONS, $new($ModelMBeanOperationInfoArray, 0));
}

ModelMBeanInfoSupport::ModelMBeanInfoSupport() {
}

$Class* ModelMBeanInfoSupport::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ModelMBeanInfoSupport$$Lambda$toString::classInfo$.name)) {
			return ModelMBeanInfoSupport$$Lambda$toString::load$(name, initialize);
		}
	}
	$loadClass(ModelMBeanInfoSupport, name, initialize, &_ModelMBeanInfoSupport_ClassInfo_, clinit$ModelMBeanInfoSupport, allocate$ModelMBeanInfoSupport);
	return class$;
}

$Class* ModelMBeanInfoSupport::class$ = nullptr;

		} // modelmbean
	} // management
} // javax