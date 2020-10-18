cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(CS-Visitor)

 set (SRC
   main.cpp
   GameCharacter.cpp
   Event.cpp
   )
  
add_executable(${PROJECT_NAME} ${SRC})
add_compile_options(${PROJECT_NAME} -Wall -pedantic -Wextra)

# target_link_libraries(${PROJECT_NAME}-ut gtest_main -fsanitize=address)
# add_test(NAME ${PROJECT_NAME}_tests COMMAND ${PROJECT_NAME}-ut)
