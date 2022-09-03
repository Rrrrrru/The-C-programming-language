#include <stdio.h>

int main(){
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 200;
	step = 20;
	celsius = lower;
	printf("Celsius\t\tFahr\n");
	while(celsius <= upper){
		fahr = (9.0 / 5.0) * celsius + 32.0f;
		printf("%3.0f\t\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
