#include<stdio.h>//pre processed things
int main()//entry point
{
   int input=28;
    int check_factor;
   int sum_of_factors=0;
   int range;
    sum_of_factors=1;
    range=sqrt(input);
    for(check_factor=2;check_factor<=range;check_factor+=1)
   {
        if(input%check_factor==0)
        {
            sum_of_factors=sum_of_factors+check_factor;
            if(check_factor!=(input/check_factor))
                  sum_of_factors+=(input/check_factor);

        }
   }
   if(sum_of_factors==input)
     printf("perfect number");
   else if(sum_of_factors>input)
      printf("Abundant number");
 else
     printf("Deficent number");
    return 0;
}

