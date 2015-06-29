# Copyright (C) 2015 PSP2SDK Project
#
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

set(NIDS
	0x05f27764 0x3e796ef5 0x5795e898 0x6bdf4c4d
	0x78b41b92 0x7d9864a8 0x814c90af 0x9423560c
	0x98436a80 0xa08ca60d 0xb6fde0ba 0xdd0a13b8
)

set(NIDS_USER
	0x42ae6bbc 0x7a410b64
)

add_psp2_stub_module(SceDisplay SceDisplay_stub.S "${NIDS}")
add_psp2_stub_module(SceDisplay SceDisplayUser_stub.S "${NIDS_USER}")
add_psp2_stub(SceDisplay)
