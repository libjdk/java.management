#include <javax/management/MBeanAttributeInfo.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Objects.h>
#include <javax/management/Descriptor.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/IntrospectionException.h>
#include <javax/management/MBeanFeatureInfo.h>
#include <jcpp.h>

#undef NO_ATTRIBUTES
#undef TYPE

using $DescriptorArray = $Array<::javax::management::Descriptor>;
using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $Executable = ::java::lang::reflect::Executable;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Objects = ::java::util::Objects;
using $Descriptor = ::javax::management::Descriptor;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $IntrospectionException = ::javax::management::IntrospectionException;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;

namespace javax {
	namespace management {

$FieldInfo _MBeanAttributeInfo_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MBeanAttributeInfo, serialVersionUID)},
	{"NO_ATTRIBUTES", "[Ljavax/management/MBeanAttributeInfo;", nullptr, $STATIC | $FINAL, $staticField(MBeanAttributeInfo, NO_ATTRIBUTES)},
	{"attributeType", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MBeanAttributeInfo, attributeType$)},
	{"isWrite", "Z", nullptr, $PRIVATE | $FINAL, $field(MBeanAttributeInfo, isWrite)},
	{"isRead", "Z", nullptr, $PRIVATE | $FINAL, $field(MBeanAttributeInfo, isRead)},
	{"is", "Z", nullptr, $PRIVATE | $FINAL, $field(MBeanAttributeInfo, is)},
	{}
};

$MethodInfo _MBeanAttributeInfo_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZZ)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanAttributeInfo::*)($String*,$String*,$String*,bool,bool,bool)>(&MBeanAttributeInfo::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZZLjavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanAttributeInfo::*)($String*,$String*,$String*,bool,bool,bool,$Descriptor*)>(&MBeanAttributeInfo::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanAttributeInfo::*)($String*,$String*,$Method*,$Method*)>(&MBeanAttributeInfo::init$)), "javax.management.IntrospectionException"},
	{"attributeType", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Method*,$Method*)>(&MBeanAttributeInfo::attributeType)), "javax.management.IntrospectionException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isIs", "()Z", nullptr, $PUBLIC},
	{"isIs", "(Ljava/lang/reflect/Method;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Method*)>(&MBeanAttributeInfo::isIs))},
	{"isReadable", "()Z", nullptr, $PUBLIC},
	{"isWritable", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MBeanAttributeInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MBeanAttributeInfo",
	"javax.management.MBeanFeatureInfo",
	"java.lang.Cloneable",
	_MBeanAttributeInfo_FieldInfo_,
	_MBeanAttributeInfo_MethodInfo_
};

$Object* allocate$MBeanAttributeInfo($Class* clazz) {
	return $of($alloc(MBeanAttributeInfo));
}

void MBeanAttributeInfo::finalize() {
	this->$MBeanFeatureInfo::finalize();
}

int64_t MBeanAttributeInfo::serialVersionUID = 0;
$MBeanAttributeInfoArray* MBeanAttributeInfo::NO_ATTRIBUTES = nullptr;

void MBeanAttributeInfo::init$($String* name, $String* type, $String* description, bool isReadable, bool isWritable, bool isIs) {
	MBeanAttributeInfo::init$(name, type, description, isReadable, isWritable, isIs, ($Descriptor*)nullptr);
}

void MBeanAttributeInfo::init$($String* name, $String* type, $String* description, bool isReadable, bool isWritable, bool isIs, $Descriptor* descriptor) {
	$MBeanFeatureInfo::init$(name, description, descriptor);
	$set(this, attributeType$, type);
	this->isRead = isReadable;
	this->isWrite = isWritable;
	if (isIs && !isReadable) {
		$throwNew($IllegalArgumentException, "Cannot have an \"is\" getter for a non-readable attribute"_s);
	}
	bool var$0 = isIs && !$nc(type)->equals("java.lang.Boolean"_s);
	if (var$0 && !type->equals("boolean"_s)) {
		$throwNew($IllegalArgumentException, "Cannot have an \"is\" getter for a non-boolean attribute"_s);
	}
	this->is = isIs;
}

void MBeanAttributeInfo::init$($String* name, $String* description, $Method* getter, $Method* setter) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, name);
	$var($String, var$1, attributeType(getter, setter));
	$var($String, var$2, description);
	bool var$3 = (getter != nullptr);
	bool var$4 = (setter != nullptr);
	bool var$5 = isIs(getter);
	MBeanAttributeInfo::init$(var$0, var$1, var$2, var$3, var$4, var$5, $($ImmutableDescriptor::union$($$new($DescriptorArray, {
		$($Introspector::descriptorForElement(static_cast<$AnnotatedElement*>(static_cast<$AccessibleObject*>(static_cast<$Executable*>(getter))))),
		$($Introspector::descriptorForElement(static_cast<$AnnotatedElement*>(static_cast<$AccessibleObject*>(static_cast<$Executable*>(setter)))))
	}))));
}

$Object* MBeanAttributeInfo::clone() {
	try {
		return $of($MBeanFeatureInfo::clone());
	} catch ($CloneNotSupportedException& e) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

$String* MBeanAttributeInfo::getType() {
	return this->attributeType$;
}

bool MBeanAttributeInfo::isReadable() {
	return this->isRead;
}

bool MBeanAttributeInfo::isWritable() {
	return this->isWrite;
}

bool MBeanAttributeInfo::isIs() {
	return this->is;
}

$String* MBeanAttributeInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, access, nullptr);
	if (isReadable()) {
		if (isWritable()) {
			$assign(access, "read/write"_s);
		} else {
			$assign(access, "read-only"_s);
		}
	} else if (isWritable()) {
		$assign(access, "write-only"_s);
	} else {
		$assign(access, "no-access"_s);
	}
	$var($String, var$11, $$str({$($of(this)->getClass()->getName()), "[description="_s}));
	$var($String, var$10, $$concat(var$11, $(getDescription())));
	$var($String, var$9, $$concat(var$10, ", name="));
	$var($String, var$8, $$concat(var$9, $(getName())));
	$var($String, var$7, $$concat(var$8, ", type="));
	$var($String, var$6, $$concat(var$7, $(getType())));
	$var($String, var$5, $$concat(var$6, ", "));
	$var($String, var$4, $$concat(var$5, access));
	$var($String, var$3, $$concat(var$4, ", "));
	$var($String, var$2, $$concat(var$3, (isIs() ? "isIs, "_s : ""_s)));
	$var($String, var$1, $$concat(var$2, "descriptor="));
	$var($String, var$0, $$concat(var$1, $(getDescriptor())));
	return $concat(var$0, "]");
}

bool MBeanAttributeInfo::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf(MBeanAttributeInfo, o))) {
		return false;
	}
	$var(MBeanAttributeInfo, p, $cast(MBeanAttributeInfo, o));
	$var($Object, var$6, $of($nc(p)->getName()));
	bool var$5 = $Objects::equals(var$6, $(getName()));
	if (var$5) {
		$var($Object, var$7, $of($nc(p)->getType()));
		var$5 = $Objects::equals(var$7, $(getType()));
	}
	bool var$4 = var$5;
	if (var$4) {
		$var($Object, var$8, $of($nc(p)->getDescription()));
		var$4 = $Objects::equals(var$8, $(getDescription()));
	}
	bool var$3 = var$4;
	if (var$3) {
		$var($Object, var$9, $of($nc(p)->getDescriptor()));
		var$3 = $Objects::equals(var$9, $(getDescriptor()));
	}
	bool var$2 = var$3;
	if (var$2) {
		bool var$10 = $nc(p)->isReadable();
		var$2 = var$10 == isReadable();
	}
	bool var$1 = var$2;
	if (var$1) {
		bool var$11 = p->isWritable();
		var$1 = var$11 == isWritable();
	}
	bool var$0 = var$1;
	if (var$0) {
		bool var$12 = p->isIs();
		var$0 = var$12 == isIs();
	}
	return (var$0);
}

int32_t MBeanAttributeInfo::hashCode() {
	$useLocalCurrentObjectStackCache();
	return $Objects::hash($$new($ObjectArray, {
		$($of(getName())),
		$($of(getType()))
	}));
}

bool MBeanAttributeInfo::isIs($Method* getter) {
	$init(MBeanAttributeInfo);
	bool var$0 = getter != nullptr && $nc($(getter->getName()))->startsWith("is"_s);
	if (var$0) {
		$init($Boolean);
		bool var$1 = $nc($of(getter->getReturnType()))->equals($Boolean::TYPE);
		var$0 = (var$1 || $nc($of(getter->getReturnType()))->equals($Boolean::class$));
	}
	return (var$0);
}

$String* MBeanAttributeInfo::attributeType($Method* getter, $Method* setter) {
	$init(MBeanAttributeInfo);
	$useLocalCurrentObjectStackCache();
	$Class* type = nullptr;
	if (getter != nullptr) {
		if ($nc($(getter->getParameterTypes()))->length != 0) {
			$throwNew($IntrospectionException, "bad getter arg count"_s);
		}
		type = getter->getReturnType();
		$init($Void);
		if (type == $Void::TYPE) {
			$throwNew($IntrospectionException, $$str({"getter "_s, $(getter->getName()), " returns void"_s}));
		}
	}
	if (setter != nullptr) {
		$var($ClassArray, params, setter->getParameterTypes());
		if ($nc(params)->length != 1) {
			$throwNew($IntrospectionException, "bad setter arg count"_s);
		}
		if (type == nullptr) {
			type = $nc(params)->get(0);
		} else if (type != $nc(params)->get(0)) {
			$throwNew($IntrospectionException, "type mismatch between getter and setter"_s);
		}
	}
	if (type == nullptr) {
		$throwNew($IntrospectionException, "getter and setter cannot both be null"_s);
	}
	return $nc(type)->getName();
}

void clinit$MBeanAttributeInfo($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		int64_t uid = 0x77F8293B6A2944D8;
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.serial.form"_s));
			$var($String, form, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			if ("1.0"_s->equals(form)) {
				uid = 0x61C0CD3EDFC681B1;
			}
		} catch ($Exception& e) {
		}
		MBeanAttributeInfo::serialVersionUID = uid;
	}
	$assignStatic(MBeanAttributeInfo::NO_ATTRIBUTES, $new($MBeanAttributeInfoArray, 0));
}

MBeanAttributeInfo::MBeanAttributeInfo() {
}

$Class* MBeanAttributeInfo::load$($String* name, bool initialize) {
	$loadClass(MBeanAttributeInfo, name, initialize, &_MBeanAttributeInfo_ClassInfo_, clinit$MBeanAttributeInfo, allocate$MBeanAttributeInfo);
	return class$;
}

$Class* MBeanAttributeInfo::class$ = nullptr;

	} // management
} // javax