#include <sun/management/ClassLoadingImpl.h>

#include <java/lang/management/ManagementFactory.h>
#include <javax/management/ObjectName.h>
#include <sun/management/Util.h>
#include <sun/management/VMManagement.h>
#include <jcpp.h>

#undef CLASS_LOADING_MXBEAN_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassLoadingMXBean = ::java::lang::management::ClassLoadingMXBean;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $ObjectName = ::javax::management::ObjectName;
using $Util = ::sun::management::Util;
using $VMManagement = ::sun::management::VMManagement;

namespace sun {
	namespace management {

$FieldInfo _ClassLoadingImpl_FieldInfo_[] = {
	{"jvm", "Lsun/management/VMManagement;", nullptr, $PRIVATE | $FINAL, $field(ClassLoadingImpl, jvm)},
	{}
};

$MethodInfo _ClassLoadingImpl_MethodInfo_[] = {
	{"<init>", "(Lsun/management/VMManagement;)V", nullptr, 0, $method(static_cast<void(ClassLoadingImpl::*)($VMManagement*)>(&ClassLoadingImpl::init$))},
	{"getLoadedClassCount", "()I", nullptr, $PUBLIC},
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC},
	{"getTotalLoadedClassCount", "()J", nullptr, $PUBLIC},
	{"getUnloadedClassCount", "()J", nullptr, $PUBLIC},
	{"isVerbose", "()Z", nullptr, $PUBLIC},
	{"setVerbose", "(Z)V", nullptr, $PUBLIC},
	{"setVerboseClass", "(Z)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(bool)>(&ClassLoadingImpl::setVerboseClass))},
	{}
};

#define _METHOD_INDEX_setVerboseClass 7

$ClassInfo _ClassLoadingImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.ClassLoadingImpl",
	"java.lang.Object",
	"java.lang.management.ClassLoadingMXBean",
	_ClassLoadingImpl_FieldInfo_,
	_ClassLoadingImpl_MethodInfo_
};

$Object* allocate$ClassLoadingImpl($Class* clazz) {
	return $of($alloc(ClassLoadingImpl));
}

void ClassLoadingImpl::init$($VMManagement* vm) {
	$set(this, jvm, vm);
}

int64_t ClassLoadingImpl::getTotalLoadedClassCount() {
	return $nc(this->jvm)->getTotalClassCount();
}

int32_t ClassLoadingImpl::getLoadedClassCount() {
	return $nc(this->jvm)->getLoadedClassCount();
}

int64_t ClassLoadingImpl::getUnloadedClassCount() {
	return $nc(this->jvm)->getUnloadedClassCount();
}

bool ClassLoadingImpl::isVerbose() {
	return $nc(this->jvm)->getVerboseClass();
}

void ClassLoadingImpl::setVerbose(bool value) {
	$Util::checkControlAccess();
	setVerboseClass(value);
}

void ClassLoadingImpl::setVerboseClass(bool value) {
	$init(ClassLoadingImpl);
	$prepareNativeStatic(ClassLoadingImpl, setVerboseClass, void, bool value);
	$invokeNativeStatic(ClassLoadingImpl, setVerboseClass, value);
	$finishNativeStatic();
}

$ObjectName* ClassLoadingImpl::getObjectName() {
	$init($ManagementFactory);
	return $Util::newObjectName($ManagementFactory::CLASS_LOADING_MXBEAN_NAME);
}

ClassLoadingImpl::ClassLoadingImpl() {
}

$Class* ClassLoadingImpl::load$($String* name, bool initialize) {
	$loadClass(ClassLoadingImpl, name, initialize, &_ClassLoadingImpl_ClassInfo_, allocate$ClassLoadingImpl);
	return class$;
}

$Class* ClassLoadingImpl::class$ = nullptr;

	} // management
} // sun