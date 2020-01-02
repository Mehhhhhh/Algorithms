#ifndef STACK_HPP
#define STACK_HPP

template<class T> class stack{
	public:
		stack();
		virtual void push(T& t) = 0;
        bool isEmpty() const;
        int size() const;
        virtual T pop() = 0;
		virtual ~stack() {};
	protected:
		int N;
};

#include "template/stack.tpp"


#endif
