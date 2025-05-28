cmake_minimum_required(VERSION 3.15)

find_package(Qt6 COMPONENTS Widgets Core Gui REQUIRED)

add_subdirectory(include)

add_executable(${PROJECT_NAME}
   main.cpp 
)

target_link_libraries(${PROJECT_NAME}
  lib
  Qt6::Widgets
  Qt6::Core
  Qt6::Gui
)
target_include_directories(${PROJECT_NAME} PRIVATE .)
