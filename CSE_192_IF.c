#include <stdio.h>
int main()
{
    /*this program prints largest and smallest number*/
    int a,b,c;
    printf("Enter 3 values");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b && a==c)
        printf("all values are equal");

    else
    {

    if(a>=b && a>=c)
        printf("%d is largest. \n",a);
    else
    if(b>=a && b>=c)
        printf("%d is largest. \n",b);
    else
    if(c>=b && c>=a)
        printf("%d is largest. \n",c);

    if(a<=b && a<=c)
        printf("%d is smallest. \n",a);
    else
    if(b<=a && b<=c)
        printf("%d is smallest. \n",b);
    else
    if(c<=b && c<=a)
        printf("%d is smallest. \n",c);
    }

}
