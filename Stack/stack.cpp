#include <utility>
#include <stack.hpp>

template <class T>
Stack<T>::Stack(T aData) {
   data = aData;
   empty = false;
}

template <class T>
bool Stack<T>::push(T aData) {
   if (next != nullptr) {
      next->push(data);
   } else {
      if (empty == false) {
         next = std::make_unique<Stack<T>>(data);
      } else {
         empty = false;
      }
   }
   data = aData;
}

template <class T>
T Stack<T>::pop() {
   T dataToBeReturned = data;
   if (next != nullptr) {
      data = next->pop();
      if (next->isEmpty() == true ) {
         next.reset();
      }
   } else {
      empty = true;
   }
   return dataToBeReturned;
}

template <class T>
T Stack<T>::peek() {
   if (empty == false) {
      return data;
   }
}

template <class T>
bool Stack<T>::isEmpty() {
   return empty;
}

// Currently have freezed implementation to these data types
template class Stack<int>;
template class Stack<float>;
template class Stack<char>;