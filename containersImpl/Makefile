SHELL:=/bin/bash
CC=g++
IDIR=include
SDIR=src
ODIR=obj
BDIR=bin
TDIR=template
CFLAGS=-c -Wall -ggdb
HEADERS:=$(wildcard $(IDIR)/*.hpp)
TEMPLATES:=$(wildcard $(TDIR)/*.tpp)

.PHONY: all clean

all: $(BDIR)/TestClient

$(BDIR)/TestClient: $(ODIR)/main.o $(ODIR)/unionFind/unionFind.o $(ODIR)/unionFind/quickUnion.o $(ODIR)/unionFind/quickFind.o
	$(CC) $^ -o $(BDIR)/TestClient

$(ODIR)/unionFind/unionFind.o: $(SDIR)/unionFind/unionFind.cpp $(IDIR)/unionFind/unionFind.hpp
	$(CC) $(CFLAGS) $< -o $@ 

$(ODIR)/unionFind/%.o: $(SDIR)/unionFind/%.cpp $(IDIR)/unionFind/unionFind.hpp $(IDIR)/unionFind/%.hpp
	$(CC) $(CFLAGS) $< -o $@ 

$(ODIR)/main.o: $(SDIR)/main.cpp $(IDIR)/unionFind/unionFind.hpp $(IDIR)/unionFind/quickFind.hpp $(IDIR)/unionFind/quickUnion.hpp $(HEADERS) $(TEMPLATES)
	$(CC) $(CFLAGS) $< -o $@ 

clean: 
	rm -rf **/*o */*TestClient
