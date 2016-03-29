STACK_DIR=../dynamic-stack

CC=gcc
CFLAGS=-Werror -Wextra -Wall -pedantic -std=c11

all: calc10.bin calc100.bin calc1000.bin

calc%.bin: calc.c $(STACK_DIR)/stack.o
	$(CC) $(CFLAGS) \
		-o $@ \
		-DSTACK_SIZE=$* \
		-I $(STACK_DIR) \
		calc.c $(STACK_DIR)/stack.o

clean:
	rm -f *.bin

.PHONY: all clean
