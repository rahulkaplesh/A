#include <utility>
#include <queue.hpp>
#include <iostream>

template <class T>
Queue<T>::Queue(T aData) {
   data = aData;
   empty = false;
}

template <class T>
bool Queue<T>::enqueue(T aData) {
   bool added = true;
   if (next != nullptr) {
      added &= next->enqueue(aData);
   } else {
      if (empty == false) {
         next = std::make_unique<Queue<T>>(aData);
      } else {
         empty = false;
         data = aData;
      }
   }
   return added;
}

template <class T>
T Queue<T>::dequeue() {
   if (empty == true) {
      std::cout << "Queue is empty !!" << std::endl;
      return T();
   }
   T dataToBeReturned = data;
   if (next != nullptr) {
      data = next->dequeue();
      if (next->isEmpty() == true) {
         next.reset();
      }
   } else {
      empty = true;
   }
   return dataToBeReturned;
}

template <class T>
T Queue<T>::peek() {
   if (empty == false) {
      return data;
   }
}

template <class T>
bool Queue<T>::isEmpty() {
   return empty;
}

// Currently have freezed implementation to these data types
template class Queue<int>;
template class Queue<float>;
template class Queue<char>;