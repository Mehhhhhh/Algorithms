#ifndef ARRAYSTACK_HPP
#define ARRAYSTACK_HPP

#define MIN_CAPACITY 1

template<class T> class arraystack{
	public:
		arraystack();
		void push(T& t);
                bool isEmpty();
                int size();
                T pop();
		~arraystack();
		int cap();
		void pp();
	private:
		int N;
		int arraySize;
		T* arr;
		void resize(int newsize);
};

#include "template/arraystack.tpp"


#endif
