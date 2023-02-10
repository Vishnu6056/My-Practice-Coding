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

       int primes[100]={2,3};

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
int primes[100000001]={2,3};
int main()//entry point
{
     int input;
     int limit=100000000;
     int prime_ctr=0;
     int prime_ind=2;
     int ind;
     int range;
     for(input=5; input<=limit; input+=2)
     {
         range=sqrt(input);
        for(ind = 0 ;primes[ind]<=range;ind+=1)
            if(input% primes[ind] ==0)
                break;
        if(primes[ind]>range)
         {
             primes[prime_ind]=input;
             prime_ind+=1;
             //printf("%d ",input);//prime_ctr+=1;
         }
     }
     printf("%d",prime_ind);

     return 0;
}

