#include <stdio.h>
#include <math.h>
int main()
{
   int input=39;
   int res=0;
   int place=1;
   int digit;
   while(input)
   {
       digit=input%2;
       res=res+digit*place;
       place=place*10;
       input = input/2;
   }
    printf("%d",res);
  return 0;
}
