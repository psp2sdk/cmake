# Copyright (C) 2015 PSP2SDK Project
#
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

include(CMakeForceCompiler)

# Setup arch info
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR cortex-a9)
CMAKE_FORCE_C_COMPILER(arm-none-eabi-gcc GNU)
CMAKE_FORCE_CXX_COMPILER(arm-none-eabi-g++ GNU)

# Set compilation flags
set(CMAKE_C_FLAGS "-mcpu=cortex-a9 -mfpu=neon-fp16" CACHE STRING "" FORCE)
set(CMAKE_CXX_FLAGS "-mcpu=cortex-a9 -mfpu=neon-fp16" CACHE STRING "" FORCE)

# Do a no-op access on the CMAKE_TOOLCHAIN_FILE variable
# so that CMake will not issue a warning on it being unused.
if (CMAKE_TOOLCHAIN_FILE)
endif()

message(STATUS "Cross-compiling with arm-none-eabi-gcc toolchain")
