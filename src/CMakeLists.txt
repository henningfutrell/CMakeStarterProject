set(HEADERS
        Empty.h
        )

set(IMPLEMENTATIONS
        Empty.cpp
        )

add_library(${PROJECT_LIBRARY} STATIC
        ${HEADERS}
        ${IMPLEMENTATIONS}
        )

# Export the archive file
set_target_properties(${PROJECT_LIBRARY_NAME}
        PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        )
