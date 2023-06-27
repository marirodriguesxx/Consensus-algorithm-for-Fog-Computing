CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11

# Arquivos fonte
SRC_PARAMETERS = classes/parameters/parameters.cpp
SRC_NETWORK = classes/network/network.cpp
SRC_MAIN = main.cpp

# Nome do executável
TARGET = simulation

# Objetos intermediários
OBJ_PARAMETERS = $(SRC_PARAMETERS:.cpp=.o)
OBJ_NETWORK = $(SRC_NETWORK:.cpp=.o)
OBJ_MAIN = $(SRC_MAIN:.cpp=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ_PARAMETERS) $(OBJ_MAIN) $(OBJ_NETWORK)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_PARAMETERS): $(SRC_PARAMETERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_NETWORK): $(SRC_NETWORK)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_MAIN): $(SRC_MAIN)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_PARAMETERS) $(OBJ_NETWORK) $(OBJ_MAIN) $(TARGET)
