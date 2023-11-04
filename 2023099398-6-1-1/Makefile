all: main.o shapes.o
	g++ -o shapes main.o shapes.o

main.o: main.cc
	g++ -std=c++11 -c -o main.o main.cc

zebra.o: zebra.cc
	g++ -c -o shapes.o shapes.cc

clean:
	rm shapes main.o shapes.o

