#include <utility>
#include <queue.hpp>
#include <iostream>

template <class T>
Queue<T>::Queue(T aData) {
   head = std::make_shared<Queue<T>::Node>();
   head->data = aData;
   tail = head;
}

template <class T>
void Queue<T>::enqueue(T aData) {
   if (head == nullptr) {
      head = std::make_shared<Queue<T>::Node>();
      head->data = aData;
      tail = head;
   }
   if (head == tail) {
      head->next = std::make_shared<Queue<T>::Node>();
      tail = head->next;
      tail->data = aData;
   } else {
      tail->next = std::make_shared<Queue<T>::Node>();
      tail = tail->next;
      tail->data = aData;
   }
}

template <class T>
T Queue<T>::dequeue() {
   if (head == nullptr) {
      std::cout << "Queue is empty !!" << std::endl;
      return T();
   }
   T dataToBeReturned = head->data;
   if (head == tail) {
      head.reset();
      tail.reset();
   } else {
      if(head->next == tail) {
         head = tail;
      } else {
         head = head->next;
      }
   }
   return dataToBeReturned;
}

template <class T>
T Queue<T>::peek() {
   if (head != nullptr) {
      return head->data;
   }
}

template <class T>
bool Queue<T>::isEmpty() {
   if (head == nullptr) {
      return true;
   } else {
      return false;
   }
}

// Currently have freezed implementation to these data types
template class Queue<int>;
template class Queue<float>;
template class Queue<char>;