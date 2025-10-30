#include <sun/management/MemoryPoolImpl$PoolSensor.h>

#include <java/lang/management/MemoryUsage.h>
#include <sun/management/MemoryImpl.h>
#include <sun/management/MemoryPoolImpl.h>
#include <sun/management/Sensor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MemoryUsage = ::java::lang::management::MemoryUsage;
using $MemoryImpl = ::sun::management::MemoryImpl;
using $MemoryPoolImpl = ::sun::management::MemoryPoolImpl;
using $Sensor = ::sun::management::Sensor;

namespace sun {
	namespace management {

$FieldInfo _MemoryPoolImpl$PoolSensor_FieldInfo_[] = {
	{"this$0", "Lsun/management/MemoryPoolImpl;", nullptr, $FINAL | $SYNTHETIC, $field(MemoryPoolImpl$PoolSensor, this$0)},
	{"pool", "Lsun/management/MemoryPoolImpl;", nullptr, $FINAL, $field(MemoryPoolImpl$PoolSensor, pool)},
	{}
};

$MethodInfo _MemoryPoolImpl$PoolSensor_MethodInfo_[] = {
	{"<init>", "(Lsun/management/MemoryPoolImpl;Lsun/management/MemoryPoolImpl;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MemoryPoolImpl$PoolSensor::*)($MemoryPoolImpl*,$MemoryPoolImpl*,$String*)>(&MemoryPoolImpl$PoolSensor::init$))},
	{"clearAction", "()V", nullptr, 0},
	{"triggerAction", "(Ljava/lang/management/MemoryUsage;)V", nullptr, 0},
	{"triggerAction", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _MemoryPoolImpl$PoolSensor_InnerClassesInfo_[] = {
	{"sun.management.MemoryPoolImpl$PoolSensor", "sun.management.MemoryPoolImpl", "PoolSensor", 0},
	{}
};

$ClassInfo _MemoryPoolImpl$PoolSensor_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.MemoryPoolImpl$PoolSensor",
	"sun.management.Sensor",
	nullptr,
	_MemoryPoolImpl$PoolSensor_FieldInfo_,
	_MemoryPoolImpl$PoolSensor_MethodInfo_,
	nullptr,
	nullptr,
	_MemoryPoolImpl$PoolSensor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.MemoryPoolImpl"
};

$Object* allocate$MemoryPoolImpl$PoolSensor($Class* clazz) {
	return $of($alloc(MemoryPoolImpl$PoolSensor));
}

void MemoryPoolImpl$PoolSensor::init$($MemoryPoolImpl* this$0, $MemoryPoolImpl* pool, $String* name) {
	$set(this, this$0, this$0);
	$Sensor::init$(name);
	$set(this, pool, pool);
}

void MemoryPoolImpl$PoolSensor::triggerAction($MemoryUsage* usage) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, "java.management.memory.threshold.exceeded"_s);
	$var($String, var$1, $nc(this->pool)->getName());
	$var($MemoryUsage, var$2, usage);
	$MemoryImpl::createNotification(var$0, var$1, var$2, getCount());
}

void MemoryPoolImpl$PoolSensor::triggerAction() {
}

void MemoryPoolImpl$PoolSensor::clearAction() {
}

MemoryPoolImpl$PoolSensor::MemoryPoolImpl$PoolSensor() {
}

$Class* MemoryPoolImpl$PoolSensor::load$($String* name, bool initialize) {
	$loadClass(MemoryPoolImpl$PoolSensor, name, initialize, &_MemoryPoolImpl$PoolSensor_ClassInfo_, allocate$MemoryPoolImpl$PoolSensor);
	return class$;
}

$Class* MemoryPoolImpl$PoolSensor::class$ = nullptr;

	} // management
} // sun