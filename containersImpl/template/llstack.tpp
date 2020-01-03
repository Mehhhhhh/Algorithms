template<class T>
llstack <T>::llstack() {
	this->N = 0;
	first = nullptr;
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
void llstack <T>::push(T& item){
	Node* new_first = new Node(item);
	Node* old_first = first;
	first = new_first;
	first->next = old_first;
	(this->N)++;
}

template<class T>
T llstack <T>::pop(){
	T& item = first->item;
	first=first->next;
	(this->N)--;
	return item;
}

