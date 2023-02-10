#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=7;
    int ctr;
    int line;
    int val=1;

    for(line=1;line<=input;line+=1,printf("\n"))
    {
        if(line%2==0)
        {
            val=(line*(line-1))/2 +1;
          for(ctr=1;ctr<= line; ctr+=1)
            printf("%2d ",val++);
        }
        else
        {
            val=(line*(line+1))/2;
          for(ctr=1;ctr<= line; ctr+=1)
            printf("%2d ",val--);
        }
   }
    return 0;
}

