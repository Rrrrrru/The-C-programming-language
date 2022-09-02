#include <stdio.h>

int main(){
	float celsius, fahr;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	printf("Celsius\t\tFahr\n");
	printf("---------------\n");
	for(fahr = lower; fahr <= upper; fahr = fahr +step){
		printf("%3.0f\t\t%6.1f\n",fahr, (5.0/9.0)*(fahr-32));
	}
}
