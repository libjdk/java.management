#include <javax/management/monitor/MonitorSettingException.h>

#include <javax/management/JMRuntimeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMRuntimeException = ::javax::management::JMRuntimeException;

namespace javax {
	namespace management {
		namespace monitor {

$FieldInfo _MonitorSettingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MonitorSettingException, serialVersionUID)},
	{}
};

$MethodInfo _MonitorSettingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MonitorSettingException::*)()>(&MonitorSettingException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MonitorSettingException::*)($String*)>(&MonitorSettingException::init$))},
	{}
};

$ClassInfo _MonitorSettingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.monitor.MonitorSettingException",
	"javax.management.JMRuntimeException",
	nullptr,
	_MonitorSettingException_FieldInfo_,
	_MonitorSettingException_MethodInfo_
};

$Object* allocate$MonitorSettingException($Class* clazz) {
	return $of($alloc(MonitorSettingException));
}

void MonitorSettingException::init$() {
	$JMRuntimeException::init$();
}

void MonitorSettingException::init$($String* message) {
	$JMRuntimeException::init$(message);
}

MonitorSettingException::MonitorSettingException() {
}

MonitorSettingException::MonitorSettingException(const MonitorSettingException& e) : $JMRuntimeException(e) {
}

void MonitorSettingException::throw$() {
	throw *this;
}

$Class* MonitorSettingException::load$($String* name, bool initialize) {
	$loadClass(MonitorSettingException, name, initialize, &_MonitorSettingException_ClassInfo_, allocate$MonitorSettingException);
	return class$;
}

$Class* MonitorSettingException::class$ = nullptr;

		} // monitor
	} // management
} // javax