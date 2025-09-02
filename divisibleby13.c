#include<stdio.h>

int main(){
// 11 numbers divisible by 13

    int i;
         printf("enter number: \n");
         scanf("%d",&i);
         for(i=1;i<=100;i++)
         if(i%13==0)
         printf("%d is divisible by 13 \n",i);
         
        

}