#include<stdio.h>

int main()
{

// 5. Print first n odd numbers

    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        printf("%d ", 2*i-1);

}