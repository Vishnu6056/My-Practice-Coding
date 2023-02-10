#include<stdio.h>//pre processed things
int main()//entry point
{
    long long int range=300000000;
    long long int num;
    long long int sum=0;
     long long int three_count;
     long long int five_count;
      long long int fifteen_count;
     three_count=range/3;
     five_count=range/5;
     fifteen_count=range/15;
     sum = 3*(three_count*(three_count+1)/2)+
     5*(five_count*(five_count+1)/2) -
     15*(fifteen_count*(fifteen_count+1)/2);
     printf("%lld",sum);
    return 0;
}

