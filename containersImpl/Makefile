SHELL:=/bin/bash
CC=g++
IDIR=include
SDIR=src
ODIR=obj
BDIR=bin
CFLAGS=-c -Wall -g 

.PHONY: all clean

all: $(BDIR)/stackTestClient

$(BDIR)/stackTestClient: $(ODIR)/main.o
	$(CC) $^ -o $(BDIR)/stackTestClient

$(ODIR)/%.o: $(SDIR)/%.cpp
	$(CC) $(CFLAGS) $< -o $@ 

clean: 
	rm -rf **/*o */stackTestClient
