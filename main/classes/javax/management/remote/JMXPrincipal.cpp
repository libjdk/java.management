#include <javax/management/remote/JMXPrincipal.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/security/Principal.h>
#include <jcpp.h>

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Principal = ::java::security::Principal;

namespace javax {
	namespace management {
		namespace remote {

$FieldInfo _JMXPrincipal_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMXPrincipal, serialVersionUID)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JMXPrincipal, name)},
	{}
};

$MethodInfo _JMXPrincipal_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JMXPrincipal::*)($String*)>(&JMXPrincipal::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JMXPrincipal::*)($ObjectInputStream*)>(&JMXPrincipal::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&JMXPrincipal::validate)), "java.lang.NullPointerException"},
	{}
};

$ClassInfo _JMXPrincipal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.remote.JMXPrincipal",
	"java.lang.Object",
	"java.security.Principal,java.io.Serializable",
	_JMXPrincipal_FieldInfo_,
	_JMXPrincipal_MethodInfo_
};

$Object* allocate$JMXPrincipal($Class* clazz) {
	return $of($alloc(JMXPrincipal));
}

$Object* JMXPrincipal::clone() {
	 return this->$Principal::clone();
}

void JMXPrincipal::finalize() {
	this->$Principal::finalize();
}

void JMXPrincipal::init$($String* name) {
	validate(name);
	$set(this, name, name);
}

$String* JMXPrincipal::getName() {
	return this->name;
}

$String* JMXPrincipal::toString() {
	return ($str({"JMXPrincipal:  "_s, this->name}));
}

bool JMXPrincipal::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (o == nullptr) {
		return false;
	}
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf(JMXPrincipal, o))) {
		return false;
	}
	$var(JMXPrincipal, that, $cast(JMXPrincipal, o));
	return ($nc($(this->getName()))->equals($($nc(that)->getName())));
}

int32_t JMXPrincipal::hashCode() {
	return $nc(this->name)->hashCode();
}

void JMXPrincipal::readObject($ObjectInputStream* ois) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, gf, $nc(ois)->readFields());
	$var($String, principalName, $cast($String, $nc(gf)->get("name"_s, ($Object*)nullptr)));
	try {
		validate(principalName);
		$set(this, name, principalName);
	} catch ($NullPointerException& e) {
		$throwNew($InvalidObjectException, $(e->getMessage()));
	}
}

void JMXPrincipal::validate($String* name) {
	$init(JMXPrincipal);
	if (name == nullptr) {
		$throwNew($NullPointerException, "illegal null input"_s);
	}
}

JMXPrincipal::JMXPrincipal() {
}

$Class* JMXPrincipal::load$($String* name, bool initialize) {
	$loadClass(JMXPrincipal, name, initialize, &_JMXPrincipal_ClassInfo_, allocate$JMXPrincipal);
	return class$;
}

$Class* JMXPrincipal::class$ = nullptr;

		} // remote
	} // management
} // javax