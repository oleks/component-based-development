#include <stdio.h>
#include <ctype.h>

#include <stack.hpp>

#define EXIT_OP       (1)
#define INVALID_CHAR  (2)

template<typename T>
int
plus(Stack<T> *stack) {
  int retval, x, y;

  retval = stack->pop(&x);
  if (retval != 0) return retval;

  retval = stack->pop(&y);
  if (retval != 0) return retval;

  return stack->push(x + y);
}

template<typename T>
int
minus(Stack<T> *stack) {
  int retval, x, y;

  retval = stack->pop(&x);
  if (retval != 0) return retval;

  retval = stack->pop(&y);
  if (retval != 0) return retval;

  return stack->push(x - y);
}

// return 0 if interaction should continue; else stack error.
template<typename T>int
interact(Stack<T> *stack) {
  int value;
  char op;
  int retval;

  printf("> ");

  do {
    op = getc(stdin);
  } while (isspace(op));

  switch (op) {
  case '+':
    retval = plus(stack);
    break;
  case '-':
    retval = minus(stack);
    break;
  case 'e':
    retval = EXIT_OP;
    break;
  case 'p':
    retval = stack->pop(&value);
    if (retval != 0) break;

    printf("%d\n", value);
    break;
  default:
    ungetc(op, stdin);
    if (scanf("%d", &value) == 1) {
      retval = stack->push(value);
    } else {
      retval = INVALID_CHAR;
    }
  }

  return retval;
}

int
main() {
  int retval;
  char cont;
  Stack<int> stack(10);

  cont = 1;
  while(cont) {
    retval = interact(&stack);
    switch (retval) {
    case EXIT_OP:
      cont = 0;
      break;
    case INVALID_CHAR:
      printf("Invalid char!\n");
      break;
    case STACK_UNDERFLOW:
      printf("Stack underflow!\n");
      break;
    case STACK_OVERFLOW:
      printf("Stack overflow!\n");
      break;
    default:
      continue;
    }
  }

  return 0;
}
