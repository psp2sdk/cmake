# Copyright (C) 2015 PSP2SDK Project
#
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set(NIDS
    0x10b5765f 0x5e86319a 0xe352b29c 0xe6774abc
    0xad9022a1 0xafceab96 0xf3717e37
)

set(SRCS
    SceAppMgr_stub.S
    SceAppMgrUser_stub.S
)

add_psp2_stub_module(SceAppMgr SceAppMgr_stub.S "${NIDS}")
add_psp2_stub_module(SceAppMgr SceAppMgrUser_stub.S "${NIDS}")
add_psp2_stub(SceAppMgr)
