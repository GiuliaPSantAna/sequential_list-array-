CXX = g++
CXXFLAGS = -Wall -Iinclude

all: main test

main: src/main.cpp src/List.cpp
	$(CXX) $(CXXFLAGS) -o main src/main.cpp src/List.cpp

test: test/test_List.cpp src/List.cpp
	$(CXX) $(CXXFLAGS) -o test_List test/test_List.cpp src/List.cpp

clean:
	rm -f main test_List