# Copyright (C) 2015 PSP2SDK Project
#
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set(NIDS
    0x18066ba9 0x29c65c0b 0x7fe5b83f 0x833f5d0a
    0xcfcede95 0xd330285d 0xd6ee2214 0xd6fd367f
)

set(SRCS
    SceLiveAreaUtil_stub.S
)

add_psp2_one_module_stub(SceLiveArea ${SRCS} "${NIDS}")
