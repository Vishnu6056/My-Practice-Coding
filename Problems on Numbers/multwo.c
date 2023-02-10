#include<stdio.h>//pre processed things
int main()//entry point
{
    int num1=5;
    int num2=4;
    int res=0;
    int ctr;
    for(ctr=1;ctr<= num2; ctr+=1)
    {
        res=res+num1;
    }
    printf("%d",res);
    return 0;
}

