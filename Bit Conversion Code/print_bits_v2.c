#include <stdio.h>
#include <math.h>
int main()
{
   int input=20;
   int mask=1;
   while(input>=mask)
   {
        if((input&mask)==mask)
       {
           printf("1");
       }
       else
       {
           printf("0");
       }
       mask = mask << 1;
   }
  s
  return 0;
}
