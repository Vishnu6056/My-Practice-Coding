#include<stdio.h>//pre processed things
int main()//entry point
{
   int num1=10;
   int num2=8;
   int temp;
   int lcm;
   int pro;
   int hcf;
   pro=num1*num2;
   do
   {
       temp=num1%num2;
       num1=num2;
       num2=temp;
   }while(temp!=0);

    hcf=num1;
    lcm=pro/hcf;
    printf("%d",lcm);
    return 0;
}

