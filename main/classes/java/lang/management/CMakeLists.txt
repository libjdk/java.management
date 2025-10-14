#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.lang.management_SRCS)
file(GLOB classes.java.lang.management_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.lang.management_HEADERS}) 
list(LENGTH classes.java.lang.management_SRCS classes.java.lang.management_SRCS_LENGTH)
if(classes.java.lang.management_SRCS_LENGTH)
	add_library(classes.java.lang.management OBJECT "${classes.java.lang.management_SRCS}" "${classes.java.lang.management_HEADERS}")
	jcpp_enable_bigobj(classes.java.lang.management)
endif()