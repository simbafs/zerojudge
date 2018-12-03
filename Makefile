CC=gcc
CXX=g++
CFLAGS=-std=c11
CXXFLAGS=-std=c++14
OUT := $(patsubst %.c,%,$(wildcard *.c))
OUT += $(patsubst %.cc,%,$(wildcard *.cc))
clean:
	@rm -f ${OUT}
