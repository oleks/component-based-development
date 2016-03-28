#ifndef STACK_H
#define STACK_H

#define STACK_OVERFLOW  (-1)
#define STACK_UNDERFLOW (-2)

// @return 0 on success; STACK_OVERFLOW if stack is full.
int
stack_push(int value);

// @param value Assumed to point to memory we can write to.
// @return 0 on success; STACK_UNDERFLOW if stack is empty.
int
stack_pop(int *value);

#endif // STACK_H
