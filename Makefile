CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11

# Pasta dos arquivos fonte
SRC_DIR = .
CLASS_DIR = classes

# Arquivos fonte
SRC_PARAMETERS = $(CLASS_DIR)/parameters.cpp
SRC_MAIN = $(SRC_DIR)/main.cpp

# Nome do executável
TARGET = simulation

# Objetos intermediários
OBJ_PARAMETERS = $(SRC_PARAMETERS:.cpp=.o)
OBJ_MAIN = $(SRC_MAIN:.cpp=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ_PARAMETERS) $(OBJ_MAIN)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_PARAMETERS): $(SRC_PARAMETERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_MAIN): $(SRC_MAIN)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_PARAMETERS) $(OBJ_MAIN) $(TARGET)
