#include <javax/management/monitor/Monitor$SchedulerTask.h>

#include <java/util/concurrent/Future.h>
#include <javax/management/monitor/Monitor$MonitorTask.h>
#include <javax/management/monitor/Monitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Future = ::java::util::concurrent::Future;
using $Monitor = ::javax::management::monitor::Monitor;
using $Monitor$MonitorTask = ::javax::management::monitor::Monitor$MonitorTask;

namespace javax {
	namespace management {
		namespace monitor {

$FieldInfo _Monitor$SchedulerTask_FieldInfo_[] = {
	{"this$0", "Ljavax/management/monitor/Monitor;", nullptr, $FINAL | $SYNTHETIC, $field(Monitor$SchedulerTask, this$0)},
	{"task", "Ljavax/management/monitor/Monitor$MonitorTask;", nullptr, $PRIVATE, $field(Monitor$SchedulerTask, task)},
	{}
};

$MethodInfo _Monitor$SchedulerTask_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/monitor/Monitor;)V", nullptr, $PUBLIC, $method(static_cast<void(Monitor$SchedulerTask::*)($Monitor*)>(&Monitor$SchedulerTask::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"setMonitorTask", "(Ljavax/management/monitor/Monitor$MonitorTask;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Monitor$SchedulerTask_InnerClassesInfo_[] = {
	{"javax.management.monitor.Monitor$SchedulerTask", "javax.management.monitor.Monitor", "SchedulerTask", $PRIVATE},
	{}
};

$ClassInfo _Monitor$SchedulerTask_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.monitor.Monitor$SchedulerTask",
	"java.lang.Object",
	"java.lang.Runnable",
	_Monitor$SchedulerTask_FieldInfo_,
	_Monitor$SchedulerTask_MethodInfo_,
	nullptr,
	nullptr,
	_Monitor$SchedulerTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.monitor.Monitor"
};

$Object* allocate$Monitor$SchedulerTask($Class* clazz) {
	return $of($alloc(Monitor$SchedulerTask));
}

void Monitor$SchedulerTask::init$($Monitor* this$0) {
	$set(this, this$0, this$0);
}

void Monitor$SchedulerTask::setMonitorTask($Monitor$MonitorTask* task) {
	$set(this, task, task);
}

void Monitor$SchedulerTask::run() {
	$synchronized(this->this$0) {
		$set(this->this$0, monitorFuture, $nc(this->task)->submit());
	}
}

Monitor$SchedulerTask::Monitor$SchedulerTask() {
}

$Class* Monitor$SchedulerTask::load$($String* name, bool initialize) {
	$loadClass(Monitor$SchedulerTask, name, initialize, &_Monitor$SchedulerTask_ClassInfo_, allocate$Monitor$SchedulerTask);
	return class$;
}

$Class* Monitor$SchedulerTask::class$ = nullptr;

		} // monitor
	} // management
} // javax