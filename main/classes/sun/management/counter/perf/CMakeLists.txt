#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.management.coun_11_SRCS)
file(GLOB classes.sun.management.coun_11_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.management.coun_11_HEADERS}) 
list(LENGTH classes.sun.management.coun_11_SRCS classes.sun.management.coun_11_SRCS_LENGTH)
if(classes.sun.management.coun_11_SRCS_LENGTH)
	add_library(classes.sun.management.coun_11 OBJECT "${classes.sun.management.coun_11_SRCS}" "${classes.sun.management.coun_11_HEADERS}")
	jcpp_enable_bigobj(classes.sun.management.coun_11)
endif()