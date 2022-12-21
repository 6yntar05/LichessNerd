cmake_minimum_required(VERSION 3.10)
set     (PROJECT_NAME LichessNerd)
project (${PROJECT_NAME}
    DESCRIPTION     "lichess.org cli/tui client "
    HOMEPAGE_URL    "https://github.com/6yntar05/LichessNerd"
    LANGUAGES       C CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_SAN "Build project with sanitizers (Debug only!)" OFF)

include(./cmake/submodules.cmake)
submodulesUpdate()

include(./cmake/compileOptions.cmake)
setOpts()

file                (GLOB_RECURSE SRCFILES "./src/*.cxx")
add_executable      (${PROJECT_NAME} ${SRCFILES})
include_directories (AFTER SYSTEM ./include)
