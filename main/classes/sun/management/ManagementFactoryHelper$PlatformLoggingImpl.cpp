#include <sun/management/ManagementFactoryHelper$PlatformLoggingImpl.h>

#include <java/lang/management/PlatformLoggingMXBean.h>
#include <java/util/List.h>
#include <javax/management/ObjectName.h>
#include <sun/management/ManagementFactoryHelper$LoggingMXBeanAccess.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <sun/management/Util.h>
#include <jcpp.h>

#undef MBEAN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformLoggingMXBean = ::java::lang::management::PlatformLoggingMXBean;
using $List = ::java::util::List;
using $ObjectName = ::javax::management::ObjectName;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;
using $ManagementFactoryHelper$LoggingMXBeanAccess = ::sun::management::ManagementFactoryHelper$LoggingMXBeanAccess;
using $Util = ::sun::management::Util;

namespace sun {
	namespace management {

$FieldInfo _ManagementFactoryHelper$PlatformLoggingImpl_FieldInfo_[] = {
	{"loggingAccess", "Lsun/management/ManagementFactoryHelper$LoggingMXBeanAccess;", nullptr, $PRIVATE | $FINAL, $field(ManagementFactoryHelper$PlatformLoggingImpl, loggingAccess)},
	{"objname", "Ljavax/management/ObjectName;", nullptr, $PRIVATE | $VOLATILE, $field(ManagementFactoryHelper$PlatformLoggingImpl, objname)},
	{"MBEAN", "Ljava/lang/management/PlatformLoggingMXBean;", nullptr, $STATIC | $FINAL, $staticField(ManagementFactoryHelper$PlatformLoggingImpl, MBEAN)},
	{}
};

$MethodInfo _ManagementFactoryHelper$PlatformLoggingImpl_MethodInfo_[] = {
	{"<init>", "(Lsun/management/ManagementFactoryHelper$LoggingMXBeanAccess;)V", nullptr, $PRIVATE, $method(static_cast<void(ManagementFactoryHelper$PlatformLoggingImpl::*)($ManagementFactoryHelper$LoggingMXBeanAccess*)>(&ManagementFactoryHelper$PlatformLoggingImpl::init$))},
	{"getInstance", "()Lsun/management/ManagementFactoryHelper$PlatformLoggingImpl;", nullptr, $PRIVATE | $STATIC, $method(static_cast<ManagementFactoryHelper$PlatformLoggingImpl*(*)()>(&ManagementFactoryHelper$PlatformLoggingImpl::getInstance))},
	{"getLoggerLevel", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLoggerNames", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC},
	{"getParentLoggerName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"setLoggerLevel", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ManagementFactoryHelper$PlatformLoggingImpl_InnerClassesInfo_[] = {
	{"sun.management.ManagementFactoryHelper$PlatformLoggingImpl", "sun.management.ManagementFactoryHelper", "PlatformLoggingImpl", $STATIC | $FINAL},
	{}
};

$ClassInfo _ManagementFactoryHelper$PlatformLoggingImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.management.ManagementFactoryHelper$PlatformLoggingImpl",
	"java.lang.Object",
	"java.lang.management.PlatformLoggingMXBean",
	_ManagementFactoryHelper$PlatformLoggingImpl_FieldInfo_,
	_ManagementFactoryHelper$PlatformLoggingImpl_MethodInfo_,
	nullptr,
	nullptr,
	_ManagementFactoryHelper$PlatformLoggingImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.ManagementFactoryHelper"
};

$Object* allocate$ManagementFactoryHelper$PlatformLoggingImpl($Class* clazz) {
	return $of($alloc(ManagementFactoryHelper$PlatformLoggingImpl));
}

$PlatformLoggingMXBean* ManagementFactoryHelper$PlatformLoggingImpl::MBEAN = nullptr;

void ManagementFactoryHelper$PlatformLoggingImpl::init$($ManagementFactoryHelper$LoggingMXBeanAccess* loggingAccess) {
	$set(this, loggingAccess, loggingAccess);
}

$ObjectName* ManagementFactoryHelper$PlatformLoggingImpl::getObjectName() {
	$var($ObjectName, result, this->objname);
	if (result == nullptr) {
		$synchronized(this) {
			$assign(result, this->objname);
			if (result == nullptr) {
				$assign(result, $Util::newObjectName("java.util.logging:type=Logging"_s));
				$set(this, objname, result);
			}
		}
	}
	return result;
}

$List* ManagementFactoryHelper$PlatformLoggingImpl::getLoggerNames() {
	return $cast($List, $nc(this->loggingAccess)->invoke("getLoggerNames"_s, $$new($ObjectArray, 0)));
}

$String* ManagementFactoryHelper$PlatformLoggingImpl::getLoggerLevel($String* loggerName) {
	return $cast($String, $nc(this->loggingAccess)->invoke("getLoggerLevel"_s, $$new($ObjectArray, {$of(loggerName)})));
}

void ManagementFactoryHelper$PlatformLoggingImpl::setLoggerLevel($String* loggerName, $String* levelName) {
	$nc(this->loggingAccess)->invoke("setLoggerLevel"_s, $$new($ObjectArray, {
		$of(loggerName),
		$of(levelName)
	}));
}

$String* ManagementFactoryHelper$PlatformLoggingImpl::getParentLoggerName($String* loggerName) {
	return $cast($String, $nc(this->loggingAccess)->invoke("getParentLoggerName"_s, $$new($ObjectArray, {$of(loggerName)})));
}

ManagementFactoryHelper$PlatformLoggingImpl* ManagementFactoryHelper$PlatformLoggingImpl::getInstance() {
	$init(ManagementFactoryHelper$PlatformLoggingImpl);
	return $new(ManagementFactoryHelper$PlatformLoggingImpl, $$new($ManagementFactoryHelper$LoggingMXBeanAccess));
}

void clinit$ManagementFactoryHelper$PlatformLoggingImpl($Class* class$) {
	$assignStatic(ManagementFactoryHelper$PlatformLoggingImpl::MBEAN, ManagementFactoryHelper$PlatformLoggingImpl::getInstance());
}

ManagementFactoryHelper$PlatformLoggingImpl::ManagementFactoryHelper$PlatformLoggingImpl() {
}

$Class* ManagementFactoryHelper$PlatformLoggingImpl::load$($String* name, bool initialize) {
	$loadClass(ManagementFactoryHelper$PlatformLoggingImpl, name, initialize, &_ManagementFactoryHelper$PlatformLoggingImpl_ClassInfo_, clinit$ManagementFactoryHelper$PlatformLoggingImpl, allocate$ManagementFactoryHelper$PlatformLoggingImpl);
	return class$;
}

$Class* ManagementFactoryHelper$PlatformLoggingImpl::class$ = nullptr;

	} // management
} // sun