#ifndef UNIONFIND_HPP
#define UNIONFIND_HPP

class unionFind{
	public:
		unionFind(int n);
		bool connected(int v, int w);
		virtual int find(int p) = 0;
		virtual void union_(int v, int w) = 0;
		int count() const;
		virtual ~unionFind();
	protected:
		int* arr;
		int count_;
		unsigned int arr_size;
};




#endif
