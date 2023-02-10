#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=7;
    int ctr;
    int line;
     int star_count;
     star_count=input;
    for(line=1;line<=input;line+=1,printf("\n"))
    {
        for(ctr=1;ctr<= star_count; ctr+=1)
            printf("*");
        star_count-=1;
    }
    return 0;
}

