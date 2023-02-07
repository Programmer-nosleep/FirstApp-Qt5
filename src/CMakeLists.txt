cmake_minimum_required(VERSION 3.15)

find_package(Qt5 REQUIRED Widgets)

file(GLOB SOURCE_FILES
    *.cc
    **/*.cc
    **/**/*.cc
    **/**/**/*.cc
)

file(GLOB HEADER_FILES
    *.hh
    **/*.hh
    **/**/*.hh
    **/**/**/*.hh
)

add_executable(${PROJECT_NAME}
    ${SOURCE_FILES}
    ${HEADER_FILES}
)

target_link_libraries(${PROJECT_NAME}
    fmt
    Qt5::Widgets
    Qt5::Core
    Qt5::Gui
)
target_include_directories(${PROJECT_NAME} PRIVATE .)