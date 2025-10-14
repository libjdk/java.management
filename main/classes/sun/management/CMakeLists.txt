#machine generated

add_subdirectory("counter")
add_subdirectory("spi")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.management_SRCS)
file(GLOB classes.sun.management_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.management_HEADERS}) 
list(LENGTH classes.sun.management_SRCS classes.sun.management_SRCS_LENGTH)
if(classes.sun.management_SRCS_LENGTH)
	add_library(classes.sun.management OBJECT "${classes.sun.management_SRCS}" "${classes.sun.management_HEADERS}")
	jcpp_enable_bigobj(classes.sun.management)
endif()