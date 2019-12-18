#include "include/unionFind/quickFind.hpp"

quickFind::quickFind(int n) : unionFind(n) {}

int quickFind::find(int p) {
    return arr[p];
}

void quickFind::union_(int v, int w) {
    if(arr[v] == arr[w]) return;
    for(unsigned int i = 0 ; i < arr_size ; ++i){
        if(arr[i] == arr[w]) arr[i] = arr[v];
    }
    count_--;
}