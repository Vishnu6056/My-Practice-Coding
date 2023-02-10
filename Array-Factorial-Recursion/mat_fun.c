#include <stdio.h>
#include <math.h>
void fun( int tot_rows,int tot_cols,int mat[tot_rows][tot_cols]  )
{
    int row;
    int col;
    for(row=0;row<tot_rows;row+=1)
    {
        for(col=0;col<tot_cols;col+=1)
        {
            printf("%d ",mat[row][col]);
        }
        printf("\n");
    }

}
int main()
{
 int mat[4][5]=
 {
     {1,2,3,4,5},
     {12,13,14,15},
     {41,42,43,44,45},
     {31,32,23,24,35}
 };
 int tot_rows=4;
 int tot_cols=5;

 fun(tot_rows,tot_cols,mat);

  return 0;
}
