#include<stdio.h>

int main()
{
    int x[5], i,j,t;
    printf("enter 5 values:");

    for(i=0;i<=4;i++)
        scanf("%d",x[i]);
        printf("unsorted array:");

    for(i=0;i<=3;i++)
        for(j=i+1;j<=4;j++)
        if(x[i] > x[j])
    {
        t = x[i];
        x[i] = x[j];
        x[j] = t;

    }
    printf("sorted array:");
    for(i=1;i<=4;i++)
        printf("%d",x[i]);
}
