#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hello.h"

int main(int argc, char *argv[]) {

	if ( argc != 1 && strncmp("-h",argv[1],2) == 0) {
		usage();
		exit(-1);
	}

	printf (HELLO " " WORLD "\n");
	return 0;
}
