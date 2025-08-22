#include <stdio.h>

int main()
{
	float a,b;
	
	printf("ENTER THE VALUE:");
	scanf("%f", &a);
	
	b= a/60;
	printf("value of %f is %f hours", a,b);
}