template<class T>
static sort<T>::selectionsort(T* array, int size){
    for(int i = 0; i < size - 1; ++i){
        int pos_min = i;
        for(int j = i + 1; j < size; ++j){
            if(array[j]< array[i]) pos_min = j;   
        }
        if(pos_min != i) swap(array, i, pos_min); 
    }
}