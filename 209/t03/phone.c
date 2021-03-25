#include <stdio.h>
#include <stdlib.h>

int main() {

	char number[10] = {"\0"};
	int index;
	int n;

	while ((n = scanf("%s %d", number, &index)) != -1) {
		if (n == 2) {
			if (index == 0) {
				printf("%s\n", number);
			}
			else if ((0 < index) && (index < 10)) {
				printf("%d\n", number[index] - 48);
			}
		}
	}
	return 0;

}
