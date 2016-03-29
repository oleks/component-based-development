#ifndef STACK_HPP
#define STACK_HPP

#include <stddef.h> // size_t

#define STACK_OVERFLOW  (-1)
#define STACK_UNDERFLOW (-2)

class Stack {
public:
  Stack(size_t size);
  ~Stack();

  // @return 0 on success; STACK_OVERFLOW if stack is full.
  int push(int value);

  // @return 0 on success; STACK_UNDERFLOW if stack is empty.
  int pop(int *value);

private:
  int *values;
  size_t count;
  size_t size;
};

#endif // STACK_HPP
