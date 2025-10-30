#include <com/sun/jmx/remote/internal/ClientNotifForwarder$LinearExecutor.h>

#include <com/sun/jmx/remote/internal/ClientNotifForwarder.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $ClientNotifForwarder = ::com::sun::jmx::remote::internal::ClientNotifForwarder;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Executor = ::java::util::concurrent::Executor;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

class ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0 : public $Runnable {
	$class(ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(ClientNotifForwarder$LinearExecutor* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$execute$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0>());
	}
	ClientNotifForwarder$LinearExecutor* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0, inst$)},
	{}
};
$MethodInfo ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/jmx/remote/internal/ClientNotifForwarder$LinearExecutor;)V", nullptr, $PUBLIC, $method(static_cast<void(ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0::*)(ClientNotifForwarder$LinearExecutor*)>(&ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jmx.remote.internal.ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0::load$($String* name, bool initialize) {
	$loadClass(ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0::class$ = nullptr;

$FieldInfo _ClientNotifForwarder$LinearExecutor_FieldInfo_[] = {
	{"command", "Ljava/lang/Runnable;", nullptr, $PRIVATE, $field(ClientNotifForwarder$LinearExecutor, command)},
	{"thread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(ClientNotifForwarder$LinearExecutor, thread)},
	{}
};

$MethodInfo _ClientNotifForwarder$LinearExecutor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClientNotifForwarder$LinearExecutor::*)()>(&ClientNotifForwarder$LinearExecutor::init$))},
	{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"lambda$execute$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ClientNotifForwarder$LinearExecutor::*)()>(&ClientNotifForwarder$LinearExecutor::lambda$execute$0))},
	{}
};

$InnerClassInfo _ClientNotifForwarder$LinearExecutor_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ClientNotifForwarder$LinearExecutor", "com.sun.jmx.remote.internal.ClientNotifForwarder", "LinearExecutor", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ClientNotifForwarder$LinearExecutor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.internal.ClientNotifForwarder$LinearExecutor",
	"java.lang.Object",
	"java.util.concurrent.Executor",
	_ClientNotifForwarder$LinearExecutor_FieldInfo_,
	_ClientNotifForwarder$LinearExecutor_MethodInfo_,
	nullptr,
	nullptr,
	_ClientNotifForwarder$LinearExecutor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ClientNotifForwarder"
};

$Object* allocate$ClientNotifForwarder$LinearExecutor($Class* clazz) {
	return $of($alloc(ClientNotifForwarder$LinearExecutor));
}

void ClientNotifForwarder$LinearExecutor::init$() {
}

void ClientNotifForwarder$LinearExecutor::execute($Runnable* command) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->command != nullptr) {
			$throwNew($IllegalArgumentException, "More than one command"_s);
		}
		$set(this, command, command);
		if (this->thread == nullptr) {
			$var($String, var$0, "ClientNotifForwarder-"_s);
			$init($ClientNotifForwarder);
			$set(this, thread, $new($Thread, nullptr, static_cast<$Runnable*>($$new(ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0, this)), $$concat(var$0, $$str(++$ClientNotifForwarder::threadId)), 0, false));
			$nc(this->thread)->setDaemon(true);
			$nc(this->thread)->start();
		}
	}
}

void ClientNotifForwarder$LinearExecutor::lambda$execute$0() {
	$useLocalCurrentObjectStackCache();
	while (true) {
		$var($Runnable, r, nullptr);
		$synchronized(this) {
			if (this->command == nullptr) {
				$set(this, thread, nullptr);
				return;
			} else {
				$assign(r, this->command);
				$set(this, command, nullptr);
			}
		}
		$nc(r)->run();
	}
}

ClientNotifForwarder$LinearExecutor::ClientNotifForwarder$LinearExecutor() {
}

$Class* ClientNotifForwarder$LinearExecutor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0::classInfo$.name)) {
			return ClientNotifForwarder$LinearExecutor$$Lambda$lambda$execute$0::load$(name, initialize);
		}
	}
	$loadClass(ClientNotifForwarder$LinearExecutor, name, initialize, &_ClientNotifForwarder$LinearExecutor_ClassInfo_, allocate$ClientNotifForwarder$LinearExecutor);
	return class$;
}

$Class* ClientNotifForwarder$LinearExecutor::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com