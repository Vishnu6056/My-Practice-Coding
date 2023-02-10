#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=4;
    int ctr;
    int line;
    int val=1;
    for(line=1;line<=input;line+=1,printf("\n"))
    {
        for(ctr=1;ctr<= line; ctr+=1)
            printf("%d",val++);
        printf(" out : %d ",val);
    }
    return 0;
}

