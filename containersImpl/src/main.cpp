#include "include/llstack.hpp"
#include "include/arraystack.hpp"
#include <iostream>

void test_llstack(){
	llstack<int>* stack = new llstack<int>();
        for(int i = 0 ; i < 10 ; ++i){
                stack->push(i);
        }
        while(!stack->isEmpty()){
                std::cout << stack->pop() << std::endl;
        }
}

void test_arraystack(){
	arraystack<int>* stack = new arraystack<int>();
        for(int i = 0 ; i < 10 ; ++i){
		std::cout << "pushing " << i << " in stack"<< std::endl;
                stack->push(i);
		std::cout << "capacity is " << stack->cap() << std::endl;
		std::cout << "size is " << stack->size() << std::endl;
        }
        while(!stack->isEmpty()){
		std::cout << "poping stack"<< std::endl;
                std::cout << stack->pop() << std::endl;
		std::cout << "capacity is " << stack->cap() << std::endl;
                std::cout << "size is " << stack->size() << std::endl;
        }

}


int main(int argc, char* argv[]){
	test_llstack();
	test_arraystack();
	return 0;
}
