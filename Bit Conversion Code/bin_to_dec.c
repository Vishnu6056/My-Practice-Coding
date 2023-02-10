#include <stdio.h>
#include <math.h>
int main()
{
   int input=1101011100;
   int res=0;
   int place=1;
   int digit;
   while(input)
   {
       digit=input%10;
       res=res+digit*place;
       place=place*2;
       input = input/10;
   }
printf("%d",res);
  return 0;
}
