#include<stdio.h>//pre processed things
int main()//entry point
{
   int input;
   int check_factor;

   input=20;
   check_factor=5;
    for(check_factor=1;check_factor<=input;check_factor+=1)
   {
        if(input%check_factor==0)
        {
            printf("%d ",check_factor);
        }
   }
    return 0;
}

