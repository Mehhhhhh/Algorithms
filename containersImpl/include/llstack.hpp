#ifndef LLSTACK_HPP
#define LLSTACK_HPP

template <class T> class llstack{
	public:
		llstack();
		void push(T& t);
		bool isEmpty();
		int size();
		T& pop();
		~llstack();
	private:
		class Node {
		    public:
			Node (const T& elem) : item(elem), next(nullptr){ }
			T item;
			Node* next;
		};
		// top of the stack
		Node* first;
		//number of items
		int N;
};

#include "template/llstack.tpp"



#endif
