namespace Containers
{
	template <class T>
	class llstack{
		public:
			llstack();
			void push(T& t);
			bool isEmpt();
			int size();
			T& pop();
		private:
			class Node {
			    public:
				Node(T& item){
					this.item = item;
					next = nullptr;
				};
				Node(){
					T t = T();
					item = t;
					next = nullptr;
				};
			    private:
				T item;
				Node* next;
			};
			// top of the stack
			Node* first;
			//number of items
			int N;
	}
};
