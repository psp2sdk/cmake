# Copyright (C) 2015 PSP2SDK Project
#
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set(NIDS
    0x008ef251 0x01bfb98c 0x075b0c63 0x1a34b331
    0x272b4cba 0x29c74ee3 0x37b3f335 0x53656f1c
    0x5b36cdb5 0x5c22e927 0x67981334 0x68dfc199
    0x6ca2f08a 0x722f5004 0x90b512ac 0x9bdb14f7
    0xaca5f9cc 0xbf34605d 0xd1997678 0xd81d7280
    0xd9409e57 0xdc27e7c2 0xdc768033 0xe7d9dc4f
)

set(SRCS
    SceAtrac_stub.S
)

add_psp2_one_module_stub(SceAtrac ${SRCS} "${NIDS}")
