MAKEFLAGS += --no-print-directory

all:build

build:
	ndk-build

clean:
	rm -rf libs obj bin
