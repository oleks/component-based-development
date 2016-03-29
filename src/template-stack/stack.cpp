#include "stack.hpp"

#include <stdlib.h> // malloc, free
#include <new> // badalloc

template<typename T>
Stack<T>::Stack(size_t size) {

  this->values = (T *)malloc(sizeof(T) * size);
  if (this->values == NULL) throw std::bad_alloc();

  this->count = 0;
  this->size = size;
}

template<typename T> int
Stack<T>::push(T value) {
  if (this->count == this->size) {
    return STACK_OVERFLOW;
  }

  this->values[this->count] = value;
  this->count += 1;
  return 0;
}

template<typename T> int
Stack<T>::pop(T *value) {
  if (this->count == 0) {
    return STACK_UNDERFLOW;
  }

  this->count -= 1;
  *value = this->values[this->count];
  return 0;
}

template<typename T>
Stack<T>::~Stack() {
  free(this->values);
}

template class Stack<int>;
template class Stack<float>;
