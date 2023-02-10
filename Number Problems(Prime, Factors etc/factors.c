#include<stdio.h>//pre processed things
int main()//entry point
{
   int input;
    int check_factor;
    int no_of_factors=0;
    int sum_of_factors=0;
   input=20;
   check_factor=5;
    for(check_factor=1;check_factor<=input;check_factor+=1)
   {
        if(input%check_factor==0)
        {
            printf("%d ",check_factor);
            no_of_factors+=1;
            sum_of_factors=sum_of_factors+check_factor;
        }
   }
    printf("\nNOF : %d  SOF : %d",no_of_factors,sum_of_factors);
    return 0;
}

