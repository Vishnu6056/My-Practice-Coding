#include<stdio.h>//pre processed things
#include<math.h>
int isPrime(int input)
{
     int range;
     int check_factor;
     if(input==2||input==3)
        return 1;
    if((input%2==0&&input!=2)||(input==1))
        return 0;
    else//odd
    {
        range=sqrt(input);
        for(check_factor=3;check_factor<=range;check_factor+=2)
            if(input%check_factor==0)
                break;
       if(check_factor>range)
         return 1;
       else
         return 0;
    }
}
int main()//entry point
{
     int input;
     int range=10000;
     int prime_ctr=0;
     for(input=2; input<=range; input+=1)
     {
         if(isPrime(input)==1)
            prime_ctr+=1;//printf("%d ",input);
     }
     printf("%d",prime_ctr);

     return 0;
}

