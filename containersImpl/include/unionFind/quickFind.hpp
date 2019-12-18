#ifndef QUICKFIND_HPP
#define QUICKFIND_HPP

#include "include/unionFind/unionFind.hpp"

class quickFind : public unionFind {
    public:
        quickFind(int n);
        int find(int p) override;
        void union_(int v, int w) override;
};
#endif 
