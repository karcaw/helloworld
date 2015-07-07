

CC=gcc

hello: hello.o
	$(CC) -o hello hello.o

hello.o: hello.c hello.h
	$(CC) -c hello.c

test: hello
	./hello
