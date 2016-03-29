CC=gcc
CFLAGS=-Werror -Wextra -Wall -pedantic -std=c11

all: stack10.o stack100.o stack1000.o # ...

stack%.o: stack.h stack.c
	$(CC) $(CFLAGS) \
		-DSTACK_SIZE=$* \
		-o stack$*.o \
		-c stack.c

clean:
	rm -f *.o

.PHONY: all clean
