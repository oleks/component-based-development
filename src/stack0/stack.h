#ifndef STACK_H
#define STACK_H

#define STACK_OVERFLOW  (-1)
#define STACK_UNDERFLOW (-2)

int
stack_push(int value);

int
stack_pop(int *value);

#endif // STACK_H
