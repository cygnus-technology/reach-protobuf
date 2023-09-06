cmake_minimum_required(VERSION 3.10)
project(REACH_PROTO_NANOPB C)

########################################################################################################################
# Compiler standards
########################################################################################################################
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)


set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/nanopb/extra)
find_package(Nanopb REQUIRED)
include_directories(${NANOPB_INCLUDE_DIRS})

set(PROTO_FILES
${CMAKE_CURRENT_SOURCE_DIR}/../proto/services.proto
${CMAKE_CURRENT_SOURCE_DIR}/../proto/reach.proto
)
set(GENERATED_DIR ${CMAKE_CURRENT_BINARY_DIR}/generated)

nanopb_generate_cpp(PROTO_SRCS PROTO_HDRS 
    ${PROTO_FILES})

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror -g -O0")

add_library(reach-proto-static STATIC ${PROTO_SRCS} ${PROTO_HDRS})
