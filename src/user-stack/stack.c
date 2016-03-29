#include "stack.h"

void
stack_init(struct stack *stack, int *values, size_t size) {
  stack->values = values;
  stack->count = 0;
  stack->size = size;
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
