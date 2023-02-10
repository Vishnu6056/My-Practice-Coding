#include<stdio.h>//pre processed things
int main()//entry point
{
    long long int num,limit;
    long long int even_ctr=0;
    limit=10000000000;
    for(num=1;num<=limit;num+=1)
        if((num%2)==0)
            even_ctr+=1;
    printf("%lld",even_ctr);
    return 0;
}

