#include<stdio.h>//pre processed things
int main()//entry point
{
   int input1,input2;
    int check_factor;
    int min;
    int hcf;
   input1=80;
   input2=60;
   min=(input1<input2)?(input1):(input2);
    for(check_factor=min;check_factor>=1;check_factor-=1)
   {
        if(input1%check_factor==0 && input2%check_factor==0 )
        {
            printf("%d ",check_factor);
            break;
        }
   }
   //printf("%d",hcf);

    return 0;
}

