all:build

MAKEFLAGS += --no-print-directory

build:
	ndk-build

gcc:
	gcc -s -O3 src/*.c -o multibox

clang:
	clang -s -O3 src/*.c -o multibox

clean:
	rm -rf libs obj bin
