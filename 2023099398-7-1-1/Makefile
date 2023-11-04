all: main.o magic_square.o
	g++ -o magic_square main.o magic_square.o

main.o: main.cc
	g++ -c -o main.o main.cc

magic_square.o:
	g++ -c -o magic_square.o magic_square.cc

clean:
	rm main.o magic_square.o

