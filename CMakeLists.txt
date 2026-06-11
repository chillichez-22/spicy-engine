cmake_minimum_required( VERSION 3.20 )

project( spicy-engine )

find_package( SDL3 REQUIRED )


# Creates engine library
add_library( engine

    # Source files ( Headers aren't necessary )

    # Maths
    spicy-engine/source/maths/math.cpp

    spicy-engine/source/maths/matrix.cpp
    spicy-engine/source/maths/vector_2.cpp
    spicy-engine/source/maths/vector_3.cpp
    spicy-engine/source/maths/vector_4.cpp

    # Shapes
    spicy-engine/source/shapes/shape.cpp

    spicy-engine/source/shapes/circle.cpp
    spicy-engine/source/shapes/line.cpp
    spicy-engine/source/shapes/rect.cpp
    spicy-engine/source/shapes/tri.cpp

)

target_include_directories( engine

    PUBLIC

        ${CMAKE_CURRENT_SOURCE_DIR}/spicy-engine/header
        ${CMAKE_CURRENT_SOURCE_DIR}/spicy-engine/header/maths
        ${CMAKE_CURRENT_SOURCE_DIR}/spicy-engine/header/shapes
)

# Links SDL3 to the engine library
target_link_libraries( engine

    PUBLIC
        SDL3::SDL3
)


# Creates main build
add_executable( spicy-engine-main spicy-engine/source/main.cpp )

target_link_libraries( spicy-engine-main

    PRIVATE
        engine
)

# Creates testing build
add_executable( spicy-engine-testing spicy-engine/source/testing.cpp )

# Adds test files to the testing scene
target_sources( engine

    PUBLIC
     
        # Tests
        spicy-engine/source/tests/vector_2_test.cpp
        spicy-engine/source/tests/vector_3_test.cpp
        spicy-engine/source/tests/vector_4_test.cpp

)

target_include_directories( engine

    PUBLIC

        ${CMAKE_CURRENT_SOURCE_DIR}/spicy-engine/header/tests
)

target_link_libraries( spicy-engine-testing

    PRIVATE
        engine
)

