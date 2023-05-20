CXX = g++
CONSERVATIVE_FLAGS = -std=c++14 -Wall -Wextra -pedantic
DEBUGGING_FLAGS = -g -O0
CXXFLAGS = $(CONSERVATIVE_FLAGS) $(DEBUGGING_FLAGS)

main: main.o game.o player.o
	$(CXX) -o main main.o game.o player.o

main.o: main.cpp
	$(CXX) -c main.cpp $(CXXFLAGS)

game.o: game.cpp game.h
	$(CXX) -c game.cpp $(CXXFLAGS)

player.o: player.cpp player.h
	$(CXX) -c player.cpp $(CXXFLAGS)

clean:
	rm -f *.o main *~