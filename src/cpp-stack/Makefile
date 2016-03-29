CC=g++
CFLAGS=-Werror -Wextra -Wall -pedantic -std=c++11

all: stack.o

stack.o: stack.hpp stack.cpp
	$(CC) $(CFLAGS) \
		-o stack.o \
		-c stack.cpp

clean:
	rm -f *.o

.PHONY: all clean
