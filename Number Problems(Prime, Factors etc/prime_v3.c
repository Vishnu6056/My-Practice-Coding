#include<stdio.h>//pre processed things
int main()//entry point
{
    long long int input;
    long long int check_factor;
    long long int no_of_factors=0;
   //input=1111111111111;
   input=1000000007;
    long long int range;
    range=input/2;
    for(check_factor=2;check_factor<=range;check_factor+=1)
   {
        if(input%check_factor==0)
        {
            no_of_factors+=1;
        }
   }
   if(no_of_factors==0)
    printf("Prime");
   else
    printf("Composite");
    return 0;
}

