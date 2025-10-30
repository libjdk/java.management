#include <javax/management/openmbean/OpenType.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/io/IOException.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamException.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/management/Descriptor.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/openmbean/ArrayType.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType$1.h>
#include <javax/management/openmbean/TabularData.h>
#include <jcpp.h>

#undef ALLOWED_CLASSNAMES
#undef ALLOWED_CLASSNAMES_LIST

using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $IOException = ::java::io::IOException;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectStreamException = ::java::io::ObjectStreamException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Descriptor = ::javax::management::Descriptor;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $ArrayType = ::javax::management::openmbean::ArrayType;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType$1 = ::javax::management::openmbean::OpenType$1;
using $TabularData = ::javax::management::openmbean::TabularData;

namespace javax {
	namespace management {
		namespace openmbean {

$CompoundAttribute _OpenType_FieldAnnotations_ALLOWED_CLASSNAMES[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _OpenType_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(OpenType, serialVersionUID)},
	{"ALLOWED_CLASSNAMES_LIST", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $STATIC | $FINAL, $staticField(OpenType, ALLOWED_CLASSNAMES_LIST)},
	{"ALLOWED_CLASSNAMES", "[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(OpenType, ALLOWED_CLASSNAMES), _OpenType_FieldAnnotations_ALLOWED_CLASSNAMES},
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OpenType, className)},
	{"description", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OpenType, description)},
	{"typeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OpenType, typeName)},
	{"isArray", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(OpenType, isArray$)},
	{"descriptor", "Ljavax/management/Descriptor;", nullptr, $PRIVATE | $TRANSIENT, $field(OpenType, descriptor)},
	{}
};

$MethodInfo _OpenType_MethodInfo_[] = {
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(OpenType::*)($String*,$String*,$String*)>(&OpenType::init$)), "javax.management.openmbean.OpenDataException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(OpenType::*)($String*,$String*,$String*,bool)>(&OpenType::init$))},
	{"checkClassNameOverride", "()V", nullptr, $PRIVATE, $method(static_cast<void(OpenType::*)()>(&OpenType::checkClassNameOverride)), "java.lang.SecurityException"},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDescriptor", "()Ljavax/management/Descriptor;", nullptr, $SYNCHRONIZED},
	{"getTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isArray", "()Z", nullptr, $PUBLIC},
	{"isAssignableFrom", "(Ljavax/management/openmbean/OpenType;)Z", "(Ljavax/management/openmbean/OpenType<*>;)Z", 0},
	{"isValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"overridesGetClassName", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Class*)>(&OpenType::overridesGetClassName))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(OpenType::*)($ObjectInputStream*)>(&OpenType::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"safeGetClassName", "()Ljava/lang/String;", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"valid", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&OpenType::valid))},
	{"validClassName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&OpenType::validClassName)), "javax.management.openmbean.OpenDataException"},
	{}
};

$InnerClassInfo _OpenType_InnerClassesInfo_[] = {
	{"javax.management.openmbean.OpenType$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _OpenType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.management.openmbean.OpenType",
	"java.lang.Object",
	"java.io.Serializable",
	_OpenType_FieldInfo_,
	_OpenType_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/io/Serializable;",
	nullptr,
	_OpenType_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.management.openmbean.OpenType$1"
};

$Object* allocate$OpenType($Class* clazz) {
	return $of($alloc(OpenType));
}

bool OpenType::equals(Object$* obj) {
	 return this->$Serializable::equals(obj);
}

int32_t OpenType::hashCode() {
	 return this->$Serializable::hashCode();
}

$String* OpenType::toString() {
	 return this->$Serializable::toString();
}

$List* OpenType::ALLOWED_CLASSNAMES_LIST = nullptr;
$StringArray* OpenType::ALLOWED_CLASSNAMES = nullptr;

void OpenType::init$($String* className, $String* typeName, $String* description) {
	this->isArray$ = false;
	checkClassNameOverride();
	$set(this, typeName, valid("typeName"_s, typeName));
	$set(this, description, valid("description"_s, description));
	$set(this, className, validClassName(className));
	this->isArray$ = (this->className != nullptr && $nc(this->className)->startsWith("["_s));
}

void OpenType::init$($String* className, $String* typeName, $String* description, bool isArray) {
	this->isArray$ = false;
	$set(this, className, valid("className"_s, className));
	$set(this, typeName, valid("typeName"_s, typeName));
	$set(this, description, valid("description"_s, description));
	this->isArray$ = isArray;
}

void OpenType::checkClassNameOverride() {
	$beforeCallerSensitive();
	if ($of(this)->getClass()->getClassLoader() == nullptr) {
		return;
	}
	if (overridesGetClassName($of(this)->getClass())) {
		$var($GetPropertyAction, getExtendOpenTypes, $new($GetPropertyAction, "jmx.extend.open.types"_s));
		if ($AccessController::doPrivileged(static_cast<$PrivilegedAction*>(getExtendOpenTypes)) == nullptr) {
			$throwNew($SecurityException, "Cannot override getClassName() unless -Djmx.extend.open.types"_s);
		}
	}
}

bool OpenType::overridesGetClassName($Class* c) {
	$init(OpenType);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($OpenType$1, c)))))))->booleanValue();
}

$String* OpenType::validClassName($String* className$renamed) {
	$init(OpenType);
	$useLocalCurrentObjectStackCache();
	$var($String, className, className$renamed);
	$assign(className, valid("className"_s, className));
	int32_t n = 0;
	while ($nc(className)->startsWith("["_s, n)) {
		++n;
	}
	$var($String, eltClassName, nullptr);
	bool isPrimitiveArray = false;
	if (n > 0) {
		bool var$0 = $nc(className)->startsWith("L"_s, n);
		if (var$0 && className->endsWith(";"_s)) {
			$assign(eltClassName, className->substring(n + 1, className->length() - 1));
		} else if (n == className->length() - 1) {
			$assign(eltClassName, className->substring(n, className->length()));
			isPrimitiveArray = true;
		} else {
			$throwNew($OpenDataException, $$str({"Argument className=\""_s, className, "\" is not a valid class name"_s}));
		}
	} else {
		$assign(eltClassName, className);
	}
	bool ok = false;
	if (isPrimitiveArray) {
		ok = $ArrayType::isPrimitiveContentType(eltClassName);
	} else {
		ok = $nc(OpenType::ALLOWED_CLASSNAMES_LIST)->contains(eltClassName);
	}
	if (!ok) {
		$throwNew($OpenDataException, $$str({"Argument className=\""_s, className, "\" is not one of the allowed Java class names for open data."_s}));
	}
	return className;
}

$String* OpenType::valid($String* argName, $String* argValue$renamed) {
	$init(OpenType);
	$useLocalCurrentObjectStackCache();
	$var($String, argValue, argValue$renamed);
	if (argValue == nullptr || $nc(($assign(argValue, $nc(argValue)->trim())))->isEmpty()) {
		$throwNew($IllegalArgumentException, $$str({"Argument "_s, argName, " cannot be null or empty"_s}));
	}
	return argValue;
}

$Descriptor* OpenType::getDescriptor() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->descriptor == nullptr) {
			$set(this, descriptor, $new($ImmutableDescriptor, $$new($StringArray, {"openType"_s}), $$new($ObjectArray, {$of(this)})));
		}
		return this->descriptor;
	}
}

$String* OpenType::getClassName() {
	return this->className;
}

$String* OpenType::safeGetClassName() {
	return this->className;
}

$String* OpenType::getTypeName() {
	return this->typeName;
}

$String* OpenType::getDescription() {
	return this->description;
}

bool OpenType::isArray() {
	return this->isArray$;
}

bool OpenType::isAssignableFrom(OpenType* ot) {
	return this->equals(ot);
}

void OpenType::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	checkClassNameOverride();
	$var($ObjectInputStream$GetField, fields, $nc(in)->readFields());
	$var($String, classNameField, nullptr);
	$var($String, descriptionField, nullptr);
	$var($String, typeNameField, nullptr);
	try {
		$assign(classNameField, validClassName($cast($String, $($nc(fields)->get("className"_s, ($Object*)nullptr)))));
		$assign(descriptionField, valid("description"_s, $cast($String, $($nc(fields)->get("description"_s, ($Object*)nullptr)))));
		$assign(typeNameField, valid("typeName"_s, $cast($String, $($nc(fields)->get("typeName"_s, ($Object*)nullptr)))));
	} catch ($Exception& e) {
		$var($IOException, e2, $new($InvalidObjectException, $(e->getMessage())));
		e2->initCause(e);
		$throw(e2);
	}
	$set(this, className, classNameField);
	$set(this, description, descriptionField);
	$set(this, typeName, typeNameField);
	this->isArray$ = ($nc(this->className)->startsWith("["_s));
}

void clinit$OpenType($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$load($CompositeData);
	$load($TabularData);
	$assignStatic(OpenType::ALLOWED_CLASSNAMES_LIST, $Collections::unmodifiableList($($Arrays::asList($$new($StringArray, {
		"java.lang.Void"_s,
		"java.lang.Boolean"_s,
		"java.lang.Character"_s,
		"java.lang.Byte"_s,
		"java.lang.Short"_s,
		"java.lang.Integer"_s,
		"java.lang.Long"_s,
		"java.lang.Float"_s,
		"java.lang.Double"_s,
		"java.lang.String"_s,
		"java.math.BigDecimal"_s,
		"java.math.BigInteger"_s,
		"java.util.Date"_s,
		"javax.management.ObjectName"_s,
		$($CompositeData::class$->getName()),
		$($TabularData::class$->getName())
	})))));
	$assignStatic(OpenType::ALLOWED_CLASSNAMES, $fcast($StringArray, $nc(OpenType::ALLOWED_CLASSNAMES_LIST)->toArray($$new($StringArray, 0))));
}

OpenType::OpenType() {
}

$Class* OpenType::load$($String* name, bool initialize) {
	$loadClass(OpenType, name, initialize, &_OpenType_ClassInfo_, clinit$OpenType, allocate$OpenType);
	return class$;
}

$Class* OpenType::class$ = nullptr;

		} // openmbean
	} // management
} // javax