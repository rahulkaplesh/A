#ifndef _QUEUE_HPP_
#define _QUEUE_HPP_

#include <memory>

template <class T>
class Queue {
   struct Node {
      T data;
      std::shared_ptr<Node> next;
   };
   std::shared_ptr<Node> head;
   std::shared_ptr<Node> tail;
public:
   Queue(T aData);
   void enqueue(T aData);
   T dequeue();
   bool isEmpty();
   T peek();
};

#endif