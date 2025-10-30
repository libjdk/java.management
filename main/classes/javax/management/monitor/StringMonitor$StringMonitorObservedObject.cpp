#include <javax/management/monitor/StringMonitor$StringMonitorObservedObject.h>

#include <javax/management/ObjectName.h>
#include <javax/management/monitor/Monitor$ObservedObject.h>
#include <javax/management/monitor/StringMonitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;
using $Monitor$ObservedObject = ::javax::management::monitor::Monitor$ObservedObject;
using $StringMonitor = ::javax::management::monitor::StringMonitor;

namespace javax {
	namespace management {
		namespace monitor {

$FieldInfo _StringMonitor$StringMonitorObservedObject_FieldInfo_[] = {
	{"status", "I", nullptr, $PRIVATE, $field(StringMonitor$StringMonitorObservedObject, status)},
	{}
};

$MethodInfo _StringMonitor$StringMonitorObservedObject_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, $method(static_cast<void(StringMonitor$StringMonitorObservedObject::*)($ObjectName*)>(&StringMonitor$StringMonitorObservedObject::init$))},
	{"getStatus", "()I", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<int32_t(StringMonitor$StringMonitorObservedObject::*)()>(&StringMonitor$StringMonitorObservedObject::getStatus))},
	{"setStatus", "(I)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(StringMonitor$StringMonitorObservedObject::*)(int32_t)>(&StringMonitor$StringMonitorObservedObject::setStatus))},
	{}
};

$InnerClassInfo _StringMonitor$StringMonitorObservedObject_InnerClassesInfo_[] = {
	{"javax.management.monitor.StringMonitor$StringMonitorObservedObject", "javax.management.monitor.StringMonitor", "StringMonitorObservedObject", $STATIC},
	{"javax.management.monitor.Monitor$ObservedObject", "javax.management.monitor.Monitor", "ObservedObject", $STATIC},
	{}
};

$ClassInfo _StringMonitor$StringMonitorObservedObject_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.monitor.StringMonitor$StringMonitorObservedObject",
	"javax.management.monitor.Monitor$ObservedObject",
	nullptr,
	_StringMonitor$StringMonitorObservedObject_FieldInfo_,
	_StringMonitor$StringMonitorObservedObject_MethodInfo_,
	nullptr,
	nullptr,
	_StringMonitor$StringMonitorObservedObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.monitor.StringMonitor"
};

$Object* allocate$StringMonitor$StringMonitorObservedObject($Class* clazz) {
	return $of($alloc(StringMonitor$StringMonitorObservedObject));
}

void StringMonitor$StringMonitorObservedObject::init$($ObjectName* observedObject) {
	$Monitor$ObservedObject::init$(observedObject);
}

int32_t StringMonitor$StringMonitorObservedObject::getStatus() {
	$synchronized(this) {
		return this->status;
	}
}

void StringMonitor$StringMonitorObservedObject::setStatus(int32_t status) {
	$synchronized(this) {
		this->status = status;
	}
}

StringMonitor$StringMonitorObservedObject::StringMonitor$StringMonitorObservedObject() {
}

$Class* StringMonitor$StringMonitorObservedObject::load$($String* name, bool initialize) {
	$loadClass(StringMonitor$StringMonitorObservedObject, name, initialize, &_StringMonitor$StringMonitorObservedObject_ClassInfo_, allocate$StringMonitor$StringMonitorObservedObject);
	return class$;
}

$Class* StringMonitor$StringMonitorObservedObject::class$ = nullptr;

		} // monitor
	} // management
} // javax