#include <stdio.h>
#include <math.h>
fun(int num)
{
  int digit;
  if(num==0)
    return;
  digit=num%10;
  fun(num/10);
  printf("%d ",digit);
}

int main()
{
  int num=6749;
  fun(num);

  return 0;
}
