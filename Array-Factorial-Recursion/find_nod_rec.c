#include <stdio.h>

int fun(int num)
{
    int count=0;
  if(num==0)
    return;
  count=count+=1;
  num=num/10;
  fun(num);
  return count;
}
int main()
{
  int input=832;
  int res;
  res=fun(input);
  printf("%d",res);


  return 0;
}
