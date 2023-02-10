#include<stdio.h>//pre processed things
int main()//entry point
{
   int row;
   int col;
   int input=3;
   for(row=1;row<=input*2-1;row+=1,printf("\n"))
   {
       for(col=1;col<=input*2-1 ; col+=1)
        {
            printf("%d,%d  ",row,col);
        }
   }
    return 0;
}

