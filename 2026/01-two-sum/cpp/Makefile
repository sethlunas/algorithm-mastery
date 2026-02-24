CC ?= cc                 # Which compiler to use
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra -Wpedantic  
# Compiler settings:
# -std=c++17: Use C++17 standard
# -O2: Optimize code
# -Wall -Wextra: Show most warnings
# -Wpedantic: Show extra warnings for non-standard code

BIN = $(notdir $(patsubst %/,%,$(dir $(CURDIR)))).out # Name of the compiled program (parent folder name + .out)
SRC = test.cpp solution.cpp   # Source files to compile

all: run                      # Default target when you type `make`

build: $(SRC)                 # Build the binary if any source changed
	$(CXX) $(CXXFLAGS) $(SRC) -o $(BIN)

run: build                    # Build first, then run
	./$(BIN)

clean:                        # Delete compiled binary
	rm -f $(BIN)