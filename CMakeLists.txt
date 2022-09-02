cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(
	"MerkleTree"
	VERSION 1.0
	DESCRIPTION "Generic Implementation of Merkle Tree"
	LANGUAGES CXX
)


file(GLOB_RECURSE SRC src/*.cpp)
include_directories(include)

add_executable(${PROJECT_NAME} ${SRC})

target_include_directories(
	${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include
)
