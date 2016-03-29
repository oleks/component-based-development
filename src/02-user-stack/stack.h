#ifndef STACK_H
#define STACK_H

#include <stddef.h> // size_t

struct stack {
  int *values;
  size_t count;
  size_t size;
};

#define STACK_OVERFLOW  (-1)
#define STACK_UNDERFLOW (-2)

// Should be called before all other stack-related functions with the pointer
// that later will be used in stack-related functions.
//
// @param stack Assumed to point to a valid stack.
// @param values Assumed to point to an array.
void
stack_init(struct stack *stack, int *values, size_t size);

// @param stack Assumed to point to valid stack.
// @return 0 on success; STACK_OVERFLOW if stack is full.
int
stack_push(struct stack *stack, int value);

// @param stack Assumed to point to a valid stack.
// @param value Assumed to point to memory we can write to.
// @return 0 on success; STACK_UNDERFLOW if stack is empty.
int
stack_pop(struct stack *stack, int *value);

#endif // STACK_H
