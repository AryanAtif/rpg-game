# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -g

# Target executable name
TARGET = main

# Source and object files
SRCS = main.cpp character_class.cpp string_functions.cpp player_class.cpp enemy_class.cpp
OBJS = $(SRCS:.cpp=.o)

# Default rule: build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Dependencies and compilation rules
main.o: main.cpp character_class.h string_functions.h player_class.h enemy_class.h
	$(CXX) $(CXXFLAGS) -c main.cpp

character_class.o: character_class.cpp character_class.h
	$(CXX) $(CXXFLAGS) -c character_class.cpp

string_functions.o: string_functions.cpp string_functions.h
	$(CXX) $(CXXFLAGS) -c string_functions.cpp

player_class.o: player_class.cpp player_class.h
	$(CXX) $(CXXFLAGS) -c player_class.cpp

enemy_class.o: enemy_class.cpp enemy_class.h 
	$(CXX) $(CXXFLAGS) -c enemy_class.cpp
# Cleanup rule
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: clean
