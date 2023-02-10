#include <stdio.h>

int fun(int num)
{
  if(num==0)
    return;
  return 1 +fun(num/10);
}
int main()
{
  int input=832;
  int res;
  res=fun(input);
  printf("%d",res);


  return 0;
}
