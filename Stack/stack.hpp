#ifndef _STACK_HPP_
#define _STACK_HPP_

#include <memory>

template <class T>
class Stack {
   struct Node {
      T data;
      std::unique_ptr<Node> next;
   };
   std::unique_ptr<Node> head;
public:
   Stack(T aData);
   void push(T aData);
   T pop();
   bool isEmpty();
   T peek();
};

#endif