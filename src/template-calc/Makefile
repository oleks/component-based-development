STACK_DIR=../template-stack

CC=g++
CFLAGS=-Werror -Wextra -Wall -pedantic -std=c++11

all: calc10.bin calc100.bin calc1000.bin

calc%.bin: calc.cpp $(STACK_DIR)/stack.o
	$(CC) $(CFLAGS) \
		-o $@ \
		-I ../template-stack \
		calc.cpp $(STACK_DIR)/stack.o

clean:
	rm -f *.bin

.PHONY: all clean
