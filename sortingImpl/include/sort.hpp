#pragma once

template <class T>
class sort {
    public: 
        static void mergesort(T* array, int size);
        static void quicksort(T* array, int sie);
        static void selectionsort(T* array, int size);
        static void insertionsort(T* array, int size);
        static void shellsort(T* array, int size);
    private:
        sort(){};
        void swap(T* array, int pos1, int pos2);
};


template<class T>
void sort<T>::swap(T* array, int pos1, int pos2){
    T temp = array[pos1];
    array[pos1] = array[pos2];
    array[pos2] = temp;
}

#include "template/sort.tpp"