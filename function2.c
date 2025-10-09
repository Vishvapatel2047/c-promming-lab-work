#include <stdio.h>
void add(void)
{
int a,b;
printf("Enter two numbers");
scanf("%d %d",&a,&b);
printf ("%d+%d = %d \n",a,b,a+b);
}
void mul(void)
{
int a,b;
printf("Enter two numbers");
scanf("%d %d",&a,&b);
printf ("%d*%d = %d \n",a,b,a*b);
}
int main()
{for(int i=0;i<3;i++)
add();
mul();
}