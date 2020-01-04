#pragma once

template <class T>
class sort {
    public: 
        void mergesort(T* array);
        void quicksort(T* array);
        void selectionsort(T* array);
        void insertionsort(T* array);
        void shellsort(T* array);
    private:
        sort(){};
};
