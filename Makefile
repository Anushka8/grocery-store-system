# Makefile for the Smart Grocery Store Project

CXX = g++					
CXXFLAGS = -Wall -std=c++17
SRC_DIR = src
BUILD_DIR = build

all: $(BUILD_DIR)/main

$(BUILD_DIR)/main: $(SRC_DIR)/main.cpp $(SRC_DIR)/Product.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf $(BUILD_DIR)/*.o $(BUILD_DIR)/main
