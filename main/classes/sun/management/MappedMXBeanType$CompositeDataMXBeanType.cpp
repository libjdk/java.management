#include <sun/management/MappedMXBeanType$CompositeDataMXBeanType.h>

#include <java/lang/AssertionError.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/management/LockInfo.h>
#include <java/lang/management/MemoryNotificationInfo.h>
#include <java/lang/management/MemoryUsage.h>
#include <java/lang/management/MonitorInfo.h>
#include <java/lang/management/ThreadInfo.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeDataSupport.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/management/LockInfoCompositeData.h>
#include <sun/management/MappedMXBeanType$CompositeDataMXBeanType$1.h>
#include <sun/management/MappedMXBeanType$CompositeDataMXBeanType$2.h>
#include <sun/management/MappedMXBeanType.h>
#include <sun/management/MemoryNotifInfoCompositeData.h>
#include <sun/management/MemoryUsageCompositeData.h>
#include <sun/management/MonitorInfoCompositeData.h>
#include <sun/management/ThreadInfoCompositeData.h>
#include <jcpp.h>

#undef COMPOSITE_DATA_CLASS
#undef TYPE

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $OpenTypeArray = $Array<::javax::management::openmbean::OpenType>;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Void = ::java::lang::Void;
using $LockInfo = ::java::lang::management::LockInfo;
using $MemoryNotificationInfo = ::java::lang::management::MemoryNotificationInfo;
using $MemoryUsage = ::java::lang::management::MemoryUsage;
using $MonitorInfo = ::java::lang::management::MonitorInfo;
using $ThreadInfo = ::java::lang::management::ThreadInfo;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Type = ::java::lang::reflect::Type;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeDataSupport = ::javax::management::openmbean::CompositeDataSupport;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $LockInfoCompositeData = ::sun::management::LockInfoCompositeData;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;
using $MappedMXBeanType$CompositeDataMXBeanType$1 = ::sun::management::MappedMXBeanType$CompositeDataMXBeanType$1;
using $MappedMXBeanType$CompositeDataMXBeanType$2 = ::sun::management::MappedMXBeanType$CompositeDataMXBeanType$2;
using $MemoryNotifInfoCompositeData = ::sun::management::MemoryNotifInfoCompositeData;
using $MemoryUsageCompositeData = ::sun::management::MemoryUsageCompositeData;
using $MonitorInfoCompositeData = ::sun::management::MonitorInfoCompositeData;
using $ThreadInfoCompositeData = ::sun::management::ThreadInfoCompositeData;

namespace sun {
	namespace management {

$FieldInfo _MappedMXBeanType$CompositeDataMXBeanType_FieldInfo_[] = {
	{"javaClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(MappedMXBeanType$CompositeDataMXBeanType, javaClass)},
	{"isCompositeData", "Z", nullptr, 0, $field(MappedMXBeanType$CompositeDataMXBeanType, isCompositeData)},
	{"fromMethod", "Ljava/lang/reflect/Method;", nullptr, 0, $field(MappedMXBeanType$CompositeDataMXBeanType, fromMethod)},
	{"toMethod", "Ljava/lang/reflect/Method;", nullptr, 0, $field(MappedMXBeanType$CompositeDataMXBeanType, toMethod)},
	{}
};

$MethodInfo _MappedMXBeanType$CompositeDataMXBeanType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", 0, $method(static_cast<void(MappedMXBeanType$CompositeDataMXBeanType::*)($Class*)>(&MappedMXBeanType$CompositeDataMXBeanType::init$)), "javax.management.openmbean.OpenDataException"},
	{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"toJavaTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.openmbean.OpenDataException,java.io.InvalidObjectException"},
	{"toOpenTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.openmbean.OpenDataException"},
	{}
};

$InnerClassInfo _MappedMXBeanType$CompositeDataMXBeanType_InnerClassesInfo_[] = {
	{"sun.management.MappedMXBeanType$CompositeDataMXBeanType", "sun.management.MappedMXBeanType", "CompositeDataMXBeanType", $STATIC},
	{"sun.management.MappedMXBeanType$CompositeDataMXBeanType$2", nullptr, nullptr, 0},
	{"sun.management.MappedMXBeanType$CompositeDataMXBeanType$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MappedMXBeanType$CompositeDataMXBeanType_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.MappedMXBeanType$CompositeDataMXBeanType",
	"sun.management.MappedMXBeanType",
	nullptr,
	_MappedMXBeanType$CompositeDataMXBeanType_FieldInfo_,
	_MappedMXBeanType$CompositeDataMXBeanType_MethodInfo_,
	nullptr,
	nullptr,
	_MappedMXBeanType$CompositeDataMXBeanType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.MappedMXBeanType"
};

$Object* allocate$MappedMXBeanType$CompositeDataMXBeanType($Class* clazz) {
	return $of($alloc(MappedMXBeanType$CompositeDataMXBeanType));
}

void MappedMXBeanType$CompositeDataMXBeanType::init$($Class* c) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$MappedMXBeanType::init$();
	this->isCompositeData = false;
	$set(this, fromMethod, nullptr);
	$set(this, toMethod, nullptr);
	$set(this, javaClass, c);
	$init($MappedMXBeanType);
	$set(this, mappedTypeClass, $MappedMXBeanType::COMPOSITE_DATA_CLASS);
	try {
		$set(this, fromMethod, $cast($Method, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($MappedMXBeanType$CompositeDataMXBeanType$1, this)))));
	} catch ($PrivilegedActionException& e) {
	}
	if ($nc($MappedMXBeanType::COMPOSITE_DATA_CLASS)->isAssignableFrom(c)) {
		this->isCompositeData = true;
		$set(this, openType, nullptr);
	} else {
		this->isCompositeData = false;
		$var($MethodArray, methods, $cast($MethodArray, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($MappedMXBeanType$CompositeDataMXBeanType$2, this)))));
		$var($List, names, $new($ArrayList));
		$var($List, types, $new($ArrayList));
		for (int32_t i = 0; i < $nc(methods)->length; ++i) {
			$var($Method, method, methods->get(i));
			$var($String, name, $nc(method)->getName());
			$var($Type, type, method->getGenericReturnType());
			$var($String, rest, nullptr);
			if ($nc(name)->startsWith("get"_s)) {
				$assign(rest, name->substring(3));
			} else {
				$init($Boolean);
				if (name->startsWith("is"_s) && $instanceOf($Class, type) && ($cast($Class, type)) == $Boolean::TYPE) {
					$assign(rest, name->substring(2));
				} else {
					continue;
				}
			}
			bool var$1 = $nc(rest)->isEmpty();
			$init($Void);
			bool var$0 = var$1 || $nc($(method->getParameterTypes()))->length > 0 || $equals(type, $Void::TYPE);
			if (var$0 || $nc(rest)->equals("Class"_s)) {
				continue;
			}
			names->add($($MappedMXBeanType::decapitalize(rest)));
			types->add($(toOpenType(type)));
		}
		$var($StringArray, nameArray, $fcast($StringArray, names->toArray($$new($StringArray, 0))));
		$var($String, var$2, $nc(c)->getName());
		$var($String, var$3, c->getName());
		$var($StringArray, var$4, nameArray);
		$var($StringArray, var$5, nameArray);
		$set(this, openType, $new($CompositeType, var$2, var$3, var$4, var$5, $fcast($OpenTypeArray, $(types->toArray($$new($OpenTypeArray, 0))))));
	}
}

$Type* MappedMXBeanType$CompositeDataMXBeanType::getJavaType() {
	return this->javaClass;
}

$String* MappedMXBeanType$CompositeDataMXBeanType::getName() {
	return $nc(this->javaClass)->getName();
}

$Object* MappedMXBeanType$CompositeDataMXBeanType::toOpenTypeData(Object$* data) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->toMethod != nullptr) {
		try {
			return $of($nc(this->toMethod)->invoke(nullptr, $$new($ObjectArray, {data})));
		} catch ($IllegalAccessException& e) {
			$throwNew($AssertionError, $of(e));
		} catch ($InvocationTargetException& e) {
			$var($String, var$1, $$str({"Failed to invoke "_s, $($nc(this->toMethod)->getName()), " to convert "_s}));
			$var($String, var$0, $$concat(var$1, $($nc(this->javaClass)->getName())));
			$var($OpenDataException, ode, $new($OpenDataException, $$concat(var$0, " to CompositeData")));
			ode->initCause(e);
			$throw(ode);
		}
	}
	if ($instanceOf($MemoryUsage, data)) {
		return $of($MemoryUsageCompositeData::toCompositeData($cast($MemoryUsage, data)));
	}
	if ($instanceOf($ThreadInfo, data)) {
		return $of($ThreadInfoCompositeData::toCompositeData($cast($ThreadInfo, data)));
	}
	if ($instanceOf($LockInfo, data)) {
		if ($instanceOf($MonitorInfo, data)) {
			return $of($MonitorInfoCompositeData::toCompositeData($cast($MonitorInfo, data)));
		}
		return $of($LockInfoCompositeData::toCompositeData($cast($LockInfo, data)));
	}
	if ($instanceOf($MemoryNotificationInfo, data)) {
		return $of($MemoryNotifInfoCompositeData::toCompositeData($cast($MemoryNotificationInfo, data)));
	}
	if (this->isCompositeData) {
		$var($CompositeData, cd, $cast($CompositeData, data));
		$var($CompositeType, ct, $nc(cd)->getCompositeType());
		$var($StringArray, itemNames, $fcast($StringArray, $nc($($nc(ct)->keySet()))->toArray($$new($StringArray, 0))));
		$var($ObjectArray, itemValues, cd->getAll(itemNames));
		return $of($new($CompositeDataSupport, ct, itemNames, itemValues));
	}
	$throwNew($OpenDataException, $$str({$($nc(this->javaClass)->getName()), " is not supported for platform MXBeans"_s}));
}

$Object* MappedMXBeanType$CompositeDataMXBeanType::toJavaTypeData(Object$* data) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->fromMethod == nullptr) {
		$throwNew($AssertionError, $of("Does not support data conversion"_s));
	}
	try {
		return $of($nc(this->fromMethod)->invoke(nullptr, $$new($ObjectArray, {data})));
	} catch ($IllegalAccessException& e) {
		$throwNew($AssertionError, $of(e));
	} catch ($InvocationTargetException& e) {
		$var($String, var$0, $$str({"Failed to invoke "_s, $($nc(this->fromMethod)->getName()), " to convert CompositeData  to "_s}));
		$var($OpenDataException, ode, $new($OpenDataException, $$concat(var$0, $($nc(this->javaClass)->getName()))));
		ode->initCause(e);
		$throw(ode);
	}
	$shouldNotReachHere();
}

MappedMXBeanType$CompositeDataMXBeanType::MappedMXBeanType$CompositeDataMXBeanType() {
}

$Class* MappedMXBeanType$CompositeDataMXBeanType::load$($String* name, bool initialize) {
	$loadClass(MappedMXBeanType$CompositeDataMXBeanType, name, initialize, &_MappedMXBeanType$CompositeDataMXBeanType_ClassInfo_, allocate$MappedMXBeanType$CompositeDataMXBeanType);
	return class$;
}

$Class* MappedMXBeanType$CompositeDataMXBeanType::class$ = nullptr;

	} // management
} // sun