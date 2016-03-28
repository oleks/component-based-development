CC=gcc
CFLAGS=-Werror -Wextra -Wall -pedantic -std=c11

all: calc10 calc100 calc1000

calc%: calc.c ../stack0/stack%.o
	$(CC) $(CFLAGS) \
		-o $@ \
		-I ../stack0 \
		calc.c ../stack0/stack$*.o

.PHONY: all clean
