#include <stdio.h>
#include <math.h>
int main()
{
    int input=15;
     int power=2;
     int nod=0;
     int sum=0;
     int prev_sum;
     int nth_val;
     while(input>=sum)
     {
         //printf("%d ",power);
         prev_sum=sum;
         sum=sum+power;
         power=power*2;
         nod+=1;
     }
     //printf("power : %d nod : %d sum: %d ",power,nod,sum);
     nth_val=input-prev_sum-1;
     //printf("%d",nth_val);
     int ans=0;
     int place=1;
     int ctr;
     for(ctr=1;ctr<=nod;ctr+=1)
     {
         if(nth_val%2==0)
            ans=ans+3*place;
         else
            ans=ans+4*place;
        place=place*10;
        nth_val=nth_val/2;
     }
     printf("%d",ans);
     return 0;
}
