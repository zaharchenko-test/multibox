LOCAL_PATH := $(call my-dir)/../src
include $(CLEAR_VARS)
LOCAL_MODULE := multibox
LOCAL_SRC_FILES += main.c arch.c basename.c clear.c dirname.c echo.c env.c false.c hostname.c link.c logname.c printenv.c pwd.c realpath.c reset.c sleep.c symlink.c sync.c test.c true.c tty.c uname.c unlink.c whoami.c yes.c
#LOCAL_LDFLAGS += -static
include $(BUILD_EXECUTABLE)
