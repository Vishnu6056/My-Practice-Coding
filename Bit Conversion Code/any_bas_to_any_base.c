#include <stdio.h>
#include <math.h>
int any_base_to_any_base(int input, int from_base , int to_base)
{
   int res=0;
   int place=1;
   int digit;
   while(input)
   {
       digit=input%to_base;
       res=res+digit*place;
       place=place*from_base;
       input = input/to_base;
   }
   return res;
}

int main()
{
   int input=203;
   int res;
   res=any_base_to_any_base(input,8,10);
   printf("%d\n",res);
   input=10100;
   res=any_base_to_any_base(input,2,10);
   printf("%d\n",res);
   input=47;
   res=any_base_to_any_base(input,10,8);
   printf("%d\n",res);
   input=23;
   res=any_base_to_any_base(input,10,2);
   printf("%d\n",res);

  return 0;
}
