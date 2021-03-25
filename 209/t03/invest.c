#include <stdio.h>
#include <stdlib.h>

void invest(float *amount, float rate);

int main(int argv, char *argc[]){
	if (argv != 3) {
		printf("Provide 2 arguments");
		return 1;
	}

	float amount = atof(argc[1]);
	float rate = atof(argc[2]);
	

	printf("%.2f after the rate of %.2f percent increases to ", amount, rate);

	invest(&amount, rate);
	printf("%.2f\n", amount);
	return 0;
}

void invest(float *amount, float rate){
	float num = *amount / 100;
	*amount += num*rate;
}

