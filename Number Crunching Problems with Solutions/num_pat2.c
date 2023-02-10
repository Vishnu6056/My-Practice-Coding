#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=4;
    int ctr;
    int line;
    for(line=1;line<=input;line+=1,printf("\n"))
    {
        for(ctr=1;ctr<= line; ctr+=1)
            printf("%d",line);
    }
    return 0;
}

