#include <javax/management/monitor/Monitor$ObservedObject.h>

#include <javax/management/ObjectName.h>
#include <javax/management/monitor/Monitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;
using $Monitor = ::javax::management::monitor::Monitor;

namespace javax {
	namespace management {
		namespace monitor {

$FieldInfo _Monitor$ObservedObject_FieldInfo_[] = {
	{"observedObject", "Ljavax/management/ObjectName;", nullptr, $PRIVATE | $FINAL, $field(Monitor$ObservedObject, observedObject)},
	{"alreadyNotified", "I", nullptr, $PRIVATE, $field(Monitor$ObservedObject, alreadyNotified)},
	{"derivedGauge", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Monitor$ObservedObject, derivedGauge)},
	{"derivedGaugeTimeStamp", "J", nullptr, $PRIVATE, $field(Monitor$ObservedObject, derivedGaugeTimeStamp)},
	{}
};

$MethodInfo _Monitor$ObservedObject_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, $method(static_cast<void(Monitor$ObservedObject::*)($ObjectName*)>(&Monitor$ObservedObject::init$))},
	{"getAlreadyNotified", "()I", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<int32_t(Monitor$ObservedObject::*)()>(&Monitor$ObservedObject::getAlreadyNotified))},
	{"getDerivedGauge", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<$Object*(Monitor$ObservedObject::*)()>(&Monitor$ObservedObject::getDerivedGauge))},
	{"getDerivedGaugeTimeStamp", "()J", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<int64_t(Monitor$ObservedObject::*)()>(&Monitor$ObservedObject::getDerivedGaugeTimeStamp))},
	{"getObservedObject", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ObjectName*(Monitor$ObservedObject::*)()>(&Monitor$ObservedObject::getObservedObject))},
	{"setAlreadyNotified", "(I)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(Monitor$ObservedObject::*)(int32_t)>(&Monitor$ObservedObject::setAlreadyNotified))},
	{"setDerivedGauge", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(Monitor$ObservedObject::*)(Object$*)>(&Monitor$ObservedObject::setDerivedGauge))},
	{"setDerivedGaugeTimeStamp", "(J)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(Monitor$ObservedObject::*)(int64_t)>(&Monitor$ObservedObject::setDerivedGaugeTimeStamp))},
	{}
};

$InnerClassInfo _Monitor$ObservedObject_InnerClassesInfo_[] = {
	{"javax.management.monitor.Monitor$ObservedObject", "javax.management.monitor.Monitor", "ObservedObject", $STATIC},
	{}
};

$ClassInfo _Monitor$ObservedObject_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.monitor.Monitor$ObservedObject",
	"java.lang.Object",
	nullptr,
	_Monitor$ObservedObject_FieldInfo_,
	_Monitor$ObservedObject_MethodInfo_,
	nullptr,
	nullptr,
	_Monitor$ObservedObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.monitor.Monitor"
};

$Object* allocate$Monitor$ObservedObject($Class* clazz) {
	return $of($alloc(Monitor$ObservedObject));
}

void Monitor$ObservedObject::init$($ObjectName* observedObject) {
	$set(this, observedObject, observedObject);
}

$ObjectName* Monitor$ObservedObject::getObservedObject() {
	return this->observedObject;
}

int32_t Monitor$ObservedObject::getAlreadyNotified() {
	$synchronized(this) {
		return this->alreadyNotified;
	}
}

void Monitor$ObservedObject::setAlreadyNotified(int32_t alreadyNotified) {
	$synchronized(this) {
		this->alreadyNotified = alreadyNotified;
	}
}

$Object* Monitor$ObservedObject::getDerivedGauge() {
	$synchronized(this) {
		return $of(this->derivedGauge);
	}
}

void Monitor$ObservedObject::setDerivedGauge(Object$* derivedGauge) {
	$synchronized(this) {
		$set(this, derivedGauge, derivedGauge);
	}
}

int64_t Monitor$ObservedObject::getDerivedGaugeTimeStamp() {
	$synchronized(this) {
		return this->derivedGaugeTimeStamp;
	}
}

void Monitor$ObservedObject::setDerivedGaugeTimeStamp(int64_t derivedGaugeTimeStamp) {
	$synchronized(this) {
		this->derivedGaugeTimeStamp = derivedGaugeTimeStamp;
	}
}

Monitor$ObservedObject::Monitor$ObservedObject() {
}

$Class* Monitor$ObservedObject::load$($String* name, bool initialize) {
	$loadClass(Monitor$ObservedObject, name, initialize, &_Monitor$ObservedObject_ClassInfo_, allocate$Monitor$ObservedObject);
	return class$;
}

$Class* Monitor$ObservedObject::class$ = nullptr;

		} // monitor
	} // management
} // javax