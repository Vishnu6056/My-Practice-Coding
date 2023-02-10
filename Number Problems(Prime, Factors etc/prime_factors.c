#include<stdio.h>//pre processed things
int isPrime(int inp)
{
    int cf;
    int range;
    if(inp==1)
         return 0;
    if(inp==2||inp==3)
        return 1;
    if(inp%2==0)//even filteration
        return 0;
    if(inp%6==3)//odd filtering
        return 0;
    range=sqrt(inp);
    for(cf=3; cf<=range;cf+=2)
        if(inp%cf == 0)
            return 0;
    return 1;

}
int main()//entry point
{
   int input;
    int check_factor;
    int no_of_factors=0;
    int sum_of_factors=0;
   //input=2012345323;
   input=20;
   check_factor=5;
    for(check_factor=1;check_factor<=input;check_factor+=1)
   {
        if(input%check_factor==0)
        {
            if(isPrime(check_factor)==1)
                printf("%d ",check_factor);
        }
   }
    return 0;
}

