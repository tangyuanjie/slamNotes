project(test)

add_executable(test Vector.cpp Transform.cpp Point.cpp cl.cpp main.cpp)

install(TARGETS test RUNTIME DESTINATION bin)
