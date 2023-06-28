CXX = g++
CONSERVATIVE_FLAGS = -std=c++14 -Wall -Wextra -pedantic
DEBUGGING_FLAGS = -g -O0
CXXFLAGS = $(CONSERVATIVE_FLAGS) $(DEBUGGING_FLAGS)

main: main.o game.o player.o worm.o entity.o area.o
	$(CXX) -o main main.o game.o player.o worm.o entity.o area.o

main.o: main.cpp
	$(CXX) -c main.cpp $(CXXFLAGS)

game.o: game.cpp game.h
	$(CXX) -c game.cpp $(CXXFLAGS)

player.o: player.cpp player.h
	$(CXX) -c player.cpp $(CXXFLAGS)

worm.o: worm.cpp worm.h
	$(CXX) -c worm.cpp $(CXXFLAGS)

entity.o: entity.cpp entity.h
	$(CXX) -c entity.cpp $(CXXFLAGS)

area.o: area.cpp area.h
	$(CXX) -c area.cpp $(CXXFLAGS)

clean:
	
	rm -f *.o main.exe