CC=gcc
CFLAGS=-Werror -Wextra -Wall -pedantic -std=c11

all: calc10.bin calc100.bin calc1000.bin

calc%.bin: calc.c ../static-stack/stack%.o
	$(CC) $(CFLAGS) \
		-o $@ \
		-I ../static-stack \
		calc.c ../static-stack/stack$*.o

clean:
	rm -f *.bin

.PHONY: all clean
