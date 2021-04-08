#include <stdio.h>
#define SIZE 1000

int main(void) {
	char s1[SIZE+1], s2[SIZE+1];
	int i;

	for (i = 0; i < 6; i++) {
		fgets(s1 + i * 2, 3, stdin);
	}

	for (i = 0; i < 6; i++) {
		fgets(s2 + i * 2, 3, stdin);
	}

	printf("First string: %s\n", s1);
	printf("Second string: %s\n", s2);

}
