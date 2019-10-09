PROJECT = test
EXECUTABLE = $(PROJECT).x
SRC = $(PROJECT).cpp
FLAGS = -std=c++11 
CXX = g++ 

all: $(EXECUTABLE) 

$(EXECUTABLE): $(SRC)
	$(CXX) $(SRC) $(FLAGS) -o $(EXECUTABLE) 

clean:
	rm *.x
