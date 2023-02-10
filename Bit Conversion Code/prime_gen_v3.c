#include<stdio.h>//pre processed things
#include<math.h>
int sieve[100000001]={0};
int main()//entry point
{

     int multiple;
     int val;
     int input=100000000;
     int range;
     sieve[0]=sieve[1]=1;//0 and 1 and are not primes
     range=sqrt(input);
     for(multiple=2; multiple<=range; multiple+=1)
    {
          if(sieve[multiple]==0)
         {
             for(val=multiple*multiple;val<=input  ; val+=multiple)
                sieve[val]=1;//printf("%d ",val);
         }
    }
    int ind;
    int prime_ctr=0;
   for(ind=0 ; ind<=input ; ind+=1)
   {
       if(sieve[ind]==0)
        prime_ctr+=1;
   }
   printf("%d",prime_ctr);

     return 0;
}

