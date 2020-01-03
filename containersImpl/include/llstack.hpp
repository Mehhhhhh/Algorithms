#ifndef LLSTACK_HPP
#define LLSTACK_HPP

#include "include/stack.hpp"

template <class T> class llstack : public stack<T> {
	public:
		llstack();
		void push(T& t) override;
		T pop() override;
		~llstack() override;
	private:
		class Node {
		    public:
			Node (const T& elem) : item(elem), next(nullptr){ }
			T item;
			Node* next;
		};
		// top of the stack
		Node* first;
};

#include "template/llstack.tpp"



#endif
