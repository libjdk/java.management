#ifndef _javax_management_loading_PrivateMLet_h_
#define _javax_management_loading_PrivateMLet_h_
//$ class javax.management.loading.PrivateMLet
//$ extends javax.management.loading.MLet
//$ implements javax.management.loading.PrivateClassLoader

#include <java/lang/Array.h>
#include <javax/management/loading/MLet.h>
#include <javax/management/loading/PrivateClassLoader.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace net {
		class URL;
		class URLStreamHandlerFactory;
	}
}

namespace javax {
	namespace management {
		namespace loading {

class $import PrivateMLet : public ::javax::management::loading::MLet, public ::javax::management::loading::PrivateClassLoader {
	$class(PrivateMLet, $NO_CLASS_INIT, ::javax::management::loading::MLet, ::javax::management::loading::PrivateClassLoader)
public:
	PrivateMLet();
	using ::javax::management::loading::MLet::findClass;
	using ::javax::management::loading::MLet::definePackage;
	using ::javax::management::loading::MLet::findResource;
	using ::javax::management::loading::MLet::defineClass;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($Array<::java::net::URL>* urls, bool delegateToCLR);
	void init$($Array<::java::net::URL>* urls, ::java::lang::ClassLoader* parent, bool delegateToCLR);
	void init$($Array<::java::net::URL>* urls, ::java::lang::ClassLoader* parent, ::java::net::URLStreamHandlerFactory* factory, bool delegateToCLR);
	using ::javax::management::loading::MLet::loadClass;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x22BE12AC22E5736B;
};

		} // loading
	} // management
} // javax

#endif // _javax_management_loading_PrivateMLet_h_