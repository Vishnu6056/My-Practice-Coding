#include <stdio.h>
#include <math.h>
#include<limits.h>
int main()
{
  int mat[4][4]=
  {
      {10,12,33,4},
      {15,6,3,44},
      {1,42,63,77},
      {18,2,93,21},
  };
  int tot_rows=4;
  int tot_cols=4;
   int row;
   int col;
   int sum;
   for(sum= 0 ; sum <= (tot_rows-1)*2 ; sum+=1,printf("\n"))
  {
    for(row=0;row<tot_rows;row+=1)
   {
       for(col=0;col<tot_cols;col+=1)
        {
             if(row+col==sum)
                    printf("%d ",mat[row][col]);
        }
   }
  }

  return 0;
}
