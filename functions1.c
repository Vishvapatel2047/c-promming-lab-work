#include <stdio.h>
void add(void)
{
int a,b;
printf("Enter two numbers");
scanf("%d %d",&a,&b);
printf ("%d+%d = %d \n",a,b,a+b);
}
int main()
{add();
add();
}