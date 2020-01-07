template<class T>
static void sort<T>::selectionsort(T* array, int size){
    for(int i = 0; i < size - 1; ++i){
        int pos_min = i;
        for(int j = i + 1; j < size; ++j){
            if(array[j]< array[i]) pos_min = j;   
        }
        if(pos_min != i) swap(array, i, pos_min); 
    }
}

template<class T>
static void sort<T>::insetionsort(T* array, int size){
    for(int i = 1; i < size; ++i){
        for(int itr = i; itr>0 && array[itr] < array[itr-1] ; --itr)  swap(array, itr-1, itr);
    }
}

template<class T>
static void sort<T>::shellsort(T* array, int size){
    int h = 1;
    while(h < size/3) h = 3*h + 1;
    while(h>=1){
        for(int i = h; i < size ; ++i){
            for(int j = i; j>=h && array[j] < array[j-h]; j-=h) swap(array, j, j-h);
        }
        h/=3;
    }
}