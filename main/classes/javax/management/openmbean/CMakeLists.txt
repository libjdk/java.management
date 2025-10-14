#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.management.ope_8_SRCS)
file(GLOB classes.javax.management.ope_8_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.management.ope_8_HEADERS}) 
list(LENGTH classes.javax.management.ope_8_SRCS classes.javax.management.ope_8_SRCS_LENGTH)
if(classes.javax.management.ope_8_SRCS_LENGTH)
	add_library(classes.javax.management.ope_8 OBJECT "${classes.javax.management.ope_8_SRCS}" "${classes.javax.management.ope_8_HEADERS}")
	jcpp_enable_bigobj(classes.javax.management.ope_8)
endif()