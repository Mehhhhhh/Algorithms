CC=gcc
IDIR=include
SDIR=src
ODIR=obj
BDIR=bin
CFLAGS=-c -Wall -I$(IDIR)

all: $(BDIR)/llstackTestClient

$(BDIR)/llstackTestClient: $(ODIR)/main.o $(ODIR)/llstack.o
	$(CC) $(ODIR)/main.o $(ODIR)/llstack.o -o $(BDIR)/llstackTestClient


$(ODIR)/%.o: $(SDIR)/%.cpp
	$(CC) $(CFLAGS) $< -o $@ 

clean: 
	rm -rf **/*o llstackTestClient
