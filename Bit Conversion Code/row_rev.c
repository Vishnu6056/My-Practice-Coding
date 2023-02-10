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
   int temp;
   int col_st;
   int col_end;
 for(row=0;row<tot_rows;row+=1)
 {
       col_st=0;
       col_end=tot_cols-1;
       while(col_st<col_end)
       {
        temp=mat[row][col_st];
        mat[row][col_st]=mat[row][col_end];
        mat[row][col_end]=temp;
        col_st+=1;
        col_end-=1;
        }
 }
    for(row=0;row<tot_rows;row+=1,printf("\n"))
   {
       for(col=0;col<tot_cols;col+=1)
            printf("%d ",mat[row][col]);
   }

  return 0;
}
