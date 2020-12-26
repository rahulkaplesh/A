#include <utility>
#include <stack.hpp>

template <class T>
Stack<T>::Stack(T data) {
   data = data;
}

template <class T>
bool Stack<T>::push(T data) {
   if (next != nullptr) {
      next = std::make_unique<Stack<T>>(data);
      return true;
   } else {
      return next->push(data);
   }
}

template <class T>
bool Stack<T>::assignToNext(std::unique_ptr<Stack<T>>& aNext) {
   aNext = std::move(next);
}

template <class T>
T Stack<T>::pop() {
   T dataToBeReturned = data;
   if (next != nullptr) {
      data = next->pop();
      next->assignToNext(next);
   } else {
      data = T();
   }
   return dataToBeReturned;
}

template <class T>
T Stack<T>::peek() {
   return data;
}

template <class T>
bool Stack<T>::isEmpty() {
   if (data == T()) {
      return true;
   } else {
      return false;
   }
}

// Currently have freezed implementation to these data types
template class Stack<int>;
template class Stack<float>;
template class Stack<char>;