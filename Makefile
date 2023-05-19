CXX = g++
CONSERVATIVE_FLAGS = -std=c++14 -Wall -Wextra -pedantic
DEBUGGING_FLAGS = -g -O0
CXXFLAGS = $(CONSERVATIVE_FLAGS) $(DEBUGGING_FLAGS)

main: main.o
	$(CXX) -o main main.o

main.o: main.cpp
	$(CXX) -c main.cpp $(CXXFLAGS)

clean:
	rm -f *.o main *~