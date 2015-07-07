#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file.h"

void usage() {
	printf("Hello world program\n");
	printf("  - Just Run it");
}

int main(int argc, char *argv[]) {

	if ( argc != 1 && strncmp("-h",argv[0],2) == 0) {
		usage();
		exit(-1);
	}

	printf (HELLO " " WORLD "\n");
	return 0;
}
