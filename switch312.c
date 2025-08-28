#include <stdio.h>
int main()
{
   /*this is program for switch statement*/
   int i;
   printf("enter choices");
   scanf("%d",&i);
   switch(i);
   {

   case 1:
       {

    int a,b;
    printf("enter 2 values");
    scanf("%d %d", &a,&b);
printf("the addition of %d and %d is %d",a,b,a+b);
break ;
       }


       case 2:
           {

           int c,d;

           printf("enter 2 values");
            scanf("%d %d", &c&d);
    printf(" multiplication of %d and %d is %d", c,d,c*d);
       break;
           }
   case 3;
   {
       int e;
       printf("enter the number");
       scanf("%d", &e);
       if( e%2==0 )
       {

        printf("the %d is even ", e);

       }
       else
       {
           printf("the %d is odd", e);
       };
      break;

   }

   }
}
