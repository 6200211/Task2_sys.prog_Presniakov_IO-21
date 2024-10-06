CXX = g++
CXXFLAGS = -Iinclude -std=c++11

all: secondTask

my_calculator_project: src/main.o src/calculator.o
    $(CXX) -o secondTask src/main.o src/calculator.o

src/main.o: src/main.cpp
    $(CXX) $(CXXFLAGS) -c src/main.cpp

src/calculator.o: src/calculator.cpp
    $(CXX) $(CXXFLAGS) -c src/calculator.cpp

clean:
    rm -f src/*.o secondTask
