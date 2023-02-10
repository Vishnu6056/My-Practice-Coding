#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=4;
    int ctr;
    int line;
    for(line=1;line<=input;line+=1,printf("\n"))
    {
        for(ctr=1;ctr<=input-line;ctr+=1)
            printf(" ");
        for(ctr=1;ctr<=line*2-1;ctr+=1)
            printf("*");
        for(ctr=1;ctr<=(input-line)*2;ctr+=1)
            printf(" ");
        for(ctr=1;ctr<=line*2-1;ctr+=1)
            printf("*");
    }


    for(line=input;line>=1;line-=1,printf("\n"))
    {
        for(ctr=1;ctr<=input-line;ctr+=1)
            printf(" ");
        for(ctr=1;ctr<=line*2-1;ctr+=1)
            printf("*");
        for(ctr=1;ctr<=(input-line)*2;ctr+=1)
            printf(" ");
        for(ctr=1;ctr<=line*2-1;ctr+=1)
            printf("*");

    }

    return 0;
}

