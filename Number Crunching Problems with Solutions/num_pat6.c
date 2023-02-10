#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=6;
    int ctr;
    int line;
    for(line=1;line<=input;line+=1,printf("\n"))
    {
        if(line%2==0)
            printf("%d ",line+1);
        for(ctr=1;ctr<= input; ctr+=1)
        {
            printf("%d ",line);
        }
        if(line%2==1)
            printf("%d ",line+1);

    }
    return 0;
}

