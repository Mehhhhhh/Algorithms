#include "llstack.hpp"

namespace Containers{

llstack::llstack(){
	first = nullptr;
	N = 0;
}

bool llstack::isEmpty() { return first == nullptr; }

int llstack::size() { return N; } 

void llstack::push(T& item){
	Node* new_first = new Node(item);
	Node* old_first = first;
	first = new_first;
	first->next = old_first;
}

T& llstack::pop(){
	T& item = first->item;
	first=first->next;
	N --;
	return item;
}

}
