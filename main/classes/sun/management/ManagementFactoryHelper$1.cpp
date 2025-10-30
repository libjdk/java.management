#include <sun/management/ManagementFactoryHelper$1.h>

#include <javax/management/ObjectName.h>
#include <jdk/internal/misc/VM$BufferPool.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <sun/management/Util.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BufferPoolMXBean = ::java::lang::management::BufferPoolMXBean;
using $ObjectName = ::javax::management::ObjectName;
using $VM$BufferPool = ::jdk::internal::misc::VM$BufferPool;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;
using $Util = ::sun::management::Util;

namespace sun {
	namespace management {

$FieldInfo _ManagementFactoryHelper$1_FieldInfo_[] = {
	{"val$pool", "Ljdk/internal/misc/VM$BufferPool;", nullptr, $FINAL | $SYNTHETIC, $field(ManagementFactoryHelper$1, val$pool)},
	{"objname", "Ljavax/management/ObjectName;", nullptr, $PRIVATE | $VOLATILE, $field(ManagementFactoryHelper$1, objname)},
	{}
};

$MethodInfo _ManagementFactoryHelper$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/misc/VM$BufferPool;)V", "()V", 0, $method(static_cast<void(ManagementFactoryHelper$1::*)($VM$BufferPool*)>(&ManagementFactoryHelper$1::init$))},
	{"getCount", "()J", nullptr, $PUBLIC},
	{"getMemoryUsed", "()J", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC},
	{"getTotalCapacity", "()J", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ManagementFactoryHelper$1_EnclosingMethodInfo_ = {
	"sun.management.ManagementFactoryHelper",
	"createBufferPoolMXBean",
	"(Ljdk/internal/misc/VM$BufferPool;)Ljava/lang/management/BufferPoolMXBean;"
};

$InnerClassInfo _ManagementFactoryHelper$1_InnerClassesInfo_[] = {
	{"sun.management.ManagementFactoryHelper$1", nullptr, nullptr, 0},
	{"jdk.internal.misc.VM$BufferPool", "jdk.internal.misc.VM", "BufferPool", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ManagementFactoryHelper$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.ManagementFactoryHelper$1",
	"java.lang.Object",
	"java.lang.management.BufferPoolMXBean",
	_ManagementFactoryHelper$1_FieldInfo_,
	_ManagementFactoryHelper$1_MethodInfo_,
	nullptr,
	&_ManagementFactoryHelper$1_EnclosingMethodInfo_,
	_ManagementFactoryHelper$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.ManagementFactoryHelper"
};

$Object* allocate$ManagementFactoryHelper$1($Class* clazz) {
	return $of($alloc(ManagementFactoryHelper$1));
}

void ManagementFactoryHelper$1::init$($VM$BufferPool* val$pool) {
	$set(this, val$pool, val$pool);
}

$ObjectName* ManagementFactoryHelper$1::getObjectName() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, result, this->objname);
	if (result == nullptr) {
		$synchronized(this) {
			$assign(result, this->objname);
			if (result == nullptr) {
				$assign(result, $Util::newObjectName($$str({"java.nio:type=BufferPool"_s, ",name="_s, $($nc(this->val$pool)->getName())})));
				$set(this, objname, result);
			}
		}
	}
	return result;
}

$String* ManagementFactoryHelper$1::getName() {
	return $nc(this->val$pool)->getName();
}

int64_t ManagementFactoryHelper$1::getCount() {
	return $nc(this->val$pool)->getCount();
}

int64_t ManagementFactoryHelper$1::getTotalCapacity() {
	return $nc(this->val$pool)->getTotalCapacity();
}

int64_t ManagementFactoryHelper$1::getMemoryUsed() {
	return $nc(this->val$pool)->getMemoryUsed();
}

ManagementFactoryHelper$1::ManagementFactoryHelper$1() {
}

$Class* ManagementFactoryHelper$1::load$($String* name, bool initialize) {
	$loadClass(ManagementFactoryHelper$1, name, initialize, &_ManagementFactoryHelper$1_ClassInfo_, allocate$ManagementFactoryHelper$1);
	return class$;
}

$Class* ManagementFactoryHelper$1::class$ = nullptr;

	} // management
} // sun