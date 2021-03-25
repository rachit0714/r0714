#include <stdio.h>
#include <stdlib.h>

int sum_card(int *arr[]);

int main (int argv, char *argc[]){

	int *arr[argv];
	int n;

	// allocating memory in the array for integers
	// and assigning a value at each index
	for (int i = 0; i < argv - 1; i++){
		arr[i] = malloc(sizeof(int));
		n = strtol(argc[i+1], NULL, 10);
		*(arr[i]) = n;
	}
	
	// assigning terminating index to final index in array
	arr[argv-1] = malloc(sizeof(int));
	*(arr[argv-1]) = '\0';

	int sum = sum_card(arr);

	printf("%d\n", sum);


	for (int i = 0; i < argv; i++) {
		free(arr[i]);
	}

	return 0;
}


int sum_card(int *arr[]) {
	int sum = 0;
	for (int i = 0; *arr[i] != '\0'; i++) {
		sum += *arr[i];
	}
	return sum;

}

