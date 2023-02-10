#include<stdio.h>//pre processed things
int main()//entry point
{
    long long int range=300000000;
    long long int num;
    long long int sum=0;
    for(num=1;num<=range;num+=1)
    {
        if(num%3==0 || num%5==0)
            sum = sum+ num;
    }
     printf("%lld",sum);
    return 0;
}

