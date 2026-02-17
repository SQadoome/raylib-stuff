CXX = clang++
TARGET = game
SRC = main.cpp

CXXFLAGS = -Wall -std=c++17 $(shell pkg-config --cflags raylib)
LIBS = $(shell pkg-config --libs raylib)

all:
	$(CXX) $(SRC) -o $(TARGET) $(CXXFLAGS) $(LIBS)

clean:
	rm -f $(TARGET)
