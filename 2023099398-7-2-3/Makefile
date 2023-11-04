all: main.o print_member.o
	g++ -o print_member main.o print_member.o

main.o: main.cc
	g++ -c -o main.o main.cc

print_member.o: print_member.cc
	g++ -c -o print_member.o print_member.cc

clean:
	rm main.o print_member.o

