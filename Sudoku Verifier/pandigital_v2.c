#include <stdio.h>
#include <math.h>
int main()
{
  long long int input=592716484;
  int hash[10]={0};
  int digit;
  int ind;
  while(input)
  {
      digit=input%10;
      hash[digit]++;
      if(hash[digit]>1)
        break;
      input=input/10;
  }
  if(input==0)
    printf("PANDIGITAL");
  else
    printf("NOT");
  return 0;
}
