CC=gcc
CFLAGS=-Werror -Wextra -Wall -pedantic -std=c11

all: calc10.bin calc100.bin calc1000.bin

calc%.bin: calc.c ../00-static-stack/stack%.o
	$(CC) $(CFLAGS) \
		-o $@ \
		-I ../00-static-stack \
		calc.c ../00-static-stack/stack$*.o

clean:
	rm -f *.bin

.PHONY: all clean
