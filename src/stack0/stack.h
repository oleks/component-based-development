#ifndef STACK_H
#define STACK_H

#define STACK_OVERFLOW  (-1)
#define STACK_UNDERFLOW (-2)

// @return 0 on success, or STACK_OVERFLOW if stack is full.
int
stack_push(int value);

// @return 0 on success, or STACK_UNDERFLOW if stack is empty.
int
stack_pop(int *value);

#endif // STACK_H
