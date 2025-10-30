#include <javax/management/remote/JMXConnectorFactory$ConnectorFactory.h>

#include <javax/management/remote/JMXConnectorFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMXConnectorFactory = ::javax::management::remote::JMXConnectorFactory;

namespace javax {
	namespace management {
		namespace remote {

$CompoundAttribute _JMXConnectorFactory$ConnectorFactory_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _JMXConnectorFactory$ConnectorFactory_MethodInfo_[] = {
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TP;)TC;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _JMXConnectorFactory$ConnectorFactory_InnerClassesInfo_[] = {
	{"javax.management.remote.JMXConnectorFactory$ConnectorFactory", "javax.management.remote.JMXConnectorFactory", "ConnectorFactory", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JMXConnectorFactory$ConnectorFactory_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"javax.management.remote.JMXConnectorFactory$ConnectorFactory",
	nullptr,
	nullptr,
	nullptr,
	_JMXConnectorFactory$ConnectorFactory_MethodInfo_,
	"<P:Ljava/lang/Object;C:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_JMXConnectorFactory$ConnectorFactory_InnerClassesInfo_,
	_JMXConnectorFactory$ConnectorFactory_Annotations_,
	nullptr,
	nullptr,
	"javax.management.remote.JMXConnectorFactory"
};

$Object* allocate$JMXConnectorFactory$ConnectorFactory($Class* clazz) {
	return $of($alloc(JMXConnectorFactory$ConnectorFactory));
}

$Class* JMXConnectorFactory$ConnectorFactory::load$($String* name, bool initialize) {
	$loadClass(JMXConnectorFactory$ConnectorFactory, name, initialize, &_JMXConnectorFactory$ConnectorFactory_ClassInfo_, allocate$JMXConnectorFactory$ConnectorFactory);
	return class$;
}

$Class* JMXConnectorFactory$ConnectorFactory::class$ = nullptr;

		} // remote
	} // management
} // javax