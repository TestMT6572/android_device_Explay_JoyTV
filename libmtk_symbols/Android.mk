LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
    mtk_wmv.cpp \
    mtk_cam.cpp \
    mtk_ril.cpp \
    icu55.c

LOCAL_SHARED_LIBRARIES := libbinder libutils liblog libgui libui \
                          libicuuc libicui18n libcrypto libstagefright_foundation
LOCAL_MODULE := libmtk_symbols
LOCAL_MODULE_TAGS := optional

LOCAL_CLANG := true
LOCAL_CPPFLAGS := -std=c++1y
LOCAL_CPPFLAGS += -Wno-exit-time-destructors
LOCAL_CPPFLAGS += -Wno-global-constructors
LOCAL_CPPFLAGS += -Wno-c++98-compat-pedantic
LOCAL_CPPFLAGS += -Wno-four-char-constants
LOCAL_CPPFLAGS += -Wno-padded

include $(BUILD_SHARED_LIBRARY)
