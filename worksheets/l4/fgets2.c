#include <stdio.h>
#include <string.h>

int main(void){
	char s[50];
	strncpy(s, "apple", 6);
	printf("sizeof returns %ld\n", sizeof(s));
	printf("strlen returns %ld\n", strlen(s));
	char *where = strchr(s, '\n');
	if (where)
		*where = '\0';

	return 0;
}
