#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argv, char *argc[]) {
	char *first = argc[1];
	char *second = argc[2];
	if (strcmp(first, second) == 0){
		printf("same\n");
	}
	else
		printf("different\n");
		
	return 0;
}
