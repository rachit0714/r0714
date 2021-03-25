#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]) {
	int n = strtol(argc[2], NULL, 10);
	char *st = argc[1];
	st[n] = '\0';

	printf("%s\n", st);
	return 0;
}
