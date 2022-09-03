#include <stdio.h>

int main(){
	int c;
	c = getchar();
	printf("%d\n",c);
	while(c != EOF)	{
		putchar(c);
		c = getchar();
	}
}
