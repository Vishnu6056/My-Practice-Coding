#include <stdio.h>
#include <math.h>
int main()
{
  long long int input=592716384;
  int hash[10]={0};
  int digit;
  int ind;
  while(input)
  {
      digit=input%10;
      hash[digit]++;
      input=input/10;
  }
  for(ind=1; ind<=9 ; ind+=1)
    if(hash[ind]!=1)
        break;
  if(ind==10)
    printf("PANDIGITAL");
  else
    printf("NOT");
  return 0;
}
