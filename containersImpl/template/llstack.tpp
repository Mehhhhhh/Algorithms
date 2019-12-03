template<class T>
llstack <T>::llstack(){
	first = nullptr;
	N = 0;
}

template<class T>
llstack<T>::~llstack(){
	Node* node = first;
	Node* next;
	while(node){
		next = node->next;
		delete node;
		node = next;
	}
}

template<class T>
bool llstack <T>::isEmpty() { return first == nullptr; }

template<class T>
int llstack <T>::size() { return N; } 

template<class T>
void llstack <T>::push(T& item){
	Node* new_first = new Node(item);
	Node* old_first = first;
	first = new_first;
	first->next = old_first;
}

template<class T>
T& llstack <T>::pop(){
	T& item = first->item;
	first=first->next;
	N --;
	return item;
}

