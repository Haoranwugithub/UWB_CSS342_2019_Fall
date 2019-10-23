FLAGS=-Wall
CC=g++

all: virtual_function_example.x

base.o: base.cpp base.h
	$(CC) $(FLAGS) -c base.cpp  -o base.o

classA.o: classA.cpp classA.h
	$(CC) $(FLAGS) -c classA.cpp  -o classA.o

classB.o: classB.cpp classB.h
	$(CC) $(FLAGS) -c classB.cpp  -o classB.o

virtual_function_example.o: virtual_function_example.cpp
	$(CC) $(FLAGS) -c virtual_function_example.cpp -o virtual_function_example.o

virtual_function_example.x: base.o virtual_function_example.o classA.o classB.o
	$(CC) classA.o classB.o base.o virtual_function_example.o -o virtual_function_example.x

clean:
	rm *.x *.o
