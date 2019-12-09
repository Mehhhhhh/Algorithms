template<class T>
arraystack<T>::arraystack(){
	N = 0;
	arraySize = MIN_CAPACITY;
	arr = new T[arraySize];
}

template<class T>
void arraystack<T>::resize(int newsize){
        T* temp = new T[newsize];
	for(int i = 0; i < (arraySize>newsize ? arraySize : newsize) ; ++i){
		temp[i]=arr[i];
	}
	arraySize = newsize;
	delete[] arr;
	arr = temp;	
}

template<class T>
int arraystack<T>::size(){
	return N;
}

template<class T>
bool arraystack<T>::isEmpty(){
	return N==0;
}

template<class T>
void arraystack<T>::push(T& item){
	if(N==arraySize) resize(2*arraySize);
	arr[N++] = item;
}

template<class T>
T& arraystack<T>::pop(){
	T& item = arr[--N];
	if(N > 0 && N == arraySize/4) resize(arraySize/2);
	return item;
}

template<class T>
arraystack<T>::~arraystack(){
	delete[] arr;
	arr = nullptr;
}

template<class T>
int arraystack<T>::cap(){
	return arraySize;
}