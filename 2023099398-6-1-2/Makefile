all: main.o animal.o
	g++ -o animal main.o animal.o

main.o: main.cc
	g++ -c -o main.o main.cc

animal.o: animal.cc
	g++ -c -o animal.o animal.cc

clean:
	rm animal.o main.o

