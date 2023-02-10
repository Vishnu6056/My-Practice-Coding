#include<stdio.h>//pre processed things
int main()//entry point
{
   int num1=10;
   int num2=8;
   int mul;
   for(mul=num1; ; mul+=num1)
   {
       if(mul%num2==0)
       {
           break;
       }
   }
   printf("%d",mul);
    return 0;
}

