#include <javax/management/relation/MBeanServerNotificationFilter.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/management/MBeanServerNotification.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationFilterSupport.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

#undef REGISTRATION_NOTIFICATION
#undef RELATION_LOGGER
#undef TRACE
#undef UNREGISTRATION_NOTIFICATION

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $MBeanServerNotification = ::javax::management::MBeanServerNotification;
using $Notification = ::javax::management::Notification;
using $NotificationFilterSupport = ::javax::management::NotificationFilterSupport;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _MBeanServerNotificationFilter_FieldInfo_[] = {
	{"oldSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerNotificationFilter, oldSerialVersionUID)},
	{"newSerialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerNotificationFilter, newSerialVersionUID)},
	{"oldSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MBeanServerNotificationFilter, oldSerialPersistentFields)},
	{"newSerialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MBeanServerNotificationFilter, newSerialPersistentFields)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MBeanServerNotificationFilter, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MBeanServerNotificationFilter, serialPersistentFields)},
	{"compat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MBeanServerNotificationFilter, compat)},
	{"selectedNames", "Ljava/util/List;", "Ljava/util/List<Ljavax/management/ObjectName;>;", $PRIVATE, $field(MBeanServerNotificationFilter, selectedNames)},
	{"deselectedNames", "Ljava/util/List;", "Ljava/util/List<Ljavax/management/ObjectName;>;", $PRIVATE, $field(MBeanServerNotificationFilter, deselectedNames)},
	{}
};

$MethodInfo _MBeanServerNotificationFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MBeanServerNotificationFilter::*)()>(&MBeanServerNotificationFilter::init$))},
	{"disableAllObjectNames", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"disableObjectName", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"enableAllObjectNames", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"enableObjectName", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"getDisabledObjectNames", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljavax/management/ObjectName;>;", $PUBLIC | $SYNCHRONIZED},
	{"getEnabledObjectNames", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljavax/management/ObjectName;>;", $PUBLIC | $SYNCHRONIZED},
	{"isNotificationEnabled", "(Ljavax/management/Notification;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanServerNotificationFilter::*)($ObjectInputStream*)>(&MBeanServerNotificationFilter::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanServerNotificationFilter::*)($ObjectOutputStream*)>(&MBeanServerNotificationFilter::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _MBeanServerNotificationFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.MBeanServerNotificationFilter",
	"javax.management.NotificationFilterSupport",
	nullptr,
	_MBeanServerNotificationFilter_FieldInfo_,
	_MBeanServerNotificationFilter_MethodInfo_
};

$Object* allocate$MBeanServerNotificationFilter($Class* clazz) {
	return $of($alloc(MBeanServerNotificationFilter));
}

$ObjectStreamFieldArray* MBeanServerNotificationFilter::oldSerialPersistentFields = nullptr;
$ObjectStreamFieldArray* MBeanServerNotificationFilter::newSerialPersistentFields = nullptr;
int64_t MBeanServerNotificationFilter::serialVersionUID = 0;
$ObjectStreamFieldArray* MBeanServerNotificationFilter::serialPersistentFields = nullptr;
bool MBeanServerNotificationFilter::compat = false;

void MBeanServerNotificationFilter::init$() {
	$NotificationFilterSupport::init$();
	$set(this, selectedNames, $new($Vector));
	$set(this, deselectedNames, nullptr);
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
	$init($MBeanServerNotification);
	enableType($MBeanServerNotification::REGISTRATION_NOTIFICATION);
	enableType($MBeanServerNotification::UNREGISTRATION_NOTIFICATION);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void MBeanServerNotificationFilter::disableAllObjectNames() {
	$synchronized(this) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
		$set(this, selectedNames, $new($Vector));
		$set(this, deselectedNames, nullptr);
		$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
		return;
	}
}

void MBeanServerNotificationFilter::disableObjectName($ObjectName* objectName) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (objectName == nullptr) {
			$var($String, excMsg, "Invalid parameter."_s);
			$throwNew($IllegalArgumentException, excMsg);
		}
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, $$str({"ENTRY {0}"_s, objectName}));
		if (this->selectedNames != nullptr) {
			if ($nc(this->selectedNames)->size() != 0) {
				$nc(this->selectedNames)->remove($of(objectName));
			}
		}
		if (this->deselectedNames != nullptr) {
			if (!($nc(this->deselectedNames)->contains(objectName))) {
				$nc(this->deselectedNames)->add(objectName);
			}
		}
		$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
		return;
	}
}

void MBeanServerNotificationFilter::enableAllObjectNames() {
	$synchronized(this) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
		$set(this, selectedNames, nullptr);
		$set(this, deselectedNames, $new($Vector));
		$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
		return;
	}
}

void MBeanServerNotificationFilter::enableObjectName($ObjectName* objectName) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (objectName == nullptr) {
			$var($String, excMsg, "Invalid parameter."_s);
			$throwNew($IllegalArgumentException, excMsg);
		}
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(objectName)}));
		if (this->deselectedNames != nullptr) {
			if ($nc(this->deselectedNames)->size() != 0) {
				$nc(this->deselectedNames)->remove($of(objectName));
			}
		}
		if (this->selectedNames != nullptr) {
			if (!($nc(this->selectedNames)->contains(objectName))) {
				$nc(this->selectedNames)->add(objectName);
			}
		}
		$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
		return;
	}
}

$Vector* MBeanServerNotificationFilter::getEnabledObjectNames() {
	$synchronized(this) {
		if (this->selectedNames != nullptr) {
			return $new($Vector, static_cast<$Collection*>(this->selectedNames));
		} else {
			return nullptr;
		}
	}
}

$Vector* MBeanServerNotificationFilter::getDisabledObjectNames() {
	$synchronized(this) {
		if (this->deselectedNames != nullptr) {
			return $new($Vector, static_cast<$Collection*>(this->deselectedNames));
		} else {
			return nullptr;
		}
	}
}

bool MBeanServerNotificationFilter::isNotificationEnabled($Notification* notif) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (notif == nullptr) {
			$var($String, excMsg, "Invalid parameter."_s);
			$throwNew($IllegalArgumentException, excMsg);
		}
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(notif)}));
		$var($String, ntfType, $nc(notif)->getType());
		$var($Vector, enabledTypes, getEnabledTypes());
		if (!($nc(enabledTypes)->contains(ntfType))) {
			$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "Type not selected, exiting"_s);
			return false;
		}
		$var($MBeanServerNotification, mbsNtf, $cast($MBeanServerNotification, notif));
		$var($ObjectName, objName, mbsNtf->getMBeanName());
		bool isSelectedFlg = false;
		if (this->selectedNames != nullptr) {
			if ($nc(this->selectedNames)->size() == 0) {
				$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "No ObjectNames selected, exiting"_s);
				return false;
			}
			isSelectedFlg = $nc(this->selectedNames)->contains(objName);
			if (!isSelectedFlg) {
				$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ObjectName not in selected list, exiting"_s);
				return false;
			}
		}
		if (!isSelectedFlg) {
			if (this->deselectedNames == nullptr) {
				$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ObjectName not selected, and all names deselected, exiting"_s);
				return false;
			} else if ($nc(this->deselectedNames)->contains(objName)) {
				$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ObjectName explicitly not selected, exiting"_s);
				return false;
			}
		}
		$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ObjectName selected, exiting"_s);
		return true;
	}
}

void MBeanServerNotificationFilter::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	if (MBeanServerNotificationFilter::compat) {
		$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
		$set(this, selectedNames, $cast($List, $Util::cast($($nc(fields)->get("mySelectObjNameList"_s, ($Object*)nullptr)))));
		if ($nc(fields)->defaulted("mySelectObjNameList"_s)) {
			$throwNew($NullPointerException, "mySelectObjNameList"_s);
		}
		$set(this, deselectedNames, $cast($List, $Util::cast($($nc(fields)->get("myDeselectObjNameList"_s, ($Object*)nullptr)))));
		if ($nc(fields)->defaulted("myDeselectObjNameList"_s)) {
			$throwNew($NullPointerException, "myDeselectObjNameList"_s);
		}
	} else {
		$nc(in)->defaultReadObject();
	}
}

void MBeanServerNotificationFilter::writeObject($ObjectOutputStream* out) {
	if (MBeanServerNotificationFilter::compat) {
		$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
		$nc(fields)->put("mySelectObjNameList"_s, $of(this->selectedNames));
		fields->put("myDeselectObjNameList"_s, $of(this->deselectedNames));
		out->writeFields();
	} else {
		$nc(out)->defaultWriteObject();
	}
}

void clinit$MBeanServerNotificationFilter($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($Vector);
	$assignStatic(MBeanServerNotificationFilter::oldSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "mySelectObjNameList"_s, $Vector::class$),
		$$new($ObjectStreamField, "myDeselectObjNameList"_s, $Vector::class$)
	}));
	$load($List);
	$assignStatic(MBeanServerNotificationFilter::newSerialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "selectedNames"_s, $List::class$),
		$$new($ObjectStreamField, "deselectedNames"_s, $List::class$)
	}));
	MBeanServerNotificationFilter::compat = false;
	{
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			MBeanServerNotificationFilter::compat = (form != nullptr && form->equals("1.0"_s));
		} catch ($Exception& e) {
		}
		if (MBeanServerNotificationFilter::compat) {
			$assignStatic(MBeanServerNotificationFilter::serialPersistentFields, MBeanServerNotificationFilter::oldSerialPersistentFields);
			MBeanServerNotificationFilter::serialVersionUID = MBeanServerNotificationFilter::oldSerialVersionUID;
		} else {
			$assignStatic(MBeanServerNotificationFilter::serialPersistentFields, MBeanServerNotificationFilter::newSerialPersistentFields);
			MBeanServerNotificationFilter::serialVersionUID = MBeanServerNotificationFilter::newSerialVersionUID;
		}
	}
}

MBeanServerNotificationFilter::MBeanServerNotificationFilter() {
}

$Class* MBeanServerNotificationFilter::load$($String* name, bool initialize) {
	$loadClass(MBeanServerNotificationFilter, name, initialize, &_MBeanServerNotificationFilter_ClassInfo_, clinit$MBeanServerNotificationFilter, allocate$MBeanServerNotificationFilter);
	return class$;
}

$Class* MBeanServerNotificationFilter::class$ = nullptr;

		} // relation
	} // management
} // javax