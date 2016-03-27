#!/usr/bin/env bash

if [ "$#" -eq 1 ]; then
  STACK_SIZE=$1
else
  echo "Usage: $0 <stack-size>"
  exit 1
fi

CC=gcc
CFLAGS=(-Werror -Wextra -Wall -pedantic -std=c11)

${CC} ${CFLAGS} \
  -DSTACK_SIZE=${STACK_SIZE} \
  -o stack${STACK_SIZE}.o \
  -c stack.c
