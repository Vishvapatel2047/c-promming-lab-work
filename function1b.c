#include <stdio.h>
void subtract(void)
{
int a,b;
printf("Enter two numbers");
scanf("%d %d",&a,&b);
printf ("%d-%d = %d \n",a,b,a-b);
}
int main()
{subtract();
subtract();
}