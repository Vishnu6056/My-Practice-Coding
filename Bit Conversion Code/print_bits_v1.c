#include <stdio.h>
#include <math.h>
int main()
{
   int input=20;
   while(input)
   {
        if((input&1)==1)
       {
           printf("1");
       }
       else
       {
           printf("0");
       }
       input=input>>1;
   }

  return 0;
}
