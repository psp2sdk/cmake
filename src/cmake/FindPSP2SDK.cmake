#===============================================================================
# FindPSP2SDK.cmake
#
# Author: Thibault Schueller <ryp.sqrt@gmail.com>
#
# The contents of this file are placed in the public domain. Feel
# free to make use of it in any way you like.
#===============================================================================

# This module defines the following variables (on success):
#   PSP2SDK_PATH            - sdk location
#   PSP2SDK_INCLUDE_DIRS    - where to find headers
#   PSP2SDK_FIXUP_BIN       - path to psp2fixup

if(NOT CMAKE_CROSSCOMPILING)
    message(FATAL_ERROR "Cross compiling is not set. Did you forget to set the toolchain ? \nExample:\n cmake ... -DCMAKE_TOOLCHAIN_FILE=$PSP2SDK/cmake/toolchain-arm-none-eabi-psp2.cmake")
endif()

find_path(PSP2SDK_PATH
    NAMES
        psp2.x
    HINTS
        $ENV{PSP2SDK}
        /opt/psp2sdk
)

find_program(PSP2SDK_FIXUP_BIN
    NAMES
        psp2-fixup
    HINTS
        ${PSP2SDK_PATH}
    PATH_SUFFIXES bin
)

find_path(PSP2SDK_INCLUDE_DIR
    NAMES
        psp2/gxm.h
    HINTS
        ${PSP2SDK_PATH}
    PATH_SUFFIXES include
)

# Macro to call psp2-fixup easily
macro(add_elf_fixup_target target)
    add_custom_command(OUTPUT ${target}_fix
        COMMAND ${PSP2SDK_FIXUP_BIN} -q -${target}_fix ${target}
        DEPENDS ${target})
    add_custom_target(${target}_fix DEPENDS ${target})
endmacro()

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(PSP2SDK DEFAULT_MSG
    PSP2SDK_PATH PSP2SDK_INCLUDE_DIR PSP2SDK_FIXUP_BIN)

set(PSP2SDK_INCLUDE_DIRS ${PSP2SDK_INCLUDE_DIR})

# Change find path to sdk location
set(CMAKE_FIND_ROOT_PATH ${PSP2SDK_PATH})
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER) # Search programs in host env
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY) # Search libs in sdk
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY) # Search headers in sdk
