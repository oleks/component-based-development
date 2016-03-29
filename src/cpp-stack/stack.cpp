#include "stack.hpp"

#include <stdlib.h> // malloc, free
#include <new> // badalloc

Stack::Stack(size_t size) {
  int *values;

  values = (int *)malloc(sizeof(int) * size);
  if (values == NULL) throw std::bad_alloc();

  this->values = values;
  this->count = 0;
  this->size = size;
}

int
Stack::push(int value) {
  if (this->count == this->size) {
    return STACK_OVERFLOW;
  }

  this->values[this->count] = value;
  this->count += 1;
  return 0;
}

int
Stack::pop(int *value) {
  if (this->count == 0) {
    return STACK_UNDERFLOW;
  }

  this->count -= 1;
  *value = this->values[this->count];
  return 0;
}

Stack::~Stack() {
  free(this->values);
}
