

CC=gcc

hello: hello.o usage.o
	$(CC) -o hello hello.o usage.o

usage.o: usage.c
	$(CC) -c usage.c

hello.o: hello.c hello.h
	$(CC) -c hello.c

test: hello
	./hello
