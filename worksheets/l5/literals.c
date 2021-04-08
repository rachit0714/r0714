#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argv, char *argc[]) {

	if (argv != 4) {
		printf("You need to provide 3 arguments\n");
		return 1;
	}
	
	unsigned int address = 0x0;
	address = strtol(argc[1], NULL, 16);
	int size = strtol(argc[2], NULL, 10);
	char *exe = argc[3];

	FILE *fp;
	char buff[2];

	printf("the address is %d, the size is %d, the file is %s\n", address, size, exe);

	fp = fopen(exe, "rb");
	fseek(fp, address + 4, SEEK_CUR);
	for(int i = 0; i < size - 5; i++) {
		fread(buff, 1, 1, fp);
		if (buff[0] == '\0'){
			printf("\n");
		}
		printf("%s", buff);
	}
	fclose(fp);
	return 0;
}
