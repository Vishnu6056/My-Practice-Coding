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
                printf("%d ",val);
                val++;
                if(val>input)
                    val=1;
        }

    }
    return 0;
}

