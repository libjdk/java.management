#include <sun/management/RuntimeImpl.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <javax/management/ObjectName.h>
#include <sun/management/Util.h>
#include <sun/management/VMManagement.h>
#include <jcpp.h>

#undef RUNTIME_MXBEAN_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $RuntimeMXBean = ::java::lang::management::RuntimeMXBean;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;
using $ObjectName = ::javax::management::ObjectName;
using $Util = ::sun::management::Util;
using $VMManagement = ::sun::management::VMManagement;

namespace sun {
	namespace management {

$FieldInfo _RuntimeImpl_FieldInfo_[] = {
	{"jvm", "Lsun/management/VMManagement;", nullptr, $PRIVATE | $FINAL, $field(RuntimeImpl, jvm)},
	{"vmStartupTime", "J", nullptr, $PRIVATE | $FINAL, $field(RuntimeImpl, vmStartupTime)},
	{}
};

$MethodInfo _RuntimeImpl_MethodInfo_[] = {
	{"<init>", "(Lsun/management/VMManagement;)V", nullptr, 0, $method(static_cast<void(RuntimeImpl::*)($VMManagement*)>(&RuntimeImpl::init$))},
	{"getBootClassPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getClassPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInputArguments", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"getLibraryPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getManagementSpecVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC},
	{"getSpecName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSpecVendor", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSpecVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStartTime", "()J", nullptr, $PUBLIC},
	{"getSystemProperties", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC},
	{"getUptime", "()J", nullptr, $PUBLIC},
	{"getVmName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVmVendor", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVmVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isBootClassPathSupported", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RuntimeImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.RuntimeImpl",
	"java.lang.Object",
	"java.lang.management.RuntimeMXBean",
	_RuntimeImpl_FieldInfo_,
	_RuntimeImpl_MethodInfo_
};

$Object* allocate$RuntimeImpl($Class* clazz) {
	return $of($alloc(RuntimeImpl));
}

void RuntimeImpl::init$($VMManagement* vm) {
	$set(this, jvm, vm);
	this->vmStartupTime = $nc(this->jvm)->getStartupTime();
}

$String* RuntimeImpl::getName() {
	return $nc(this->jvm)->getVmId();
}

$String* RuntimeImpl::getManagementSpecVersion() {
	return $nc(this->jvm)->getManagementVersion();
}

$String* RuntimeImpl::getVmName() {
	return $nc(this->jvm)->getVmName();
}

$String* RuntimeImpl::getVmVendor() {
	return $nc(this->jvm)->getVmVendor();
}

$String* RuntimeImpl::getVmVersion() {
	return $nc(this->jvm)->getVmVersion();
}

$String* RuntimeImpl::getSpecName() {
	return $nc(this->jvm)->getVmSpecName();
}

$String* RuntimeImpl::getSpecVendor() {
	return $nc(this->jvm)->getVmSpecVendor();
}

$String* RuntimeImpl::getSpecVersion() {
	return $nc(this->jvm)->getVmSpecVersion();
}

$String* RuntimeImpl::getClassPath() {
	return $nc(this->jvm)->getClassPath();
}

$String* RuntimeImpl::getLibraryPath() {
	return $nc(this->jvm)->getLibraryPath();
}

$String* RuntimeImpl::getBootClassPath() {
	$throwNew($UnsupportedOperationException, "Boot class path mechanism is not supported"_s);
	$shouldNotReachHere();
}

$List* RuntimeImpl::getInputArguments() {
	$Util::checkMonitorAccess();
	return $nc(this->jvm)->getVmArguments();
}

int64_t RuntimeImpl::getUptime() {
	return $nc(this->jvm)->getUptime();
}

int64_t RuntimeImpl::getStartTime() {
	return this->vmStartupTime;
}

bool RuntimeImpl::isBootClassPathSupported() {
	return false;
}

$Map* RuntimeImpl::getSystemProperties() {
	$useLocalCurrentObjectStackCache();
	$var($Properties, sysProps, $System::getProperties());
	$var($Map, map, $new($HashMap));
	$var($Set, keys, $nc(sysProps)->stringPropertyNames());
	{
		$var($Iterator, i$, $nc(keys)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, k, $cast($String, i$->next()));
			{
				$var($String, value, sysProps->getProperty(k));
				map->put(k, value);
			}
		}
	}
	return map;
}

$ObjectName* RuntimeImpl::getObjectName() {
	$init($ManagementFactory);
	return $Util::newObjectName($ManagementFactory::RUNTIME_MXBEAN_NAME);
}

RuntimeImpl::RuntimeImpl() {
}

$Class* RuntimeImpl::load$($String* name, bool initialize) {
	$loadClass(RuntimeImpl, name, initialize, &_RuntimeImpl_ClassInfo_, allocate$RuntimeImpl);
	return class$;
}

$Class* RuntimeImpl::class$ = nullptr;

	} // management
} // sun