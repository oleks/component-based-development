CC=gcc
CFLAGS=-Werror -Wextra -Wall -pedantic -std=c11

all: lib10.so lib100.so lib1000.so

stack%.o: stack.h stack.c
	$(CC) $(CFLAGS) \
		-DSTACK_SIZE=$* \
		-o stack$*.o \
		-fPIC \
		-c stack.c

lib%.so: stack%.o
	$(CC) -shared \
		-Wl,-soname,libstack$*.so.1 \
		-o libstack$*.so \
		stack$*.o

clean:
	rm -f *.o
	rm -f *.so

.PHONY: all clean
