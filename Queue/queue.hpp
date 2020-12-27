#ifndef _QUEUE_HPP_
#define _QUEUE_HPP_

#include <memory>

template <class T>
class Queue {
   T data;
   std::unique_ptr<Queue<T>> next;
   bool empty;
public:
   Queue(T aData);
   bool enqueue(T aData);
   T dequeue();
   bool isEmpty();
   T peek();
};

#endif