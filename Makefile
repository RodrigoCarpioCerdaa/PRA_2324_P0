all: BrazoRobotico

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c Brazorobotico.cpp

Main.o: Main.cpp BrazoRobotico.h
	g++ -c Main.cpp

BrazoRobotico: BrazoRobotico.o Main.o
	g++ -o Main BrazoRobotico.o Main.o

clean: 
	rm -f *.o BrazoRobotico

test: all
	./Main

