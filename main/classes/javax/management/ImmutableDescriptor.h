#ifndef _javax_management_ImmutableDescriptor_h_
#define _javax_management_ImmutableDescriptor_h_
//$ class javax.management.ImmutableDescriptor
//$ extends javax.management.Descriptor

#include <java/lang/Array.h>
#include <javax/management/Descriptor.h>

#pragma push_macro("EMPTY_DESCRIPTOR")
#undef EMPTY_DESCRIPTOR

namespace java {
	namespace util {
		class Map;
		class SortedMap;
	}
}

namespace javax {
	namespace management {

class $export ImmutableDescriptor : public ::javax::management::Descriptor {
	$class(ImmutableDescriptor, 0, ::javax::management::Descriptor)
public:
	ImmutableDescriptor();
	void init$($StringArray* fieldNames, $ObjectArray* fieldValues);
	void init$($StringArray* fields);
	void init$(::java::util::Map* fields);
	static void checkIllegalFieldName($String* name);
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	int32_t fieldIndex($String* name);
	static int32_t findNonEmpty($Array<::javax::management::Descriptor>* ds, int32_t start);
	virtual $StringArray* getFieldNames() override;
	virtual $Object* getFieldValue($String* fieldName) override;
	virtual $ObjectArray* getFieldValues($StringArray* fieldNames) override;
	virtual $StringArray* getFields() override;
	virtual int32_t hashCode() override;
	static void illegal($String* message);
	static bool isEmpty(::javax::management::Descriptor* d);
	virtual bool isValid() override;
	static ::java::util::SortedMap* makeMap($StringArray* fieldNames, $ObjectArray* fieldValues);
	static ::java::util::SortedMap* makeMap($StringArray* fields);
	static ::javax::management::Descriptor* nonNullDescriptor(::javax::management::Descriptor* d);
	$Object* readResolve();
	virtual void removeField($String* fieldName) override;
	virtual void setField($String* fieldName, Object$* fieldValue) override;
	virtual void setFields($StringArray* fieldNames, $ObjectArray* fieldValues) override;
	virtual $String* toString() override;
	static ::javax::management::ImmutableDescriptor* union$($Array<::javax::management::Descriptor>* descriptors);
	static void unsupported();
	static const int64_t serialVersionUID = (int64_t)0x7ADD4541BA450805;
	$StringArray* names = nullptr;
	$ObjectArray* values = nullptr;
	int32_t hashCode$ = 0;
	static ::javax::management::ImmutableDescriptor* EMPTY_DESCRIPTOR;
};

	} // management
} // javax

#pragma pop_macro("EMPTY_DESCRIPTOR")

#endif // _javax_management_ImmutableDescriptor_h_