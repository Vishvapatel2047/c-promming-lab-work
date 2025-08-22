#include <stdio.h>

float main()

{
	float d,p;
	float dTor =48.0;
	float pTor =70.0;
	
	printf("ENTER AMOUNT IN DOLLORS($):");
	scanf("%f",&d);
	
	p=(d*dTor)/pTor;
	
	printf("%.2f d = %.2f p \n",d,p);
	
}