#include "stack.h"

#include <stdlib.h> // malloc, free

struct stack *
stack_new(size_t size) {
  struct stack *stack;

  stack = (struct stack *)malloc(sizeof(struct stack));
  if (stack == NULL) return NULL;

  stack->values = (int *)malloc(sizeof(int) * size);
  if (stack->values == NULL) return NULL;

  stack->count = 0;
  stack->size = size;

  return stack;
}

int
stack_push(struct stack *stack, int value) {
  if (stack->count == stack->size) {
    return STACK_OVERFLOW;
  }

  stack->values[stack->count] = value;
  stack->count += 1;
  return 0;
}

int
stack_pop(struct stack *stack, int *value) {
  if (stack->count == 0) {
    return STACK_UNDERFLOW;
  }

  stack->count -= 1;
  *value = stack->values[stack->count];
  return 0;
}

void
stack_free(struct stack *stack) {
  free(stack);
}
