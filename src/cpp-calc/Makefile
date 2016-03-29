STACK_DIR=../cpp-stack

CC=g++
CFLAGS=-Werror -Wextra -Wall -pedantic -std=c++11

all: calc10.bin calc100.bin calc1000.bin

calc%.bin: calc.cpp $(STACK_DIR)/stack.o
	$(CC) $(CFLAGS) \
		-o $@ \
		-DSTACK_SIZE=$* \
		-I $(STACK_DIR) \
		calc.cpp $(STACK_DIR)/stack.o

clean:
	rm -f *.bin

.PHONY: all clean
