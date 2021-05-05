all:build

build:
	ndk-build

gcc:
	gcc -s -O3 -static jni/*.c -o multibox

clang:
	clang -s -O3 -static jni/*.c -o multibox

clean:
	rm -rf libs obj bin
