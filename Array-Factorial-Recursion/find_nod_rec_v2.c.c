#include <stdio.h>

void fun(int num,int * count_ptr)
{
  if(num==0)
    return;
  (*count_ptr)=(*count_ptr)+1;
  num=num/10;
  fun(num,count_ptr);
}
int main()
{
  int input=832;
  int count=0;
  fun(input,&count);
  printf("%d",count);


  return 0;
}
