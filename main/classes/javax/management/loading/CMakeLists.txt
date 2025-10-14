#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.management.loa_5_SRCS)
file(GLOB classes.javax.management.loa_5_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.management.loa_5_HEADERS}) 
list(LENGTH classes.javax.management.loa_5_SRCS classes.javax.management.loa_5_SRCS_LENGTH)
if(classes.javax.management.loa_5_SRCS_LENGTH)
	add_library(classes.javax.management.loa_5 OBJECT "${classes.javax.management.loa_5_SRCS}" "${classes.javax.management.loa_5_HEADERS}")
	jcpp_enable_bigobj(classes.javax.management.loa_5)
endif()