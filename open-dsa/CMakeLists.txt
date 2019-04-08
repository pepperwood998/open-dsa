
add_library(open-dsa INTERFACE)

target_include_directories(open-dsa INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/ds")

install(
    DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/ds"
    DESTINATION "${CMAKE_CURRENT_BINARY_DIR}"
)
