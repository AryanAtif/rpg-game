# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -g

# Target executable name
TARGET = main

# Source and object files
SRCS = main.cpp character_classes.cpp string_functions.cpp
OBJS = $(SRCS:.cpp=.o)

# Default rule: build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Dependencies and compilation rules
main.o: main.cpp character_classes.h string_functions.h
	$(CXX) $(CXXFLAGS) -c main.cpp

character_classes.o: character_classes.cpp character_classes.h
	$(CXX) $(CXXFLAGS) -c character_classes.cpp

string_functions.o: string_functions.cpp string_functions.h
	$(CXX) $(CXXFLAGS) -c string_functions.cpp

# Cleanup rule
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: clean
