#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=6;
    int ctr;
    int line;
    int even_val=2;
    int odd_val=1;
    for(line=1;line<=input;line+=1,printf("\n"))
    {
        for(ctr=1;ctr<= input; ctr+=1)
        {
            if(line%2==0)
            {
                printf("%2d ",even_val);
                even_val+=2;
            }
            else
            {
                printf("%2d ",odd_val);
                odd_val+=2;
            }
        }
    }
    return 0;
}

