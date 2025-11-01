#ifndef _javax_management_MBeanFeatureInfo_h_
#define _javax_management_MBeanFeatureInfo_h_
//$ class javax.management.MBeanFeatureInfo
//$ extends java.io.Serializable
//$ implements javax.management.DescriptorRead

#include <java/io/Serializable.h>
#include <javax/management/DescriptorRead.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace management {
		class Descriptor;
	}
}

namespace javax {
	namespace management {

class $export MBeanFeatureInfo : public ::java::io::Serializable, public ::javax::management::DescriptorRead {
	$class(MBeanFeatureInfo, $NO_CLASS_INIT, ::java::io::Serializable, ::javax::management::DescriptorRead)
public:
	MBeanFeatureInfo();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* name, $String* description);
	void init$($String* name, $String* description, ::javax::management::Descriptor* descriptor);
	virtual bool equals(Object$* o) override;
	virtual $String* getDescription();
	virtual ::javax::management::Descriptor* getDescriptor() override;
	virtual $String* getName();
	virtual int32_t hashCode() override;
	void readObject(::java::io::ObjectInputStream* in);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x36DB75DCC2C15521;
	$String* name = nullptr;
	$String* description = nullptr;
	::javax::management::Descriptor* descriptor = nullptr;
};

	} // management
} // javax

#endif // _javax_management_MBeanFeatureInfo_h_