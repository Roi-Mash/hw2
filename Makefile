CC=gcc
FLAGS= -Wall -g


all: libmyBank.so libmyBank.a mains maind

mains: main.o libmyBank.a
	$(CC) $(FLAGS) -o mains main.o libmyBank.a

maind: main.o libmyBank.so
	$(CC) $(FLAGS) -o maind main.o ./libmyBank.so

libmyBank.so: myBank.o
	$(CC) -shared -o libmyBank.so myBank.o

libmyBank.a: myBank.o 
	ar -rcs libmyBank.a myBank.o

myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c

main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c


.PHONY: clean all

clean:
	rm -f *.o *.a *.so main maind
