#ifndef ARRAYSTACK_HPP
#define ARRAYSTACK_HPP

#define MIN_CAPACITY 1

#include "include/stack.hpp"

template<class T> class arraystack : public stack<T> {
	public:
		arraystack();
		void push(T& t) override;
        T pop() override;
		~arraystack() override;
	private:
		int arraySize;
		T* arr;
		void resize(int newsize);
};

#include "template/arraystack.tpp"


#endif
