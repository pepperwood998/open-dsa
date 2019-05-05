
add_library(open-dsa INTERFACE)

target_include_directories(open-dsa INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")

install(
    DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/ds"
    DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/../bin"
)

install(
    DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/algo"
    DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/../bin"
)
