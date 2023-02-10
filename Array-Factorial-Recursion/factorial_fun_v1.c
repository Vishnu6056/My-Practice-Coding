#include <stdio.h>
#include <math.h>
int fun3(int input)//0!
{
    if(input==0)
        return 1;
}
int fun2(int input)//1
{
    int res;
    res= input*fun3(input-1);//input*(input-1)!//1*0!
    return res;
}
int fun1(int input)//2
{
    int res;
    res= input*fun2(input-1);//input*(input-1)!//2*1!
    return res;
}
int fun(int input)//3
{
    int res;
    res= input * fun1(input-1) ;//input *(input-1)!;//3!=3*2!;
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
