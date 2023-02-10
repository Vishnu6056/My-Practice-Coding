#include<stdio.h>//pre processed things
int main()//entry point
{
    int num;
    int range=5;
    int res=1;
    for(num=1;num<=range ; num=num+1)
    {
         res=res*num;
    }
   printf("%d",res);

    return 0;
}





