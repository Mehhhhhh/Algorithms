#include "include/llstack.hpp"
#include "include/arraystack.hpp"
#include "include/queue.hpp"
#include "include/unionFind/quickFind.hpp"
#include "include/unionFind/quickUnion.hpp"

#include <iostream>

void test_llstack(){
        std::cout << "testing linked list stack" << std::endl;
	stack<int>* stack = new llstack<int>();
        for(int i = 0 ; i < 10 ; ++i){
                stack->push(i);
        }
        while(!stack->isEmpty()){
                std::cout << stack->pop() << std::endl;
        }
        delete stack;
}

void test_arraystack(){
        std::cout << "testing resizing array stack" << std::endl;
	stack<int>* stack = new arraystack<int>();
        for(int i = 0 ; i < 10 ; ++i){
		std::cout << "pushing " << i << " in stack"<< std::endl;
                stack->push(i);
        }
        while(!stack->isEmpty()){
		std::cout << "popping" << std::endl;
                std::cout << stack->pop() << std::endl;
        }
        delete stack;
}

void test_queue(){
        std::cout << "testing queue" << std::endl;
        queue<int>* queue = new class queue<int>();
        for(int i = 0 ; i < 10 ; ++i){
		std::cout << "pushing " << i << " in queue"<< std::endl;
                queue->push(i);
        }
        while(!queue->isEmpty()){
		std::cout << "popping" << std::endl;
                std::cout << queue->pop() << std::endl;
        }
        delete queue;
}

void test_unionFind(){
        int nums = 10;
        unionFind* quickFind = new class quickFind(nums);
        unionFind* quickUnion = new class quickUnion(nums);
        for(int i = 0 ; i < nums -1; ++i){
                quickFind->union_(i, i+1);
                quickUnion->union_(i, i+1);
                std::cout << "are 0 and 9 connected? for quick find" << quickFind->connected(0,9) << "\nfor quick union" << quickUnion->connected(0,9) << std::endl;
                std::cout << "quick find nb components" << quickFind->count() << "\nquick union nb component" << quickUnion->count() << std::endl; 
        }
}


int main(int argc, char* argv[]){
	test_llstack();
	test_arraystack();
        test_queue();
        test_unionFind();
	return 0;
}
