cmake_minimum_required(VERSION 3.10.2)

project("justtest")

set(var hello)
message( ${var} )
set(var 111)
message( ${var} )
message( ${CMAKE_CURRENT_LIST_FILE} )
message( ${CMAKE_CURRENT_LIST_DIR} )

IF(TRUE)
    message("this is true")
ENDIF()

add_library( native-lib
             SHARED
             native-lib.cpp )

add_library( people-lib
             SHARED
             people/People.cpp )

include_directories(people/)

find_library( log-lib
              log )

target_link_libraries( native-lib
                       people-lib
                       ${log-lib})