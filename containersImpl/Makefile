SHELL:=/bin/bash
CC=g++
IDIR=include
SDIR=src
ODIR=obj
BDIR=bin
TDIR=template
CFLAGS=-c -Wall -ggdb
HEADERS:=$(wildcard $(IDIR)/*.cpp)
TEMPLATES:=$(wildcard $(TDIR)/*.tpp)

.PHONY: all clean

all: $(BDIR)/stackTestClient

$(BDIR)/stackTestClient: $(ODIR)/main.o $(HEADERS) $(TEMPLATES)
	$(CC) $< -o $(BDIR)/stackTestClient

$(ODIR)/%.o: $(SDIR)/%.cpp
	$(CC) $(CFLAGS) $< -o $@ 

clean: 
	rm -rf **/*o */stackTestClient
