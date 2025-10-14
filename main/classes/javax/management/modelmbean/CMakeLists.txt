#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.management.mod_6_SRCS)
file(GLOB classes.javax.management.mod_6_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.management.mod_6_HEADERS}) 
list(LENGTH classes.javax.management.mod_6_SRCS classes.javax.management.mod_6_SRCS_LENGTH)
if(classes.javax.management.mod_6_SRCS_LENGTH)
	add_library(classes.javax.management.mod_6 OBJECT "${classes.javax.management.mod_6_SRCS}" "${classes.javax.management.mod_6_HEADERS}")
	jcpp_enable_bigobj(classes.javax.management.mod_6)
endif()