#ifndef QUEUE_HPP
#define QUEUE_HPP

template<class T> class queue{
	public:
		queue();
		int size() const;
		bool isEmpty() const;
		void push(T& item);
		T pop();
		~queue();
	private:
		//number of element
		int N;
		class Node{
			public:
				T item;
				Node* next;
				Node(T& elem):item(elem), next(nullptr){}
		};
		Node* head, *tail;
};

#include "template/queue.tpp"

#endif
