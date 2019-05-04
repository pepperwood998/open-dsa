
add_executable(sample-1 sample-1/Main.cpp)
target_link_libraries(sample-1 PRIVATE open-dsa)
add_executable(sample-2 sample-2/Main.cpp)
target_link_libraries(sample-2 PRIVATE open-dsa)

install(
    TARGETS sample-1
    DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/../bin/sample"
)

install(
    TARGETS sample-2
    DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/../bin/sample"
)
