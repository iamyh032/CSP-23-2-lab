all: main.o classes.o
	g++ -o classes main.o classes.o

main.o: main.cc
	g++ -c -o main.o main.cc

classes.o: classes.cc
	g++ -c -o classes.o classes.cc

clean:
	rm classes.o main.o

