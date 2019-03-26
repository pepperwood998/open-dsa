
add_library(
    open-dsa STATIC
    "include/SinglyLinkedList.hpp"

    "src/SinglyLinkedList.cpp"
)

target_include_directories(open-dsa PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

install(
    DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/include"
    DESTINATION "${CMAKE_CURRENT_BINARY_DIR}"
)

install(
    TARGETS open-dsa
    DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/lib"
)
