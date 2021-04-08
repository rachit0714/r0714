#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]) {
	if (argv == 1) {
		printf("Provide an executable through the commandline\n");
		return 1;
	}
	else if (argv > 2){
		printf("Only provide an executable through the commandline\n");
		return 2;
	}

	char *exe = argc[1];
	FILE *file = fopen(exe, "rb");
	char address[100];

	fseek(file, 40, SEEK_CUR);
	fread(address, 4, 1, file);

	printf("%s was read\n", address);
	long n = strtol(address, NULL, 16);
	printf("%ld this is after %s is converted to int\n", n, address);

	printf("the address is %lX\n", n);

	fclose(file);

	return 0;
}
