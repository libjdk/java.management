#include <com/sun/jmx/defaults/JmxProperties.h>

#include <java/lang/System$Logger.h>
#include <jcpp.h>

#undef JMX_IMPL_NAME
#undef JMX_IMPL_VENDOR
#undef JMX_IMPL_VERSION
#undef JMX_INITIAL_BUILDER
#undef JMX_SPEC_NAME
#undef JMX_SPEC_VENDOR
#undef JMX_SPEC_VERSION
#undef MBEANSERVER_LOGGER
#undef MBEANSERVER_LOGGER_NAME
#undef MISC_LOGGER
#undef MISC_LOGGER_NAME
#undef MLET_LIB_DIR
#undef MLET_LOGGER
#undef MLET_LOGGER_NAME
#undef MODELMBEAN_LOGGER
#undef MODELMBEAN_LOGGER_NAME
#undef MONITOR_LOGGER
#undef MONITOR_LOGGER_NAME
#undef NOTIFICATION_LOGGER
#undef NOTIFICATION_LOGGER_NAME
#undef RELATION_LOGGER
#undef RELATION_LOGGER_NAME
#undef TIMER_LOGGER
#undef TIMER_LOGGER_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;

namespace com {
	namespace sun {
		namespace jmx {
			namespace defaults {

$FieldInfo _JmxProperties_FieldInfo_[] = {
	{"JMX_INITIAL_BUILDER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, JMX_INITIAL_BUILDER)},
	{"MLET_LIB_DIR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, MLET_LIB_DIR)},
	{"JMX_SPEC_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, JMX_SPEC_NAME)},
	{"JMX_SPEC_VERSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, JMX_SPEC_VERSION)},
	{"JMX_SPEC_VENDOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, JMX_SPEC_VENDOR)},
	{"JMX_IMPL_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, JMX_IMPL_NAME)},
	{"JMX_IMPL_VENDOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, JMX_IMPL_VENDOR)},
	{"JMX_IMPL_VERSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, JMX_IMPL_VERSION)},
	{"MBEANSERVER_LOGGER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, MBEANSERVER_LOGGER_NAME)},
	{"MBEANSERVER_LOGGER", "Ljava/lang/System$Logger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, MBEANSERVER_LOGGER)},
	{"MLET_LOGGER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, MLET_LOGGER_NAME)},
	{"MLET_LOGGER", "Ljava/lang/System$Logger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, MLET_LOGGER)},
	{"MONITOR_LOGGER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, MONITOR_LOGGER_NAME)},
	{"MONITOR_LOGGER", "Ljava/lang/System$Logger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, MONITOR_LOGGER)},
	{"TIMER_LOGGER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, TIMER_LOGGER_NAME)},
	{"TIMER_LOGGER", "Ljava/lang/System$Logger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, TIMER_LOGGER)},
	{"NOTIFICATION_LOGGER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, NOTIFICATION_LOGGER_NAME)},
	{"NOTIFICATION_LOGGER", "Ljava/lang/System$Logger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, NOTIFICATION_LOGGER)},
	{"RELATION_LOGGER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, RELATION_LOGGER_NAME)},
	{"RELATION_LOGGER", "Ljava/lang/System$Logger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, RELATION_LOGGER)},
	{"MODELMBEAN_LOGGER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, MODELMBEAN_LOGGER_NAME)},
	{"MODELMBEAN_LOGGER", "Ljava/lang/System$Logger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, MODELMBEAN_LOGGER)},
	{"MISC_LOGGER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, MISC_LOGGER_NAME)},
	{"MISC_LOGGER", "Ljava/lang/System$Logger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JmxProperties, MISC_LOGGER)},
	{}
};

$MethodInfo _JmxProperties_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JmxProperties::*)()>(&JmxProperties::init$))},
	{}
};

$ClassInfo _JmxProperties_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.defaults.JmxProperties",
	"java.lang.Object",
	nullptr,
	_JmxProperties_FieldInfo_,
	_JmxProperties_MethodInfo_
};

$Object* allocate$JmxProperties($Class* clazz) {
	return $of($alloc(JmxProperties));
}

$String* JmxProperties::JMX_INITIAL_BUILDER = nullptr;
$String* JmxProperties::MLET_LIB_DIR = nullptr;
$String* JmxProperties::JMX_SPEC_NAME = nullptr;
$String* JmxProperties::JMX_SPEC_VERSION = nullptr;
$String* JmxProperties::JMX_SPEC_VENDOR = nullptr;
$String* JmxProperties::JMX_IMPL_NAME = nullptr;
$String* JmxProperties::JMX_IMPL_VENDOR = nullptr;
$String* JmxProperties::JMX_IMPL_VERSION = nullptr;
$String* JmxProperties::MBEANSERVER_LOGGER_NAME = nullptr;
$System$Logger* JmxProperties::MBEANSERVER_LOGGER = nullptr;
$String* JmxProperties::MLET_LOGGER_NAME = nullptr;
$System$Logger* JmxProperties::MLET_LOGGER = nullptr;
$String* JmxProperties::MONITOR_LOGGER_NAME = nullptr;
$System$Logger* JmxProperties::MONITOR_LOGGER = nullptr;
$String* JmxProperties::TIMER_LOGGER_NAME = nullptr;
$System$Logger* JmxProperties::TIMER_LOGGER = nullptr;
$String* JmxProperties::NOTIFICATION_LOGGER_NAME = nullptr;
$System$Logger* JmxProperties::NOTIFICATION_LOGGER = nullptr;
$String* JmxProperties::RELATION_LOGGER_NAME = nullptr;
$System$Logger* JmxProperties::RELATION_LOGGER = nullptr;
$String* JmxProperties::MODELMBEAN_LOGGER_NAME = nullptr;
$System$Logger* JmxProperties::MODELMBEAN_LOGGER = nullptr;
$String* JmxProperties::MISC_LOGGER_NAME = nullptr;
$System$Logger* JmxProperties::MISC_LOGGER = nullptr;

void JmxProperties::init$() {
}

void clinit$JmxProperties($Class* class$) {
	$assignStatic(JmxProperties::JMX_INITIAL_BUILDER, "javax.management.builder.initial"_s);
	$assignStatic(JmxProperties::MLET_LIB_DIR, "jmx.mlet.library.dir"_s);
	$assignStatic(JmxProperties::JMX_SPEC_NAME, "jmx.specification.name"_s);
	$assignStatic(JmxProperties::JMX_SPEC_VERSION, "jmx.specification.version"_s);
	$assignStatic(JmxProperties::JMX_SPEC_VENDOR, "jmx.specification.vendor"_s);
	$assignStatic(JmxProperties::JMX_IMPL_NAME, "jmx.implementation.name"_s);
	$assignStatic(JmxProperties::JMX_IMPL_VENDOR, "jmx.implementation.vendor"_s);
	$assignStatic(JmxProperties::JMX_IMPL_VERSION, "jmx.implementation.version"_s);
	$assignStatic(JmxProperties::MBEANSERVER_LOGGER_NAME, "javax.management.mbeanserver"_s);
	$assignStatic(JmxProperties::MLET_LOGGER_NAME, "javax.management.mlet"_s);
	$assignStatic(JmxProperties::MONITOR_LOGGER_NAME, "javax.management.monitor"_s);
	$assignStatic(JmxProperties::TIMER_LOGGER_NAME, "javax.management.timer"_s);
	$assignStatic(JmxProperties::NOTIFICATION_LOGGER_NAME, "javax.management.notification"_s);
	$assignStatic(JmxProperties::RELATION_LOGGER_NAME, "javax.management.relation"_s);
	$assignStatic(JmxProperties::MODELMBEAN_LOGGER_NAME, "javax.management.modelmbean"_s);
	$assignStatic(JmxProperties::MISC_LOGGER_NAME, "javax.management.misc"_s);
	$beforeCallerSensitive();
	$assignStatic(JmxProperties::MBEANSERVER_LOGGER, $System::getLogger(JmxProperties::MBEANSERVER_LOGGER_NAME));
	$assignStatic(JmxProperties::MLET_LOGGER, $System::getLogger(JmxProperties::MLET_LOGGER_NAME));
	$assignStatic(JmxProperties::MONITOR_LOGGER, $System::getLogger(JmxProperties::MONITOR_LOGGER_NAME));
	$assignStatic(JmxProperties::TIMER_LOGGER, $System::getLogger(JmxProperties::TIMER_LOGGER_NAME));
	$assignStatic(JmxProperties::NOTIFICATION_LOGGER, $System::getLogger(JmxProperties::NOTIFICATION_LOGGER_NAME));
	$assignStatic(JmxProperties::RELATION_LOGGER, $System::getLogger(JmxProperties::RELATION_LOGGER_NAME));
	$assignStatic(JmxProperties::MODELMBEAN_LOGGER, $System::getLogger(JmxProperties::MODELMBEAN_LOGGER_NAME));
	$assignStatic(JmxProperties::MISC_LOGGER, $System::getLogger(JmxProperties::MISC_LOGGER_NAME));
}

JmxProperties::JmxProperties() {
}

$Class* JmxProperties::load$($String* name, bool initialize) {
	$loadClass(JmxProperties, name, initialize, &_JmxProperties_ClassInfo_, clinit$JmxProperties, allocate$JmxProperties);
	return class$;
}

$Class* JmxProperties::class$ = nullptr;

			} // defaults
		} // jmx
	} // sun
} // com