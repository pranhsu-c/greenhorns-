#include<stdio.h>

main()
{
   int a,b;
   
   printf("value of A=");
   scanf("%d",&a);
   printf("value of B=");
   scanf("%d",&b);
   
   a=a+b;
   b=a-b;
   a=a-b;
   
   printf("swapping of a=%d and b=%d",a,b);
}

