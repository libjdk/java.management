#include <javax/management/monitor/Monitor$MonitorTask$1.h>

#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/management/monitor/Monitor$MonitorTask.h>
#include <javax/management/monitor/Monitor$ObservedObject.h>
#include <javax/management/monitor/Monitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Monitor = ::javax::management::monitor::Monitor;
using $Monitor$MonitorTask = ::javax::management::monitor::Monitor$MonitorTask;
using $Monitor$ObservedObject = ::javax::management::monitor::Monitor$ObservedObject;

namespace javax {
	namespace management {
		namespace monitor {

$FieldInfo _Monitor$MonitorTask$1_FieldInfo_[] = {
	{"this$1", "Ljavax/management/monitor/Monitor$MonitorTask;", nullptr, $FINAL | $SYNTHETIC, $field(Monitor$MonitorTask$1, this$1)},
	{}
};

$MethodInfo _Monitor$MonitorTask$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/monitor/Monitor$MonitorTask;)V", nullptr, 0, $method(static_cast<void(Monitor$MonitorTask$1::*)($Monitor$MonitorTask*)>(&Monitor$MonitorTask$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Monitor$MonitorTask$1_EnclosingMethodInfo_ = {
	"javax.management.monitor.Monitor$MonitorTask",
	"run",
	"()V"
};

$InnerClassInfo _Monitor$MonitorTask$1_InnerClassesInfo_[] = {
	{"javax.management.monitor.Monitor$MonitorTask", "javax.management.monitor.Monitor", "MonitorTask", $PRIVATE},
	{"javax.management.monitor.Monitor$MonitorTask$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Monitor$MonitorTask$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.monitor.Monitor$MonitorTask$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Monitor$MonitorTask$1_FieldInfo_,
	_Monitor$MonitorTask$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_Monitor$MonitorTask$1_EnclosingMethodInfo_,
	_Monitor$MonitorTask$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.monitor.Monitor"
};

$Object* allocate$Monitor$MonitorTask$1($Class* clazz) {
	return $of($alloc(Monitor$MonitorTask$1));
}

void Monitor$MonitorTask$1::init$($Monitor$MonitorTask* this$1) {
	$set(this, this$1, this$1);
}

$Object* Monitor$MonitorTask$1::run() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->this$1->this$0)->isActive()) {
		$var($ints, an, $nc(this->this$1->this$0)->alreadyNotifieds);
		int32_t index = 0;
		{
			$var($Iterator, i$, $nc($nc(this->this$1->this$0)->observedObjects)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Monitor$ObservedObject, o, $cast($Monitor$ObservedObject, i$->next()));
				{
					if ($nc(this->this$1->this$0)->isActive()) {
						$nc(this->this$1->this$0)->monitor(o, index++, an);
					}
				}
			}
		}
	}
	return $of(nullptr);
}

Monitor$MonitorTask$1::Monitor$MonitorTask$1() {
}

$Class* Monitor$MonitorTask$1::load$($String* name, bool initialize) {
	$loadClass(Monitor$MonitorTask$1, name, initialize, &_Monitor$MonitorTask$1_ClassInfo_, allocate$Monitor$MonitorTask$1);
	return class$;
}

$Class* Monitor$MonitorTask$1::class$ = nullptr;

		} // monitor
	} // management
} // javax