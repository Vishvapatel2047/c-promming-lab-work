#include<stdio.h>

int main()
{
// sum on n odd numbers 
    int n, i, sum=0;
    printf("\nEnter n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        sum += 2*i-1;
    printf("Sum of odd = %d", sum);

}