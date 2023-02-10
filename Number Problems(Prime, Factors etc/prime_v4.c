#include<stdio.h>//pre processed things
int main()//entry point
{
    long long int input;
    long long int check_factor;
   //input=1111111111111;
   input=1000000007;
    long long int range;
    int prime_flag=1;
    range=input/2;
    for(check_factor=2;check_factor<=range;check_factor+=1)
   {
        if(input%check_factor==0)
        {
            prime_flag=0;
            break;
        }
   }
   if(prime_flag==1)
    printf("Prime");
   else
    printf("Composite");
    return 0;
}

