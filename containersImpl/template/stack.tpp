#include "include/stack.hpp"

template<class T>
stack<T>::stack():N(0) {
}

template<class T>
bool stack<T>::isEmpty() const { return N==0; }

template<class T>
int stack <T>::size() const { return N; } 