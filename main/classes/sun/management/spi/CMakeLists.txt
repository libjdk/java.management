#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.management.spi_SRCS)
file(GLOB classes.sun.management.spi_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.management.spi_HEADERS}) 
list(LENGTH classes.sun.management.spi_SRCS classes.sun.management.spi_SRCS_LENGTH)
if(classes.sun.management.spi_SRCS_LENGTH)
	add_library(classes.sun.management.spi OBJECT "${classes.sun.management.spi_SRCS}" "${classes.sun.management.spi_HEADERS}")
	jcpp_enable_bigobj(classes.sun.management.spi)
endif()