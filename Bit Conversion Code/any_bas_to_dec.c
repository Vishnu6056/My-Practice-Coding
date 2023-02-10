#include <stdio.h>
#include <math.h>
int any_base_to_decimal(int input, int from_base)
{
   int res=0;
   int place=1;
   int digit;
   while(input)
   {
       digit=input%10;
       res=res+digit*place;
       place=place*from_base;
       input = input/10;
   }
   return res;
}

int main()
{
   int input=203;
   int res;
   res=any_base_to_decimal(input,8);
   printf("%d",res);
  return 0;
}
