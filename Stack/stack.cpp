#include <utility>
#include <stack.hpp>
#include <iostream>

template <class T>
Stack<T>::Stack(T aData) {
   head = std::make_unique<Stack<T>::Node>();
   head->data = aData;
}

template <class T>
void Stack<T>::push(T aData) {
   std::unique_ptr<Stack<T>::Node> currentData = std::make_unique<Stack<T>::Node>();
   currentData->data = aData;
   if (head != nullptr) {
      currentData->next = std::move(head);
   }
   head = std::move(currentData);
}

template <class T>
T Stack<T>::pop() {
   if (head == nullptr) {
      std::cout << "Stack is empty" << std::endl;
      return T();
   } else {
      T dataToBeReturned = head->data;
      if (head->next != nullptr) {
         head = std::move(head->next);
      } else {
         head.reset();
      }
      return dataToBeReturned;
   }
}

template <class T>
T Stack<T>::peek() {
   if (head != nullptr) {
      return head->data;
   }
}

template <class T>
bool Stack<T>::isEmpty() {
   if (head == nullptr) {
      return true;
   } else {
      return false;
   }
}

// Currently have freezed implementation to these data types
template class Stack<int>;
template class Stack<float>;
template class Stack<char>;