#include <stdio.h>
#define SIZE 10

int main(void) {
	char s1[SIZE+1], s2[SIZE+1];
	fgets(s1, SIZE+1, stdin);
	fgets(s2, SIZE+1, stdin);

	printf("First string %s\n", s1);
	printf("second string %s\n", s2);
}
