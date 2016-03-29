#include <stdio.h>
#include <ctype.h>

#include <stack.h>

#define EXIT_OP       (1)
#define INVALID_CHAR  (2)

int
plus() {
  int retval, x, y;

  retval = stack_pop(&x);
  if (retval != 0) return retval;

  retval = stack_pop(&y);
  if (retval != 0) return retval;

  return stack_push(x + y);
}

int
minus() {
  int retval, x, y;

  retval = stack_pop(&x);
  if (retval != 0) return retval;

  retval = stack_pop(&y);
  if (retval != 0) return retval;

  return stack_push(x - y);
}

// return 0 if interaction should continue; else stack error.
int
interact() {
  int value;
  char op;
  int retval;

  printf("> ");

  do {
    op = getc(stdin);
  } while (isspace(op));

  switch (op) {
  case '+':
    retval = plus();
    break;
  case '-':
    retval = minus();
    break;
  case 'e':
    retval = EXIT_OP;
    break;
  case 'p':
    retval = stack_pop(&value);
    if (retval != 0) break;

    printf("%d\n", value);
    break;
  default:
    ungetc(op, stdin);
    if (scanf("%d", &value) == 1) {
      retval = stack_push(value);
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

  cont = 1;
  while(cont) {
    retval = interact();
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
