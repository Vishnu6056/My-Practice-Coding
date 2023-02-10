#include <stdio.h>
#include <math.h>
int main()
{
 int mat[4][5];
 int row;
 int col;
//statict 2d arra:
  /*
    for(row=0;row<4;row+=1,printf("\n"))
    for(col=0;col<5; col+=1)
        printf("%u ",&mat[row][col]);
*/

 int tot_rows;
 int tot_cols;
 scanf("%d %d",&tot_rows,&tot_cols);
  //int * ptr =(int*)malloc(tot_rows*tot_cols*sizeof(int));-improper
   //printf("%d", ptr[0][0]);
  int** dyn_2d_ptr;
  dyn_2d_ptr=(int**)malloc(tot_rows*sizeof(int*));
  for(row=0;row<tot_rows;row+=1)
    dyn_2d_ptr[row]=(int*)malloc(tot_cols*sizeof(int));
  /*
  int *ptr1=(int*)malloc(tot_cols*sizeof(int));
  int *ptr2=(int*)malloc(tot_cols*sizeof(int));
  int *ptr3=(int*)malloc(tot_cols*sizeof(int));
   */
  for(row=0;row<tot_rows;row+=1,printf("\n"))
    for(col=0;col<tot_cols; col+=1)
        printf("%u ",&dyn_2d_ptr[row][col]);

  return 0;
}
