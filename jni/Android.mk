LOCAL_PATH := $(call my-dir)/../src
include $(CLEAR_VARS)
LOCAL_MODULE := multibox
LOCAL_SRC_FILES += ../jni/main.c ../jni/multibox.c
LOCAL_SRC_FILES += arch.c basename.c clear.c dirname.c false.c hostname.c link.c logname.c program.c pwd.c realpath.c reset.c sleep.c symlink.c sync.c test.c true.c uname.c unlink.c whoami.c yes.c
#LOCAL_LDFLAGS += -static
include $(BUILD_EXECUTABLE)
