#include<stdio.h>

int main()
{// 10. Factorial of a number

    int n, i, fact=1;
    printf("\nEnter n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        fact *= i;
    printf("Factorial = %d", fact);
    

}