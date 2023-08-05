cmake_minimum_required(VERSION 3.16)
project(TestProj VERSION 1.0.0)

add_executable(hello2 src/hello.cpp)

#Adding linkable library
add_library (
	say_hello
	src/hello.hpp
	src/hello_lib.cpp
)

#Linking the Library
target_link_libraries(hello2 PRIVATE say_hello)
