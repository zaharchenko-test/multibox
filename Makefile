all:help

help:
	cat etc/help

build-gcc:
	gcc -s -O3 -static jni/*.c -o multibox

build-clang:
	clang -s -O3 -static jni/*.c -o multibox

export:
	mkdir -p bin && rm -rf bin/multibox*
	cp libs/arm64-v8a/multibox bin/multibox-arm64
	cp libs/armeabi-v7a/multibox bin/multibox-arm
	cp libs/x86/multibox bin/multibox-x86
	cp libs/x86_64/multibox bin/multibox-x86_64

clean:
	rm -rf libs obj bin
