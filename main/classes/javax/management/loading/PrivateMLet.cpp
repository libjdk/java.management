#include <javax/management/loading/PrivateMLet.h>

#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <java/net/URLStreamHandlerFactory.h>
#include <javax/management/loading/MLet.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLStreamHandlerFactory = ::java::net::URLStreamHandlerFactory;
using $MLet = ::javax::management::loading::MLet;
using $PrivateClassLoader = ::javax::management::loading::PrivateClassLoader;

namespace javax {
	namespace management {
		namespace loading {

$FieldInfo _PrivateMLet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrivateMLet, serialVersionUID)},
	{}
};

$MethodInfo _PrivateMLet_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([Ljava/net/URL;Z)V", nullptr, $PUBLIC, $method(static_cast<void(PrivateMLet::*)($URLArray*,bool)>(&PrivateMLet::init$))},
	{"<init>", "([Ljava/net/URL;Ljava/lang/ClassLoader;Z)V", nullptr, $PUBLIC, $method(static_cast<void(PrivateMLet::*)($URLArray*,$ClassLoader*,bool)>(&PrivateMLet::init$))},
	{"<init>", "([Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;Z)V", nullptr, $PUBLIC, $method(static_cast<void(PrivateMLet::*)($URLArray*,$ClassLoader*,$URLStreamHandlerFactory*,bool)>(&PrivateMLet::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PrivateMLet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.loading.PrivateMLet",
	"javax.management.loading.MLet",
	"javax.management.loading.PrivateClassLoader",
	_PrivateMLet_FieldInfo_,
	_PrivateMLet_MethodInfo_
};

$Object* allocate$PrivateMLet($Class* clazz) {
	return $of($alloc(PrivateMLet));
}

int32_t PrivateMLet::hashCode() {
	 return this->$MLet::hashCode();
}

bool PrivateMLet::equals(Object$* arg0) {
	 return this->$MLet::equals(arg0);
}

$Object* PrivateMLet::clone() {
	 return this->$MLet::clone();
}

$String* PrivateMLet::toString() {
	 return this->$MLet::toString();
}

void PrivateMLet::finalize() {
	this->$MLet::finalize();
}

void PrivateMLet::init$($URLArray* urls, bool delegateToCLR) {
	$MLet::init$(urls, delegateToCLR);
}

void PrivateMLet::init$($URLArray* urls, $ClassLoader* parent, bool delegateToCLR) {
	$MLet::init$(urls, parent, delegateToCLR);
}

void PrivateMLet::init$($URLArray* urls, $ClassLoader* parent, $URLStreamHandlerFactory* factory, bool delegateToCLR) {
	$MLet::init$(urls, parent, factory, delegateToCLR);
}

PrivateMLet::PrivateMLet() {
}

$Class* PrivateMLet::load$($String* name, bool initialize) {
	$loadClass(PrivateMLet, name, initialize, &_PrivateMLet_ClassInfo_, allocate$PrivateMLet);
	return class$;
}

$Class* PrivateMLet::class$ = nullptr;

		} // loading
	} // management
} // javax