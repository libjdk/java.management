#include <sun/management/CompilationImpl.h>

#include <java/lang/AssertionError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/management/ManagementFactory.h>
#include <javax/management/ObjectName.h>
#include <sun/management/Util.h>
#include <sun/management/VMManagement.h>
#include <jcpp.h>

#undef COMPILATION_MXBEAN_NAME

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CompilationMXBean = ::java::lang::management::CompilationMXBean;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $ObjectName = ::javax::management::ObjectName;
using $Util = ::sun::management::Util;
using $VMManagement = ::sun::management::VMManagement;

namespace sun {
	namespace management {

$FieldInfo _CompilationImpl_FieldInfo_[] = {
	{"jvm", "Lsun/management/VMManagement;", nullptr, $PRIVATE | $FINAL, $field(CompilationImpl, jvm)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(CompilationImpl, name)},
	{}
};

$MethodInfo _CompilationImpl_MethodInfo_[] = {
	{"<init>", "(Lsun/management/VMManagement;)V", nullptr, 0, $method(static_cast<void(CompilationImpl::*)($VMManagement*)>(&CompilationImpl::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC},
	{"getTotalCompilationTime", "()J", nullptr, $PUBLIC},
	{"isCompilationTimeMonitoringSupported", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CompilationImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.CompilationImpl",
	"java.lang.Object",
	"java.lang.management.CompilationMXBean",
	_CompilationImpl_FieldInfo_,
	_CompilationImpl_MethodInfo_
};

$Object* allocate$CompilationImpl($Class* clazz) {
	return $of($alloc(CompilationImpl));
}

void CompilationImpl::init$($VMManagement* vm) {
	$set(this, jvm, vm);
	$set(this, name, $nc(this->jvm)->getCompilerName());
	if (this->name == nullptr) {
		$throwNew($AssertionError, $of("Null compiler name"_s));
	}
}

$String* CompilationImpl::getName() {
	return this->name;
}

bool CompilationImpl::isCompilationTimeMonitoringSupported() {
	return $nc(this->jvm)->isCompilationTimeMonitoringSupported();
}

int64_t CompilationImpl::getTotalCompilationTime() {
	if (!isCompilationTimeMonitoringSupported()) {
		$throwNew($UnsupportedOperationException, "Compilation time monitoring is not supported."_s);
	}
	return $nc(this->jvm)->getTotalCompileTime();
}

$ObjectName* CompilationImpl::getObjectName() {
	$init($ManagementFactory);
	return $Util::newObjectName($ManagementFactory::COMPILATION_MXBEAN_NAME);
}

CompilationImpl::CompilationImpl() {
}

$Class* CompilationImpl::load$($String* name, bool initialize) {
	$loadClass(CompilationImpl, name, initialize, &_CompilationImpl_ClassInfo_, allocate$CompilationImpl);
	return class$;
}

$Class* CompilationImpl::class$ = nullptr;

	} // management
} // sun