#include<stdio.h>//pre processed things
int main()//entry point
{
   int input;
    int check_factor;
    int no_of_factors=0;
   input=17;
    for(check_factor=1;check_factor<=input;check_factor+=1)
   {
        if(input%check_factor==0)
        {
            no_of_factors+=1;
        }
   }
   if(no_of_factors==2)
    printf("Prime");
   else
    printf("Composite");
    return 0;
}

