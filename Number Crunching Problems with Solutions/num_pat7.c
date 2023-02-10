#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=4;
    int ctr;
    int line;
    int val;
    for(line=1;line<=input;line+=1,printf("\n"))
    {
        val=line;
        for(ctr=1;ctr<= input; ctr+=1)
        {
            if(val>input)
               printf("%d ",val-input);
            else
                printf("%d ",val);
            val++;
        }

    }
    return 0;
}

