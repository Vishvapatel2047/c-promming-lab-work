#include<stdio.h>

int main()
{

// sum on n natural numbers

   int n, i, sum=0;
    printf("\nEnter n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        sum += i;
    printf("Sum = %d", sum);

}