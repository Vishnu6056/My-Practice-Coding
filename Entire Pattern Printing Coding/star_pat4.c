#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=7;
    int ctr;
    int line;

    for(line=input;line>=1;line-=1,printf("\n"))
    {
        for(ctr=1;ctr<= line; ctr+=1)
            printf("*");
    }
    return 0;
}

