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
   int max_col_ind;
   int max_sum=INT_MIN;
  for(col=0; col<tot_cols;col+=1)
  {
      sum=0;
        for(row=0;row<tot_rows;row+=1)
         sum = sum +mat[row][col];
        //printf("%d ",sum);
        if(sum>max_sum)
        {
            max_sum=sum;
            max_col_ind=col;
        }
  }
  printf("%d %d",max_sum,max_col_ind);

  return 0;
}
