#include "Stack.hpp"

namespace cards {
  template <class T>
    void Stack<T>::shuffle() {
  };

  template <class T>
    int Stack<T>::addToTop(T item) {
    items.push_back(item);
    return items.size();
  };

  template <class T>
    T Stack<T>::drawFromTop() {
    T back = items.back();
    items.pop_back();
    return back;
  }

  template <class T>
    vector<T> Stack<T>::drawFromTop(int number) {
    vector<T> drawn;
    for(int i=0; i<number; i++) {
      drawn.push_back(items.back());
      items.pop_back();
    }
    return drawn;
  }

  template <class T>
    int Stack<T>::size() {
    return items.size();
  }

  template class Stack<int>;
}
