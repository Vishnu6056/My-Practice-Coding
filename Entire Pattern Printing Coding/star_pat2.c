#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=4;
    int ctr;
    int line;
    for(line=1;line<=input;line+=1,printf("\n"))
    {
        for(ctr=1;ctr<= input; ctr+=1)
            printf("*");

    }
    return 0;
}

