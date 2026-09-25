# Compiler settings
CXX      := g++
CXXFLAGS := -g -Wall -Wextra 

# source files
MAIN     := main.cpp
UTILS    := utils/DoublyLinkedList.cpp \
            utils/Algorithms/Abacus.cpp \
            utils/Scanner/Scanner.cpp \
						utils/Token/Token.cpp

# Output build directory and executable name
BUILD_DIR := build
TARGET := $(BUILD_DIR)/Main

run: $(TARGET)
	./$(TARGET)

# Rule to build the executable (automatically handles directory creation)
$(TARGET): $(MAIN) $(UTILS)
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $(MAIN) $(UTILS) -o $(TARGET)

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR)

