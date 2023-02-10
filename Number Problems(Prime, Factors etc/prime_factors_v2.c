#include<stdio.h>//pre processed things
int main()//entry point
{
   int input;
    int check_factor;
    int cont_val;
   input=840;
    for(check_factor=2;check_factor<=input;check_factor+=1)
   {
        if(input%check_factor==0)
        {
            printf("%d ",check_factor);
            cont_val=check_factor;
            while(input%cont_val==0)
            {
                input= input/cont_val;
            }
        }
   }

    return 0;
}

