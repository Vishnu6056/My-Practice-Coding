#include <stdio.h>
#include <math.h>

int fun(int input)//3
{
    int res;
    printf("%u \n",&res);
    if(input==0)//base condition
        return 1;
    res= input * fun(input-1) ;//input *(input-1)!;//3!=3*2!;
    return res;
}
int main()
{
  int num=3;
  int res;
  res= fun(num);//fun(3); //3!;
  printf("%d",res);
  return 0;
}
