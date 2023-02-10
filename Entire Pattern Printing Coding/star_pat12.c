#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=7;
    int row;
    int col;
    for(row=1;row<=input*2-1;row+=1,printf("\n"))
   {
       for(col=1;col<=input*2-1 ; col+=1)
        {
            if(row==col|| (row+col)==input*2)
                printf("*");
             else
                printf(" ");
        }
   }
    return 0;
}

