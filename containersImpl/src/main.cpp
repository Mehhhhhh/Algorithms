#include "include/llstack.hpp"
#include <iostream>

int main(int argc, char* argv[]){
	llstack<int>* stack = new llstack<int>();
	for(int i = 0 ; i < 10 ; ++i){
		stack->push(i);
	}
	while(!stack->isEmpty()){
		std::cout << stack->pop() << std::endl;
	}
	return 0;
}
