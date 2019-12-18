#ifndef QUICKUNION_HPP
#define QUICKUNION_HPP

#include "include/unionFind/unionFind.hpp"

class quickUnion : public unionFind {
    public:
        quickUnion(int n);
        int find(int p) override;
	    void union_(int v, int w) override;
};

#endif 