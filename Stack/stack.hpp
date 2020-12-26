#ifndef _STACK_HPP_
#define _STACK_HPP_

#include <memory>

template <class T>
class Stack {
   T data;
   std::unique_ptr<Stack<T>> next;
   bool empty;
public:
   Stack(T aData);
   bool push(T aData);
   T pop();
   bool isEmpty();
   T peek();
};

#endif