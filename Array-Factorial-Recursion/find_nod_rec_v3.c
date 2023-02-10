#include <stdio.h>

int count=0;
void fun(int num)
{
  if(num==0)
    return;
  count=count+1;
  num=num/10;
  fun(num);
}
int main()
{
  int input=832;
  fun(input);
  printf("%d",count);


  return 0;
}
