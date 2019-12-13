template<class T>
queue<T>::queue(){
        head = nullptr, tail = nullptr;
        N = 0;
}

template<class T>
queue<T>::~queue(){
        Node* itr = head;
        Node* next;
        while(itr){
                next = itr->next;
                delete itr;
                itr = next;
}
        }

template<class T>
bool queue<T>::isEmpty() const { return head == nullptr; }

template<class T>
int queue<T>::size() const { return N; }

template<class T>
void queue<T>::push(T& item){
        Node* temp = tail;
        tail = new Node(item);
        temp->next = tail;
        if(isEmpty()) { head = tail;}
        else { temp->next = tail; }
        N++;
}

template<class T>
T queue<T>::pop(){
        T& item = head->item;
        head=head->next;
        N --;
        return item;
}

