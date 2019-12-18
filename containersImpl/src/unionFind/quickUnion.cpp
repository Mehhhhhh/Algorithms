#include "include/unionFind/quickUnion.hpp"

quickUnion::quickUnion(int n) : unionFind(n) {}

int quickUnion::find(int p) {
    int itr = p;
    while(arr[itr] != itr) itr = arr[itr];
    return itr;
}

void quickUnion::union_(int v, int w) {
    if (find(v) == find(w)) return;
    arr[w] = v;
    count_--;
}