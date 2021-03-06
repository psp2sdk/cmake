# Copyright (C) 2015 PSP2SDK Project
#
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

# ${stubname}_TARGETS is the variable that keeps track of the dependencies

# Reuse dependencies and link stub library
macro(add_psp2_stub stubname)
	add_library(${stubname}_stub STATIC ${${stubname}_TARGETS})
	install(TARGETS ${stubname}_stub DESTINATION lib)
endmacro()

# Add targets for current stub module
macro(add_psp2_stub_module stubname module nids)
	get_filename_component(STUB_MODULE_BASE ${module} NAME_WE)
	set(STUB_NIDS "${stubname}_${STUB_MODULE_BASE}_NIDS")
	set(STUB_HEAD "${stubname}_${STUB_MODULE_BASE}_head")
	set_source_files_properties(${module} PROPERTIES LANGUAGE C)
	# FUNC objects
	foreach(NID ${nids})
		set(CURRENT_TARGET "${stubname}_${STUB_MODULE_BASE}_${NID}")
		add_library(${CURRENT_TARGET} OBJECT ${module})
		target_compile_definitions(${CURRENT_TARGET} PRIVATE -DFUNC=${NID})
		list(APPEND ${stubname}_TARGETS $<TARGET_OBJECTS:${CURRENT_TARGET}>)
	endforeach()
	# HEAD object
	add_library(${STUB_HEAD} OBJECT ${module})
	target_compile_definitions(${STUB_HEAD} PRIVATE -DHEAD)
	list(APPEND ${stubname}_TARGETS $<TARGET_OBJECTS:${STUB_HEAD}>)
	# NIDS object
	add_library(${STUB_NIDS} OBJECT ${module})
	target_compile_definitions(${STUB_NIDS} PRIVATE -DNIDS)
	list(APPEND ${stubname}_TARGETS $<TARGET_OBJECTS:${STUB_NIDS}>)
endmacro()

# Simple macro to use when there's only one module per stub
macro(add_psp2_one_module_stub stubname module nids)
	add_psp2_stub_module(${stubname} ${module} "${nids}")
	add_psp2_stub(${stubname})
endmacro()

# Used for libc_stub
macro(add_psp2_stub_module_with_var stubname module nids vnids)
	add_psp2_stub_module(${stubname} ${module} "${nids}")
	# VAR objects
	foreach(NID ${vnids})
		set(CURRENT_TARGET "${stubname}_${STUB_MODULE_BASE}_${NID}")
		add_library(${CURRENT_TARGET} OBJECT ${module})
		target_compile_definitions(${CURRENT_TARGET} PRIVATE -DVAR=${NID})
		list(APPEND ${stubname}_TARGETS $<TARGET_OBJECTS:${CURRENT_TARGET}>)
	endforeach()
endmacro()

add_subdirectory(SceAppMgr_stub)
add_subdirectory(SceAppUtil_stub)
add_subdirectory(SceAtrac_stub)
add_subdirectory(SceAudioIn_stub)
add_subdirectory(SceAudio_stub)
add_subdirectory(SceAudiodec_stub)
add_subdirectory(SceAudioenc_stub)
add_subdirectory(SceAvPlayer_stub)
add_subdirectory(SceCamera_stub)
add_subdirectory(SceClipboard_stub)
add_subdirectory(SceCodecEnginePerf_stub)
add_subdirectory(SceCodecEngine_stub)
add_subdirectory(SceCommonDialog_stub)
add_subdirectory(SceCoredump_stub)
add_subdirectory(SceCtrl_stub)
add_subdirectory(SceDTrace_stub)
add_subdirectory(SceDbg_stub)
add_subdirectory(SceDeci4p_stub)
add_subdirectory(SceDeflt_stub)
add_subdirectory(SceDisplay_stub)
add_subdirectory(SceFace_stub)
add_subdirectory(SceFiber_stub)
add_subdirectory(SceFios2_stub)
add_subdirectory(SceFpu_stub)
add_subdirectory(SceGameUpdate_stub)
add_subdirectory(SceGxm_stub)
add_subdirectory(SceHandwriting_stub)
add_subdirectory(SceHeap_stub)
add_subdirectory(SceHmac_stub)
add_subdirectory(SceHttp_stub)
add_subdirectory(SceIme_stub)
add_subdirectory(SceJpegEnc_stub)
add_subdirectory(SceJpeg_stub)
add_subdirectory(SceKernel_stub)
add_subdirectory(SceLibMonoBridge_stub)
add_subdirectory(SceLibc_stub)
add_subdirectory(SceLibm_stub)
add_subdirectory(SceLibstdc++_stub)
add_subdirectory(SceLiveArea_stub)
add_subdirectory(SceLocationExtension_stub)
add_subdirectory(SceLocation_stub)
add_subdirectory(SceMd5_stub)
add_subdirectory(SceMotion_stub)
add_subdirectory(SceMt19937_stub)
add_subdirectory(SceMusicExport_stub)
add_subdirectory(SceNearDialogUtil_stub)
add_subdirectory(SceNearUtil_stub)
add_subdirectory(SceNetAdhocMatching_stub)
add_subdirectory(SceNetCtl_stub)
add_subdirectory(SceNetDebug_stub)
add_subdirectory(SceNet_stub)
add_subdirectory(SceNgs_stub)
add_subdirectory(SceNpActivity_stub)
add_subdirectory(SceNpBasic_stub)
add_subdirectory(SceNpCommerce2_stub)
add_subdirectory(SceNpCommon_stub)
add_subdirectory(SceNpManager_stub)
add_subdirectory(SceNpMatching2_stub)
add_subdirectory(SceNpMessage_stub)
add_subdirectory(SceNpParty_stub)
add_subdirectory(SceNpScore_stub)
add_subdirectory(SceNpSignaling_stub)
add_subdirectory(SceNpSnsFacebook_stub)
add_subdirectory(SceNpTrophy_stub)
add_subdirectory(SceNpTus_stub)
add_subdirectory(SceNpUtility_stub)
add_subdirectory(ScePerf_stub)
add_subdirectory(ScePgf_stub)
add_subdirectory(ScePhotoExport_stub)
add_subdirectory(ScePower_stub)
add_subdirectory(ScePspnetAdhoc_stub)
add_subdirectory(ScePvf_stub)
add_subdirectory(SceRazorCapture_stub)
add_subdirectory(SceRazorHud_stub)
add_subdirectory(SceRtc_stub)
add_subdirectory(SceRudp_stub)
add_subdirectory(SceSas_stub)
add_subdirectory(SceScreenShot_stub)
add_subdirectory(SceSfmt11213_stub)
add_subdirectory(SceSfmt1279_stub)
add_subdirectory(SceSfmt132049_stub)
add_subdirectory(SceSfmt19937_stub)
add_subdirectory(SceSfmt216091_stub)
add_subdirectory(SceSfmt2281_stub)
add_subdirectory(SceSfmt4253_stub)
add_subdirectory(SceSfmt44497_stub)
add_subdirectory(SceSfmt607_stub)
add_subdirectory(SceSfmt86243_stub)
add_subdirectory(SceSha0_stub)
add_subdirectory(SceSha1_stub)
add_subdirectory(SceSha224_stub)
add_subdirectory(SceSha256_stub)
add_subdirectory(SceSha384_stub)
add_subdirectory(SceSha512_stub)
add_subdirectory(SceSha512t_stub)
add_subdirectory(SceShutterSound_stub)
add_subdirectory(SceSmart_stub)
add_subdirectory(SceSqlite_stub)
add_subdirectory(SceSsl_stub)
add_subdirectory(SceSulpha_stub)
add_subdirectory(SceSysmodule_stub)
add_subdirectory(SceSystemGesture_stub)
add_subdirectory(SceTouch_stub)
add_subdirectory(SceUlt_stub)
add_subdirectory(SceVideodec_stub)
add_subdirectory(SceVoiceQoS_stub)
add_subdirectory(SceVoice_stub)
add_subdirectory(SceXml_stub)
