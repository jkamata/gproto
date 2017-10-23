cmake_minimum_required (VERSION 2.6)

project (gproto)
include_directories(include)
link_directories(lib)

add_executable (gproto prog1.cc)
target_link_libraries(gproto liblua53.a)

