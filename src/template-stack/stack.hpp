#ifndef STACK_HPP
#define STACK_HPP

#include <stddef.h> // size_t

#define STACK_OVERFLOW  (-1)
#define STACK_UNDERFLOW (-2)

template<typename T>
class Stack {
public:
  Stack(size_t size);
  ~Stack();

  // @return 0 on success; STACK_OVERFLOW if stack is full.
  int push(T value);

  // @return 0 on success; STACK_UNDERFLOW if stack is empty.
  int pop(T *value);

private:
  T *values;
  size_t count;
  size_t size;
};

#endif // STACK_HPP
