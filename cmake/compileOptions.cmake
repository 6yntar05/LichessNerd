# Input: BUILD_SAN:bool
# Output: _compile options_

# Normal (not msvc) compiller options 
function (noMSVC)
    if ("${CMAKE_BUILD_TYPE}" STRGREATER_EQUAL "DEBUG")
        add_compile_options(-O0 -g)
        if (BUILD_SAN)
            add_compile_options(-fsanitize=undefined -fsanitize=address)
            add_link_options(-fsanitize=undefined -fsanitize=address)
        endif ()
    else ()
        add_compile_options(-O3)
    endif ()
endfunction()

# Detect gcc or clang
function (setOpts)
    if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
        add_compile_options(-Wall -Wextra -Wpedantic -Wno-unused-parameter -fdiagnostics-color=always)
        noMSVC()

    elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
        add_compile_options(-Wall -Wextra -Wpedantic -Wno-unused-parameter -fcolor-diagnostics)
        noMSVC()
    endif ()

    if(CMAKE_SYSTEM_NAME STREQUAL "FreeBSD")
        target_compile_options(${PROJECT_NAME} PRIVATE -Wno-deprecated -Wno-deprecated-declarations)
        include_directories(/usr/local/include)
        link_directories(/usr/local/lib)
    endif()
endfunction()
