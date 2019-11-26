SHELL = /bin/sh
CC = gcc
CFLAGS       = -fPIC -g #-pedantic -Wall -Wextra -ggdb3
LDFLAGS      = -shared

TARGET = llstack.so
SOURCES = $(shell echo containersImpl/*.cpp)
HEADERS = $(shell echo containersImpl/*.hpp)
OBJECTS = $(SOURCES:.cpp=.o)

PREFIX = $(DESTDIR)/usr/local
BINDIR = $(PREFIX)/bin

all: $(TARGET)

$(TARGET): $(OBJECTS)
    $(CC) $(CFLAGS) $(DEBUGFLAGS) -o $(TARGET) $(OBJECTS)
