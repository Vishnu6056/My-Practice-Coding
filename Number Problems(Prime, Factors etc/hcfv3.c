#include<stdio.h>//pre processed things
int main()//entry point
{
   int num1=60,num2=80;
   int temp;
   do
   {
       temp=num1%num2;
       num1=num2;
       num2=temp;
   }while(temp!=0);
   printf("%d",num1);
    return 0;
}

