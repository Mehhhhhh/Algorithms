CC=g++
IDIR=include
SDIR=src
ODIR=obj
BDIR=bin
CFLAGS=-c -Wall -g 

all: $(BDIR)/llstackTestClient

$(BDIR)/llstackTestClient: $(ODIR)/main.o
	$(CC) $^ -o $(BDIR)/llstackTestClient

$(ODIR)/%.o: $(SDIR)/%.cpp
	$(CC) $(CFLAGS) $< -o $@ 

clean: 
	rm -rf **/*o llstackTestClient
