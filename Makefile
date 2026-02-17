CXX = clang++
CXXFLAGS = -Wall -std=c++17 $(shell pkg-config --cflags raylib)
LIBS = $(shell pkg-config --libs raylib)


SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
TARGET = app

all: $(TARGET)
	
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET) $(LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
