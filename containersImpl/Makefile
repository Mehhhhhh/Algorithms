CC=gcc
IDIR=include
SDIR=src
ODIR=obj
BDIR=bin
CFLAGS=-c -Wall -I$(IDIR)

all: $(BDIR)/llstackTestClient

$(BDIR)/llstackTestClient: $(ODIR)/main.o $(ODIR)/llstack.o
	$(CC) $(ODIR)/main.o $(ODIR)/llstack.o -o $(BDIR)/llstackTestClient

$(ODIR)/main.o: $(SDIR)/main.cpp
	$(CC) $(CFLAGS) $(SDIR)/main.cpp

$(ODIR)/llstack.o: $(SDIR)/llstack.cpp
	$(CC) $(CFLAGS) $(SDIR)/llstack.cpp 

clean: 
	rm -rf *o llstackTestClient
