FLAGS=-Wall -std=c++11
CC=g++

all: test.x

test.o: test.cpp myarray.h
	$(CC) $(FLAGS) -c test.cpp -o test.o 

homework1.o: homework1.cpp 
	$(CC) $(FLAGS) -c homework1.cpp -o homework1.o 

test.x: test.o homework1.o
	$(CC) $(FLAGS) homework1.o test.o -o test.x 

clean:
	rm *.x *.o
