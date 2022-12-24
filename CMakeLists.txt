cmake_minimum_required(VERSION 3.11)
set     (PROJECT_NAME LichessNerd)
project (${PROJECT_NAME}
    DESCRIPTION     "lichess.org cli/tui client "
    HOMEPAGE_URL    "https://github.com/6yntar05/LichessNerd"
    LANGUAGES       C CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

### Options ###
option(BUILD_SAN "Build project with sanitizers (Debug only!)" OFF)

### Modules ###
include          (${PROJECT_SOURCE_DIR}/cmake/submodules.cmake)
submodulesUpdate ()
    # FTXUI
set (FTXUI_DIR ${PROJECT_SOURCE_DIR}/modules/FTXUI)
add_subdirectory (${FTXUI_DIR})
    # cpr
set (CPR_DIR ${PROJECT_SOURCE_DIR}/modules/cpr)
add_subdirectory (${CPR_DIR})
    # simdjson
set (SIMDJSON_DIR ${PROJECT_SOURCE_DIR}/modules/simdjson)
add_subdirectory (${SIMDJSON_DIR})

### Target ####
include(./cmake/compileOptions.cmake)
setOpts()

file                (GLOB_RECURSE SRCFILES "${PROJECT_SOURCE_DIR}/src/*.cxx")
add_executable      (${PROJECT_NAME} ${SRCFILES})
include_directories (AFTER SYSTEM ${PROJECT_SOURCE_DIR}/include)

#### Libs #####
    # FTXUI
find_library            (ftxui HINTS ${FTXUI_DIR}/include)
include_directories     (${FTXUI_DIR}/include)
target_link_libraries   (${PROJECT_NAME}
    PRIVATE ftxui::screen
    PRIVATE ftxui::dom
    PRIVATE ftxui::component
)
    # cpr
find_library            (cpr HINTS ${CPR_DIR}/include)
include_directories     (${CPR_DIR}/include)
target_link_libraries   (${PROJECT_NAME}
    PRIVATE cpr::cpr
)
    # simdjson
find_library            (simdjson HINTS ${CPR_DIR}/include)
include_directories     (${CPR_DIR}/include)
target_link_libraries   (${PROJECT_NAME}
    PRIVATE simdjson::simdjson
)

### Install ###
install(TARGETS ${PROJECT_NAME} DESTINATION "${CMAKE_INSTALL_PREFIX}/bin")
