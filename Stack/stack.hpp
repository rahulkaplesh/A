#ifndef _STACK_HPP_
#define _STACK_HPP_

#include <memory>

template <class T>
class Stack {
   T data;
   std::unique_ptr<Stack<T>> next;
public:
   Stack(T data);
   bool push(T data);
   T pop();
   bool isEmpty();
   T peek();
   bool assignToNext(std::unique_ptr<Stack<T>>& aNext);
};

#endif