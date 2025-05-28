cmake_minimum_required(VERSION 3.20)
project(lib LANGUAGES CXX)

find_package(Qt6 COMPONENTS Widgets Core Gui REQUIRED)

file(GLOB SOURCE_FILES
  QWindow/*.cpp
)

file(GLOB HEADER_FILES
  QWindow/*.hpp
)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES} ${HEADER_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../
)

target_link_libraries(${PROJECT_NAME} PUBLIC Qt6::Widgets Qt6::Core Qt6::Gui)

