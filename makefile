main: main.o Racional.o
	g++ main.o Racional.o

main.o: main.cpp Racional.cpp
	g++ -c main.cpp

Racional.o: Racional.cpp Racional.h
	g++ -c Racional.cpp
