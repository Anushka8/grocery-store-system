CXX = g++
CXXFLAGS = -Wall -std=c++17
SRC_DIR = src
BUILD_DIR = build

# List all source files
SOURCES = $(SRC_DIR)/main.cpp \
          $(SRC_DIR)/Product.cpp \
          $(SRC_DIR)/Order.cpp \
          $(SRC_DIR)/Employee.cpp \
          $(SRC_DIR)/Manager.cpp \
          $(SRC_DIR)/Cashier.cpp \
          $(SRC_DIR)/CashierTerminal.cpp

# Object files (change .cpp to .o and put in build/)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

# Final executable
TARGET = $(BUILD_DIR)/main

# Default rule
all: $(TARGET)

# Link all object files into the final binary
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile .cpp into .o files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -rf $(BUILD_DIR)/*.o $(TARGET)
