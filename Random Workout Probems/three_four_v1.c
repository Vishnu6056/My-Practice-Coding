#include <stdio.h>
#include <math.h>
#define INVALID 0
#define VALID 1
int isThreeFour(int data)
{
    int digit;
   while(data)
   {
    digit=data%10;
     if(!(digit==3||digit==4))
     {
        return INVALID;
     }
    data=data/10;
   }
   return VALID;
}
int main()
{
  int num;
  int input=19;
  int valid_ctr=0;
  for(num=1; ; num+=1)
  {
      if(isThreeFour(num)==VALID)
        valid_ctr+=1;
     if(valid_ctr==input)
        break;
  }
   printf("%d",num);

  return 0;
}
