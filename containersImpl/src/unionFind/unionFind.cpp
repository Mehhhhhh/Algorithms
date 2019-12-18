#include "include/unionFind/unionFind.hpp"

unionFind::unionFind(int n){
	count_ = n;
	arr_size = n;
	arr = new int[n];
	for(int i = 0 ; i < n ; i++){
		arr[i] = i;
	}
}

bool unionFind::connected(int v, int w){
	return find(v) == find(w);
}

int unionFind::count() const{
	return count_;
}

unionFind::~unionFind() {
	delete[] arr;
	arr = nullptr;
}
