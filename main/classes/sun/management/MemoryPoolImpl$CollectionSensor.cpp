#include <sun/management/MemoryPoolImpl$CollectionSensor.h>

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

$FieldInfo _MemoryPoolImpl$CollectionSensor_FieldInfo_[] = {
	{"this$0", "Lsun/management/MemoryPoolImpl;", nullptr, $FINAL | $SYNTHETIC, $field(MemoryPoolImpl$CollectionSensor, this$0)},
	{"pool", "Lsun/management/MemoryPoolImpl;", nullptr, $FINAL, $field(MemoryPoolImpl$CollectionSensor, pool)},
	{}
};

$MethodInfo _MemoryPoolImpl$CollectionSensor_MethodInfo_[] = {
	{"<init>", "(Lsun/management/MemoryPoolImpl;Lsun/management/MemoryPoolImpl;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MemoryPoolImpl$CollectionSensor::*)($MemoryPoolImpl*,$MemoryPoolImpl*,$String*)>(&MemoryPoolImpl$CollectionSensor::init$))},
	{"clearAction", "()V", nullptr, 0},
	{"triggerAction", "(Ljava/lang/management/MemoryUsage;)V", nullptr, 0},
	{"triggerAction", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _MemoryPoolImpl$CollectionSensor_InnerClassesInfo_[] = {
	{"sun.management.MemoryPoolImpl$CollectionSensor", "sun.management.MemoryPoolImpl", "CollectionSensor", 0},
	{}
};

$ClassInfo _MemoryPoolImpl$CollectionSensor_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.MemoryPoolImpl$CollectionSensor",
	"sun.management.Sensor",
	nullptr,
	_MemoryPoolImpl$CollectionSensor_FieldInfo_,
	_MemoryPoolImpl$CollectionSensor_MethodInfo_,
	nullptr,
	nullptr,
	_MemoryPoolImpl$CollectionSensor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.MemoryPoolImpl"
};

$Object* allocate$MemoryPoolImpl$CollectionSensor($Class* clazz) {
	return $of($alloc(MemoryPoolImpl$CollectionSensor));
}

void MemoryPoolImpl$CollectionSensor::init$($MemoryPoolImpl* this$0, $MemoryPoolImpl* pool, $String* name) {
	$set(this, this$0, this$0);
	$Sensor::init$(name);
	$set(this, pool, pool);
}

void MemoryPoolImpl$CollectionSensor::triggerAction($MemoryUsage* usage) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, "java.management.memory.collection.threshold.exceeded"_s);
	$var($String, var$1, $nc(this->pool)->getName());
	$var($MemoryUsage, var$2, usage);
	$MemoryImpl::createNotification(var$0, var$1, var$2, $nc(this->this$0->gcSensor)->getCount());
}

void MemoryPoolImpl$CollectionSensor::triggerAction() {
}

void MemoryPoolImpl$CollectionSensor::clearAction() {
}

MemoryPoolImpl$CollectionSensor::MemoryPoolImpl$CollectionSensor() {
}

$Class* MemoryPoolImpl$CollectionSensor::load$($String* name, bool initialize) {
	$loadClass(MemoryPoolImpl$CollectionSensor, name, initialize, &_MemoryPoolImpl$CollectionSensor_ClassInfo_, allocate$MemoryPoolImpl$CollectionSensor);
	return class$;
}

$Class* MemoryPoolImpl$CollectionSensor::class$ = nullptr;

	} // management
} // sun