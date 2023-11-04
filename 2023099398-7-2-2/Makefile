all: main.o print_info.o
	g++ -o print_info main.o print_info.o

main.o: main.cc
	g++ -c -o main.o main.cc

print_info.o: print_info.cc
	g++ -c -o print_info.o print_info.cc

clean:
	rm main.o print_info.o

