CC=gcc
CFLAGS=-Werror -Wextra -Wall -pedantic -std=c11

all: stack.o

stack.o: stack.h stack.c
	$(CC) $(CFLAGS) \
		-o stack.o \
		-c stack.c

clean:
	rm -f *.o

.PHONY: all clean
