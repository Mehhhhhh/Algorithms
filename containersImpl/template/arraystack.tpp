#include <iostream>

template<class T>
arraystack<T>::arraystack() {
	this->N = 0;
	arraySize = MIN_CAPACITY;
	arr = new T[arraySize];
}

template<class T>
void arraystack<T>::resize(int newsize){
	std::cout << "resizing from " << arraySize << "to " << newsize << std::endl;
    T* temp = new T[newsize];
	for(int i = 0; i < (arraySize>newsize ? newsize : arraySize) ; ++i){
		temp[i]=arr[i];
	}
	arraySize = newsize;
	delete[] arr;
	arr = temp;	
}

template<class T>
void arraystack<T>::push(T& item){
	if(this->N==arraySize) resize(2*arraySize);
	arr[(this->N)++] = item;
}

template<class T>
T arraystack<T>::pop(){
	T item = arr[--this->N];
	if(this->N > 0 && this->N == arraySize/4) resize(arraySize/2);
	return item;
}

template<class T>
arraystack<T>::~arraystack(){
	delete[] arr;
	arr = nullptr;
}
