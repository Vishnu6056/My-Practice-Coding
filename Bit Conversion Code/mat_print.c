#include <stdio.h>
#include <math.h>
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
   for(row=0;row<tot_rows;row+=1,printf("\n"))
   {
       for(col=0;col<tot_cols;col+=1)
            printf("%d ",mat[row][col]);
   }

  return 0;
}
