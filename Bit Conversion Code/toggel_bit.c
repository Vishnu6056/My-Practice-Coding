#include <stdio.h>
#include <math.h>
int main()
{
   int input=49;
   int mask=1;
   int ith_bit=6;
   int ctr;
  // for(ctr=1; ctr< ith_bit ; ctr+=1)
    //mask = mask << 1;
  mask = mask <<(ith_bit-1);

   input = (input^mask);
   printf("%d ",input);
  return 0;
}
