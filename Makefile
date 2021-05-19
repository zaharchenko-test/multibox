MAKEFLAGS += --no-print-directory
CC=gcc

all:build

build:
	$(CC) -s -O3 -static src/*.c -o multibox

clean:
	rm -rf libs obj bin
