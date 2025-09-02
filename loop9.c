#include<stdio.h>

int main()
{
// sum on n even numbers 

    int n, i, sum=0;
    printf("\nEnter n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        sum += 2*i;
    printf("Sum of odd = %d", sum);
    

}