#include <stdio.h>
int main()
{
int recgcd(int,int);
int n,d;
printf("gcd enter two numbers");
scanf("%d %d",&n,&d);
printf("gcd of %d and %d is %d",n,d,recgcd(n,d));
}
int recgcd(int n,int d)
{
    return((n%d)?recgcd(d,n%d):d);
}
